
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<R.h>
#include<Rinternals.h>

// If you want more speed and are okay with losing a few digits in exchange for
// speed, you could crank this down a bit.
#define LEVIN_SIZE 16

// Likewise: this constant value determines the stopping tolerance for
// series-like evaluation methods. If you set it to, say, 1e-12, you'd probably
// lose 2-3 digits in some places, but losing digits means fewer iterations,
// which will mean faster evaluation times.
#define EPS 2.220446049250313e-16

double _fmax(double x, double y) {
  if(x <= y){
    return y;
  }else{
    return x;
  }
}

double _fmin(double x, double y) {
  if(x <= y){
    return x;
  }else{
    return y;
  }
}

double horner(double x, const double* coefs, const int len) {
  double b_p1 = coefs[len-1];
  double b    = 0.0;
  for(int k=len-1; k>0; k--){
    b = coefs[k-1] + x*b_p1;
    b_p1 = b;
  }
  return b;
}

double sinpi(double x) {
  if (x < 0.0) return -sinpi(-x);
  double rx = round(x);
  double x_rem = x - rx;
  if (fabs(x_rem) > 0.01) return sin(M_PI*x);
  double SINPI_COEFS[4] = {3.1415926535897932e+00, -5.1677127800499315e+00, 
                           2.5501640384911597e+00, -5.9924604675426748e-01};
  double res = horner(x_rem*x_rem, SINPI_COEFS, 4)*x_rem;
  if ((int)rx % 2 != 0) { res = -res; }
  return res;
}

struct doublepair {
  double x1;
  double x2;
};

int enzyme_const, enzyme_dup, enzyme_dupnoneed;
double __enzyme_fwddiff(void*, ...);

// These attributes are very important---without them, compiling with any -O
// flag besides -O0 silently breaks this rule (or verbosely breaks it, if you
// compile with -Rpass=enzyme). 
void __attribute__((noinline,optnone)) isconverged(double* t, double* result) {
  *result = fabs(*t) - EPS;
}

void disconverged(double* t,      double* d_t, 
                  double* result, double* d_result) {
  *result = _fmax(fabs(*t) - EPS, fabs(*d_t) - EPS);
}

void* __enzyme_register_derivative_converged[] = {
  (void*)isconverged,
  (void*)disconverged,
};

bool isnearint(double x){
  return (fabs(x - round(x)) < 1e-5);
}

// Oddly, the derivative code is a factor of 3 or 4 slower if you actually use
// fma(x, y, z). I don't have a great explanation, but hopefuly someday we can
// delete this function and use the actual fma..
double _fma(double x, double y, double z){
  return x*y + z;
}

// Same as _fma: eventually, {o1,o2} should be created with an actual fma, for
// both speed and accuracy.
struct doublepair fmadd(struct doublepair a, double b, struct doublepair c){
  double o1 = (a.x1 * b + c.x1);
  double o2 = (a.x2 * b + c.x2);
  struct doublepair out;
  out.x1 = o1;
  out.x2 = o2;
  return out;
}

double gamma(double _x) {

  const double sq2pi = sqrt(2*M_PI);

	double x = _x;
	double s;
	if(x < 0) {
		s = sinpi(_x);
		if(s == 0) return NAN;
		x = -x;
		s *= x;
	}
	if(!isfinite(x)) return x;

	if(x > 11.5) {
		double w = 1/x; 
		const double coefs[10] = {1.0,
			8.333333333333331800504e-2, 3.472222222230075327854e-3, -2.681327161876304418288e-3, -2.294719747873185405699e-4,
			7.840334842744753003862e-4, 6.989332260623193171870e-5, -5.950237554056330156018e-4, -2.363848809501759061727e-5,
			7.147391378143610789273e-4
		};
		w = horner(w, coefs, 10);
		double muladd = _fma(0.5, x, -0.25);
		double v = pow(x, muladd);
		double res = sq2pi * v * (v / exp(x)) * w;

		if(_x < 0) {
			return M_PI / (res * s);
		} else {
			return res;
		}
	}
	const double P[8] = {
		1.000000000000000000009e0, 8.378004301573126728826e-1, 3.629515436640239168939e-1, 1.113062816019361559013e-1,
		2.385363243461108252554e-2, 4.092666828394035500949e-3, 4.542931960608009155600e-4, 4.212760487471622013093e-5
	};
	const double Q[9] = {
		9.999999999999999999908e-1, 4.150160950588455434583e-1, -2.243510905670329164562e-1, -4.633887671244534213831e-2,
		2.773706565840072979165e-2, -7.955933682494738320586e-4, -1.237799246653152231188e-3, 2.346584059160635244282e-4,
		-1.397148517476170440917e-5
	};

	double z = 1.0;
	while(x >= 3.0) {
		x -= 1.0;
		z *= x;
	}
	while(x < 2.0) {
		z /= x;
		x += 1.0;
	}

	x -= 2.0;
	double p = horner(x, P, 8);
	double q = horner(x, Q, 9);
	return _x < 0 ? M_PI * q / (s * z * p) : z * p / q;
}


