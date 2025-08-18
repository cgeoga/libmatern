#include "Rcpp.h"

extern "C" {
    #include "libmatern.cbe.h"
}

// [[Rcpp::export]]
double Rbesselk(double x, double v) {
    return besselk(x, v);
}

// [[Rcpp::export]]
double Rbesselk_dv(double x, double v) {
    return besselk_dv(v, x);
}

// [[Rcpp::export]]
double Rbesselk_dx(double x, double v) {
    return besselk_dx(v, x);
}

// [[Rcpp::export]]
double Rmatern(double t, double sig, double rho, double nu) {
    return matern(t, sig, rho, nu);
}

// [[Rcpp::export]]
double Rmatern_dsig(double t, double sig, double rho, double nu) {
    return matern_dsig(t, sig, rho, nu);
}

// [[Rcpp::export]]
double Rmatern_drho(double t, double sig, double rho, double nu) {
    return matern_drho(t, sig, rho, nu);
}

// [[Rcpp::export]]
double Rmatern_dnu(double t, double sig, double rho, double nu) {
    return matern_dnu(t, sig, rho, nu);
}