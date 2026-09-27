#ifndef LIBMATERN_INTERNAL_H
#define LIBMATERN_INTERNAL_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// If you want more speed and are okay with losing a few digits in exchange for
// speed, you could crank this down a bit.
#define LEVIN_SIZE 16

// Likewise: this constant value determines the stopping tolerance for
// series-like evaluation methods. If you set it to, say, 1e-12, you'd probably
// lose 2-3 digits in some places, but losing digits means fewer iterations,
// which will mean faster evaluation times.
#define EPS 2.220446049250313e-16

struct doublepair {
  double x1;
  double x2;
};

// Enzyme hooks. The markers are DEFINED once, in libmatern.c.
extern int enzyme_const, enzyme_dup, enzyme_dupnoneed;
double __enzyme_fwddiff(void*, ...);

// From utils.c
double _fmax(double x, double y);
double _fmin(double x, double y);
double horner(double x, const double* coefs, const int len);
double sinpi(double x);
bool isnearint(double x);
double _fma(double x, double y, double z);
struct doublepair fmadd(struct doublepair a, double b, struct doublepair c);

// From converged.c
void isconverged(double* t, double* result);
void disconverged(double* t, double* d_t, double* result, double* d_result);

// From gamma.c
double gamma(double _x);

// From besselk_power_series.c
double besselk_power_series(double v, double x);

// From besselk_large_args.c
double besselkx_large_args(double v, double x);
double besselk_large_args(double v, double x);

// From besselk_large_orders.c
double Uk_poly_Kn(double p, double v, double p2);
double besselk_large_orders(double v, double x);

// From besselk_levin.c
double levin_scale(double B, int n, int k);
void _levin(double* out, double* sw);
void levin(double* out, double* sw);
void derivative_levin(double* out, double* d_out, double* sw, double* d_sw);
double besselkx_levin(double v, double x);

// From besselk_temme.c
double f0_local_expansion(double v, double x);
struct doublepair besselk_temme_series(double v, double x);

// From besselk.c
struct doublepair up_recurrence(double x, double jnu, double jnum1,
                                double nu_start, double nu_end);
double besselk(double v, double x);
double besselk_dv(double v, double x);
double besselk_dx(double v, double x);

// From matern.c
double matern(double t, double sig, double rho, double nu);
double matern_dsig(double t, double sig, double rho, double nu);
double matern_drho(double t, double sig, double rho, double nu);
double matern_dnu(double t, double sig, double rho, double nu);

#endif // LIBMATERN_INTERNAL_H