double besselk_power_series(double v, double x) {

  double gam    = gamma(v);
  double ngam   = M_PI/(sinpi(-v)*gam*v);

  double s1 = 0.0, s2 = 0.0;
  double t1 = 1.0, t2 = 1.0;

  double fourk = 4.0;
  double xx    = x*x;
  double cvg   = 1.0;

  for(int k=1; k<50; k++){
    s1 += t1;
    s2 += t2;
    t1 *= xx/(fourk*(k-v));
    t2 *= xx/(fourk*(k+v));
    isconverged(&t1, &cvg);
    if(cvg < 0.0) break;
    fourk += 4.0;
  }
  double xpv = pow(x/2.0, v);
  double s   = gam*s1 + xpv*xpv*ngam*s2;

  return s/(2*xpv);
}

struct doublepair up_recurrence(double x, double jnu, double jnum1, 
                                double nu_start, double nu_end){
  double x2 = 2.0/x;
  while (nu_start < nu_end + 0.5) {
    double new_val = _fma(nu_start*x2, jnu, jnum1);
    jnum1 = jnu;
    jnu   = new_val;
    nu_start += 1.0;
  }
  struct doublepair out = {.x1=jnum1, .x2=jnu};
  return out;
}

double besselkx_large_args(double v, double x) {
  double cvg;
  double t = 1.0;
  double invx = 1.0/(8*x);
  double s = t;
  for(int k=1; k<21; k++) {
    t *= invx*((4*v*v - pow(2*k-1, 2))/k);
    s += t;
    isconverged(&t, &cvg);
    if (cvg < 0.0) break;
  }
  return s*sqrt(M_PI/(2*x));
}

double besselk_large_args(double v, double x) {
  double expval = exp(-x/2);
  return (expval*besselkx_large_args(v, x))*expval;
}

double Uk_poly_Kn(double p, double v, double p2){

  const double u10coef[11] = {110.01714026924674, -13886.08975371704, 308186.40461266245, -2.7856181280864547e6, 1.3288767166421818e7, -3.7567176660763346e7, 6.634451227472903e7, -7.410514821153265e7, 5.095260249266464e7, -1.9706819118432228e7, 3.284469853072038e6};
  const double u9coef[10]  = {24.380529699556064, -2499.8304818112097, 45218.76898136273, -331645.17248456355, 1.2683652733216248e6, -2.8135632265865337e6, 3.763271297656404e6, -2.998015918538107e6, 1.3117636146629772e6, -242919.18790055133};
  const double u8coef[9]   = {6.074042001273483, -493.91530477308805, 7109.514302489364, -41192.65496889755, 122200.46498301747, -203400.17728041555, 192547.00123253153, -96980.59838863752, 20204.29133096615};
  const double u7coef[8]   = {1.7277275025844574, -108.09091978839466, 1200.9029132163525, -5305.646978613403, 11655.393336864534, -13586.550006434136, 8061.722181737309, -1919.457662318407};
  const double u6coef[7]   = {0.5725014209747314, -26.491430486951554, 218.1905117442116, -699.5796273761325, 1059.9904525279999, -765.2524681411817, 212.57013003921713};
  const double u5coef[6]   = {0.22710800170898438, -7.368794359479632, 42.53499874538846, -91.81824154324002, 84.63621767460073, -28.212072558200244};
  const double u4coef[5]   = {0.112152099609375, -2.3640869140625, 8.78912353515625, -11.207002616222994, 4.669584423426247};
  const double u3coef[4]   = {0.0732421875, -0.8912109375, 1.8464626736111112, -1.0258125964506173};
  const double u2coef[3]   = {0.0703125, -0.4010416666666667, 0.3342013888888889};
  const double u1coef[2]   = {0.125, -0.20833333333333334};

  double u10 = horner(p2, u10coef, 11);
  double u9  = horner(p2, u9coef,  10);
  double u8  = horner(p2, u8coef,   9);
  double u7  = horner(p2, u7coef,   8);
  double u6  = horner(p2, u6coef,   7);
  double u5  = horner(p2, u5coef,   6);
  double u4  = horner(p2, u4coef,   5);
  double u3  = horner(p2, u3coef,   4);
  double u2  = horner(p2, u2coef,   3);
  double u1  = horner(p2, u1coef,   2);

  double tmp[11] = {1.0, u1, u2, u3, u4, u5, u6, u7, u8, u9, u10};

  // TODO (cg 2023/09/28 14:21): move to MH's split horner at some point.
  return horner(-p/v, tmp, 11);

}

