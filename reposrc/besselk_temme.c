#include "internals.h"

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
