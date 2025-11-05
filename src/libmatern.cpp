#include "Rcpp.h"
using namespace Rcpp;
using namespace std;

extern "C" {
    #include "libmatern.cbe.h"
}

//' The modified second-kind Bessel function K_v(x)
//'
//' @param x the argument
//' @param v the order
//' @return the evaluation K_v(x)
/*
double cbesselK(double x, double v) {
    return besselk(v, x);
}
*/

template <typename T>
vector<double> NumericVecX(NumericVector x_list, double v, T func) {
    vector<double> buf(x_list.begin(), x_list.end());

    for (int i=0; i < buf.size(); i++){
      buf[i] = func(v, buf[i]);
    }

    return buf;
}
template <typename T>
vector<double> NumericVecV(double x, NumericVector v_list, T func) {
    vector<double> buf(v_list.begin(), v_list.end());

    for (int i=0; i < buf.size(); i++){
      buf[i] = func(buf[i], x);
    }

    return buf;
}
// TODO deal with NumericVecs of different sizes. Currently R/PrettyExports.R does this, but still vulnerable from calling .cbesselK_bufBoth directly
template <typename T>
std::vector<double> NumericVecBoth(NumericVector x_list, NumericVector v_list, T func) {
    vector<double> bufX(x_list.begin(), v_list.end());
    vector<double> bufV(v_list.begin(), v_list.end());

    for (int i=0; i < bufX.size(); i++){
      bufX[i] = func(bufV[i], bufX[i]);
    }

    return bufX;
}
template <typename T>
double Scalar(double x, double v, T func) {
    return func(v, x);
}

/*
 * CBESSELK
 */
// [[Rcpp::export(name = ".cbesselK_bufX")]]
std::vector<double> cbesselK_bufX(NumericVector x_list, double v) {
    return NumericVecX(x_list, v, besselk);
}
// [[Rcpp::export(name = ".cbesselK_bufV")]]
std::vector<double> cbesselK_bufV(double x, NumericVector v_list) {
    return NumericVecV(x, v_list, besselk);
}
// [[Rcpp::export(name = ".cbesselK_bufBoth")]]
std::vector<double> cbesselK_bufBoth(NumericVector x_list, NumericVector v_list) {
    return NumericVecBoth(x_list, v_list, besselk);
}
// [[Rcpp::export(name = ".cbesselK_scalar)]]
double cbesselK_scalar(double x, double v) {
    return Scalar(x, v, besselk);
}

/*
NumericVector cbesselK(NumericVector x_list, NumericVector v_list) {

    std::vector<double> buf_x(x_list.begin(), x_list.end());
    std::vector<double> buf_v(v_list.begin(), v_list.end());

    for (int i=0; i < buf_x.size(); i++){
      buf_x[i] = besselk(buf_v[i], buf_x[i]);
    }

    return wrap(buf);
}
*/


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