double besselk_large_orders(double v, double x){
  double z    = x/v;
  double zs   = sqrt(1+z*z);
  double n    = zs + log(z) - log(1+zs);
  double coef = sqrt(M_PI/2)*sqrt(1/v)*exp(-v*n)/sqrt(zs);
  double p    = 1/zs;
  double p2   = v*v/_fma(_fmax(v,x), _fmax(v,x), pow(_fmin(v,x), 2));
  return coef*Uk_poly_Kn(p, v, p2);
}

double levin_scale(double B, int n, int k) {
  return -(B+n+k)*(B+n+k-1)/((B+n+2*k)*(B+n+2*k-1));
}

void _levin(double* out, double* sw) {
  double* s = sw;
  double* w = sw + LEVIN_SIZE;
  struct doublepair a[LEVIN_SIZE];
  double sc;
  for(int i=0; i<LEVIN_SIZE; i++){
    if(w[i] == 0.0) {
      *out = s[i]; 
      return;
    }
    a[i].x1 = s[i]/w[i];
    a[i].x2 = 1.0/w[i];
  }
  for(int k=0; k<(LEVIN_SIZE-1); k++){
    for(int i=0; i<((LEVIN_SIZE-1)-k-1); i++){
      sc   = levin_scale(1.0, (double)(i+1), (double)k);
      a[i] = fmadd(a[i], sc, a[i+1]);
    }
  }
  *out = a[0].x1/a[0].x2;
}

void levin(double* out, double* sw){
  _levin(out, sw);
}

void derivative_levin(double* out, double* d_out, 
                      double* sw,  double* d_sw) {
  _levin(out, sw);
  _levin(d_out, d_sw);
}

void* __enzyme_register_derivative_levin[] = {
  (void*)levin,
  (void*)derivative_levin,
};

double besselkx_levin(double v, double x) {
  double out, s, t;
  out = 0.0;
  s   = 0.0; 
  t   = 1.0;
  double sequences_weights[2*LEVIN_SIZE];
  double* sequences = sequences_weights;
  double* weights   = sequences_weights + LEVIN_SIZE;
  double fvv = 4*v*v;
  double eightx = 8*x;
  // powk_levin[k] = pow(2*k+1, 2);
  const double powk_levin[16] = {1.0, 9.0, 25.0, 49.0, 81.0, 121.0, 169.0, 225.0, 289.0, 
                                 361.0, 441.0, 529.0, 625.0, 729.0, 841.0, 961.0};
  for(int k=0; k<LEVIN_SIZE; k++) {
    s += t;
    t *= (fvv - powk_levin[k])/(eightx*(k+1)); 
    sequences[k] = s; 
    weights[k]   = t; 
  }
  levin(&out, sequences_weights);
  out *= sqrt(M_PI/(2*x));
  return out;
}

double f0_local_expansion(double v, double x){

  const double spcoef[4] = {1.0, 1.6449340668482264, 1.8940656589944918, 1.9711021825948702};
  const double g1coef[3] = {-0.5772156649015329, 0.04200263503409518, 0.042197734555544306};
  const double g2coef[3] = {1.0, -0.6558780715202539, 0.16653861138229145};
  const double shcoef[5] = {1.0, 0.16666666666666666, 0.008333333333333333, 0.0001984126984126984, 2.7557319223985893e-6};

  double l2dx = log(2.0) - log(x);
  double mu   = v*l2dx;
  double vv   = v*v;
  double sp   = horner(vv,    spcoef, 4);
  double g1   = horner(vv,    g1coef, 3);
  double g2   = horner(vv,    g2coef, 3);
  double sh   = horner(mu*mu, shcoef, 5);
  return sp*(g1*cosh(mu)+g2*sh*l2dx);
}

