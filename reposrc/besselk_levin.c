#include "internals.h"

double levin_scale(double B, int n, int k) {
  return -(B+n+k)*(B+n+k-1)/((B+n+2*k)*(B+n+2*k-1));
}

void _levin(double* out, double* sw) {
  double* s = sw;
  double* w = sw + LEVIN_SIZE;
  struct doublepair a[LEVIN_SIZE];
  double sc;
  for(int i=0; i<LEVIN_SIZE; i++){
    if(w[i] == 0.0) {
      *out = s[i]; 
      return;
    }
    a[i].x1 = s[i]/w[i];
    a[i].x2 = 1.0/w[i];
  }
  for(int k=0; k<(LEVIN_SIZE-1); k++){
    for(int i=0; i<((LEVIN_SIZE-1)-k-1); i++){
      sc   = levin_scale(1.0, (double)(i+1), (double)k);
      a[i] = fmadd(a[i], sc, a[i+1]);
    }
  }
  *out = a[0].x1/a[0].x2;
}

void levin(double* out, double* sw){
  _levin(out, sw);
}

void derivative_levin(double* out, double* d_out, 
                      double* sw,  double* d_sw) {
  _levin(out, sw);
  _levin(d_out, d_sw);
}

void* __enzyme_register_derivative_levin[] = {
  (void*)levin,
  (void*)derivative_levin,
};

double besselkx_levin(double v, double x) {
  double out, s, t;
  out = 0.0;
  s   = 0.0; 
  t   = 1.0;
  double sequences_weights[2*LEVIN_SIZE];
  double* sequences = sequences_weights;
  double* weights   = sequences_weights + LEVIN_SIZE;
  double fvv = 4*v*v;
  double eightx = 8*x;
  // powk_levin[k] = pow(2*k+1, 2);
  const double powk_levin[16] = {1.0, 9.0, 25.0, 49.0, 81.0, 121.0, 169.0, 225.0, 289.0, 
                                 361.0, 441.0, 529.0, 625.0, 729.0, 841.0, 961.0};
  for(int k=0; k<LEVIN_SIZE; k++) {
    s += t;
    t *= (fvv - powk_levin[k])/(eightx*(k+1)); 
    sequences[k] = s; 
    weights[k]   = t; 
  }
  levin(&out, sequences_weights);
  out *= sqrt(M_PI/(2*x));
  return out;
}
