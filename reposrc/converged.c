#include "internals.h"

// These attributes are very important---without them, compiling with any -O
// flag besides -O0 silently breaks this rule (or verbosely breaks it, if you
// compile with -Rpass=enzyme). 
void __attribute__((noinline,optnone)) isconverged(double* t, double* result) {
  *result = fabs(*t) - EPS;
}

void disconverged(double* t,      double* d_t, 
                  double* result, double* d_result) {
  *result = _fmax(fabs(*t) - EPS, fabs(*d_t) - EPS);
}

void* __enzyme_register_derivative_converged[] = {
  (void*)isconverged,
  (void*)disconverged,
};