// This only applies for v \in (-1/2, 1/2)!
struct doublepair besselk_temme_series(double v, double x) {

  const double pqkcoef[4] = {1.0, -0.5772156649015329, 
                             0.9890559953279725, -0.23263776388631713};

  double z  = x/2;
  double zz = z*z;
  double fk = f0_local_expansion(v, x); 
  double zv = pow(z, v);

  double pk = horner(v, pqkcoef, 4)/(2*zv); 
  double qk = zv*horner(-v, pqkcoef, 4)/2; 
  double ck = 1.0;
  double out_v, out_vp1;
  out_v   = 0.0 ; 
  out_vp1 = 0.0;

  double term_v, term_vp1, cvg, cvgp1;
  for(int k=1; k<501; k++){
    term_v   = ck*fk;
    term_vp1 = ck*(pk - (k-1)*fk);
    out_v   += term_v;
    out_vp1 += term_vp1;
    isconverged(&term_v, &cvg);
    isconverged(&term_vp1, &cvgp1);
    if((cvg < 0.0) && (cvgp1 < 0.0)) break;
    fk  = (k*fk + pk + qk)/(k*k - v*v);
    pk /= k-v;
    qk /= k+v;
    ck *= zz/k;
  }
  struct doublepair out = {.x1=out_v, .x2=out_vp1/z};
  return out;
}


double besselk(double v, double x) {

  v = fabs(v); // by symmetry
  if (x <= 0.0) return NAN; // was returning NAN, must return something else for R
  if (v > 25.0 || x > 35.0) return besselk_large_orders(v, x);
  if (x > v*v/36 + 24)      return besselk_large_args(v, x);
  double flv = floor(v);
  if (x > 1.5) {
    if (v < 2.0) return besselkx_levin(v, x)*exp(-x);
    double kv   = besselkx_levin(v - flv, x);
    double kvp1 = besselkx_levin(v - flv + 1, x);
    return up_recurrence(x, kvp1, kv, v - flv + 1, v).x1*exp(-x);
  }else{
    if (isnearint(v)) {
      if (v - flv > 0.5){
        flv -= 1.0;
      }
      struct doublepair kv_kvp1 = besselk_temme_series(v - flv, x);
      return up_recurrence(x, kv_kvp1.x2, kv_kvp1.x1, v - flv+1, v).x1;
    }else{
      return besselk_power_series(v, x);
    }
  }
}

double besselk_dv(double v, double x) {
	double dv = 1.0;
	double df = __enzyme_fwddiff((void*) besselk, enzyme_dup, v, dv, enzyme_const, x);
	return df;
}

double besselk_dx(double v, double x) {
	double dx = 1.0;
	double df = __enzyme_fwddiff((void*) besselk, enzyme_const, v, enzyme_dup, x, dx);
	return df;
}

double matern(double t, double sig, double rho, double nu) {
  if (t == 0.0) return sig*sig;
  double arg = sqrt(2.0*nu)*t/rho;
  return (sig*sig*pow(2.0, 1.0-nu)/gamma(nu))*pow(arg, nu)*besselk(nu, arg);
}

double matern_dsig(double t, double sig, double rho, double nu) {
  double ds = 1.0;
  double df = __enzyme_fwddiff((void*) matern, 
                                enzyme_const, t,
                                enzyme_dup, sig, ds,
                                enzyme_const, rho,
                                enzyme_const, nu);
  return df;
}

double matern_drho(double t, double sig, double rho, double nu) {
  double drho = 1.0;
  double df = __enzyme_fwddiff((void*) matern, 
                                enzyme_const, t,
                                enzyme_const, sig,
                                enzyme_dup, rho, drho,
                                enzyme_const, nu);
  return df;
}

double matern_dnu(double t, double sig, double rho, double nu) {
  double dnu = 1.0;
  double df = __enzyme_fwddiff((void*) matern, 
                                 enzyme_const, t,
                                 enzyme_const, sig,
                                 enzyme_const, rho,
                                 enzyme_dup, nu, dnu);
  return df;
}

