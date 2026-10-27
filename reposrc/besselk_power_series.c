#include "internals.h"

double besselk_power_series(double v, double x) {

  double gam    = gamma(v);
  double ngam   = M_PI/(sinpi(-v)*gam*v);

  double s1 = 0.0, s2 = 0.0;
  double t1 = 1.0, t2 = 1.0;

  double fourk = 4.0;
  double xx    = x*x;
  double cvg   = 1.0;

  for(int k=1; k<50; k++){
    s1 += t1;
    s2 += t2;
    t1 *= xx/(fourk*(k-v));
    t2 *= xx/(fourk*(k+v));
    isconverged(&t1, &cvg);
    if(cvg < 0.0) break;
    fourk += 4.0;
  }
  double xpv = pow(x/2.0, v);
  double s   = gam*s1 + xpv*xpv*ngam*s2;

  return s/(2*xpv);
}
