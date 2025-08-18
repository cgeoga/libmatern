
#ifndef LIBMATERN_H
#define LIBMATERN_H

// bessel
double besselk(double v, double x);
double besselk_dv(double v, double x);
double besselk_dx(double v, double x);

// matern
double matern(double t, double sig, double rho, double nu);
double matern_dsig(double t, double sig, double rho, double nu);
double matern_drho(double t, double sig, double rho, double nu);
double matern_dnu(double t, double sig, double rho, double nu);

#endif