SEXP besselk_buf(SEXP SEXPbuf, SEXP SEXPlen, SEXP SEXPv, SEXP SEXPx) {
  // convert arg types
  int len = INTEGER(SEXPlen)[0];
  double* buf = REAL(SEXPbuf);
  double* v = REAL(SEXPv);
  double* x = REAL(SEXPx);

  for (int j=0; j<len; j++){
    buf[j] = besselk(v[j], x[j]);
  }

  return R_NilValue;

}

SEXP besselk_dv_buf(SEXP SEXPbuf, SEXP SEXPlen, SEXP SEXPv, SEXP SEXPx) {
  // convert arg types
  int len = INTEGER(SEXPlen)[0];
  double* buf = REAL(SEXPbuf);
  double* v = REAL(SEXPv);
  double* x = REAL(SEXPx);

  for (int j=0; j<len; j++){
    buf[j] = besselk_dv(v[j], x[j]);
  }

  return R_NilValue;
}

SEXP besselk_dx_buf(SEXP SEXPbuf, SEXP SEXPlen, SEXP SEXPv, SEXP SEXPx) {
  // convert arg types
  int len = INTEGER(SEXPlen)[0];
  double* buf = REAL(SEXPbuf);
  double* v = REAL(SEXPv);
  double* x = REAL(SEXPx);

  for (int j=0; j<len; j++){
    buf[j] = besselk_dx(v[j], x[j]);
  }

  return R_NilValue;
}

SEXP matern_buf(SEXP SEXPbuf, SEXP SEXPdists, SEXP SEXPlen, 
                SEXP SEXPsig, SEXP SEXPrho, SEXP SEXPnu) {
  // convert arg types
  int len = INTEGER(SEXPlen)[0];
  double* buf = REAL(SEXPbuf);
  double* dists = REAL(SEXPdists);
  double sig = REAL(SEXPsig)[0];
  double rho = REAL(SEXPrho)[0];
  double nu = REAL(SEXPnu)[0];

  for (int j=0; j<len; j++){
    buf[j] = matern(dists[j], sig, rho, nu);
  }

  return R_NilValue;
}

SEXP matern_dsig_buf(SEXP SEXPbuf, SEXP SEXPdists, SEXP SEXPlen, 
                SEXP SEXPsig, SEXP SEXPrho, SEXP SEXPnu) {
  // convert arg types
  int len = INTEGER(SEXPlen)[0];
  double* buf = REAL(SEXPbuf);
  double* dists = REAL(SEXPdists);
  double sig = REAL(SEXPsig)[0];
  double rho = REAL(SEXPrho)[0];
  double nu = REAL(SEXPnu)[0];

  for (int j=0; j<len; j++){
    buf[j] = matern_dsig(dists[j], sig, rho, nu);
  }

  return R_NilValue;
}

SEXP matern_drho_buf(SEXP SEXPbuf, SEXP SEXPdists, SEXP SEXPlen, 
                SEXP SEXPsig, SEXP SEXPrho, SEXP SEXPnu) {
  // convert arg types
  int len = INTEGER(SEXPlen)[0];
  double* buf = REAL(SEXPbuf);
  double* dists = REAL(SEXPdists);
  double sig = REAL(SEXPsig)[0];
  double rho = REAL(SEXPrho)[0];
  double nu = REAL(SEXPnu)[0];

  for (int j=0; j<len; j++){
    buf[j] = matern_drho(dists[j], sig, rho, nu);
  }

  return R_NilValue;
}

SEXP matern_dnu_buf(SEXP SEXPbuf, SEXP SEXPdists, SEXP SEXPlen, 
                SEXP SEXPsig, SEXP SEXPrho, SEXP SEXPnu) {
  // convert arg types
  int len = INTEGER(SEXPlen)[0];
  double* buf = REAL(SEXPbuf);
  double* dists = REAL(SEXPdists);
  double sig = REAL(SEXPsig)[0];
  double rho = REAL(SEXPrho)[0];
  double nu = REAL(SEXPnu)[0];

  for (int j=0; j<len; j++){
    buf[j] = matern_dnu(dists[j], sig, rho, nu);
  }

  return R_NilValue;
}

