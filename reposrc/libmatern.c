/* Unity build */
#include "internals.h"

int enzyme_const, enzyme_dup, enzyme_dupnoneed;   // defined exactly once double check

#include "utils.c"
#include "converged.c"
#include "gamma.c"
#include "besselk_power_series.c"
#include "besselk_large_args.c"
#include "besselk_large_orders.c"
#include "besselk_levin.c"
#include "besselk_temme.c"
#include "besselk.c"
#include "matern.c"