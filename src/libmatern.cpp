#include "Rcpp.h"
using namespace Rcpp;

extern "C" {
    #include "libmatern.cbe.h"
}

//' The modified second-kind Bessel function K_v(x)
//'
//' @param x the argument
//' @param v the order
//' @return the evaluation K_v(x)
// [[Rcpp::export]]
double cbesselK(double x, double v) {
    return besselk(v, x);
}

// [[Rcpp::export]]
NumericVector cbesselK_vec(NumericVector x_list, double v) {

    int len = x_list.size();
    NumericVector out(len);

    for (int i = 0; i < len; i++) {
        out[i] = besselk(v, x_list[i]);
    }

    return out;
}

//' The derivative of the modified second-kind Bessel function K_v(x) with respect
//  to the order v.
//'
//' @param x the argument
//' @param v the order
//' @return the evaluation (d/dv) K_v(x)
// [[Rcpp::export]]
double cbesselK_dv(double x, double v) {
    return besselk_dv(v, x);
}

//' The derivative of the modified second-kind Bessel function K_v(x) with respect
//  to the order x.
//'
//' @param x the argument
//' @param v the order
//' @return the evaluation (d/dx) K_v(x)
// [[Rcpp::export]]
double cbesselK_dx(double x, double v) {
    return besselk_dx(v, x);
}

//' The Matern covariance function as paramterized by [wikipedia](https://en.wikipedia.org/wiki/Mat%C3%A9rn_covariance_function).
//'
//' @param t the distance/argument
//' @param sig the marginal standard deviation
//' @param rho the range parameter
//' @param nu  the smoothness parameter
//' @return the Matern covariance function with parameters (sig, rho, nu)
//' evaluated at distance t.
// [[Rcpp::export]]
double cmatern(double t, double sig, double rho, double nu) {
    return matern(t, sig, rho, nu);
}

// TODO for matern vec only make t a NumericVector

//' The derivative of the Matern covariance function with respect to sigma.
//'
//' @param t the distance/argument
//' @param sig the marginal standard deviation
//' @param rho the range parameter
//' @param nu  the smoothness parameter
//' @return the derivative of the Matern covariance function with respect to
//' sigma with parameters (sig, rho, nu) ' evaluated at distance t.
// [[Rcpp::export]]
double cmatern_dsig(double t, double sig, double rho, double nu) {
    return matern_dsig(t, sig, rho, nu);
}

//' The derivative of the Matern covariance function with respect to rho.
//'
//' @param t the distance/argument
//' @param sig the marginal standard deviation
//' @param rho the range parameter
//' @param nu  the smoothness parameter
//' @return the derivative of the Matern covariance function with respect to
//' rho with parameters (sig, rho, nu) ' evaluated at distance t.
// [[Rcpp::export]]
double cmatern_drho(double t, double sig, double rho, double nu) {
    return matern_drho(t, sig, rho, nu);
}

//' The derivative of the Matern covariance function with respect to nu.
//'
//' @param t the distance/argument
//' @param sig the marginal standard deviation
//' @param rho the range parameter
//' @param nu  the smoothness parameter
//' @return the derivative of the Matern covariance function with respect to
//' nu with parameters (sig, rho, nu) ' evaluated at distance t.
// [[Rcpp::export]]
double cmatern_dnu(double t, double sig, double rho, double nu) {
    return matern_dnu(t, sig, rho, nu);
}