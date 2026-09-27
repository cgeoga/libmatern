#include "internals.h"


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
