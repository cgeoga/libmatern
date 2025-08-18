#include "Rcpp.h"

extern "C" {
    #include "libmatern.cbe.h"
}

// [[Rcpp::export]]
double cbesselK(double x, double v) {
    return besselk(v, x);
}

// [[Rcpp::export]]
double cbesselK_dv(double x, double v) {
    return besselk_dv(v, x);
}

// [[Rcpp::export]]
double cbesselK_dx(double x, double v) {
    return besselk_dx(v, x);
}

// [[Rcpp::export]]
double cmatern(double t, double sig, double rho, double nu) {
    return matern(t, sig, rho, nu);
}

// [[Rcpp::export]]
double cmatern_dsig(double t, double sig, double rho, double nu) {
    return matern_dsig(t, sig, rho, nu);
}

// [[Rcpp::export]]
double cmatern_drho(double t, double sig, double rho, double nu) {
    return matern_drho(t, sig, rho, nu);
}

// [[Rcpp::export]]
double cmatern_dnu(double t, double sig, double rho, double nu) {
    return matern_dnu(t, sig, rho, nu);
}