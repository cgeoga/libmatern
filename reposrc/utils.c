#include "internals.h"

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

bool isnearint(double x){
  return (fabs(x - round(x)) < 1e-5);
}

// Oddly, the derivative code is a factor of 3 or 4 slower if you actually use
// fma(x, y, z). I don't have a great explanation, but hopefuly someday we can
// delete this function and use the actual fma..
double _fma(double x, double y, double z){
  return x*y + z;
}

struct doublepair {
  double x1;
  double x2;
};

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

bool isnearint(double x){
  return (fabs(x - round(x)) < 1e-5);
}

