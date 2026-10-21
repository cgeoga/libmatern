#include "internals.h"

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
