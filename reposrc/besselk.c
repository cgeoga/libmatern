#include "internals.h"

struct doublepair up_recurrence(double x, double jnu, double jnum1, double nu_start, double nu_end){
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

double besselk(double v, double x) {

  v = fabs(v); // by symmetry

  if (x <= 0.0) return NAN; // was returning NAN, must return something else for R

  if (v > 25.0 || x > 35.0) return besselk_large_orders(v, x);

  if (x > v*v/36 + 24)      return besselk_large_args(v, x);
// My reasoning here is that the intermediate routine seems to care about the distance, not necessarily v.
// Maybe there is some hidden logic in Julia that I am not seeing
  if (x >= 2.0 && x <= 20.0) return _besselk_intermediate(v, x, false); // false is a temporary solution

  double flv = floor(v);

  if (x > 1.5) {
    if (v < 2.0) return besselkx_levin(v, x)*exp(-x);
  
    double kv   = besselkx_levin(v - flv, x);
    double kvp1 = besselkx_levin(v - flv + 1, x);
    return up_recurrence(x, kvp1, kv, v - flv + 1, v).x1*exp(-x);
  }
  else {
    if (isnearint(v)) {
      if (v - flv > 0.5){
        // Bug?
        flv -= 1.0;
      }
      struct doublepair kv_kvp1 = besselk_temme_series(v - flv, x);
      return up_recurrence(x, kv_kvp1.x2, kv_kvp1.x1, v - flv+1, v).x1;
    }
    else {
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
