/* Provide Declarations */
#include <stdint.h>
#include <math.h>
#ifndef __cplusplus
typedef unsigned char bool;
#endif

typedef uint64_t ConstantDoubleTy;
#ifndef _MSC_VER
#define __forceinline __attribute__((always_inline)) inline
#endif

#if defined(__GNUC__)
#define  __ATTRIBUTELIST__(x) __attribute__(x)
#else
#define  __ATTRIBUTELIST__(x)  
#endif

#ifdef _MSC_VER  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#ifdef _MSC_VER
#define __PREFIXALIGN__(X) __declspec(align(X))
#define __POSTFIXALIGN__(X)
#else
#define __PREFIXALIGN__(X)
#define __POSTFIXALIGN__(X) __attribute__((aligned(X)))
#endif

static __forceinline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static __forceinline int llvm_fcmp_ole(double X, double Y) { return X <= Y; }
static __forceinline int llvm_fcmp_olt(double X, double Y) { return X <  Y; }
static __forceinline int llvm_fcmp_ogt(double X, double Y) { return X >  Y; }
static __forceinline int llvm_fcmp_oeq(double X, double Y) { return X == Y; }
static __forceinline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static __forceinline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static __forceinline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }


/* Global Declarations */

/* Types Declarations */
struct l_struct_struct_OC_doublepair;
struct l_array_4_double;
struct l_array_10_double;
struct l_array_8_double;
struct l_array_9_double;
struct l_array_11_double;
struct l_array_7_double;
struct l_array_3_double;
struct l_array_16_double;
struct l_unnamed_1;
struct l_array_6_double;
struct l_array_5_double;
struct l_array_16_struct_AC_l_struct_struct_OC_doublepair;
struct l_array_32_double;
struct l_unnamed_2;

/* Function definitions */

double gamma(double _71);

// struct l_unnamed_1 fwddiffegamma(double _2175, double _2176);

/* Types Definitions */
struct l_struct_struct_OC_doublepair {
  double field0;
  double field1;
};
struct l_array_4_double {
  double array[4];
};
struct l_array_10_double {
  double array[10];
};
struct l_array_8_double {
  double array[8];
};
struct l_array_9_double {
  double array[9];
};
struct l_array_11_double {
  double array[11];
};
struct l_array_7_double {
  double array[7];
};
struct l_array_3_double {
  double array[3];
};
struct l_array_16_double {
  double array[16];
};
struct l_unnamed_1 {
  double field0;
  double field1;
};
struct l_array_6_double {
  double array[6];
};
struct l_array_5_double {
  double array[5];
};
struct l_array_16_struct_AC_l_struct_struct_OC_doublepair {
  struct l_struct_struct_OC_doublepair array[16];
};
struct l_array_32_double {
  double array[32];
};
struct l_unnamed_2 {
  struct l_unnamed_1 field0;
  struct l_unnamed_1 field1;
};

/* Global Variable Declarations */
const static __PREFIXALIGN__(16) struct l_array_4_double __const_OC_sinpi_OC_SINPI_COEFS __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_10_double __const_OC_gamma_OC_coefs __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_8_double __const_OC_gamma_OC_P __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_9_double __const_OC_gamma_OC_Q __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_11_double __const_OC_Uk_poly_Kn_OC_u10coef __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_10_double __const_OC_Uk_poly_Kn_OC_u9coef __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_9_double __const_OC_Uk_poly_Kn_OC_u8coef __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_8_double __const_OC_Uk_poly_Kn_OC_u7coef __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_7_double __const_OC_Uk_poly_Kn_OC_u6coef __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_4_double __const_OC_Uk_poly_Kn_OC_u3coef __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_3_double __const_OC_Uk_poly_Kn_OC_u2coef __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_16_double __const_OC_besselkx_levin_OC_powk_levin __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_4_double __const_OC_f0_local_expansion_OC_spcoef __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_3_double __const_OC_f0_local_expansion_OC_g1coef __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_3_double __const_OC_f0_local_expansion_OC_g2coef __POSTFIXALIGN__(16);
const static __PREFIXALIGN__(16) struct l_array_4_double __const_OC_besselk_temme_series_OC_pqkcoef __POSTFIXALIGN__(16);
extern uint32_t enzyme_dup;
extern uint32_t enzyme_const;
extern uint32_t enzyme_dupnoneed;

/* Function Declarations */
double _fmax(double _1, double _2) __ATTRIBUTELIST__((nothrow, stack_protect));
double _fmin(double _3, double _4) __ATTRIBUTELIST__((nothrow, stack_protect));
double horner(double _5, void* _6, uint32_t _7) __ATTRIBUTELIST__((nothrow, stack_protect));
double sinpi(double _19) __ATTRIBUTELIST__((nothrow, stack_protect));
double sin(double _3308) __ATTRIBUTELIST__((nothrow));
void isconverged(void* _41, void* _42) __ATTRIBUTELIST__((noinline, nothrow, stack_protect));
void disconverged(void* _45, void* _46, void* _47, void* _48) __ATTRIBUTELIST__((nothrow, stack_protect));
bool isnearint(double _55) __ATTRIBUTELIST__((nothrow, stack_protect));
double _fma(double _58, double _59, double _60) __ATTRIBUTELIST__((nothrow, stack_protect));
struct l_unnamed_1 fmadd(double _62, double _63, double _64, double _65, double _66) __ATTRIBUTELIST__((nothrow, stack_protect));
double gamma(double _71) __ATTRIBUTELIST__((nothrow, stack_protect));
double exp(double _3309) __ATTRIBUTELIST__((nothrow));
double besselk_power_series(double _130, double _131) __ATTRIBUTELIST__((nothrow, stack_protect));
struct l_unnamed_1 up_recurrence(double _155, double _156, double _157, double _158, double _159) __ATTRIBUTELIST__((nothrow, stack_protect));
double besselkx_large_args(double _173, double _174) __ATTRIBUTELIST__((nothrow, stack_protect));
double besselk_large_args(double _191, double _192) __ATTRIBUTELIST__((nothrow, stack_protect));
double Uk_poly_Kn(double _210, double _211, double _212) __ATTRIBUTELIST__((nothrow, stack_protect));
double besselk_large_orders(double _275, double _276) __ATTRIBUTELIST__((nothrow, stack_protect));
double log(double _3310) __ATTRIBUTELIST__((nothrow));
double levin_scale(double _289, uint32_t _290, uint32_t _291) __ATTRIBUTELIST__((nothrow, stack_protect));
void _levin(void* _295, void* _296) __ATTRIBUTELIST__((nothrow, stack_protect));
void levin(void* _342, void* _343) __ATTRIBUTELIST__((nothrow, stack_protect));
void derivative_levin(void* _389, void* _390, void* _391, void* _392) __ATTRIBUTELIST__((nothrow, stack_protect));
double besselkx_levin(double _483, double _484) __ATTRIBUTELIST__((nothrow, stack_protect));
double f0_local_expansion(double _501, double _502) __ATTRIBUTELIST__((nothrow, stack_protect));
double cosh(double _3311) __ATTRIBUTELIST__((nothrow));
struct l_unnamed_1 besselk_temme_series(double _534, double _535) __ATTRIBUTELIST__((nothrow, stack_protect));
double besselk(double _619, double _620) __ATTRIBUTELIST__((nothrow, stack_protect));
double besselk_dv(double _751, double _752) __ATTRIBUTELIST__((nothrow, stack_protect));
double besselk_dx(double _955, double _956) __ATTRIBUTELIST__((nothrow, stack_protect));
double matern(double _1178, double _1179, double _1180, double _1181) __ATTRIBUTELIST__((nothrow, stack_protect));
double matern_dsig(double _1194, double _1195, double _1196, double _1197) __ATTRIBUTELIST__((nothrow, stack_protect));
double matern_drho(double _1210, double _1211, double _1212, double _1213) __ATTRIBUTELIST__((nothrow, stack_protect));
double matern_dnu(double _1228, double _1229, double _1230, double _1231) __ATTRIBUTELIST__((nothrow, stack_protect));
void besselk_buf(void* _1254, void* _1255, void* _1256, void* _1257) __ATTRIBUTELIST__((nothrow, stack_protect));
void besselk_dv_buf(void* _1267, void* _1268, void* _1269, void* _1270) __ATTRIBUTELIST__((nothrow, stack_protect));
void besselk_dx_buf(void* _1482, void* _1483, void* _1484, void* _1485) __ATTRIBUTELIST__((nothrow, stack_protect));
void matern_buf(void* _1716, void* _1717, void* _1718, void* _1719, void* _1720, void* _1721) __ATTRIBUTELIST__((nothrow, stack_protect));
void matern_dsig_buf(void* _1746, void* _1747, void* _1748, void* _1749, void* _1750, void* _1751) __ATTRIBUTELIST__((nothrow, stack_protect));
void matern_drho_buf(void* _1776, void* _1777, void* _1778, void* _1779, void* _1780, void* _1781) __ATTRIBUTELIST__((nothrow, stack_protect));
void matern_dnu_buf(void* _1808, void* _1809, void* _1810, void* _1811, void* _1812, void* _1813) __ATTRIBUTELIST__((nothrow, stack_protect));
double exp2(double _3312) __ATTRIBUTELIST__((nothrow));
static struct l_unnamed_1 fwddiffeUk_poly_Kn(double _1848, double _1849, double _1850, double _1851, double _1852, double _1853) __ATTRIBUTELIST__((nothrow, stack_protect));
static void fixderivative_isconverged(void* _1964, void* _1965, void* _1966, void* _1967) __ATTRIBUTELIST__((nothrow));
static void fixderivative_levin(void* _1968, void* _1969, void* _1970, void* _1971) __ATTRIBUTELIST__((nothrow));
static struct l_unnamed_2 fwddiffebesselk_temme_series(double _1972, double _1973, double _1974) __ATTRIBUTELIST__((nothrow, stack_protect));
double sinh(double _3313) __ATTRIBUTELIST__((nothrow));
static void fixderivative_isconverged_OC_1(void* _2116, void* _2117, void* _2118, void* _2119) __ATTRIBUTELIST__((nothrow));
static double fwddiffebesselk_power_series(double _2120, double _2121, double _2122) __ATTRIBUTELIST__((nothrow, stack_protect));
static struct l_unnamed_1 fwddiffegamma(double _2175, double _2176) __ATTRIBUTELIST__((nothrow, stack_protect));
static struct l_unnamed_1 fwddiffeUk_poly_Kn_OC_3(double _2276, double _2277, double _2278, double _2279, double _2280) __ATTRIBUTELIST__((nothrow, stack_protect));
static struct l_unnamed_2 fwddiffebesselk_temme_series_OC_4(double _2391, double _2392, double _2393) __ATTRIBUTELIST__((nothrow, stack_protect));
static double fwddiffebesselk_power_series_OC_5(double _2526, double _2527) __ATTRIBUTELIST__((nothrow, stack_protect));
static struct l_unnamed_1 fwddiffebesselk_OC_7(double _2573, double _2574, double _2575) __ATTRIBUTELIST__((nothrow, stack_protect));
static struct l_unnamed_1 fwddiffebesselk_OC_10(double _2859, double _2860, double _2861) __ATTRIBUTELIST__((nothrow, stack_protect));
double round(double _3314);
void* memset(void* _3315, uint32_t _3316, uint64_t _3317);


/* Global Variable Definitions and Initialization */
static const __PREFIXALIGN__(16) struct l_array_4_double __const_OC_sinpi_OC_SINPI_COEFS __POSTFIXALIGN__(16) = { { 3.1415926535897931, -5.1677127800499312, 2.5501640384911597, -0.59924604675426751 } };
static const __PREFIXALIGN__(16) struct l_array_10_double __const_OC_gamma_OC_coefs __POSTFIXALIGN__(16) = { { 1, 0.083333333333333315, 0.0034722222222300751, -0.0026813271618763043, -2.2947197478731854E-4, 7.8403348427447529E-4, 6.9893322606231933E-5, -5.9502375540563298E-4, -2.3638488095017589E-5, 7.1473913781436109E-4 } };
static const __PREFIXALIGN__(16) struct l_array_8_double __const_OC_gamma_OC_P __POSTFIXALIGN__(16) = { { 1, 0.83780043015731265, 0.36295154366402393, 0.11130628160193616, 0.023853632434611083, 0.0040926668283940357, 4.5429319606080093E-4, 4.2127604874716217E-5 } };
static const __PREFIXALIGN__(16) struct l_array_9_double __const_OC_gamma_OC_Q __POSTFIXALIGN__(16) = { { 1, 0.41501609505884557, -0.22435109056703292, -0.04633887671244534, 0.027737065658400731, -7.9559336824947381E-4, -0.0012377992466531523, 2.3465840591606351E-4, -1.3971485174761705E-5 } };
static const __PREFIXALIGN__(16) struct l_array_11_double __const_OC_Uk_poly_Kn_OC_u10coef __POSTFIXALIGN__(16) = { { 110.01714026924674, -13886.08975371704, 308186.40461266245, -2785618.1280864547, 13288767.166421818, -37567176.660763346, 66344512.274729028, -74105148.211532652, 50952602.492664643, -19706819.118432228, 3284469.8530720379 } };
static const __PREFIXALIGN__(16) struct l_array_10_double __const_OC_Uk_poly_Kn_OC_u9coef __POSTFIXALIGN__(16) = { { 24.380529699556064, -2499.8304818112097, 45218.768981362729, -331645.17248456355, 1268365.2733216248, -2813563.2265865337, 3763271.2976564039, -2998015.9185381071, 1311763.6146629772, -242919.18790055133 } };
static const __PREFIXALIGN__(16) struct l_array_9_double __const_OC_Uk_poly_Kn_OC_u8coef __POSTFIXALIGN__(16) = { { 6.074042001273483, -493.91530477308805, 7109.5143024893641, -41192.65496889755, 122200.46498301747, -203400.17728041555, 192547.00123253153, -96980.598388637517, 20204.291330966149 } };
static const __PREFIXALIGN__(16) struct l_array_8_double __const_OC_Uk_poly_Kn_OC_u7coef __POSTFIXALIGN__(16) = { { 1.7277275025844574, -108.09091978839466, 1200.9029132163525, -5305.646978613403, 11655.393336864534, -13586.550006434136, 8061.7221817373093, -1919.4576623184071 } };
static const __PREFIXALIGN__(16) struct l_array_7_double __const_OC_Uk_poly_Kn_OC_u6coef __POSTFIXALIGN__(16) = { { 0.57250142097473145, -26.491430486951554, 218.19051174421159, -699.57962737613252, 1059.9904525279999, -765.25246814118168, 212.57013003921713 } };
static const __PREFIXALIGN__(16) struct l_array_4_double __const_OC_Uk_poly_Kn_OC_u3coef __POSTFIXALIGN__(16) = { { 0.0732421875, -0.89121093750000002, 1.8464626736111112, -1.0258125964506173 } };
static const __PREFIXALIGN__(16) struct l_array_3_double __const_OC_Uk_poly_Kn_OC_u2coef __POSTFIXALIGN__(16) = { { 0.0703125, -0.40104166666666669, 0.3342013888888889 } };
static const __PREFIXALIGN__(16) struct l_array_16_double __const_OC_besselkx_levin_OC_powk_levin __POSTFIXALIGN__(16) = { { 1, 9, 25, 49, 81, 121, 169, 225, 289, 361, 441, 529, 625, 729, 841, 961 } };
static const __PREFIXALIGN__(16) struct l_array_4_double __const_OC_f0_local_expansion_OC_spcoef __POSTFIXALIGN__(16) = { { 1, 1.6449340668482264, 1.8940656589944918, 1.9711021825948702 } };
static const __PREFIXALIGN__(16) struct l_array_3_double __const_OC_f0_local_expansion_OC_g1coef __POSTFIXALIGN__(16) = { { -0.57721566490153287, 0.042002635034095182, 0.042197734555544306 } };
static const __PREFIXALIGN__(16) struct l_array_3_double __const_OC_f0_local_expansion_OC_g2coef __POSTFIXALIGN__(16) = { { 1, -0.6558780715202539, 0.16653861138229145 } };
static const __PREFIXALIGN__(16) struct l_array_4_double __const_OC_besselk_temme_series_OC_pqkcoef __POSTFIXALIGN__(16) = { { 1, -0.57721566490153287, 0.9890559953279725, -0.23263776388631713 } };
uint32_t enzyme_dup;
uint32_t enzyme_const;
uint32_t enzyme_dupnoneed;


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline double llvm_select_f64(bool condition, double iftrue, double ifnot) {
  double r;
  r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline bool llvm_select_bool(bool condition, bool iftrue, bool ifnot) {
  bool r;
  r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
  return r;
}
static __forceinline uint64_t llvm_add_u64(uint64_t a, uint64_t b) {
  uint64_t r = a + b;
  return r;
}
static __forceinline uint64_t llvm_sub_u64(uint64_t a, uint64_t b) {
  uint64_t r = a - b;
  return r;
}
static __forceinline uint32_t llvm_mul_u32(uint32_t a, uint32_t b) {
  uint32_t r = a * b;
  return r;
}
static __forceinline struct l_unnamed_1 llvm_ctor_unnamed_1(double x0, double x1) {
  struct l_unnamed_1 r;
  r.field0 = x0;
  r.field1 = x1;
  return r;
}
static __forceinline struct l_unnamed_2 llvm_ctor_unnamed_2(struct l_unnamed_1 x0, struct l_unnamed_1 x1) {
  struct l_unnamed_2 r;
  r.field0 = x0;
  r.field1 = x1;
  return r;
}
static __forceinline double llvm_OC_fmuladd_OC_f64(double a, double b, double c) {
  double r;
  r = a * b + c;
  return r;
}
static __forceinline double llvm_OC_fabs_OC_f64(double a) {
  double r;
  r = fabs(a);
  return r;
}
static __forceinline double llvm_OC_floor_OC_f64(double a) {
  double r;
  r = floor(a);
  return r;
}
static __forceinline double llvm_OC_sqrt_OC_f64(double a) {
  double r;
  r = sqrt(a);
  return r;
}
static __forceinline uint64_t llvm_OC_umax_OC_i64(uint64_t a, uint64_t b) {
  uint64_t r;
  r = a > b ? a : b;
  return r;
}


/* Function Bodies */

double _fmax(double _1, double _2) {
  return (llvm_select_f64((llvm_fcmp_ole(_1, _2)), _2, _1));
}


double _fmin(double _3, double _4) {
  return (llvm_select_f64((llvm_fcmp_ole(_3, _4)), _3, _4));
}


double horner(double _5, void* _6, uint32_t _7) {
  void* _8;
  uint64_t _9;
  double _10;
  double _11;
  double _11__PHI_TEMPORARY;
  uint64_t _12;
  uint64_t _12__PHI_TEMPORARY;
  double _13;
  double _13__PHI_TEMPORARY;
  double _14;
  double _15;

  _8 = ((&((uint8_t*)_6)[((int64_t)-8)]));
  if ((((int32_t)_7) > ((int32_t)1u))) {
    goto _16;
  } else {
    _11__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _17;
  }

_16:
  _9 = ((uint64_t)(uint32_t)(llvm_add_u32(_7, -1)));
  _10 = *(double*)(((&((double*)_6)[((int64_t)_9)])));
  _12__PHI_TEMPORARY = _9;   /* for PHI node */
  _13__PHI_TEMPORARY = _10;   /* for PHI node */
  goto _18;

_17:
  _11 = _11__PHI_TEMPORARY;
  return _11;
  do {     /* Syntactic loop '' to make GCC happy */
_18:
  _12 = _12__PHI_TEMPORARY;
  _13 = _13__PHI_TEMPORARY;
  _14 = *(double*)(((&((double*)_8)[((int64_t)_12)])));
  _15 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_5, _13, _14);
  if ((((uint64_t)_12) > ((uint64_t)UINT64_C(1)))) {
    _12__PHI_TEMPORARY = (llvm_add_u64(_12, -1));   /* for PHI node */
    _13__PHI_TEMPORARY = _15;   /* for PHI node */
    goto _18;
  } else {
    _11__PHI_TEMPORARY = _15;   /* for PHI node */
    goto _17;
  }

  } while (1); /* end of syntactic loop '' */
}


double sinpi(double _19) {
  double _20;
  double _20__PHI_TEMPORARY;
  double _21;
  double _22;
  double _23;
  double _24;
  double _25;
  double _26;
  double _27;
  uint64_t _28;
  uint64_t _28__PHI_TEMPORARY;
  double _29;
  double _29__PHI_TEMPORARY;
  double _30;
  double _31;
  double _32;
  double _33;

  if ((llvm_fcmp_olt(_19, 0))) {
    goto _34;
  } else {
    goto _35;
  }

_36:
  _20 = _20__PHI_TEMPORARY;
  return _20;
_34:
  _21 =  /*tail*/ sinpi((-(_19)));
  _22 = -(_21);
  _20__PHI_TEMPORARY = _22;   /* for PHI node */
  goto _36;

_35:
  _23 = round(_19);
  _24 = _19 - _23;
  _25 =  /*tail*/ llvm_OC_fabs_OC_f64(_24);
  if ((llvm_fcmp_ogt(_25, 0.01))) {
    goto _37;
  } else {
    goto _38;
  }

_37:
  _26 =  /*tail*/ sin((_19 * 3.1415926535897931));
  _20__PHI_TEMPORARY = _26;   /* for PHI node */
  goto _36;

_38:
  _27 = _24 * _24;
  _28__PHI_TEMPORARY = 3;   /* for PHI node */
  _29__PHI_TEMPORARY = -0.59924604675426751;   /* for PHI node */
  goto _39;

  do {     /* Syntactic loop '' to make GCC happy */
_39:
  _28 = _28__PHI_TEMPORARY;
  _29 = _29__PHI_TEMPORARY;
  _30 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_sinpi_OC_SINPI_COEFS))[((int64_t)-8)]))))[((int64_t)_28)])));
  _31 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_27, _29, _30);
  if ((((uint64_t)_28) > ((uint64_t)UINT64_C(1)))) {
    _28__PHI_TEMPORARY = (llvm_add_u64(_28, -1));   /* for PHI node */
    _29__PHI_TEMPORARY = _31;   /* for PHI node */
    goto _39;
  } else {
    goto _40;
  }

  } while (1); /* end of syntactic loop '' */
_40:
  _32 = _24 * _31;
  _33 = llvm_select_f64((((((int32_t)_23)) & 1) == 0u), _32, (-(_32)));
  _20__PHI_TEMPORARY = _33;   /* for PHI node */
  goto _36;

}


void isconverged(void* _41, void* _42) {
  double _43;
  double _44;

  _43 = *(double*)_41;
  _44 =  /*tail*/ llvm_OC_fabs_OC_f64(_43);
  *(double*)_42 = (_44 + -2.2204460492503131E-16);
}


void disconverged(void* _45, void* _46, void* _47, void* _48) {
  double _49;
  double _50;
  double _51;
  double _52;
  double _53;
  double _54;

  _49 = *(double*)_45;
  _50 =  /*tail*/ llvm_OC_fabs_OC_f64(_49);
  _51 = _50 + -2.2204460492503131E-16;
  _52 = *(double*)_46;
  _53 =  /*tail*/ llvm_OC_fabs_OC_f64(_52);
  _54 = _53 + -2.2204460492503131E-16;
  *(double*)_47 = (llvm_select_f64((llvm_fcmp_ole(_51, _54)), _54, _51));
}


bool isnearint(double _55) {
  double _56;
  double _57;

  _56 = round(_55);
  _57 =  /*tail*/ llvm_OC_fabs_OC_f64((_55 - _56));
  return (llvm_fcmp_olt(_57, 1.0000000000000001E-5));
}


double _fma(double _58, double _59, double _60) {
  double _61;

  _61 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_58, _59, _60);
  return _61;
}


struct l_unnamed_1 fmadd(double _62, double _63, double _64, double _65, double _66) {
  double _67;
  double _68;
  struct l_unnamed_1 _69;
  struct l_unnamed_1 _70;

  _67 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_62, _64, _65);
  _68 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_63, _64, _66);
  _69 = llvm_ctor_unnamed_1(0, 0);
  _69.field0 = _67;
  _70 = _69;
  _70.field1 = _68;
  return _70;
}

static const ConstantDoubleTy FPConstant1 = 0x7FF0000000000000ULL;    /* INF */
static const ConstantDoubleTy FPConstant2 = 0x7FF8000000000000ULL;    /* nan */

double gamma(double _71) {
  double _72;
  double _73;
  double _74;
  double _75;
  double _75__PHI_TEMPORARY;
  double _76;
  double _76__PHI_TEMPORARY;
  double _77;
  double _78;
  uint64_t _79;
  uint64_t _79__PHI_TEMPORARY;
  double _80;
  double _80__PHI_TEMPORARY;
  double _81;
  double _82;
  double _83;
  double _84;
  double _85;
  double _86;
  double _87;
  double _88;
  double _88__PHI_TEMPORARY;
  double _89;
  double _89__PHI_TEMPORARY;
  double _90;
  double _90__PHI_TEMPORARY;
  double _91;
  double _91__PHI_TEMPORARY;
  double _92;
  double _93;
  double _94;
  double _94__PHI_TEMPORARY;
  double _95;
  double _95__PHI_TEMPORARY;
  double _96;
  double _97;
  double _98;
  double _98__PHI_TEMPORARY;
  double _99;
  double _99__PHI_TEMPORARY;
  double _100;
  uint64_t _101;
  uint64_t _101__PHI_TEMPORARY;
  double _102;
  double _102__PHI_TEMPORARY;
  double _103;
  double _104;
  uint64_t _105;
  uint64_t _105__PHI_TEMPORARY;
  double _106;
  double _106__PHI_TEMPORARY;
  double _107;
  double _108;
  double _109;
  double _110;
  double _111;
  double _111__PHI_TEMPORARY;

  if ((llvm_fcmp_olt(_71, 0))) {
    goto _112;
  } else {
    _76__PHI_TEMPORARY = _71;   /* for PHI node */
    goto _113;
  }

_112:
  _72 =  /*tail*/ sinpi(_71);
  if ((llvm_fcmp_oeq(_72, 0))) {
    _111__PHI_TEMPORARY = (*(double*)&FPConstant2);   /* for PHI node */
    goto _114;
  } else {
    goto _115;
  }

_115:
  _73 = -(_71);
  _74 = _72 * _73;
  _75__PHI_TEMPORARY = _74;   /* for PHI node */
  _76__PHI_TEMPORARY = _73;   /* for PHI node */
  goto _113;

_113:
  _75 = _75__PHI_TEMPORARY;
  _76 = _76__PHI_TEMPORARY;
  _77 =  /*tail*/ llvm_OC_fabs_OC_f64(_76);
  if ((llvm_fcmp_ueq(_77, (*(double*)&FPConstant1)))) {
    _111__PHI_TEMPORARY = _76;   /* for PHI node */
    goto _114;
  } else {
    goto _116;
  }

_116:
  if ((llvm_fcmp_ogt(_76, 11.5))) {
    goto _117;
  } else {
    goto _118;
  }

_118:
  if ((llvm_fcmp_ult(_76, 3))) {
    _88__PHI_TEMPORARY = 1;   /* for PHI node */
    _89__PHI_TEMPORARY = _76;   /* for PHI node */
    goto _119;
  } else {
    _90__PHI_TEMPORARY = _76;   /* for PHI node */
    _91__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _120;
  }

_117:
  _78 = 1 / _76;
  _79__PHI_TEMPORARY = 9;   /* for PHI node */
  _80__PHI_TEMPORARY = 7.1473913781436109E-4;   /* for PHI node */
  goto _121;

  do {     /* Syntactic loop '' to make GCC happy */
_121:
  _79 = _79__PHI_TEMPORARY;
  _80 = _80__PHI_TEMPORARY;
  _81 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_gamma_OC_coefs))[((int64_t)-8)]))))[((int64_t)_79)])));
  _82 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_78, _80, _81);
  if ((((uint64_t)_79) > ((uint64_t)UINT64_C(1)))) {
    _79__PHI_TEMPORARY = (llvm_add_u64(_79, -1));   /* for PHI node */
    _80__PHI_TEMPORARY = _82;   /* for PHI node */
    goto _121;
  } else {
    goto _122;
  }

  } while (1); /* end of syntactic loop '' */
_122:
  _83 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_76, 0.5, -0.25);
  _84 =  /*tail*/ pow(_76, _83);
  _85 =  /*tail*/ exp(_76);
  _86 = _82 * ((_84 * 2.5066282746310002) * (_84 / _85));
  _87 = llvm_select_f64((llvm_fcmp_olt(_71, 0)), (3.1415926535897931 / (_75 * _86)), _86);
  _111__PHI_TEMPORARY = _87;   /* for PHI node */
  goto _114;

_119:
  _88 = _88__PHI_TEMPORARY;
  _89 = _89__PHI_TEMPORARY;
  if ((llvm_fcmp_olt(_89, 2))) {
    _94__PHI_TEMPORARY = _89;   /* for PHI node */
    _95__PHI_TEMPORARY = _88;   /* for PHI node */
    goto _123;
  } else {
    _98__PHI_TEMPORARY = _88;   /* for PHI node */
    _99__PHI_TEMPORARY = _89;   /* for PHI node */
    goto _124;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_120:
  _90 = _90__PHI_TEMPORARY;
  _91 = _91__PHI_TEMPORARY;
  _92 = _90 + -1;
  _93 = _91 * _92;
  if ((llvm_fcmp_ult(_92, 3))) {
    _88__PHI_TEMPORARY = _93;   /* for PHI node */
    _89__PHI_TEMPORARY = _92;   /* for PHI node */
    goto _119;
  } else {
    _90__PHI_TEMPORARY = _92;   /* for PHI node */
    _91__PHI_TEMPORARY = _93;   /* for PHI node */
    goto _120;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_123:
  _94 = _94__PHI_TEMPORARY;
  _95 = _95__PHI_TEMPORARY;
  _96 = _95 / _94;
  _97 = _94 + 1;
  if ((llvm_fcmp_olt(_97, 2))) {
    _94__PHI_TEMPORARY = _97;   /* for PHI node */
    _95__PHI_TEMPORARY = _96;   /* for PHI node */
    goto _123;
  } else {
    _98__PHI_TEMPORARY = _96;   /* for PHI node */
    _99__PHI_TEMPORARY = _97;   /* for PHI node */
    goto _124;
  }

  } while (1); /* end of syntactic loop '' */
_124:
  _98 = _98__PHI_TEMPORARY;
  _99 = _99__PHI_TEMPORARY;
  _100 = _99 + -2;
  _101__PHI_TEMPORARY = 7;   /* for PHI node */
  _102__PHI_TEMPORARY = 4.2127604874716217E-5;   /* for PHI node */
  goto _125;

  do {     /* Syntactic loop '' to make GCC happy */
_125:
  _101 = _101__PHI_TEMPORARY;
  _102 = _102__PHI_TEMPORARY;
  _103 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_gamma_OC_P))[((int64_t)-8)]))))[((int64_t)_101)])));
  _104 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_100, _102, _103);
  if ((((uint64_t)_101) > ((uint64_t)UINT64_C(1)))) {
    _101__PHI_TEMPORARY = (llvm_add_u64(_101, -1));   /* for PHI node */
    _102__PHI_TEMPORARY = _104;   /* for PHI node */
    goto _125;
  } else {
    _105__PHI_TEMPORARY = 8;   /* for PHI node */
    _106__PHI_TEMPORARY = -1.3971485174761705E-5;   /* for PHI node */
    goto _126;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_126:
  _105 = _105__PHI_TEMPORARY;
  _106 = _106__PHI_TEMPORARY;
  _107 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_gamma_OC_Q))[((int64_t)-8)]))))[((int64_t)_105)])));
  _108 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_100, _106, _107);
  if ((((uint64_t)_105) > ((uint64_t)UINT64_C(1)))) {
    _105__PHI_TEMPORARY = (llvm_add_u64(_105, -1));   /* for PHI node */
    _106__PHI_TEMPORARY = _108;   /* for PHI node */
    goto _126;
  } else {
    goto _127;
  }

  } while (1); /* end of syntactic loop '' */
_127:
  if ((llvm_fcmp_olt(_71, 0))) {
    goto _128;
  } else {
    goto _129;
  }

_128:
  _109 = (_108 * 3.1415926535897931) / ((_75 * _98) * _104);
  _111__PHI_TEMPORARY = _109;   /* for PHI node */
  goto _114;

_129:
  _110 = (_98 * _104) / _108;
  _111__PHI_TEMPORARY = _110;   /* for PHI node */
  goto _114;

_114:
  _111 = _111__PHI_TEMPORARY;
  return _111;
}


double besselk_power_series(double _130, double _131) {
  double _132;    /* Address-exposed local */
  double _133;    /* Address-exposed local */
  double _134;
  double _135;
  double _136;
  double _137;
  double _137__PHI_TEMPORARY;
  double _138;
  double _138__PHI_TEMPORARY;
  uint32_t _139;
  uint32_t _139__PHI_TEMPORARY;
  double _140;
  double _140__PHI_TEMPORARY;
  double _141;
  double _141__PHI_TEMPORARY;
  double _142;
  double _143;
  double _144;
  double _145;
  double _146;
  double _147;
  double _148;
  uint32_t _149;
  double _150;
  double _151;

  _134 =  /*tail*/ gamma(_130);
  _135 =  /*tail*/ sinpi((-(_130)));
  _132 = 1;
  _136 = _131 * _131;
  _133 = 1;
  _137__PHI_TEMPORARY = 0;   /* for PHI node */
  _138__PHI_TEMPORARY = 0;   /* for PHI node */
  _139__PHI_TEMPORARY = 1;   /* for PHI node */
  _140__PHI_TEMPORARY = 1;   /* for PHI node */
  _141__PHI_TEMPORARY = 4;   /* for PHI node */
  goto _152;

  do {     /* Syntactic loop '' to make GCC happy */
_152:
  _137 = _137__PHI_TEMPORARY;
  _138 = _138__PHI_TEMPORARY;
  _139 = _139__PHI_TEMPORARY;
  _140 = _140__PHI_TEMPORARY;
  _141 = _141__PHI_TEMPORARY;
  _142 = _132;
  _143 = _137 + _142;
  _144 = _138 + _140;
  _145 = ((double)(uint32_t)_139);
  _132 = (_142 * (_136 / (_141 * (_145 - _130))));
  isconverged((&_132), (&_133));
  _146 = _133;
  if ((llvm_fcmp_olt(_146, 0))) {
    goto _153;
  } else {
    goto _154;
  }

_154:
  _147 = _140 * (_136 / (_141 * (_145 + _130)));
  _148 = _141 + 4;
  _149 = llvm_add_u32(_139, 1);
  if ((_149 == 50u)) {
    goto _153;
  } else {
    _137__PHI_TEMPORARY = _143;   /* for PHI node */
    _138__PHI_TEMPORARY = _144;   /* for PHI node */
    _139__PHI_TEMPORARY = _149;   /* for PHI node */
    _140__PHI_TEMPORARY = _147;   /* for PHI node */
    _141__PHI_TEMPORARY = _148;   /* for PHI node */
    goto _152;
  }

  } while (1); /* end of syntactic loop '' */
_153:
  _150 = pow((_131 * 0.5), _130);
  _151 = llvm_OC_fmuladd_OC_f64(_134, _143, (_144 * ((3.1415926535897931 / ((_134 * _135) * _130)) * (_150 * _150))));
  return (_151 / (_150 * 2));
}


struct l_unnamed_1 up_recurrence(double _155, double _156, double _157, double _158, double _159) {
  double _160;
  double _161;
  double _162;
  double _162__PHI_TEMPORARY;
  double _163;
  double _163__PHI_TEMPORARY;
  double _164;
  double _164__PHI_TEMPORARY;
  double _165;
  double _166;
  double _167;
  double _167__PHI_TEMPORARY;
  double _168;
  double _168__PHI_TEMPORARY;
  struct l_unnamed_1 _169;
  struct l_unnamed_1 _170;

  _160 = 2 / _155;
  _161 = _159 + 0.5;
  if ((llvm_fcmp_ogt(_161, _158))) {
    _162__PHI_TEMPORARY = _156;   /* for PHI node */
    _163__PHI_TEMPORARY = _157;   /* for PHI node */
    _164__PHI_TEMPORARY = _158;   /* for PHI node */
    goto _171;
  } else {
    _167__PHI_TEMPORARY = _157;   /* for PHI node */
    _168__PHI_TEMPORARY = _156;   /* for PHI node */
    goto _172;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_171:
  _162 = _162__PHI_TEMPORARY;
  _163 = _163__PHI_TEMPORARY;
  _164 = _164__PHI_TEMPORARY;
  _165 =  /*tail*/ llvm_OC_fmuladd_OC_f64((_160 * _164), _162, _163);
  _166 = _164 + 1;
  if ((llvm_fcmp_olt(_166, _161))) {
    _162__PHI_TEMPORARY = _165;   /* for PHI node */
    _163__PHI_TEMPORARY = _162;   /* for PHI node */
    _164__PHI_TEMPORARY = _166;   /* for PHI node */
    goto _171;
  } else {
    _167__PHI_TEMPORARY = _162;   /* for PHI node */
    _168__PHI_TEMPORARY = _165;   /* for PHI node */
    goto _172;
  }

  } while (1); /* end of syntactic loop '' */
_172:
  _167 = _167__PHI_TEMPORARY;
  _168 = _168__PHI_TEMPORARY;
  _169 = llvm_ctor_unnamed_1(0, 0);
  _169.field0 = _167;
  _170 = _169;
  _170.field1 = _168;
  return _170;
}


double besselkx_large_args(double _173, double _174) {
  double _175;    /* Address-exposed local */
  double _176;    /* Address-exposed local */
  double _177;
  double _178;
  uint32_t _179;
  uint32_t _179__PHI_TEMPORARY;
  double _180;
  double _180__PHI_TEMPORARY;
  uint32_t _181;
  double _182;
  double _183;
  double _184;
  double _185;
  double _186;
  uint32_t _187;
  double _188;

  _176 = 1;
  _177 = 1 / (_174 * 8);
  _178 = _173 * 4;
  _179__PHI_TEMPORARY = 1;   /* for PHI node */
  _180__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _189;

  do {     /* Syntactic loop '' to make GCC happy */
_189:
  _179 = _179__PHI_TEMPORARY;
  _180 = _180__PHI_TEMPORARY;
  _181 = llvm_add_u32((_179 << 1), -1);
  _182 = llvm_OC_fmuladd_OC_f64(_178, _173, (-((((double)(uint32_t)(llvm_mul_u32(_181, _181)))))));
  _183 = _176;
  _184 = _183 * (_177 * (_182 / (((double)(uint32_t)_179))));
  _176 = _184;
  _185 = _180 + _184;
  isconverged((&_176), (&_175));
  _186 = _175;
  _187 = llvm_add_u32(_179, 1);
  if ((llvm_select_bool((llvm_fcmp_olt(_186, 0)), 1, (_187 == 21u)))) {
    goto _190;
  } else {
    _179__PHI_TEMPORARY = _187;   /* for PHI node */
    _180__PHI_TEMPORARY = _185;   /* for PHI node */
    goto _189;
  }

  } while (1); /* end of syntactic loop '' */
_190:
  _188 = sqrt((3.1415926535897931 / (_174 * 2)));
  return (_185 * _188);
}


double besselk_large_args(double _191, double _192) {
  double _193;    /* Address-exposed local */
  double _194;    /* Address-exposed local */
  double _195;
  double _196;
  double _197;
  uint32_t _198;
  uint32_t _198__PHI_TEMPORARY;
  double _199;
  double _199__PHI_TEMPORARY;
  uint32_t _200;
  double _201;
  double _202;
  double _203;
  double _204;
  double _205;
  uint32_t _206;
  double _207;

  _195 =  /*tail*/ exp((_192 * -0.5));
  _194 = 1;
  _196 = 1 / (_192 * 8);
  _197 = _191 * 4;
  _198__PHI_TEMPORARY = 1;   /* for PHI node */
  _199__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _208;

  do {     /* Syntactic loop '' to make GCC happy */
_208:
  _198 = _198__PHI_TEMPORARY;
  _199 = _199__PHI_TEMPORARY;
  _200 = llvm_add_u32((_198 << 1), -1);
  _201 = llvm_OC_fmuladd_OC_f64(_197, _191, (-((((double)(uint32_t)(llvm_mul_u32(_200, _200)))))));
  _202 = _194;
  _203 = _202 * (_196 * (_201 / (((double)(uint32_t)_198))));
  _194 = _203;
  _204 = _199 + _203;
  isconverged((&_194), (&_193));
  _205 = _193;
  _206 = llvm_add_u32(_198, 1);
  if ((llvm_select_bool((llvm_fcmp_olt(_205, 0)), 1, (_206 == 21u)))) {
    goto _209;
  } else {
    _198__PHI_TEMPORARY = _206;   /* for PHI node */
    _199__PHI_TEMPORARY = _204;   /* for PHI node */
    goto _208;
  }

  } while (1); /* end of syntactic loop '' */
_209:
  _207 = sqrt((3.1415926535897931 / (_192 * 2)));
  return (_195 * (_195 * (_204 * _207)));
}


double Uk_poly_Kn(double _210, double _211, double _212) {
  __PREFIXALIGN__(16) struct l_array_6_double _213 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_5_double _214 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_11_double _215 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint64_t _216;
  uint64_t _216__PHI_TEMPORARY;
  double _217;
  double _217__PHI_TEMPORARY;
  double _218;
  double _219;
  uint64_t _220;
  uint64_t _220__PHI_TEMPORARY;
  double _221;
  double _221__PHI_TEMPORARY;
  double _222;
  double _223;
  uint64_t _224;
  uint64_t _224__PHI_TEMPORARY;
  double _225;
  double _225__PHI_TEMPORARY;
  double _226;
  double _227;
  uint64_t _228;
  uint64_t _228__PHI_TEMPORARY;
  double _229;
  double _229__PHI_TEMPORARY;
  double _230;
  double _231;
  uint64_t _232;
  uint64_t _232__PHI_TEMPORARY;
  double _233;
  double _233__PHI_TEMPORARY;
  double _234;
  double _235;
  void* _236;
  uint64_t _237;
  uint64_t _237__PHI_TEMPORARY;
  double _238;
  double _238__PHI_TEMPORARY;
  double _239;
  double _240;
  void* _241;
  uint64_t _242;
  uint64_t _242__PHI_TEMPORARY;
  double _243;
  double _243__PHI_TEMPORARY;
  double _244;
  double _245;
  uint64_t _246;
  uint64_t _246__PHI_TEMPORARY;
  double _247;
  double _247__PHI_TEMPORARY;
  double _248;
  double _249;
  uint64_t _250;
  uint64_t _250__PHI_TEMPORARY;
  double _251;
  double _251__PHI_TEMPORARY;
  double _252;
  double _253;
  double _254;
  double _255;
  void* _256;
  uint64_t _257;
  uint64_t _257__PHI_TEMPORARY;
  double _258;
  double _258__PHI_TEMPORARY;
  double _259;
  double _260;

  *((double*)&_213) = 0.22710800170898438;
  *(double*)(((&((uint8_t*)(&_213))[((int64_t)8)]))) = -7.3687943594796321;
  *(double*)(((&((uint8_t*)(&_213))[((int64_t)16)]))) = 42.534998745388457;
  *(double*)(((&((uint8_t*)(&_213))[((int64_t)24)]))) = -91.81824154324002;
  *(double*)(((&((uint8_t*)(&_213))[((int64_t)32)]))) = 84.636217674600729;
  *(double*)(((&((uint8_t*)(&_213))[((int64_t)40)]))) = -28.212072558200244;
  *((double*)&_214) = 0.112152099609375;
  *(double*)(((&((uint8_t*)(&_214))[((int64_t)8)]))) = -2.3640869140624998;
  *(double*)(((&((uint8_t*)(&_214))[((int64_t)16)]))) = 8.78912353515625;
  *(double*)(((&((uint8_t*)(&_214))[((int64_t)24)]))) = -11.207002616222994;
  *(double*)(((&((uint8_t*)(&_214))[((int64_t)32)]))) = 4.6695844234262474;
  _216__PHI_TEMPORARY = 10;   /* for PHI node */
  _217__PHI_TEMPORARY = 3284469.8530720379;   /* for PHI node */
  goto _261;

  do {     /* Syntactic loop '' to make GCC happy */
_261:
  _216 = _216__PHI_TEMPORARY;
  _217 = _217__PHI_TEMPORARY;
  _218 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u10coef))[((int64_t)-8)]))))[((int64_t)_216)])));
  _219 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_212, _217, _218);
  if ((((uint64_t)_216) > ((uint64_t)UINT64_C(1)))) {
    _216__PHI_TEMPORARY = (llvm_add_u64(_216, -1));   /* for PHI node */
    _217__PHI_TEMPORARY = _219;   /* for PHI node */
    goto _261;
  } else {
    _220__PHI_TEMPORARY = 9;   /* for PHI node */
    _221__PHI_TEMPORARY = -242919.18790055133;   /* for PHI node */
    goto _262;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_262:
  _220 = _220__PHI_TEMPORARY;
  _221 = _221__PHI_TEMPORARY;
  _222 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u9coef))[((int64_t)-8)]))))[((int64_t)_220)])));
  _223 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_212, _221, _222);
  if ((((uint64_t)_220) > ((uint64_t)UINT64_C(1)))) {
    _220__PHI_TEMPORARY = (llvm_add_u64(_220, -1));   /* for PHI node */
    _221__PHI_TEMPORARY = _223;   /* for PHI node */
    goto _262;
  } else {
    _224__PHI_TEMPORARY = 8;   /* for PHI node */
    _225__PHI_TEMPORARY = 20204.291330966149;   /* for PHI node */
    goto _263;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_263:
  _224 = _224__PHI_TEMPORARY;
  _225 = _225__PHI_TEMPORARY;
  _226 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u8coef))[((int64_t)-8)]))))[((int64_t)_224)])));
  _227 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_212, _225, _226);
  if ((((uint64_t)_224) > ((uint64_t)UINT64_C(1)))) {
    _224__PHI_TEMPORARY = (llvm_add_u64(_224, -1));   /* for PHI node */
    _225__PHI_TEMPORARY = _227;   /* for PHI node */
    goto _263;
  } else {
    _228__PHI_TEMPORARY = 7;   /* for PHI node */
    _229__PHI_TEMPORARY = -1919.4576623184071;   /* for PHI node */
    goto _264;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_264:
  _228 = _228__PHI_TEMPORARY;
  _229 = _229__PHI_TEMPORARY;
  _230 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u7coef))[((int64_t)-8)]))))[((int64_t)_228)])));
  _231 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_212, _229, _230);
  if ((((uint64_t)_228) > ((uint64_t)UINT64_C(1)))) {
    _228__PHI_TEMPORARY = (llvm_add_u64(_228, -1));   /* for PHI node */
    _229__PHI_TEMPORARY = _231;   /* for PHI node */
    goto _264;
  } else {
    _232__PHI_TEMPORARY = 6;   /* for PHI node */
    _233__PHI_TEMPORARY = 212.57013003921713;   /* for PHI node */
    goto _265;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_265:
  _232 = _232__PHI_TEMPORARY;
  _233 = _233__PHI_TEMPORARY;
  _234 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u6coef))[((int64_t)-8)]))))[((int64_t)_232)])));
  _235 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_212, _233, _234);
  if ((((uint64_t)_232) > ((uint64_t)UINT64_C(1)))) {
    _232__PHI_TEMPORARY = (llvm_add_u64(_232, -1));   /* for PHI node */
    _233__PHI_TEMPORARY = _235;   /* for PHI node */
    goto _265;
  } else {
    goto _266;
  }

  } while (1); /* end of syntactic loop '' */
_266:
  _236 = ((&((uint8_t*)(&_213))[((int64_t)-8)]));
  _237__PHI_TEMPORARY = 5;   /* for PHI node */
  _238__PHI_TEMPORARY = -28.212072558200244;   /* for PHI node */
  goto _267;

  do {     /* Syntactic loop '' to make GCC happy */
_267:
  _237 = _237__PHI_TEMPORARY;
  _238 = _238__PHI_TEMPORARY;
  _239 = *(double*)(((&((double*)_236)[((int64_t)_237)])));
  _240 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_212, _238, _239);
  if ((((uint64_t)_237) > ((uint64_t)UINT64_C(1)))) {
    _237__PHI_TEMPORARY = (llvm_add_u64(_237, -1));   /* for PHI node */
    _238__PHI_TEMPORARY = _240;   /* for PHI node */
    goto _267;
  } else {
    goto _268;
  }

  } while (1); /* end of syntactic loop '' */
_268:
  _241 = ((&((uint8_t*)(&_214))[((int64_t)-8)]));
  _242__PHI_TEMPORARY = 4;   /* for PHI node */
  _243__PHI_TEMPORARY = 4.6695844234262474;   /* for PHI node */
  goto _269;

  do {     /* Syntactic loop '' to make GCC happy */
_269:
  _242 = _242__PHI_TEMPORARY;
  _243 = _243__PHI_TEMPORARY;
  _244 = *(double*)(((&((double*)_241)[((int64_t)_242)])));
  _245 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_212, _243, _244);
  if ((((uint64_t)_242) > ((uint64_t)UINT64_C(1)))) {
    _242__PHI_TEMPORARY = (llvm_add_u64(_242, -1));   /* for PHI node */
    _243__PHI_TEMPORARY = _245;   /* for PHI node */
    goto _269;
  } else {
    _246__PHI_TEMPORARY = 3;   /* for PHI node */
    _247__PHI_TEMPORARY = -1.0258125964506173;   /* for PHI node */
    goto _270;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_270:
  _246 = _246__PHI_TEMPORARY;
  _247 = _247__PHI_TEMPORARY;
  _248 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u3coef))[((int64_t)-8)]))))[((int64_t)_246)])));
  _249 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_212, _247, _248);
  if ((((uint64_t)_246) > ((uint64_t)UINT64_C(1)))) {
    _246__PHI_TEMPORARY = (llvm_add_u64(_246, -1));   /* for PHI node */
    _247__PHI_TEMPORARY = _249;   /* for PHI node */
    goto _270;
  } else {
    _250__PHI_TEMPORARY = 2;   /* for PHI node */
    _251__PHI_TEMPORARY = 0.3342013888888889;   /* for PHI node */
    goto _271;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_271:
  _250 = _250__PHI_TEMPORARY;
  _251 = _251__PHI_TEMPORARY;
  _252 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u2coef))[((int64_t)-8)]))))[((int64_t)_250)])));
  _253 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_212, _251, _252);
  if ((((uint64_t)_250) > ((uint64_t)UINT64_C(1)))) {
    _250__PHI_TEMPORARY = (llvm_add_u64(_250, -1));   /* for PHI node */
    _251__PHI_TEMPORARY = _253;   /* for PHI node */
    goto _271;
  } else {
    goto _272;
  }

  } while (1); /* end of syntactic loop '' */
_272:
  _254 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_212, -0.20833333333333334, 0.125);
  *((double*)&_215) = 1;
  *(double*)(((&((uint8_t*)(&_215))[((int64_t)8)]))) = _254;
  *(double*)(((&((uint8_t*)(&_215))[((int64_t)16)]))) = _253;
  *(double*)(((&((uint8_t*)(&_215))[((int64_t)24)]))) = _249;
  *(double*)(((&((uint8_t*)(&_215))[((int64_t)32)]))) = _245;
  *(double*)(((&((uint8_t*)(&_215))[((int64_t)40)]))) = _240;
  *(double*)(((&((uint8_t*)(&_215))[((int64_t)48)]))) = _235;
  *(double*)(((&((uint8_t*)(&_215))[((int64_t)56)]))) = _231;
  *(double*)(((&((uint8_t*)(&_215))[((int64_t)64)]))) = _227;
  *(double*)(((&((uint8_t*)(&_215))[((int64_t)72)]))) = _223;
  *(double*)(((&((uint8_t*)(&_215))[((int64_t)80)]))) = _219;
  _255 = (-(_210)) / _211;
  _256 = ((&((uint8_t*)(&_215))[((int64_t)-8)]));
  _257__PHI_TEMPORARY = 10;   /* for PHI node */
  _258__PHI_TEMPORARY = _219;   /* for PHI node */
  goto _273;

  do {     /* Syntactic loop '' to make GCC happy */
_273:
  _257 = _257__PHI_TEMPORARY;
  _258 = _258__PHI_TEMPORARY;
  _259 = *(double*)(((&((double*)_256)[((int64_t)_257)])));
  _260 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_255, _258, _259);
  if ((((uint64_t)_257) > ((uint64_t)UINT64_C(1)))) {
    _257__PHI_TEMPORARY = (llvm_add_u64(_257, -1));   /* for PHI node */
    _258__PHI_TEMPORARY = _260;   /* for PHI node */
    goto _273;
  } else {
    goto _274;
  }

  } while (1); /* end of syntactic loop '' */
_274:
  return _260;
}


double besselk_large_orders(double _275, double _276) {
  double _277;
  double _278;
  double _279;
  double _280;
  double _281;
  double _282;
  double _283;
  double _284;
  double _285;
  double _286;
  double _287;
  double _288;

  _277 = _276 / _275;
  _278 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_277, _277, 1);
  _279 =  /*tail*/ llvm_OC_sqrt_OC_f64(_278);
  _280 =  /*tail*/ log(_277);
  _281 =  /*tail*/ log((_279 + 1));
  _282 =  /*tail*/ sqrt((1 / _275));
  _283 =  /*tail*/ exp((((_279 + _280) - _281) * (-(_275))));
  _284 =  /*tail*/ sqrt(_279);
  _285 = llvm_select_f64((llvm_fcmp_ole(_275, _276)), _276, _275);
  _286 = llvm_select_f64((llvm_fcmp_ole(_275, _276)), _275, _276);
  _287 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_285, _285, (_286 * _286));
  _288 =  /*tail*/ Uk_poly_Kn((1 / _279), _275, ((_275 * _275) / _287));
  return ((((_282 * 1.2533141373155001) * _283) / _284) * _288);
}


double levin_scale(double _289, uint32_t _290, uint32_t _291) {
  double _292;
  double _293;
  double _294;

  _292 = (((double)(int32_t)_290)) + _289;
  _293 = _292 + (((double)(int32_t)_291));
  _294 = _292 + (((double)(int32_t)(_291 << 1)));
  return (((_293 + -1) * (-(_293))) / (_294 * (_294 + -1)));
}


void _levin(void* _295, void* _296) {
  __PREFIXALIGN__(16) struct l_array_16_struct_AC_l_struct_struct_OC_doublepair _297 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _298;
  uint64_t _299;
  uint64_t _299__PHI_TEMPORARY;
  double _300;
  double _301;
  void* _302;
  uint64_t _303;
  void* _304;
  uint64_t _305;
  uint64_t _305__PHI_TEMPORARY;
  uint64_t _306;
  uint64_t _306__PHI_TEMPORARY;
  uint64_t _307;
  uint32_t _308;
  double _309;
  double _310;
  double _311;
  double _312;
  double _313;
  double _314;
  double _315;
  uint64_t _316;
  uint64_t _317;
  double _318;
  double _318__PHI_TEMPORARY;
  double _319;
  double _319__PHI_TEMPORARY;
  uint64_t _320;
  uint64_t _320__PHI_TEMPORARY;
  uint64_t _321;
  double _322;
  double _323;
  double _324;
  double _325;
  void* _326;
  void* _327;
  double _328;
  double _329;
  double _330;
  double _331;
  double _332;
  double _332__PHI_TEMPORARY;

  _298 = ((&((uint8_t*)_296)[((int64_t)128)]));
  _299__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _333;

  do {     /* Syntactic loop '' to make GCC happy */
_333:
  _299 = _299__PHI_TEMPORARY;
  _300 = *(double*)(((&((double*)_298)[((int64_t)_299)])));
  _301 = *(double*)(((&((double*)_296)[((int64_t)_299)])));
  if ((llvm_fcmp_oeq(_300, 0))) {
    _332__PHI_TEMPORARY = _301;   /* for PHI node */
    goto _334;
  } else {
    goto _335;
  }

_335:
  _302 = ((&(&_297)->array[((int64_t)_299)]));
  *(double*)_302 = (_301 / _300);
  *(double*)(((&((uint8_t*)_302)[((int64_t)8)]))) = (1 / _300);
  _303 = llvm_add_u64(_299, 1);
  if ((_303 == UINT64_C(16))) {
    goto _336;
  } else {
    _299__PHI_TEMPORARY = _303;   /* for PHI node */
    goto _333;
  }

  } while (1); /* end of syntactic loop '' */
_336:
  _304 = ((&((uint8_t*)(&_297))[((int64_t)8)]));
  _305__PHI_TEMPORARY = 14;   /* for PHI node */
  _306__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _337;

  do {     /* Syntactic loop '' to make GCC happy */
_337:
  _305 = _305__PHI_TEMPORARY;
  _306 = _306__PHI_TEMPORARY;
  _307 =  /*tail*/ llvm_OC_umax_OC_i64(_305, 1);
  if ((((uint64_t)_306) < ((uint64_t)UINT64_C(14)))) {
    goto _338;
  } else {
    goto _339;
  }

_338:
  _308 = ((uint32_t)_306);
  _309 = ((double)(uint32_t)_308);
  _310 = ((double)(uint32_t)(_308 << 1));
  _311 = *((double*)&_297);
  _312 = *(double*)_304;
  _318__PHI_TEMPORARY = _312;   /* for PHI node */
  _319__PHI_TEMPORARY = _311;   /* for PHI node */
  _320__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _340;

  do {     /* Syntactic loop '' to make GCC happy */
_340:
  _318 = _318__PHI_TEMPORARY;
  _319 = _319__PHI_TEMPORARY;
  _320 = _320__PHI_TEMPORARY;
  _321 = llvm_add_u64(_320, 1);
  _322 = ((double)(uint32_t)(llvm_add_u32((((uint32_t)_320)), 2)));
  _323 = _309 + _322;
  _324 = _310 + _322;
  _325 = ((_323 + -1) * (-(_323))) / (_324 * (_324 + -1));
  _326 = ((&(&_297)->array[((int64_t)_320)]));
  _327 = ((&(&_297)->array[((int64_t)_321)]));
  _328 = *(double*)_327;
  _329 = *(double*)(((&((uint8_t*)_327)[((int64_t)8)])));
  _330 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_319, _325, _328);
  _331 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_318, _325, _329);
  *(double*)_326 = _330;
  *(double*)(((&((uint8_t*)_326)[((int64_t)8)]))) = _331;
  if ((_321 == _307)) {
    goto _339;
  } else {
    _318__PHI_TEMPORARY = _329;   /* for PHI node */
    _319__PHI_TEMPORARY = _328;   /* for PHI node */
    _320__PHI_TEMPORARY = _321;   /* for PHI node */
    goto _340;
  }

  } while (1); /* end of syntactic loop '' */
_339:
  _316 = llvm_add_u64(_306, 1);
  _317 = llvm_add_u64(_305, -1);
  if ((_316 == UINT64_C(15))) {
    goto _341;
  } else {
    _305__PHI_TEMPORARY = _317;   /* for PHI node */
    _306__PHI_TEMPORARY = _316;   /* for PHI node */
    goto _337;
  }

  } while (1); /* end of syntactic loop '' */
_341:
  _313 = *((double*)&_297);
  _314 = *(double*)_304;
  _315 = _313 / _314;
  _332__PHI_TEMPORARY = _315;   /* for PHI node */
  goto _334;

_334:
  _332 = _332__PHI_TEMPORARY;
  *(double*)_295 = _332;
}


void levin(void* _342, void* _343) {
  __PREFIXALIGN__(16) struct l_array_16_struct_AC_l_struct_struct_OC_doublepair _344 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _345;
  uint64_t _346;
  uint64_t _346__PHI_TEMPORARY;
  double _347;
  double _348;
  void* _349;
  uint64_t _350;
  void* _351;
  uint64_t _352;
  uint64_t _352__PHI_TEMPORARY;
  uint64_t _353;
  uint64_t _353__PHI_TEMPORARY;
  uint64_t _354;
  uint32_t _355;
  double _356;
  double _357;
  double _358;
  double _359;
  double _360;
  double _361;
  double _362;
  uint64_t _363;
  uint64_t _364;
  double _365;
  double _365__PHI_TEMPORARY;
  double _366;
  double _366__PHI_TEMPORARY;
  uint64_t _367;
  uint64_t _367__PHI_TEMPORARY;
  uint64_t _368;
  double _369;
  double _370;
  double _371;
  double _372;
  void* _373;
  void* _374;
  double _375;
  double _376;
  double _377;
  double _378;
  double _379;
  double _379__PHI_TEMPORARY;

  _345 = ((&((uint8_t*)_343)[((int64_t)128)]));
  _346__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _380;

  do {     /* Syntactic loop '' to make GCC happy */
_380:
  _346 = _346__PHI_TEMPORARY;
  _347 = *(double*)(((&((double*)_345)[((int64_t)_346)])));
  _348 = *(double*)(((&((double*)_343)[((int64_t)_346)])));
  if ((llvm_fcmp_oeq(_347, 0))) {
    _379__PHI_TEMPORARY = _348;   /* for PHI node */
    goto _381;
  } else {
    goto _382;
  }

_382:
  _349 = ((&(&_344)->array[((int64_t)_346)]));
  *(double*)_349 = (_348 / _347);
  *(double*)(((&((uint8_t*)_349)[((int64_t)8)]))) = (1 / _347);
  _350 = llvm_add_u64(_346, 1);
  if ((_350 == UINT64_C(16))) {
    goto _383;
  } else {
    _346__PHI_TEMPORARY = _350;   /* for PHI node */
    goto _380;
  }

  } while (1); /* end of syntactic loop '' */
_383:
  _351 = ((&((uint8_t*)(&_344))[((int64_t)8)]));
  _352__PHI_TEMPORARY = 14;   /* for PHI node */
  _353__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _384;

  do {     /* Syntactic loop '' to make GCC happy */
_384:
  _352 = _352__PHI_TEMPORARY;
  _353 = _353__PHI_TEMPORARY;
  _354 =  /*tail*/ llvm_OC_umax_OC_i64(_352, 1);
  if ((((uint64_t)_353) < ((uint64_t)UINT64_C(14)))) {
    goto _385;
  } else {
    goto _386;
  }

_385:
  _355 = ((uint32_t)_353);
  _356 = ((double)(uint32_t)_355);
  _357 = ((double)(uint32_t)(_355 << 1));
  _358 = *((double*)&_344);
  _359 = *(double*)_351;
  _365__PHI_TEMPORARY = _359;   /* for PHI node */
  _366__PHI_TEMPORARY = _358;   /* for PHI node */
  _367__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _387;

  do {     /* Syntactic loop '' to make GCC happy */
_387:
  _365 = _365__PHI_TEMPORARY;
  _366 = _366__PHI_TEMPORARY;
  _367 = _367__PHI_TEMPORARY;
  _368 = llvm_add_u64(_367, 1);
  _369 = ((double)(uint32_t)(llvm_add_u32((((uint32_t)_367)), 2)));
  _370 = _356 + _369;
  _371 = _357 + _369;
  _372 = ((_370 + -1) * (-(_370))) / (_371 * (_371 + -1));
  _373 = ((&(&_344)->array[((int64_t)_367)]));
  _374 = ((&(&_344)->array[((int64_t)_368)]));
  _375 = *(double*)_374;
  _376 = *(double*)(((&((uint8_t*)_374)[((int64_t)8)])));
  _377 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_366, _372, _375);
  _378 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_365, _372, _376);
  *(double*)_373 = _377;
  *(double*)(((&((uint8_t*)_373)[((int64_t)8)]))) = _378;
  if ((_368 == _354)) {
    goto _386;
  } else {
    _365__PHI_TEMPORARY = _376;   /* for PHI node */
    _366__PHI_TEMPORARY = _375;   /* for PHI node */
    _367__PHI_TEMPORARY = _368;   /* for PHI node */
    goto _387;
  }

  } while (1); /* end of syntactic loop '' */
_386:
  _363 = llvm_add_u64(_353, 1);
  _364 = llvm_add_u64(_352, -1);
  if ((_363 == UINT64_C(15))) {
    goto _388;
  } else {
    _352__PHI_TEMPORARY = _364;   /* for PHI node */
    _353__PHI_TEMPORARY = _363;   /* for PHI node */
    goto _384;
  }

  } while (1); /* end of syntactic loop '' */
_388:
  _360 = *((double*)&_344);
  _361 = *(double*)_351;
  _362 = _360 / _361;
  _379__PHI_TEMPORARY = _362;   /* for PHI node */
  goto _381;

_381:
  _379 = _379__PHI_TEMPORARY;
  *(double*)_342 = _379;
}


void derivative_levin(void* _389, void* _390, void* _391, void* _392) {
  __PREFIXALIGN__(16) struct l_array_16_struct_AC_l_struct_struct_OC_doublepair _393 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_16_struct_AC_l_struct_struct_OC_doublepair _394 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _395;
  uint64_t _396;
  uint64_t _396__PHI_TEMPORARY;
  double _397;
  double _398;
  void* _399;
  uint64_t _400;
  void* _401;
  uint64_t _402;
  uint64_t _402__PHI_TEMPORARY;
  uint64_t _403;
  uint64_t _403__PHI_TEMPORARY;
  uint64_t _404;
  uint32_t _405;
  double _406;
  double _407;
  double _408;
  double _409;
  double _410;
  double _411;
  double _412;
  uint64_t _413;
  uint64_t _414;
  double _415;
  double _415__PHI_TEMPORARY;
  double _416;
  double _416__PHI_TEMPORARY;
  uint64_t _417;
  uint64_t _417__PHI_TEMPORARY;
  uint64_t _418;
  double _419;
  double _420;
  double _421;
  double _422;
  void* _423;
  void* _424;
  double _425;
  double _426;
  double _427;
  double _428;
  double _429;
  double _429__PHI_TEMPORARY;
  void* _430;
  uint64_t _431;
  uint64_t _431__PHI_TEMPORARY;
  double _432;
  double _433;
  void* _434;
  uint64_t _435;
  void* _436;
  uint64_t _437;
  uint64_t _437__PHI_TEMPORARY;
  uint64_t _438;
  uint64_t _438__PHI_TEMPORARY;
  uint64_t _439;
  uint32_t _440;
  double _441;
  double _442;
  double _443;
  double _444;
  double _445;
  double _446;
  double _447;
  uint64_t _448;
  uint64_t _449;
  double _450;
  double _450__PHI_TEMPORARY;
  double _451;
  double _451__PHI_TEMPORARY;
  uint64_t _452;
  uint64_t _452__PHI_TEMPORARY;
  uint64_t _453;
  double _454;
  double _455;
  double _456;
  double _457;
  void* _458;
  void* _459;
  double _460;
  double _461;
  double _462;
  double _463;
  double _464;
  double _464__PHI_TEMPORARY;

  _395 = ((&((uint8_t*)_391)[((int64_t)128)]));
  _396__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _465;

  do {     /* Syntactic loop '' to make GCC happy */
_465:
  _396 = _396__PHI_TEMPORARY;
  _397 = *(double*)(((&((double*)_395)[((int64_t)_396)])));
  _398 = *(double*)(((&((double*)_391)[((int64_t)_396)])));
  if ((llvm_fcmp_oeq(_397, 0))) {
    _429__PHI_TEMPORARY = _398;   /* for PHI node */
    goto _466;
  } else {
    goto _467;
  }

_467:
  _399 = ((&(&_394)->array[((int64_t)_396)]));
  *(double*)_399 = (_398 / _397);
  *(double*)(((&((uint8_t*)_399)[((int64_t)8)]))) = (1 / _397);
  _400 = llvm_add_u64(_396, 1);
  if ((_400 == UINT64_C(16))) {
    goto _468;
  } else {
    _396__PHI_TEMPORARY = _400;   /* for PHI node */
    goto _465;
  }

  } while (1); /* end of syntactic loop '' */
_468:
  _401 = ((&((uint8_t*)(&_394))[((int64_t)8)]));
  _402__PHI_TEMPORARY = 14;   /* for PHI node */
  _403__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _469;

  do {     /* Syntactic loop '' to make GCC happy */
_469:
  _402 = _402__PHI_TEMPORARY;
  _403 = _403__PHI_TEMPORARY;
  _404 =  /*tail*/ llvm_OC_umax_OC_i64(_402, 1);
  if ((((uint64_t)_403) < ((uint64_t)UINT64_C(14)))) {
    goto _470;
  } else {
    goto _471;
  }

_470:
  _405 = ((uint32_t)_403);
  _406 = ((double)(uint32_t)_405);
  _407 = ((double)(uint32_t)(_405 << 1));
  _408 = *((double*)&_394);
  _409 = *(double*)_401;
  _415__PHI_TEMPORARY = _409;   /* for PHI node */
  _416__PHI_TEMPORARY = _408;   /* for PHI node */
  _417__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _472;

  do {     /* Syntactic loop '' to make GCC happy */
_472:
  _415 = _415__PHI_TEMPORARY;
  _416 = _416__PHI_TEMPORARY;
  _417 = _417__PHI_TEMPORARY;
  _418 = llvm_add_u64(_417, 1);
  _419 = ((double)(uint32_t)(llvm_add_u32((((uint32_t)_417)), 2)));
  _420 = _406 + _419;
  _421 = _407 + _419;
  _422 = ((_420 + -1) * (-(_420))) / (_421 * (_421 + -1));
  _423 = ((&(&_394)->array[((int64_t)_417)]));
  _424 = ((&(&_394)->array[((int64_t)_418)]));
  _425 = *(double*)_424;
  _426 = *(double*)(((&((uint8_t*)_424)[((int64_t)8)])));
  _427 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_416, _422, _425);
  _428 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_415, _422, _426);
  *(double*)_423 = _427;
  *(double*)(((&((uint8_t*)_423)[((int64_t)8)]))) = _428;
  if ((_418 == _404)) {
    goto _471;
  } else {
    _415__PHI_TEMPORARY = _426;   /* for PHI node */
    _416__PHI_TEMPORARY = _425;   /* for PHI node */
    _417__PHI_TEMPORARY = _418;   /* for PHI node */
    goto _472;
  }

  } while (1); /* end of syntactic loop '' */
_471:
  _413 = llvm_add_u64(_403, 1);
  _414 = llvm_add_u64(_402, -1);
  if ((_413 == UINT64_C(15))) {
    goto _473;
  } else {
    _402__PHI_TEMPORARY = _414;   /* for PHI node */
    _403__PHI_TEMPORARY = _413;   /* for PHI node */
    goto _469;
  }

  } while (1); /* end of syntactic loop '' */
_473:
  _410 = *((double*)&_394);
  _411 = *(double*)_401;
  _412 = _410 / _411;
  _429__PHI_TEMPORARY = _412;   /* for PHI node */
  goto _466;

_466:
  _429 = _429__PHI_TEMPORARY;
  *(double*)_389 = _429;
  _430 = ((&((uint8_t*)_392)[((int64_t)128)]));
  _431__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _474;

  do {     /* Syntactic loop '' to make GCC happy */
_474:
  _431 = _431__PHI_TEMPORARY;
  _432 = *(double*)(((&((double*)_430)[((int64_t)_431)])));
  _433 = *(double*)(((&((double*)_392)[((int64_t)_431)])));
  if ((llvm_fcmp_oeq(_432, 0))) {
    _464__PHI_TEMPORARY = _433;   /* for PHI node */
    goto _475;
  } else {
    goto _476;
  }

_476:
  _434 = ((&(&_393)->array[((int64_t)_431)]));
  *(double*)_434 = (_433 / _432);
  *(double*)(((&((uint8_t*)_434)[((int64_t)8)]))) = (1 / _432);
  _435 = llvm_add_u64(_431, 1);
  if ((_435 == UINT64_C(16))) {
    goto _477;
  } else {
    _431__PHI_TEMPORARY = _435;   /* for PHI node */
    goto _474;
  }

  } while (1); /* end of syntactic loop '' */
_477:
  _436 = ((&((uint8_t*)(&_393))[((int64_t)8)]));
  _437__PHI_TEMPORARY = 14;   /* for PHI node */
  _438__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _478;

  do {     /* Syntactic loop '' to make GCC happy */
_478:
  _437 = _437__PHI_TEMPORARY;
  _438 = _438__PHI_TEMPORARY;
  _439 =  /*tail*/ llvm_OC_umax_OC_i64(_437, 1);
  if ((((uint64_t)_438) < ((uint64_t)UINT64_C(14)))) {
    goto _479;
  } else {
    goto _480;
  }

_479:
  _440 = ((uint32_t)_438);
  _441 = ((double)(uint32_t)_440);
  _442 = ((double)(uint32_t)(_440 << 1));
  _443 = *((double*)&_393);
  _444 = *(double*)_436;
  _450__PHI_TEMPORARY = _444;   /* for PHI node */
  _451__PHI_TEMPORARY = _443;   /* for PHI node */
  _452__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _481;

  do {     /* Syntactic loop '' to make GCC happy */
_481:
  _450 = _450__PHI_TEMPORARY;
  _451 = _451__PHI_TEMPORARY;
  _452 = _452__PHI_TEMPORARY;
  _453 = llvm_add_u64(_452, 1);
  _454 = ((double)(uint32_t)(llvm_add_u32((((uint32_t)_452)), 2)));
  _455 = _441 + _454;
  _456 = _442 + _454;
  _457 = ((_455 + -1) * (-(_455))) / (_456 * (_456 + -1));
  _458 = ((&(&_393)->array[((int64_t)_452)]));
  _459 = ((&(&_393)->array[((int64_t)_453)]));
  _460 = *(double*)_459;
  _461 = *(double*)(((&((uint8_t*)_459)[((int64_t)8)])));
  _462 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_451, _457, _460);
  _463 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_450, _457, _461);
  *(double*)_458 = _462;
  *(double*)(((&((uint8_t*)_458)[((int64_t)8)]))) = _463;
  if ((_453 == _439)) {
    goto _480;
  } else {
    _450__PHI_TEMPORARY = _461;   /* for PHI node */
    _451__PHI_TEMPORARY = _460;   /* for PHI node */
    _452__PHI_TEMPORARY = _453;   /* for PHI node */
    goto _481;
  }

  } while (1); /* end of syntactic loop '' */
_480:
  _448 = llvm_add_u64(_438, 1);
  _449 = llvm_add_u64(_437, -1);
  if ((_448 == UINT64_C(15))) {
    goto _482;
  } else {
    _437__PHI_TEMPORARY = _449;   /* for PHI node */
    _438__PHI_TEMPORARY = _448;   /* for PHI node */
    goto _478;
  }

  } while (1); /* end of syntactic loop '' */
_482:
  _445 = *((double*)&_393);
  _446 = *(double*)_436;
  _447 = _445 / _446;
  _464__PHI_TEMPORARY = _447;   /* for PHI node */
  goto _475;

_475:
  _464 = _464__PHI_TEMPORARY;
  *(double*)_390 = _464;
}


double besselkx_levin(double _483, double _484) {
  double _485;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _486 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _487;
  double _488;
  double _489;
  double _490;
  double _491;
  uint64_t _492;
  uint64_t _492__PHI_TEMPORARY;
  double _493;
  double _493__PHI_TEMPORARY;
  double _494;
  double _494__PHI_TEMPORARY;
  double _495;
  double _496;
  uint64_t _497;
  double _498;

  _485 = 0;
  _487 = ((&((uint8_t*)(&_486))[((int64_t)128)]));
  _488 = (_483 * 4) * _483;
  _489 = _484 * 8;
  _492__PHI_TEMPORARY = 0;   /* for PHI node */
  _493__PHI_TEMPORARY = 0;   /* for PHI node */
  _494__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _499;

_500:
  levin((&_485), (&_486));
  _490 =  /*tail*/ sqrt((3.1415926535897931 / (_484 * 2)));
  _491 = _485;
  return (_490 * _491);
  do {     /* Syntactic loop '' to make GCC happy */
_499:
  _492 = _492__PHI_TEMPORARY;
  _493 = _493__PHI_TEMPORARY;
  _494 = _494__PHI_TEMPORARY;
  _495 = _493 + _494;
  _496 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_492)])));
  _497 = llvm_add_u64(_492, 1);
  _498 = _494 * ((_488 - _496) / (_489 * (((double)(uint32_t)(((uint32_t)_497))))));
  *(double*)(((&((double*)(&_486))[((int64_t)_492)]))) = _495;
  *(double*)(((&((double*)_487)[((int64_t)_492)]))) = _498;
  if ((_497 == UINT64_C(16))) {
    goto _500;
  } else {
    _492__PHI_TEMPORARY = _497;   /* for PHI node */
    _493__PHI_TEMPORARY = _495;   /* for PHI node */
    _494__PHI_TEMPORARY = _498;   /* for PHI node */
    goto _499;
  }

  } while (1); /* end of syntactic loop '' */
}


double f0_local_expansion(double _501, double _502) {
  __PREFIXALIGN__(16) struct l_array_5_double _503 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _504;
  double _505;
  uint64_t _506;
  uint64_t _506__PHI_TEMPORARY;
  double _507;
  double _507__PHI_TEMPORARY;
  double _508;
  double _509;
  uint64_t _510;
  uint64_t _510__PHI_TEMPORARY;
  double _511;
  double _511__PHI_TEMPORARY;
  double _512;
  double _513;
  uint64_t _514;
  uint64_t _514__PHI_TEMPORARY;
  double _515;
  double _515__PHI_TEMPORARY;
  double _516;
  double _517;
  double _518;
  double _519;
  double _520;
  void* _521;
  uint64_t _522;
  uint64_t _522__PHI_TEMPORARY;
  double _523;
  double _523__PHI_TEMPORARY;
  double _524;
  double _525;
  double _526;
  double _527;

  *((double*)&_503) = 1;
  *(double*)(((&((uint8_t*)(&_503))[((int64_t)8)]))) = 0.16666666666666666;
  *(double*)(((&((uint8_t*)(&_503))[((int64_t)16)]))) = 0.0083333333333333332;
  *(double*)(((&((uint8_t*)(&_503))[((int64_t)24)]))) = 1.9841269841269841E-4;
  *(double*)(((&((uint8_t*)(&_503))[((int64_t)32)]))) = 2.7557319223985893E-6;
  _504 =  /*tail*/ log(_502);
  _505 = _501 * _501;
  _506__PHI_TEMPORARY = 3;   /* for PHI node */
  _507__PHI_TEMPORARY = 1.9711021825948702;   /* for PHI node */
  goto _528;

  do {     /* Syntactic loop '' to make GCC happy */
_528:
  _506 = _506__PHI_TEMPORARY;
  _507 = _507__PHI_TEMPORARY;
  _508 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_spcoef))[((int64_t)-8)]))))[((int64_t)_506)])));
  _509 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_505, _507, _508);
  if ((((uint64_t)_506) > ((uint64_t)UINT64_C(1)))) {
    _506__PHI_TEMPORARY = (llvm_add_u64(_506, -1));   /* for PHI node */
    _507__PHI_TEMPORARY = _509;   /* for PHI node */
    goto _528;
  } else {
    _510__PHI_TEMPORARY = 2;   /* for PHI node */
    _511__PHI_TEMPORARY = 0.042197734555544306;   /* for PHI node */
    goto _529;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_529:
  _510 = _510__PHI_TEMPORARY;
  _511 = _511__PHI_TEMPORARY;
  _512 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_g1coef))[((int64_t)-8)]))))[((int64_t)_510)])));
  _513 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_505, _511, _512);
  if ((((uint64_t)_510) > ((uint64_t)UINT64_C(1)))) {
    _510__PHI_TEMPORARY = (llvm_add_u64(_510, -1));   /* for PHI node */
    _511__PHI_TEMPORARY = _513;   /* for PHI node */
    goto _529;
  } else {
    _514__PHI_TEMPORARY = 2;   /* for PHI node */
    _515__PHI_TEMPORARY = 0.16653861138229145;   /* for PHI node */
    goto _530;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_530:
  _514 = _514__PHI_TEMPORARY;
  _515 = _515__PHI_TEMPORARY;
  _516 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_g2coef))[((int64_t)-8)]))))[((int64_t)_514)])));
  _517 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_505, _515, _516);
  if ((((uint64_t)_514) > ((uint64_t)UINT64_C(1)))) {
    _514__PHI_TEMPORARY = (llvm_add_u64(_514, -1));   /* for PHI node */
    _515__PHI_TEMPORARY = _517;   /* for PHI node */
    goto _530;
  } else {
    goto _531;
  }

  } while (1); /* end of syntactic loop '' */
_531:
  _518 = 0.69314718055994529 - _504;
  _519 = _518 * _501;
  _520 = _519 * _519;
  _521 = ((&((uint8_t*)(&_503))[((int64_t)-8)]));
  _522__PHI_TEMPORARY = 4;   /* for PHI node */
  _523__PHI_TEMPORARY = 2.7557319223985893E-6;   /* for PHI node */
  goto _532;

  do {     /* Syntactic loop '' to make GCC happy */
_532:
  _522 = _522__PHI_TEMPORARY;
  _523 = _523__PHI_TEMPORARY;
  _524 = *(double*)(((&((double*)_521)[((int64_t)_522)])));
  _525 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_520, _523, _524);
  if ((((uint64_t)_522) > ((uint64_t)UINT64_C(1)))) {
    _522__PHI_TEMPORARY = (llvm_add_u64(_522, -1));   /* for PHI node */
    _523__PHI_TEMPORARY = _525;   /* for PHI node */
    goto _532;
  } else {
    goto _533;
  }

  } while (1); /* end of syntactic loop '' */
_533:
  _526 =  /*tail*/ cosh(_519);
  _527 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_513, _526, (_518 * (_517 * _525)));
  return (_509 * _527);
}


struct l_unnamed_1 besselk_temme_series(double _534, double _535) {
  __PREFIXALIGN__(16) struct l_array_5_double _536 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _537;    /* Address-exposed local */
  double _538;    /* Address-exposed local */
  double _539;    /* Address-exposed local */
  double _540;    /* Address-exposed local */
  double _541;
  double _542;
  uint64_t _543;
  uint64_t _543__PHI_TEMPORARY;
  double _544;
  double _544__PHI_TEMPORARY;
  double _545;
  double _546;
  double _547;
  uint64_t _548;
  uint64_t _548__PHI_TEMPORARY;
  double _549;
  double _549__PHI_TEMPORARY;
  double _550;
  double _551;
  uint64_t _552;
  uint64_t _552__PHI_TEMPORARY;
  double _553;
  double _553__PHI_TEMPORARY;
  double _554;
  double _555;
  double _556;
  double _557;
  double _558;
  void* _559;
  uint64_t _560;
  uint64_t _560__PHI_TEMPORARY;
  double _561;
  double _561__PHI_TEMPORARY;
  double _562;
  double _563;
  double _564;
  double _565;
  double _566;
  uint64_t _567;
  uint64_t _567__PHI_TEMPORARY;
  double _568;
  double _568__PHI_TEMPORARY;
  double _569;
  double _570;
  double _571;
  double _572;
  double _573;
  uint64_t _574;
  uint64_t _574__PHI_TEMPORARY;
  double _575;
  double _575__PHI_TEMPORARY;
  double _576;
  double _577;
  double _578;
  double _579;
  double _580;
  uint32_t _581;
  uint32_t _581__PHI_TEMPORARY;
  double _582;
  double _582__PHI_TEMPORARY;
  double _583;
  double _583__PHI_TEMPORARY;
  double _584;
  double _584__PHI_TEMPORARY;
  double _585;
  double _585__PHI_TEMPORARY;
  double _586;
  double _586__PHI_TEMPORARY;
  double _587;
  double _587__PHI_TEMPORARY;
  double _588;
  double _589;
  double _590;
  double _591;
  double _592;
  double _593;
  double _594;
  double _595;
  double _596;
  double _597;
  double _598;
  double _599;
  double _600;
  double _601;
  uint32_t _602;
  struct l_unnamed_1 _603;
  struct l_unnamed_1 _604;

  *((double*)&_536) = 1;
  *(double*)(((&((uint8_t*)(&_536))[((int64_t)8)]))) = 0.16666666666666666;
  *(double*)(((&((uint8_t*)(&_536))[((int64_t)16)]))) = 0.0083333333333333332;
  *(double*)(((&((uint8_t*)(&_536))[((int64_t)24)]))) = 1.9841269841269841E-4;
  *(double*)(((&((uint8_t*)(&_536))[((int64_t)32)]))) = 2.7557319223985893E-6;
  _541 =  /*tail*/ log(_535);
  _542 = _534 * _534;
  _543__PHI_TEMPORARY = 3;   /* for PHI node */
  _544__PHI_TEMPORARY = 1.9711021825948702;   /* for PHI node */
  goto _605;

  do {     /* Syntactic loop '' to make GCC happy */
_605:
  _543 = _543__PHI_TEMPORARY;
  _544 = _544__PHI_TEMPORARY;
  _545 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_spcoef))[((int64_t)-8)]))))[((int64_t)_543)])));
  _546 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_542, _544, _545);
  if ((((uint64_t)_543) > ((uint64_t)UINT64_C(1)))) {
    _543__PHI_TEMPORARY = (llvm_add_u64(_543, -1));   /* for PHI node */
    _544__PHI_TEMPORARY = _546;   /* for PHI node */
    goto _605;
  } else {
    goto _606;
  }

  } while (1); /* end of syntactic loop '' */
_606:
  _547 = _535 * 0.5;
  _548__PHI_TEMPORARY = 2;   /* for PHI node */
  _549__PHI_TEMPORARY = 0.042197734555544306;   /* for PHI node */
  goto _607;

  do {     /* Syntactic loop '' to make GCC happy */
_607:
  _548 = _548__PHI_TEMPORARY;
  _549 = _549__PHI_TEMPORARY;
  _550 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_g1coef))[((int64_t)-8)]))))[((int64_t)_548)])));
  _551 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_542, _549, _550);
  if ((((uint64_t)_548) > ((uint64_t)UINT64_C(1)))) {
    _548__PHI_TEMPORARY = (llvm_add_u64(_548, -1));   /* for PHI node */
    _549__PHI_TEMPORARY = _551;   /* for PHI node */
    goto _607;
  } else {
    _552__PHI_TEMPORARY = 2;   /* for PHI node */
    _553__PHI_TEMPORARY = 0.16653861138229145;   /* for PHI node */
    goto _608;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_608:
  _552 = _552__PHI_TEMPORARY;
  _553 = _553__PHI_TEMPORARY;
  _554 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_g2coef))[((int64_t)-8)]))))[((int64_t)_552)])));
  _555 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_542, _553, _554);
  if ((((uint64_t)_552) > ((uint64_t)UINT64_C(1)))) {
    _552__PHI_TEMPORARY = (llvm_add_u64(_552, -1));   /* for PHI node */
    _553__PHI_TEMPORARY = _555;   /* for PHI node */
    goto _608;
  } else {
    goto _609;
  }

  } while (1); /* end of syntactic loop '' */
_609:
  _556 = 0.69314718055994529 - _541;
  _557 = _556 * _534;
  _558 = _557 * _557;
  _559 = ((&((uint8_t*)(&_536))[((int64_t)-8)]));
  _560__PHI_TEMPORARY = 4;   /* for PHI node */
  _561__PHI_TEMPORARY = 2.7557319223985893E-6;   /* for PHI node */
  goto _610;

  do {     /* Syntactic loop '' to make GCC happy */
_610:
  _560 = _560__PHI_TEMPORARY;
  _561 = _561__PHI_TEMPORARY;
  _562 = *(double*)(((&((double*)_559)[((int64_t)_560)])));
  _563 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_558, _561, _562);
  if ((((uint64_t)_560) > ((uint64_t)UINT64_C(1)))) {
    _560__PHI_TEMPORARY = (llvm_add_u64(_560, -1));   /* for PHI node */
    _561__PHI_TEMPORARY = _563;   /* for PHI node */
    goto _610;
  } else {
    goto _611;
  }

  } while (1); /* end of syntactic loop '' */
_611:
  _564 = _547 * _547;
  _565 = _556 * (_555 * _563);
  _566 =  /*tail*/ pow(_547, _534);
  _567__PHI_TEMPORARY = 3;   /* for PHI node */
  _568__PHI_TEMPORARY = -0.23263776388631713;   /* for PHI node */
  goto _612;

  do {     /* Syntactic loop '' to make GCC happy */
_612:
  _567 = _567__PHI_TEMPORARY;
  _568 = _568__PHI_TEMPORARY;
  _569 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_besselk_temme_series_OC_pqkcoef))[((int64_t)-8)]))))[((int64_t)_567)])));
  _570 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_534, _568, _569);
  if ((((uint64_t)_567) > ((uint64_t)UINT64_C(1)))) {
    _567__PHI_TEMPORARY = (llvm_add_u64(_567, -1));   /* for PHI node */
    _568__PHI_TEMPORARY = _570;   /* for PHI node */
    goto _612;
  } else {
    goto _613;
  }

  } while (1); /* end of syntactic loop '' */
_613:
  _571 =  /*tail*/ cosh(_557);
  _572 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_551, _571, _565);
  _573 = -(_534);
  _574__PHI_TEMPORARY = 3;   /* for PHI node */
  _575__PHI_TEMPORARY = -0.23263776388631713;   /* for PHI node */
  goto _614;

  do {     /* Syntactic loop '' to make GCC happy */
_614:
  _574 = _574__PHI_TEMPORARY;
  _575 = _575__PHI_TEMPORARY;
  _576 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_besselk_temme_series_OC_pqkcoef))[((int64_t)-8)]))))[((int64_t)_574)])));
  _577 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_573, _575, _576);
  if ((((uint64_t)_574) > ((uint64_t)UINT64_C(1)))) {
    _574__PHI_TEMPORARY = (llvm_add_u64(_574, -1));   /* for PHI node */
    _575__PHI_TEMPORARY = _577;   /* for PHI node */
    goto _614;
  } else {
    goto _615;
  }

  } while (1); /* end of syntactic loop '' */
_615:
  _578 = _546 * _572;
  _579 = _570 / (_566 * 2);
  _580 = (_566 * _577) * 0.5;
  _581__PHI_TEMPORARY = 1;   /* for PHI node */
  _582__PHI_TEMPORARY = 0;   /* for PHI node */
  _583__PHI_TEMPORARY = 0;   /* for PHI node */
  _584__PHI_TEMPORARY = 1;   /* for PHI node */
  _585__PHI_TEMPORARY = _580;   /* for PHI node */
  _586__PHI_TEMPORARY = _579;   /* for PHI node */
  _587__PHI_TEMPORARY = _578;   /* for PHI node */
  goto _616;

  do {     /* Syntactic loop '' to make GCC happy */
_616:
  _581 = _581__PHI_TEMPORARY;
  _582 = _582__PHI_TEMPORARY;
  _583 = _583__PHI_TEMPORARY;
  _584 = _584__PHI_TEMPORARY;
  _585 = _585__PHI_TEMPORARY;
  _586 = _586__PHI_TEMPORARY;
  _587 = _587__PHI_TEMPORARY;
  _588 = _584 * _587;
  _537 = _588;
  _589 = llvm_OC_fmuladd_OC_f64((-((((double)(int32_t)(llvm_add_u32(_581, -1)))))), _587, _586);
  _590 = _584 * _589;
  _538 = _590;
  _591 = _583 + _588;
  _592 = _582 + _590;
  isconverged((&_537), (&_539));
  isconverged((&_538), (&_540));
  _593 = _539;
  _594 = _540;
  if ((llvm_select_bool((llvm_fcmp_olt(_593, 0)), (llvm_fcmp_olt(_594, 0)), 0))) {
    goto _617;
  } else {
    goto _618;
  }

_618:
  _595 = ((double)(uint32_t)_581);
  _596 = llvm_OC_fmuladd_OC_f64(_595, _587, _586);
  _597 = llvm_OC_fmuladd_OC_f64(_573, _534, (((double)(uint32_t)(llvm_mul_u32(_581, _581)))));
  _598 = (_585 + _596) / _597;
  _599 = _586 / (_595 - _534);
  _600 = _585 / (_595 + _534);
  _601 = (_564 / _595) * _584;
  _602 = llvm_add_u32(_581, 1);
  if ((_602 == 501u)) {
    goto _617;
  } else {
    _581__PHI_TEMPORARY = _602;   /* for PHI node */
    _582__PHI_TEMPORARY = _592;   /* for PHI node */
    _583__PHI_TEMPORARY = _591;   /* for PHI node */
    _584__PHI_TEMPORARY = _601;   /* for PHI node */
    _585__PHI_TEMPORARY = _600;   /* for PHI node */
    _586__PHI_TEMPORARY = _599;   /* for PHI node */
    _587__PHI_TEMPORARY = _598;   /* for PHI node */
    goto _616;
  }

  } while (1); /* end of syntactic loop '' */
_617:
  _603 = llvm_ctor_unnamed_1(0, 0);
  _603.field0 = _591;
  _604 = _603;
  _604.field1 = (_592 / _547);
  return _604;
}


double besselk(double _619, double _620) {
  double _621;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _622 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _623;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _624 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _625;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _626 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _627;    /* Address-exposed local */
  double _628;    /* Address-exposed local */
  double _629;
  double _630;
  double _631;
  double _632;
  double _633;
  double _634;
  double _635;
  double _636;
  double _637;
  double _638;
  double _639;
  double _640;
  double _641;
  double _642;
  double _643;
  double _644;
  double _645;
  uint32_t _646;
  uint32_t _646__PHI_TEMPORARY;
  double _647;
  double _647__PHI_TEMPORARY;
  uint32_t _648;
  double _649;
  double _650;
  double _651;
  double _652;
  double _653;
  uint32_t _654;
  double _655;
  double _656;
  double _657;
  void* _658;
  double _659;
  double _660;
  uint64_t _661;
  uint64_t _661__PHI_TEMPORARY;
  double _662;
  double _662__PHI_TEMPORARY;
  double _663;
  double _663__PHI_TEMPORARY;
  double _664;
  double _665;
  uint64_t _666;
  double _667;
  double _668;
  double _669;
  double _670;
  double _671;
  double _672;
  void* _673;
  double _674;
  double _675;
  uint64_t _676;
  uint64_t _676__PHI_TEMPORARY;
  double _677;
  double _677__PHI_TEMPORARY;
  double _678;
  double _678__PHI_TEMPORARY;
  double _679;
  double _680;
  uint64_t _681;
  double _682;
  double _683;
  double _684;
  double _685;
  double _686;
  void* _687;
  double _688;
  uint64_t _689;
  uint64_t _689__PHI_TEMPORARY;
  double _690;
  double _690__PHI_TEMPORARY;
  double _691;
  double _691__PHI_TEMPORARY;
  double _692;
  double _693;
  uint64_t _694;
  double _695;
  double _696;
  double _697;
  double _698;
  double _699;
  double _700;
  double _701;
  double _702;
  double _702__PHI_TEMPORARY;
  double _703;
  double _703__PHI_TEMPORARY;
  double _704;
  double _704__PHI_TEMPORARY;
  double _705;
  double _706;
  double _707;
  double _707__PHI_TEMPORARY;
  double _708;
  double _709;
  double _710;
  double _711;
  double _712;
  struct l_unnamed_1 _713;
  double _714;
  double _715;
  double _716;
  double _717;
  double _718;
  double _719;
  double _719__PHI_TEMPORARY;
  double _720;
  double _720__PHI_TEMPORARY;
  double _721;
  double _721__PHI_TEMPORARY;
  double _722;
  double _723;
  double _724;
  double _725;
  double _725__PHI_TEMPORARY;

  _629 =  /*tail*/ llvm_OC_fabs_OC_f64(_619);
  if ((llvm_fcmp_ugt(_620, 0))) {
    goto _726;
  } else {
    _725__PHI_TEMPORARY = (*(double*)&FPConstant2);   /* for PHI node */
    goto _727;
  }

_726:
  if (((llvm_fcmp_ogt(_629, 25)) | (llvm_fcmp_ogt(_620, 35)))) {
    goto _728;
  } else {
    goto _729;
  }

_728:
  _630 = _620 / _629;
  _631 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_630, _630, 1);
  _632 =  /*tail*/ llvm_OC_sqrt_OC_f64(_631);
  _633 =  /*tail*/ log(_630);
  _634 =  /*tail*/ log((_632 + 1));
  _635 =  /*tail*/ llvm_OC_sqrt_OC_f64((1 / _629));
  _636 =  /*tail*/ exp((((_632 + _633) - _634) * (-(_629))));
  _637 =  /*tail*/ llvm_OC_sqrt_OC_f64(_632);
  _638 = llvm_select_f64((llvm_fcmp_ole(_629, _620)), _620, _629);
  _639 = llvm_select_f64((llvm_fcmp_ole(_629, _620)), _629, _620);
  _640 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_638, _638, (_639 * _639));
  _641 =  /*tail*/ Uk_poly_Kn((1 / _632), _629, ((_619 * _619) / _640));
  _642 = _641 * (((_635 * 1.2533141373155001) * _636) / _637);
  _725__PHI_TEMPORARY = _642;   /* for PHI node */
  goto _727;

_729:
  if ((llvm_fcmp_olt((((_619 * _619) / 36) + 24), _620))) {
    goto _730;
  } else {
    goto _731;
  }

_730:
  _643 =  /*tail*/ exp((_620 * -0.5));
  _628 = 1;
  _644 = 1 / (_620 * 8);
  _645 = _629 * 4;
  _646__PHI_TEMPORARY = 1;   /* for PHI node */
  _647__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _732;

  do {     /* Syntactic loop '' to make GCC happy */
_732:
  _646 = _646__PHI_TEMPORARY;
  _647 = _647__PHI_TEMPORARY;
  _648 = llvm_add_u32((_646 << 1), -1);
  _649 = llvm_OC_fmuladd_OC_f64(_645, _629, (-((((double)(uint32_t)(llvm_mul_u32(_648, _648)))))));
  _650 = _628;
  _651 = _650 * (_644 * (_649 / (((double)(uint32_t)_646))));
  _628 = _651;
  _652 = _647 + _651;
  isconverged((&_628), (&_627));
  _653 = _627;
  _654 = llvm_add_u32(_646, 1);
  if ((llvm_select_bool((llvm_fcmp_olt(_653, 0)), 1, (_654 == 21u)))) {
    goto _733;
  } else {
    _646__PHI_TEMPORARY = _654;   /* for PHI node */
    _647__PHI_TEMPORARY = _652;   /* for PHI node */
    goto _732;
  }

  } while (1); /* end of syntactic loop '' */
_733:
  _655 = sqrt((3.1415926535897931 / (_620 * 2)));
  _656 = _643 * (_643 * (_652 * _655));
  _725__PHI_TEMPORARY = _656;   /* for PHI node */
  goto _727;

_731:
  _657 =  /*tail*/ llvm_OC_floor_OC_f64(_629);
  if ((llvm_fcmp_ogt(_620, 1.5))) {
    goto _734;
  } else {
    goto _735;
  }

_734:
  if ((llvm_fcmp_olt(_629, 2))) {
    goto _736;
  } else {
    goto _737;
  }

_736:
  _625 = 0;
  _658 = ((&((uint8_t*)(&_626))[((int64_t)128)]));
  _659 = _629 * (_629 * 4);
  _660 = _620 * 8;
  _661__PHI_TEMPORARY = 0;   /* for PHI node */
  _662__PHI_TEMPORARY = 0;   /* for PHI node */
  _663__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _738;

  do {     /* Syntactic loop '' to make GCC happy */
_738:
  _661 = _661__PHI_TEMPORARY;
  _662 = _662__PHI_TEMPORARY;
  _663 = _663__PHI_TEMPORARY;
  _664 = _662 + _663;
  _665 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_661)])));
  _666 = llvm_add_u64(_661, 1);
  _667 = _663 * ((_659 - _665) / (_660 * (((double)(uint32_t)(((uint32_t)_666))))));
  *(double*)(((&((double*)(&_626))[((int64_t)_661)]))) = _664;
  *(double*)(((&((double*)_658)[((int64_t)_661)]))) = _667;
  if ((_666 == UINT64_C(16))) {
    goto _739;
  } else {
    _661__PHI_TEMPORARY = _666;   /* for PHI node */
    _662__PHI_TEMPORARY = _664;   /* for PHI node */
    _663__PHI_TEMPORARY = _667;   /* for PHI node */
    goto _738;
  }

  } while (1); /* end of syntactic loop '' */
_739:
  levin((&_625), (&_626));
  _668 =  /*tail*/ sqrt((3.1415926535897931 / (_620 * 2)));
  _669 = _625;
  _670 =  /*tail*/ exp((-(_620)));
  _671 = (_668 * _669) * _670;
  _725__PHI_TEMPORARY = _671;   /* for PHI node */
  goto _727;

_737:
  _672 = _629 - _657;
  _623 = 0;
  _673 = ((&((uint8_t*)(&_624))[((int64_t)128)]));
  _674 = _672 * (_672 * 4);
  _675 = _620 * 8;
  _676__PHI_TEMPORARY = 0;   /* for PHI node */
  _677__PHI_TEMPORARY = 0;   /* for PHI node */
  _678__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _740;

  do {     /* Syntactic loop '' to make GCC happy */
_740:
  _676 = _676__PHI_TEMPORARY;
  _677 = _677__PHI_TEMPORARY;
  _678 = _678__PHI_TEMPORARY;
  _679 = _677 + _678;
  _680 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_676)])));
  _681 = llvm_add_u64(_676, 1);
  _682 = _678 * ((_674 - _680) / (_675 * (((double)(uint32_t)(((uint32_t)_681))))));
  *(double*)(((&((double*)(&_624))[((int64_t)_676)]))) = _679;
  *(double*)(((&((double*)_673)[((int64_t)_676)]))) = _682;
  if ((_681 == UINT64_C(16))) {
    goto _741;
  } else {
    _676__PHI_TEMPORARY = _681;   /* for PHI node */
    _677__PHI_TEMPORARY = _679;   /* for PHI node */
    _678__PHI_TEMPORARY = _682;   /* for PHI node */
    goto _740;
  }

  } while (1); /* end of syntactic loop '' */
_741:
  levin((&_623), (&_624));
  _683 = 3.1415926535897931 / (_620 * 2);
  _684 =  /*tail*/ sqrt(_683);
  _685 = _623;
  _686 = _672 + 1;
  _621 = 0;
  _687 = ((&((uint8_t*)(&_622))[((int64_t)128)]));
  _688 = _686 * (_686 * 4);
  _689__PHI_TEMPORARY = 0;   /* for PHI node */
  _690__PHI_TEMPORARY = 0;   /* for PHI node */
  _691__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _742;

  do {     /* Syntactic loop '' to make GCC happy */
_742:
  _689 = _689__PHI_TEMPORARY;
  _690 = _690__PHI_TEMPORARY;
  _691 = _691__PHI_TEMPORARY;
  _692 = _690 + _691;
  _693 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_689)])));
  _694 = llvm_add_u64(_689, 1);
  _695 = _691 * ((_688 - _693) / (_675 * (((double)(uint32_t)(((uint32_t)_694))))));
  *(double*)(((&((double*)(&_622))[((int64_t)_689)]))) = _692;
  *(double*)(((&((double*)_687)[((int64_t)_689)]))) = _695;
  if ((_694 == UINT64_C(16))) {
    goto _743;
  } else {
    _689__PHI_TEMPORARY = _694;   /* for PHI node */
    _690__PHI_TEMPORARY = _692;   /* for PHI node */
    _691__PHI_TEMPORARY = _695;   /* for PHI node */
    goto _742;
  }

  } while (1); /* end of syntactic loop '' */
_743:
  _696 = _684 * _685;
  levin((&_621), (&_622));
  _697 =  /*tail*/ sqrt(_683);
  _698 = _621;
  _699 = 2 / _620;
  _700 = _629 + 0.5;
  if ((llvm_fcmp_ogt(_700, _686))) {
    goto _744;
  } else {
    _707__PHI_TEMPORARY = _696;   /* for PHI node */
    goto _745;
  }

_744:
  _701 = _697 * _698;
  _702__PHI_TEMPORARY = _701;   /* for PHI node */
  _703__PHI_TEMPORARY = _696;   /* for PHI node */
  _704__PHI_TEMPORARY = _686;   /* for PHI node */
  goto _746;

  do {     /* Syntactic loop '' to make GCC happy */
_746:
  _702 = _702__PHI_TEMPORARY;
  _703 = _703__PHI_TEMPORARY;
  _704 = _704__PHI_TEMPORARY;
  _705 =  /*tail*/ llvm_OC_fmuladd_OC_f64((_699 * _704), _702, _703);
  _706 = _704 + 1;
  if ((llvm_fcmp_olt(_706, _700))) {
    _702__PHI_TEMPORARY = _705;   /* for PHI node */
    _703__PHI_TEMPORARY = _702;   /* for PHI node */
    _704__PHI_TEMPORARY = _706;   /* for PHI node */
    goto _746;
  } else {
    _707__PHI_TEMPORARY = _702;   /* for PHI node */
    goto _745;
  }

  } while (1); /* end of syntactic loop '' */
_745:
  _707 = _707__PHI_TEMPORARY;
  _708 =  /*tail*/ exp((-(_620)));
  _709 = _707 * _708;
  _725__PHI_TEMPORARY = _709;   /* for PHI node */
  goto _727;

_735:
  _710 = round(_629);
  _711 =  /*tail*/ llvm_OC_fabs_OC_f64((_629 - _710));
  if ((llvm_fcmp_olt(_711, 1.0000000000000001E-5))) {
    goto _747;
  } else {
    goto _748;
  }

_747:
  _712 = _629 - (llvm_select_f64((llvm_fcmp_ogt((_629 - _657), 0.5)), (_657 + -1), _657));
  _713 =  /*tail*/ besselk_temme_series(_712, _620);
  _714 = (_713.field0);
  _715 = _712 + 1;
  _716 = 2 / _620;
  _717 = _629 + 0.5;
  if ((llvm_fcmp_ogt(_717, _715))) {
    goto _749;
  } else {
    _725__PHI_TEMPORARY = _714;   /* for PHI node */
    goto _727;
  }

_749:
  _718 = (_713.field1);
  _719__PHI_TEMPORARY = _718;   /* for PHI node */
  _720__PHI_TEMPORARY = _714;   /* for PHI node */
  _721__PHI_TEMPORARY = _715;   /* for PHI node */
  goto _750;

  do {     /* Syntactic loop '' to make GCC happy */
_750:
  _719 = _719__PHI_TEMPORARY;
  _720 = _720__PHI_TEMPORARY;
  _721 = _721__PHI_TEMPORARY;
  _722 =  /*tail*/ llvm_OC_fmuladd_OC_f64((_716 * _721), _719, _720);
  _723 = _721 + 1;
  if ((llvm_fcmp_olt(_723, _717))) {
    _719__PHI_TEMPORARY = _722;   /* for PHI node */
    _720__PHI_TEMPORARY = _719;   /* for PHI node */
    _721__PHI_TEMPORARY = _723;   /* for PHI node */
    goto _750;
  } else {
    _725__PHI_TEMPORARY = _719;   /* for PHI node */
    goto _727;
  }

  } while (1); /* end of syntactic loop '' */
_748:
  _724 =  /*tail*/ besselk_power_series(_629, _620);
  _725__PHI_TEMPORARY = _724;   /* for PHI node */
  goto _727;

_727:
  _725 = _725__PHI_TEMPORARY;
  return _725;
}


double besselk_dv(double _751, double _752) {
  double _753;    /* Address-exposed local */
  double _754;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _755 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _756 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _757;    /* Address-exposed local */
  double _758;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _759 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _760 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _761;    /* Address-exposed local */
  double _762;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _763 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _764 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _765;    /* Address-exposed local */
  double _766;    /* Address-exposed local */
  double _767;    /* Address-exposed local */
  double _768;    /* Address-exposed local */
  void* _769;
  void* _770;
  void* _771;
  void* _772;
  void* _773;
  void* _774;
  double _775;
  double _776;
  double _777;
  double _778;
  double _779;
  double _780;
  double _781;
  double _782;
  double _783;
  double _784;
  double _785;
  double _786;
  double _787;
  double _788;
  double _789;
  double _790;
  double _791;
  double _792;
  double _793;
  double _794;
  double _795;
  double _796;
  double _797;
  double _798;
  double _799;
  struct l_unnamed_1 _800;
  double _801;
  double _802;
  double _803;
  double _804;
  double _805;
  double _806;
  double _806__PHI_TEMPORARY;
  double _807;
  double _807__PHI_TEMPORARY;
  double _808;
  double _808__PHI_TEMPORARY;
  uint32_t _809;
  uint32_t _809__PHI_TEMPORARY;
  uint32_t _810;
  uint32_t _811;
  double _812;
  double _813;
  double _814;
  double _815;
  double _816;
  double _817;
  double _818;
  double _819;
  double _820;
  double _821;
  void* _822;
  double _823;
  double _824;
  double _825;
  uint64_t _826;
  uint64_t _826__PHI_TEMPORARY;
  double _827;
  double _827__PHI_TEMPORARY;
  double _828;
  double _828__PHI_TEMPORARY;
  double _829;
  double _829__PHI_TEMPORARY;
  double _830;
  double _830__PHI_TEMPORARY;
  uint64_t _831;
  double _832;
  double _833;
  double _834;
  double _835;
  double _836;
  double _837;
  double _838;
  double _839;
  double _840;
  double _841;
  double _842;
  double _843;
  void* _844;
  double _845;
  double _846;
  double _847;
  double _848;
  double _849;
  uint64_t _850;
  uint64_t _850__PHI_TEMPORARY;
  double _851;
  double _851__PHI_TEMPORARY;
  double _852;
  double _852__PHI_TEMPORARY;
  double _853;
  double _853__PHI_TEMPORARY;
  double _854;
  double _854__PHI_TEMPORARY;
  uint64_t _855;
  double _856;
  double _857;
  double _858;
  double _859;
  double _860;
  double _861;
  double _862;
  double _863;
  double _864;
  double _865;
  double _866;
  double _867;
  void* _868;
  double _869;
  double _870;
  double _871;
  uint64_t _872;
  uint64_t _872__PHI_TEMPORARY;
  double _873;
  double _873__PHI_TEMPORARY;
  double _874;
  double _874__PHI_TEMPORARY;
  double _875;
  double _875__PHI_TEMPORARY;
  double _876;
  double _876__PHI_TEMPORARY;
  uint64_t _877;
  double _878;
  double _879;
  double _880;
  double _881;
  double _882;
  double _883;
  double _884;
  double _885;
  double _886;
  double _887;
  double _888;
  double _889;
  double _890;
  double _891;
  double _892;
  double _893;
  double _894;
  double _895;
  double _895__PHI_TEMPORARY;
  double _896;
  double _896__PHI_TEMPORARY;
  double _897;
  double _897__PHI_TEMPORARY;
  double _898;
  double _898__PHI_TEMPORARY;
  double _899;
  double _899__PHI_TEMPORARY;
  double _900;
  double _901;
  double _902;
  double _903;
  double _903__PHI_TEMPORARY;
  double _904;
  double _905;
  double _906;
  double _907;
  double _908;
  struct l_unnamed_2 _909;
  struct l_unnamed_1 _910;
  double _911;
  double _912;
  double _913;
  double _914;
  struct l_unnamed_1 _915;
  double _916;
  double _917;
  double _918;
  double _919;
  double _920;
  double _920__PHI_TEMPORARY;
  double _921;
  double _921__PHI_TEMPORARY;
  double _922;
  double _922__PHI_TEMPORARY;
  double _923;
  double _923__PHI_TEMPORARY;
  double _924;
  double _924__PHI_TEMPORARY;
  double _925;
  double _926;
  double _927;
  double _928;
  double _929;
  double _929__PHI_TEMPORARY;

  _769 = ((&((uint8_t*)(&_755))[((int64_t)128)]));
  _770 = memset((&_755), 0, 256);
  _771 = ((&((uint8_t*)(&_759))[((int64_t)128)]));
  _772 = memset((&_759), 0, 256);
  _773 = ((&((uint8_t*)(&_763))[((int64_t)128)]));
  _774 = memset((&_763), 0, 256);
  _775 =  /*tail*/ llvm_OC_fabs_OC_f64(_751);
  _776 = llvm_select_f64((llvm_fcmp_olt(_751, 0)), -1, 1);
  if ((llvm_fcmp_ugt(_752, 0))) {
    goto _930;
  } else {
    _929__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _931;
  }

_930:
  if (((llvm_fcmp_ogt(_775, 25)) | (llvm_fcmp_ogt(_752, 35)))) {
    goto _932;
  } else {
    goto _933;
  }

_932:
  _777 = _752 / _775;
  _778 = -(_776);
  _779 = _751 * _751;
  _780 = (_778 * _752) / _779;
  _781 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_777, _777, 1);
  _782 =  /*tail*/ llvm_OC_sqrt_OC_f64(_781);
  _783 = llvm_select_f64((llvm_fcmp_ueq(_781, 0)), 0, (((_777 * 2) * _780) / (_782 * 2)));
  _784 =  /*tail*/ log(_777);
  _785 = _782 + 1;
  _786 =  /*tail*/ log(_785);
  _787 = (_782 + _784) - _786;
  _788 = 1 / _775;
  _789 =  /*tail*/ llvm_OC_sqrt_OC_f64(_788);
  _790 = _779 * 2;
  _791 = _789 * 1.2533141373155001;
  _792 = _787 * (-(_775));
  _793 =  /*tail*/ exp(_792);
  _794 =  /*tail*/ exp(_792);
  _795 = _791 * _793;
  _796 =  /*tail*/ llvm_OC_sqrt_OC_f64(_782);
  _797 = llvm_select_f64((llvm_fcmp_ole(_775, _752)), _752, _775);
  _798 = llvm_select_f64((llvm_fcmp_ole(_775, _752)), _775, _752);
  _799 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_797, _797, (_798 * _798));
  _800 =  /*tail*/ fwddiffeUk_poly_Kn((1 / _782), ((-(_783)) / _781), _775, _776, (_779 / _799), ((((_751 * 2) * _799) - (_790 * (((llvm_select_f64((llvm_fcmp_ole(_775, _752)), 0, _776)) * _797) + ((llvm_select_f64((llvm_fcmp_ole(_775, _752)), _776, 0)) * _798)))) / (_799 * _799)));
  _801 = (((((((_794 * _791) * ((_787 * _778) - (((_783 + (_780 / _777)) - (_783 / _785)) * _775))) + (_793 * (llvm_select_f64((llvm_fcmp_ueq(_788, 0)), 0, ((_776 * -1.2533141373155001) / (_790 * _789)))))) * _796) - (_795 * (llvm_select_f64((llvm_fcmp_ueq(_782, 0)), 0, (_783 / (_796 * 2)))))) * ((_800.field0))) / _782) + (((_800.field1)) * (_795 / _796));
  _929__PHI_TEMPORARY = _801;   /* for PHI node */
  goto _931;

_933:
  if ((llvm_fcmp_olt((((_751 * _751) / 36) + 24), _752))) {
    goto _934;
  } else {
    goto _935;
  }

_934:
  _802 =  /*tail*/ exp((_752 * -0.5));
  _803 = 1 / (_752 * 8);
  _804 = _775 * 4;
  _805 = (_803 * _776) * (_775 * 8);
  _806__PHI_TEMPORARY = 1;   /* for PHI node */
  _807__PHI_TEMPORARY = 0;   /* for PHI node */
  _808__PHI_TEMPORARY = 0;   /* for PHI node */
  _809__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _936;

  do {     /* Syntactic loop '' to make GCC happy */
_936:
  _806 = _806__PHI_TEMPORARY;
  _807 = _807__PHI_TEMPORARY;
  _808 = _808__PHI_TEMPORARY;
  _809 = _809__PHI_TEMPORARY;
  _810 = llvm_add_u32(_809, 1);
  _811 = llvm_add_u32((_810 << 1), -1);
  _812 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_804, _775, (-((((double)(uint32_t)(llvm_mul_u32(_811, _811)))))));
  _813 = ((double)(uint32_t)_810);
  _814 = _803 * (_812 / _813);
  _815 = _806 * _814;
  _816 = (_814 * _807) + (((_805 * _813) * _806) / (_813 * _813));
  _767 = _816;
  _768 = _815;
  _817 = _816 + _808;
  fixderivative_isconverged((&_768), (&_767), (&_766), (&_765));
  _818 = _766;
  if ((llvm_select_bool((llvm_fcmp_olt(_818, 0)), 1, (_810 == 20u)))) {
    goto _937;
  } else {
    _806__PHI_TEMPORARY = _815;   /* for PHI node */
    _807__PHI_TEMPORARY = _816;   /* for PHI node */
    _808__PHI_TEMPORARY = _817;   /* for PHI node */
    _809__PHI_TEMPORARY = _810;   /* for PHI node */
    goto _936;
  }

  } while (1); /* end of syntactic loop '' */
_937:
  _819 =  /*tail*/ sqrt((3.1415926535897931 / (_752 * 2)));
  _820 = ((_802 * _802) * _817) * _819;
  _929__PHI_TEMPORARY = _820;   /* for PHI node */
  goto _931;

_935:
  _821 =  /*tail*/ llvm_OC_floor_OC_f64(_775);
  if ((llvm_fcmp_ogt(_752, 1.5))) {
    goto _938;
  } else {
    goto _939;
  }

_938:
  if ((llvm_fcmp_olt(_775, 2))) {
    goto _940;
  } else {
    goto _941;
  }

_940:
  _761 = 0;
  _822 = ((&((uint8_t*)(&_764))[((int64_t)128)]));
  _823 = _775 * (_775 * 4);
  _824 = (_775 * 8) * _776;
  _825 = _752 * 8;
  _826__PHI_TEMPORARY = 0;   /* for PHI node */
  _827__PHI_TEMPORARY = 0;   /* for PHI node */
  _828__PHI_TEMPORARY = 0;   /* for PHI node */
  _829__PHI_TEMPORARY = 0;   /* for PHI node */
  _830__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _942;

  do {     /* Syntactic loop '' to make GCC happy */
_942:
  _826 = _826__PHI_TEMPORARY;
  _827 = _827__PHI_TEMPORARY;
  _828 = _828__PHI_TEMPORARY;
  _829 = _829__PHI_TEMPORARY;
  _830 = _830__PHI_TEMPORARY;
  _831 = llvm_add_u64(_826, 1);
  _832 = _828 + _830;
  _833 = _829 + _827;
  _834 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_826)])));
  _835 = _825 * (((double)(uint32_t)(((uint32_t)_831))));
  _836 = (_823 - _834) / _835;
  _837 = _830 * _836;
  _838 = (_836 * _829) + (((_824 * _835) * _830) / (_835 * _835));
  *(double*)(((&((double*)(&_763))[((int64_t)_826)]))) = _833;
  *(double*)(((&((double*)(&_764))[((int64_t)_826)]))) = _832;
  *(double*)(((&((double*)_773)[((int64_t)_826)]))) = _838;
  *(double*)(((&((double*)_822)[((int64_t)_826)]))) = _837;
  if ((_831 == UINT64_C(16))) {
    goto _943;
  } else {
    _826__PHI_TEMPORARY = _831;   /* for PHI node */
    _827__PHI_TEMPORARY = _833;   /* for PHI node */
    _828__PHI_TEMPORARY = _832;   /* for PHI node */
    _829__PHI_TEMPORARY = _838;   /* for PHI node */
    _830__PHI_TEMPORARY = _837;   /* for PHI node */
    goto _942;
  }

  } while (1); /* end of syntactic loop '' */
_943:
  fixderivative_levin((&_762), (&_761), (&_764), (&_763));
  _839 =  /*tail*/ sqrt((3.1415926535897931 / (_752 * 2)));
  _840 = _761;
  _841 =  /*tail*/ exp((-(_752)));
  _842 = (_840 * _839) * _841;
  _929__PHI_TEMPORARY = _842;   /* for PHI node */
  goto _931;

_941:
  _843 = _775 - _821;
  _757 = 0;
  _758 = 0;
  _844 = ((&((uint8_t*)(&_760))[((int64_t)128)]));
  _845 = _843 * 4;
  _846 = _776 * 4;
  _847 = _843 * _845;
  _848 = (_845 * _776) + (_846 * _843);
  _849 = _752 * 8;
  _850__PHI_TEMPORARY = 0;   /* for PHI node */
  _851__PHI_TEMPORARY = 0;   /* for PHI node */
  _852__PHI_TEMPORARY = 0;   /* for PHI node */
  _853__PHI_TEMPORARY = 0;   /* for PHI node */
  _854__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _944;

  do {     /* Syntactic loop '' to make GCC happy */
_944:
  _850 = _850__PHI_TEMPORARY;
  _851 = _851__PHI_TEMPORARY;
  _852 = _852__PHI_TEMPORARY;
  _853 = _853__PHI_TEMPORARY;
  _854 = _854__PHI_TEMPORARY;
  _855 = llvm_add_u64(_850, 1);
  _856 = _852 + _854;
  _857 = _853 + _851;
  _858 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_850)])));
  _859 = _849 * (((double)(uint32_t)(((uint32_t)_855))));
  _860 = (_847 - _858) / _859;
  _861 = _854 * _860;
  _862 = (_860 * _853) + (((_859 * _848) * _854) / (_859 * _859));
  *(double*)(((&((double*)(&_759))[((int64_t)_850)]))) = _857;
  *(double*)(((&((double*)(&_760))[((int64_t)_850)]))) = _856;
  *(double*)(((&((double*)_771)[((int64_t)_850)]))) = _862;
  *(double*)(((&((double*)_844)[((int64_t)_850)]))) = _861;
  if ((_855 == UINT64_C(16))) {
    goto _945;
  } else {
    _850__PHI_TEMPORARY = _855;   /* for PHI node */
    _851__PHI_TEMPORARY = _857;   /* for PHI node */
    _852__PHI_TEMPORARY = _856;   /* for PHI node */
    _853__PHI_TEMPORARY = _862;   /* for PHI node */
    _854__PHI_TEMPORARY = _861;   /* for PHI node */
    goto _944;
  }

  } while (1); /* end of syntactic loop '' */
_945:
  fixderivative_levin((&_758), (&_757), (&_760), (&_759));
  _863 = 3.1415926535897931 / (_752 * 2);
  _864 =  /*tail*/ sqrt(_863);
  _865 = _757;
  _866 = _758;
  _867 = _843 + 1;
  _753 = 0;
  _754 = 0;
  _868 = ((&((uint8_t*)(&_756))[((int64_t)128)]));
  _869 = _867 * 4;
  _870 = _867 * _869;
  _871 = (_869 * _776) + (_867 * _846);
  _872__PHI_TEMPORARY = 0;   /* for PHI node */
  _873__PHI_TEMPORARY = 0;   /* for PHI node */
  _874__PHI_TEMPORARY = 0;   /* for PHI node */
  _875__PHI_TEMPORARY = 0;   /* for PHI node */
  _876__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _946;

  do {     /* Syntactic loop '' to make GCC happy */
_946:
  _872 = _872__PHI_TEMPORARY;
  _873 = _873__PHI_TEMPORARY;
  _874 = _874__PHI_TEMPORARY;
  _875 = _875__PHI_TEMPORARY;
  _876 = _876__PHI_TEMPORARY;
  _877 = llvm_add_u64(_872, 1);
  _878 = _874 + _876;
  _879 = _875 + _873;
  _880 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_872)])));
  _881 = _849 * (((double)(uint32_t)(((uint32_t)_877))));
  _882 = (_870 - _880) / _881;
  _883 = _876 * _882;
  _884 = (_882 * _875) + (((_881 * _871) * _876) / (_881 * _881));
  *(double*)(((&((double*)(&_755))[((int64_t)_872)]))) = _879;
  *(double*)(((&((double*)(&_756))[((int64_t)_872)]))) = _878;
  *(double*)(((&((double*)_769)[((int64_t)_872)]))) = _884;
  *(double*)(((&((double*)_868)[((int64_t)_872)]))) = _883;
  if ((_877 == UINT64_C(16))) {
    goto _947;
  } else {
    _872__PHI_TEMPORARY = _877;   /* for PHI node */
    _873__PHI_TEMPORARY = _879;   /* for PHI node */
    _874__PHI_TEMPORARY = _878;   /* for PHI node */
    _875__PHI_TEMPORARY = _884;   /* for PHI node */
    _876__PHI_TEMPORARY = _883;   /* for PHI node */
    goto _946;
  }

  } while (1); /* end of syntactic loop '' */
_947:
  _885 = _865 * _864;
  fixderivative_levin((&_754), (&_753), (&_756), (&_755));
  _886 =  /*tail*/ sqrt(_863);
  _887 = 2 / _752;
  _888 = _775 + 0.5;
  if ((llvm_fcmp_ogt(_888, _867))) {
    goto _948;
  } else {
    _903__PHI_TEMPORARY = _885;   /* for PHI node */
    goto _949;
  }

_948:
  _889 = _754;
  _890 = _753;
  _891 = _864 * _866;
  _892 = _886 * _889;
  _893 = _890 * _886;
  _894 = _776 * _887;
  _895__PHI_TEMPORARY = _893;   /* for PHI node */
  _896__PHI_TEMPORARY = _892;   /* for PHI node */
  _897__PHI_TEMPORARY = _885;   /* for PHI node */
  _898__PHI_TEMPORARY = _891;   /* for PHI node */
  _899__PHI_TEMPORARY = _867;   /* for PHI node */
  goto _950;

  do {     /* Syntactic loop '' to make GCC happy */
_950:
  _895 = _895__PHI_TEMPORARY;
  _896 = _896__PHI_TEMPORARY;
  _897 = _897__PHI_TEMPORARY;
  _898 = _898__PHI_TEMPORARY;
  _899 = _899__PHI_TEMPORARY;
  _900 = _887 * _899;
  _901 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_900, _896, _898);
  _902 = _899 + 1;
  if ((llvm_fcmp_olt(_902, _888))) {
    _895__PHI_TEMPORARY = ((_897 + (_894 * _896)) + (_900 * _895));   /* for PHI node */
    _896__PHI_TEMPORARY = _901;   /* for PHI node */
    _897__PHI_TEMPORARY = _895;   /* for PHI node */
    _898__PHI_TEMPORARY = _896;   /* for PHI node */
    _899__PHI_TEMPORARY = _902;   /* for PHI node */
    goto _950;
  } else {
    _903__PHI_TEMPORARY = _895;   /* for PHI node */
    goto _949;
  }

  } while (1); /* end of syntactic loop '' */
_949:
  _903 = _903__PHI_TEMPORARY;
  _904 =  /*tail*/ exp((-(_752)));
  _905 = _904 * _903;
  _929__PHI_TEMPORARY = _905;   /* for PHI node */
  goto _931;

_939:
  _906 = round(_775);
  _907 =  /*tail*/ llvm_OC_fabs_OC_f64((_775 - _906));
  if ((llvm_fcmp_olt(_907, 1.0000000000000001E-5))) {
    goto _951;
  } else {
    goto _952;
  }

_951:
  _908 = _775 - (llvm_select_f64((llvm_fcmp_ogt((_775 - _821), 0.5)), (_821 + -1), _821));
  _909 =  /*tail*/ fwddiffebesselk_temme_series(_908, _776, _752);
  _910 = (_909.field1);
  _911 = (_910.field0);
  _912 = _908 + 1;
  _913 = 2 / _752;
  _914 = _775 + 0.5;
  if ((llvm_fcmp_ogt(_914, _912))) {
    goto _953;
  } else {
    _929__PHI_TEMPORARY = _911;   /* for PHI node */
    goto _931;
  }

_953:
  _915 = (_909.field0);
  _916 = (_915.field0);
  _917 = (_915.field1);
  _918 = (_910.field1);
  _919 = _776 * _913;
  _920__PHI_TEMPORARY = _918;   /* for PHI node */
  _921__PHI_TEMPORARY = _917;   /* for PHI node */
  _922__PHI_TEMPORARY = _911;   /* for PHI node */
  _923__PHI_TEMPORARY = _916;   /* for PHI node */
  _924__PHI_TEMPORARY = _912;   /* for PHI node */
  goto _954;

  do {     /* Syntactic loop '' to make GCC happy */
_954:
  _920 = _920__PHI_TEMPORARY;
  _921 = _921__PHI_TEMPORARY;
  _922 = _922__PHI_TEMPORARY;
  _923 = _923__PHI_TEMPORARY;
  _924 = _924__PHI_TEMPORARY;
  _925 = _913 * _924;
  _926 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_925, _921, _923);
  _927 = _924 + 1;
  if ((llvm_fcmp_olt(_927, _914))) {
    _920__PHI_TEMPORARY = ((_922 + (_919 * _921)) + (_925 * _920));   /* for PHI node */
    _921__PHI_TEMPORARY = _926;   /* for PHI node */
    _922__PHI_TEMPORARY = _920;   /* for PHI node */
    _923__PHI_TEMPORARY = _921;   /* for PHI node */
    _924__PHI_TEMPORARY = _927;   /* for PHI node */
    goto _954;
  } else {
    _929__PHI_TEMPORARY = _920;   /* for PHI node */
    goto _931;
  }

  } while (1); /* end of syntactic loop '' */
_952:
  _928 =  /*tail*/ fwddiffebesselk_power_series(_775, _776, _752);
  _929__PHI_TEMPORARY = _928;   /* for PHI node */
  goto _931;

_931:
  _929 = _929__PHI_TEMPORARY;
  return _929;
}


double besselk_dx(double _955, double _956) {
  double _957;    /* Address-exposed local */
  double _958;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _959 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _960 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _961;    /* Address-exposed local */
  double _962;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _963 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _964 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _965;    /* Address-exposed local */
  double _966;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _967 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _968 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _969;    /* Address-exposed local */
  double _970;    /* Address-exposed local */
  double _971;    /* Address-exposed local */
  double _972;    /* Address-exposed local */
  void* _973;
  void* _974;
  void* _975;
  void* _976;
  void* _977;
  void* _978;
  double _979;
  double _980;
  double _981;
  double _982;
  double _983;
  double _984;
  double _985;
  double _986;
  double _987;
  double _988;
  double _989;
  double _990;
  double _991;
  double _992;
  double _993;
  double _994;
  double _995;
  double _996;
  double _997;
  double _998;
  double _999;
  struct l_unnamed_1 _1000;
  double _1001;
  double _1002;
  double _1003;
  double _1004;
  double _1005;
  double _1006;
  double _1007;
  double _1008;
  double _1009;
  double _1009__PHI_TEMPORARY;
  double _1010;
  double _1010__PHI_TEMPORARY;
  uint32_t _1011;
  uint32_t _1011__PHI_TEMPORARY;
  double _1012;
  double _1012__PHI_TEMPORARY;
  double _1013;
  double _1013__PHI_TEMPORARY;
  uint32_t _1014;
  uint32_t _1015;
  double _1016;
  double _1017;
  double _1018;
  double _1019;
  double _1020;
  double _1021;
  double _1022;
  double _1023;
  double _1024;
  double _1025;
  double _1026;
  double _1027;
  double _1028;
  double _1029;
  double _1030;
  double _1031;
  void* _1032;
  double _1033;
  double _1034;
  uint64_t _1035;
  uint64_t _1035__PHI_TEMPORARY;
  double _1036;
  double _1036__PHI_TEMPORARY;
  double _1037;
  double _1037__PHI_TEMPORARY;
  double _1038;
  double _1038__PHI_TEMPORARY;
  double _1039;
  double _1039__PHI_TEMPORARY;
  uint64_t _1040;
  double _1041;
  double _1042;
  double _1043;
  double _1044;
  double _1045;
  double _1046;
  double _1047;
  double _1048;
  double _1049;
  double _1050;
  double _1051;
  double _1052;
  double _1053;
  double _1054;
  double _1055;
  double _1056;
  double _1057;
  double _1058;
  double _1059;
  double _1060;
  void* _1061;
  double _1062;
  double _1063;
  uint64_t _1064;
  uint64_t _1064__PHI_TEMPORARY;
  double _1065;
  double _1065__PHI_TEMPORARY;
  double _1066;
  double _1066__PHI_TEMPORARY;
  double _1067;
  double _1067__PHI_TEMPORARY;
  double _1068;
  double _1068__PHI_TEMPORARY;
  uint64_t _1069;
  double _1070;
  double _1071;
  double _1072;
  double _1073;
  double _1074;
  double _1075;
  double _1076;
  double _1077;
  double _1078;
  double _1079;
  double _1080;
  double _1081;
  double _1082;
  double _1083;
  double _1084;
  double _1085;
  double _1086;
  void* _1087;
  double _1088;
  uint64_t _1089;
  uint64_t _1089__PHI_TEMPORARY;
  double _1090;
  double _1090__PHI_TEMPORARY;
  double _1091;
  double _1091__PHI_TEMPORARY;
  double _1092;
  double _1092__PHI_TEMPORARY;
  double _1093;
  double _1093__PHI_TEMPORARY;
  uint64_t _1094;
  double _1095;
  double _1096;
  double _1097;
  double _1098;
  double _1099;
  double _1100;
  double _1101;
  double _1102;
  double _1103;
  double _1104;
  double _1105;
  double _1106;
  double _1107;
  double _1108;
  double _1109;
  double _1110;
  double _1111;
  double _1112;
  double _1113;
  double _1114;
  double _1115;
  double _1115__PHI_TEMPORARY;
  double _1116;
  double _1116__PHI_TEMPORARY;
  double _1117;
  double _1117__PHI_TEMPORARY;
  double _1118;
  double _1118__PHI_TEMPORARY;
  double _1119;
  double _1119__PHI_TEMPORARY;
  double _1120;
  double _1121;
  double _1122;
  double _1123;
  double _1123__PHI_TEMPORARY;
  double _1124;
  double _1124__PHI_TEMPORARY;
  double _1125;
  double _1126;
  double _1127;
  double _1128;
  double _1129;
  double _1130;
  double _1131;
  struct l_unnamed_2 _1132;
  struct l_unnamed_1 _1133;
  double _1134;
  double _1135;
  double _1136;
  double _1137;
  struct l_unnamed_1 _1138;
  double _1139;
  double _1140;
  double _1141;
  double _1142;
  double _1143;
  double _1143__PHI_TEMPORARY;
  double _1144;
  double _1144__PHI_TEMPORARY;
  double _1145;
  double _1145__PHI_TEMPORARY;
  double _1146;
  double _1146__PHI_TEMPORARY;
  double _1147;
  double _1147__PHI_TEMPORARY;
  double _1148;
  double _1149;
  double _1150;
  double _1151;
  double _1152;
  double _1152__PHI_TEMPORARY;

  _973 = ((&((uint8_t*)(&_959))[((int64_t)128)]));
  _974 = memset((&_959), 0, 256);
  _975 = ((&((uint8_t*)(&_963))[((int64_t)128)]));
  _976 = memset((&_963), 0, 256);
  _977 = ((&((uint8_t*)(&_967))[((int64_t)128)]));
  _978 = memset((&_967), 0, 256);
  _979 =  /*tail*/ llvm_OC_fabs_OC_f64(_955);
  if ((llvm_fcmp_ugt(_956, 0))) {
    goto _1153;
  } else {
    _1152__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1154;
  }

_1153:
  if (((llvm_fcmp_ogt(_979, 25)) | (llvm_fcmp_ogt(_956, 35)))) {
    goto _1155;
  } else {
    goto _1156;
  }

_1155:
  _980 = _956 / _979;
  _981 = _955 * _955;
  _982 = _979 / _981;
  _983 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_980, _980, 1);
  _984 =  /*tail*/ llvm_OC_sqrt_OC_f64(_983);
  _985 = llvm_select_f64((llvm_fcmp_ueq(_983, 0)), 0, (((_980 * 2) * _982) / (_984 * 2)));
  _986 =  /*tail*/ log(_980);
  _987 = _984 + 1;
  _988 =  /*tail*/ log(_987);
  _989 =  /*tail*/ llvm_OC_sqrt_OC_f64((1 / _979));
  _990 = _989 * 1.2533141373155001;
  _991 = -(_979);
  _992 = ((_984 + _986) - _988) * _991;
  _993 =  /*tail*/ exp(_992);
  _994 =  /*tail*/ exp(_992);
  _995 = _990 * _993;
  _996 =  /*tail*/ llvm_OC_sqrt_OC_f64(_984);
  _997 = llvm_select_f64((llvm_fcmp_ole(_979, _956)), _956, _979);
  _998 = llvm_select_f64((llvm_fcmp_ole(_979, _956)), _979, _956);
  _999 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_997, _997, (_998 * _998));
  _1000 =  /*tail*/ fwddiffeUk_poly_Kn_OC_3((1 / _984), ((-(_985)) / _983), _979, (_981 / _999), (((_981 * -2) * _956) / (_999 * _999)));
  _1001 = (((((((_990 * _991) * _996) * ((_985 + (_982 / _980)) - (_985 / _987))) * _994) - (_995 * (llvm_select_f64((llvm_fcmp_ueq(_984, 0)), 0, (_985 / (_996 * 2)))))) * ((_1000.field0))) / _984) + (((_1000.field1)) * (_995 / _996));
  _1152__PHI_TEMPORARY = _1001;   /* for PHI node */
  goto _1154;

_1156:
  if ((llvm_fcmp_olt((((_955 * _955) / 36) + 24), _956))) {
    goto _1157;
  } else {
    goto _1158;
  }

_1157:
  _1002 = _956 * -0.5;
  _1003 =  /*tail*/ exp(_1002);
  _1004 =  /*tail*/ exp(_1002);
  _1005 = _956 * 8;
  _1006 = 1 / _1005;
  _1007 = _979 * 4;
  _1008 = 1 / (_1005 * _1005);
  _1009__PHI_TEMPORARY = 1;   /* for PHI node */
  _1010__PHI_TEMPORARY = 0;   /* for PHI node */
  _1011__PHI_TEMPORARY = 0;   /* for PHI node */
  _1012__PHI_TEMPORARY = 0;   /* for PHI node */
  _1013__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1159;

  do {     /* Syntactic loop '' to make GCC happy */
_1159:
  _1009 = _1009__PHI_TEMPORARY;
  _1010 = _1010__PHI_TEMPORARY;
  _1011 = _1011__PHI_TEMPORARY;
  _1012 = _1012__PHI_TEMPORARY;
  _1013 = _1013__PHI_TEMPORARY;
  _1014 = llvm_add_u32(_1011, 1);
  _1015 = llvm_add_u32((_1014 << 1), -1);
  _1016 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1007, _979, (-((((double)(uint32_t)(llvm_mul_u32(_1015, _1015)))))));
  _1017 = _1016 / (((double)(uint32_t)_1014));
  _1018 = _1006 * _1017;
  _1019 = _1009 * _1018;
  _1020 = (_1018 * _1010) - (((_1009 * 8) * _1017) * _1008);
  _971 = _1020;
  _972 = _1019;
  _1021 = _1013 + _1019;
  _1022 = _1020 + _1012;
  fixderivative_isconverged((&_972), (&_971), (&_970), (&_969));
  _1023 = _970;
  if ((llvm_select_bool((llvm_fcmp_olt(_1023, 0)), 1, (_1014 == 20u)))) {
    goto _1160;
  } else {
    _1009__PHI_TEMPORARY = _1019;   /* for PHI node */
    _1010__PHI_TEMPORARY = _1020;   /* for PHI node */
    _1011__PHI_TEMPORARY = _1014;   /* for PHI node */
    _1012__PHI_TEMPORARY = _1022;   /* for PHI node */
    _1013__PHI_TEMPORARY = _1021;   /* for PHI node */
    goto _1159;
  }

  } while (1); /* end of syntactic loop '' */
_1160:
  _1024 = _1004 * -0.5;
  _1025 = _956 * 2;
  _1026 = 3.1415926535897931 / _1025;
  _1027 =  /*tail*/ sqrt(_1026);
  _1028 =  /*tail*/ sqrt(_1026);
  _1029 = _1021 * _1027;
  _1030 = ((((((llvm_select_f64((llvm_fcmp_ueq(_1026, 0)), 0, (-6.2831853071795862 / (((_956 * 4) * _1025) * _1028)))) * _1021) + (_1027 * _1022)) * _1003) + (_1029 * _1024)) * _1003) + ((_1003 * _1029) * _1024);
  _1152__PHI_TEMPORARY = _1030;   /* for PHI node */
  goto _1154;

_1158:
  _1031 =  /*tail*/ llvm_OC_floor_OC_f64(_979);
  if ((llvm_fcmp_ogt(_956, 1.5))) {
    goto _1161;
  } else {
    goto _1162;
  }

_1161:
  if ((llvm_fcmp_olt(_979, 2))) {
    goto _1163;
  } else {
    goto _1164;
  }

_1163:
  _965 = 0;
  _966 = 0;
  _1032 = ((&((uint8_t*)(&_968))[((int64_t)128)]));
  _1033 = _979 * (_979 * 4);
  _1034 = _956 * 8;
  _1035__PHI_TEMPORARY = 0;   /* for PHI node */
  _1036__PHI_TEMPORARY = 0;   /* for PHI node */
  _1037__PHI_TEMPORARY = 0;   /* for PHI node */
  _1038__PHI_TEMPORARY = 0;   /* for PHI node */
  _1039__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1165;

  do {     /* Syntactic loop '' to make GCC happy */
_1165:
  _1035 = _1035__PHI_TEMPORARY;
  _1036 = _1036__PHI_TEMPORARY;
  _1037 = _1037__PHI_TEMPORARY;
  _1038 = _1038__PHI_TEMPORARY;
  _1039 = _1039__PHI_TEMPORARY;
  _1040 = llvm_add_u64(_1035, 1);
  _1041 = _1037 + _1039;
  _1042 = _1038 + _1036;
  _1043 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1035)])));
  _1044 = _1033 - _1043;
  _1045 = ((double)(uint32_t)(((uint32_t)_1040)));
  _1046 = _1034 * _1045;
  _1047 = _1044 / _1046;
  _1048 = _1039 * _1047;
  _1049 = (_1047 * _1038) - ((((_1045 * 8) * _1039) * _1044) / (_1046 * _1046));
  *(double*)(((&((double*)(&_967))[((int64_t)_1035)]))) = _1042;
  *(double*)(((&((double*)(&_968))[((int64_t)_1035)]))) = _1041;
  *(double*)(((&((double*)_977)[((int64_t)_1035)]))) = _1049;
  *(double*)(((&((double*)_1032)[((int64_t)_1035)]))) = _1048;
  if ((_1040 == UINT64_C(16))) {
    goto _1166;
  } else {
    _1035__PHI_TEMPORARY = _1040;   /* for PHI node */
    _1036__PHI_TEMPORARY = _1042;   /* for PHI node */
    _1037__PHI_TEMPORARY = _1041;   /* for PHI node */
    _1038__PHI_TEMPORARY = _1049;   /* for PHI node */
    _1039__PHI_TEMPORARY = _1048;   /* for PHI node */
    goto _1165;
  }

  } while (1); /* end of syntactic loop '' */
_1166:
  fixderivative_levin((&_966), (&_965), (&_968), (&_967));
  _1050 = _956 * 2;
  _1051 = 3.1415926535897931 / _1050;
  _1052 =  /*tail*/ sqrt(_1051);
  _1053 =  /*tail*/ sqrt(_1051);
  _1054 = _965;
  _1055 = _966;
  _1056 = -(_956);
  _1057 =  /*tail*/ exp(_1056);
  _1058 =  /*tail*/ exp(_1056);
  _1059 = ((((llvm_select_f64((llvm_fcmp_ueq(_1051, 0)), 0, (-6.2831853071795862 / (((_956 * 4) * _1050) * _1053)))) * _1055) + (_1054 * _1052)) * _1057) - (_1058 * (_1052 * _1055));
  _1152__PHI_TEMPORARY = _1059;   /* for PHI node */
  goto _1154;

_1164:
  _1060 = _979 - _1031;
  _961 = 0;
  _962 = 0;
  _1061 = ((&((uint8_t*)(&_964))[((int64_t)128)]));
  _1062 = _1060 * (_1060 * 4);
  _1063 = _956 * 8;
  _1064__PHI_TEMPORARY = 0;   /* for PHI node */
  _1065__PHI_TEMPORARY = 0;   /* for PHI node */
  _1066__PHI_TEMPORARY = 0;   /* for PHI node */
  _1067__PHI_TEMPORARY = 0;   /* for PHI node */
  _1068__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1167;

  do {     /* Syntactic loop '' to make GCC happy */
_1167:
  _1064 = _1064__PHI_TEMPORARY;
  _1065 = _1065__PHI_TEMPORARY;
  _1066 = _1066__PHI_TEMPORARY;
  _1067 = _1067__PHI_TEMPORARY;
  _1068 = _1068__PHI_TEMPORARY;
  _1069 = llvm_add_u64(_1064, 1);
  _1070 = _1066 + _1068;
  _1071 = _1067 + _1065;
  _1072 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1064)])));
  _1073 = _1062 - _1072;
  _1074 = ((double)(uint32_t)(((uint32_t)_1069)));
  _1075 = _1063 * _1074;
  _1076 = _1073 / _1075;
  _1077 = _1068 * _1076;
  _1078 = (_1076 * _1067) - ((((_1074 * 8) * _1068) * _1073) / (_1075 * _1075));
  *(double*)(((&((double*)(&_963))[((int64_t)_1064)]))) = _1071;
  *(double*)(((&((double*)(&_964))[((int64_t)_1064)]))) = _1070;
  *(double*)(((&((double*)_975)[((int64_t)_1064)]))) = _1078;
  *(double*)(((&((double*)_1061)[((int64_t)_1064)]))) = _1077;
  if ((_1069 == UINT64_C(16))) {
    goto _1168;
  } else {
    _1064__PHI_TEMPORARY = _1069;   /* for PHI node */
    _1065__PHI_TEMPORARY = _1071;   /* for PHI node */
    _1066__PHI_TEMPORARY = _1070;   /* for PHI node */
    _1067__PHI_TEMPORARY = _1078;   /* for PHI node */
    _1068__PHI_TEMPORARY = _1077;   /* for PHI node */
    goto _1167;
  }

  } while (1); /* end of syntactic loop '' */
_1168:
  fixderivative_levin((&_962), (&_961), (&_964), (&_963));
  _1079 = _956 * 2;
  _1080 = 3.1415926535897931 / _1079;
  _1081 =  /*tail*/ sqrt(_1080);
  _1082 =  /*tail*/ sqrt(_1080);
  _1083 = -6.2831853071795862 / (((_956 * 4) * _1079) * _1082);
  _1084 = _961;
  _1085 = _962;
  _1086 = _1060 + 1;
  _957 = 0;
  _958 = 0;
  _1087 = ((&((uint8_t*)(&_960))[((int64_t)128)]));
  _1088 = _1086 * (_1086 * 4);
  _1089__PHI_TEMPORARY = 0;   /* for PHI node */
  _1090__PHI_TEMPORARY = 0;   /* for PHI node */
  _1091__PHI_TEMPORARY = 0;   /* for PHI node */
  _1092__PHI_TEMPORARY = 0;   /* for PHI node */
  _1093__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1169;

  do {     /* Syntactic loop '' to make GCC happy */
_1169:
  _1089 = _1089__PHI_TEMPORARY;
  _1090 = _1090__PHI_TEMPORARY;
  _1091 = _1091__PHI_TEMPORARY;
  _1092 = _1092__PHI_TEMPORARY;
  _1093 = _1093__PHI_TEMPORARY;
  _1094 = llvm_add_u64(_1089, 1);
  _1095 = _1091 + _1093;
  _1096 = _1092 + _1090;
  _1097 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1089)])));
  _1098 = _1088 - _1097;
  _1099 = ((double)(uint32_t)(((uint32_t)_1094)));
  _1100 = _1063 * _1099;
  _1101 = _1098 / _1100;
  _1102 = _1093 * _1101;
  _1103 = (_1101 * _1092) - ((((_1099 * 8) * _1093) * _1098) / (_1100 * _1100));
  *(double*)(((&((double*)(&_959))[((int64_t)_1089)]))) = _1096;
  *(double*)(((&((double*)(&_960))[((int64_t)_1089)]))) = _1095;
  *(double*)(((&((double*)_973)[((int64_t)_1089)]))) = _1103;
  *(double*)(((&((double*)_1087)[((int64_t)_1089)]))) = _1102;
  if ((_1094 == UINT64_C(16))) {
    goto _1170;
  } else {
    _1089__PHI_TEMPORARY = _1094;   /* for PHI node */
    _1090__PHI_TEMPORARY = _1096;   /* for PHI node */
    _1091__PHI_TEMPORARY = _1095;   /* for PHI node */
    _1092__PHI_TEMPORARY = _1103;   /* for PHI node */
    _1093__PHI_TEMPORARY = _1102;   /* for PHI node */
    goto _1169;
  }

  } while (1); /* end of syntactic loop '' */
_1170:
  _1104 = llvm_select_f64((llvm_fcmp_ueq(_1080, 0)), 0, _1083);
  _1105 = _1081 * _1085;
  _1106 = (_1104 * _1085) + (_1084 * _1081);
  fixderivative_levin((&_958), (&_957), (&_960), (&_959));
  _1107 =  /*tail*/ sqrt(_1080);
  _1108 = 2 / _956;
  _1109 = _979 + 0.5;
  if ((llvm_fcmp_ogt(_1109, _1086))) {
    goto _1171;
  } else {
    _1123__PHI_TEMPORARY = _1106;   /* for PHI node */
    _1124__PHI_TEMPORARY = _1105;   /* for PHI node */
    goto _1172;
  }

_1171:
  _1110 = _958;
  _1111 = _957;
  _1112 = _1107 * _1110;
  _1113 = (_1111 * _1107) + (_1110 * _1104);
  _1114 = 1 / (_956 * _956);
  _1115__PHI_TEMPORARY = _1113;   /* for PHI node */
  _1116__PHI_TEMPORARY = _1112;   /* for PHI node */
  _1117__PHI_TEMPORARY = _1106;   /* for PHI node */
  _1118__PHI_TEMPORARY = _1105;   /* for PHI node */
  _1119__PHI_TEMPORARY = _1086;   /* for PHI node */
  goto _1173;

  do {     /* Syntactic loop '' to make GCC happy */
_1173:
  _1115 = _1115__PHI_TEMPORARY;
  _1116 = _1116__PHI_TEMPORARY;
  _1117 = _1117__PHI_TEMPORARY;
  _1118 = _1118__PHI_TEMPORARY;
  _1119 = _1119__PHI_TEMPORARY;
  _1120 = _1108 * _1119;
  _1121 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1120, _1116, _1118);
  _1122 = _1119 + 1;
  if ((llvm_fcmp_olt(_1122, _1109))) {
    _1115__PHI_TEMPORARY = (((_1120 * _1115) + _1117) + (((_1116 * -2) * _1119) * _1114));   /* for PHI node */
    _1116__PHI_TEMPORARY = _1121;   /* for PHI node */
    _1117__PHI_TEMPORARY = _1115;   /* for PHI node */
    _1118__PHI_TEMPORARY = _1116;   /* for PHI node */
    _1119__PHI_TEMPORARY = _1122;   /* for PHI node */
    goto _1173;
  } else {
    _1123__PHI_TEMPORARY = _1115;   /* for PHI node */
    _1124__PHI_TEMPORARY = _1116;   /* for PHI node */
    goto _1172;
  }

  } while (1); /* end of syntactic loop '' */
_1172:
  _1123 = _1123__PHI_TEMPORARY;
  _1124 = _1124__PHI_TEMPORARY;
  _1125 = -(_956);
  _1126 =  /*tail*/ exp(_1125);
  _1127 =  /*tail*/ exp(_1125);
  _1128 = (_1126 * _1123) - (_1127 * _1124);
  _1152__PHI_TEMPORARY = _1128;   /* for PHI node */
  goto _1154;

_1162:
  _1129 = round(_979);
  _1130 =  /*tail*/ llvm_OC_fabs_OC_f64((_979 - _1129));
  if ((llvm_fcmp_olt(_1130, 1.0000000000000001E-5))) {
    goto _1174;
  } else {
    goto _1175;
  }

_1174:
  _1131 = _979 - (llvm_select_f64((llvm_fcmp_ogt((_979 - _1031), 0.5)), (_1031 + -1), _1031));
  _1132 =  /*tail*/ fwddiffebesselk_temme_series_OC_4(_1131, _956, 1);
  _1133 = (_1132.field1);
  _1134 = (_1133.field0);
  _1135 = _1131 + 1;
  _1136 = 2 / _956;
  _1137 = _979 + 0.5;
  if ((llvm_fcmp_ogt(_1137, _1135))) {
    goto _1176;
  } else {
    _1152__PHI_TEMPORARY = _1134;   /* for PHI node */
    goto _1154;
  }

_1176:
  _1138 = (_1132.field0);
  _1139 = (_1138.field0);
  _1140 = (_1138.field1);
  _1141 = (_1133.field1);
  _1142 = 1 / (_956 * _956);
  _1143__PHI_TEMPORARY = _1141;   /* for PHI node */
  _1144__PHI_TEMPORARY = _1140;   /* for PHI node */
  _1145__PHI_TEMPORARY = _1134;   /* for PHI node */
  _1146__PHI_TEMPORARY = _1139;   /* for PHI node */
  _1147__PHI_TEMPORARY = _1135;   /* for PHI node */
  goto _1177;

  do {     /* Syntactic loop '' to make GCC happy */
_1177:
  _1143 = _1143__PHI_TEMPORARY;
  _1144 = _1144__PHI_TEMPORARY;
  _1145 = _1145__PHI_TEMPORARY;
  _1146 = _1146__PHI_TEMPORARY;
  _1147 = _1147__PHI_TEMPORARY;
  _1148 = _1136 * _1147;
  _1149 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1148, _1144, _1146);
  _1150 = _1147 + 1;
  if ((llvm_fcmp_olt(_1150, _1137))) {
    _1143__PHI_TEMPORARY = (((_1148 * _1143) + _1145) + (((_1144 * -2) * _1147) * _1142));   /* for PHI node */
    _1144__PHI_TEMPORARY = _1149;   /* for PHI node */
    _1145__PHI_TEMPORARY = _1143;   /* for PHI node */
    _1146__PHI_TEMPORARY = _1144;   /* for PHI node */
    _1147__PHI_TEMPORARY = _1150;   /* for PHI node */
    goto _1177;
  } else {
    _1152__PHI_TEMPORARY = _1143;   /* for PHI node */
    goto _1154;
  }

  } while (1); /* end of syntactic loop '' */
_1175:
  _1151 =  /*tail*/ fwddiffebesselk_power_series_OC_5(_979, _956);
  _1152__PHI_TEMPORARY = _1151;   /* for PHI node */
  goto _1154;

_1154:
  _1152 = _1152__PHI_TEMPORARY;
  return _1152;
}


double matern(double _1178, double _1179, double _1180, double _1181) {
  double _1182;
  double _1183;
  double _1184;
  double _1185;
  double _1186;
  double _1187;
  double _1188;
  double _1189;
  double _1190;
  double _1190__PHI_TEMPORARY;

  if ((llvm_fcmp_oeq(_1178, 0))) {
    goto _1191;
  } else {
    goto _1192;
  }

_1191:
  _1182 = _1179 * _1179;
  _1190__PHI_TEMPORARY = _1182;   /* for PHI node */
  goto _1193;

_1192:
  _1183 =  /*tail*/ sqrt((_1181 * 2));
  _1184 = (_1183 * _1178) / _1180;
  _1185 =  /*tail*/ exp2((1 - _1181));
  _1186 =  /*tail*/ gamma(_1181);
  _1187 =  /*tail*/ pow(_1184, _1181);
  _1188 =  /*tail*/ besselk(_1181, _1184);
  _1189 = ((((_1179 * _1179) * _1185) / _1186) * _1187) * _1188;
  _1190__PHI_TEMPORARY = _1189;   /* for PHI node */
  goto _1193;

_1193:
  _1190 = _1190__PHI_TEMPORARY;
  return _1190;
}


double matern_dsig(double _1194, double _1195, double _1196, double _1197) {
  double _1198;
  double _1199;
  double _1200;
  double _1201;
  double _1202;
  double _1203;
  double _1204;
  double _1205;
  double _1206;
  double _1206__PHI_TEMPORARY;

  if ((llvm_fcmp_oeq(_1194, 0))) {
    goto _1207;
  } else {
    goto _1208;
  }

_1207:
  _1198 = _1195 * 2;
  _1206__PHI_TEMPORARY = _1198;   /* for PHI node */
  goto _1209;

_1208:
  _1199 =  /*tail*/ sqrt((_1197 * 2));
  _1200 = (_1199 * _1194) / _1196;
  _1201 =  /*tail*/ exp2((1 - _1197));
  _1202 =  /*tail*/ gamma(_1197);
  _1203 =  /*tail*/ pow(_1200, _1197);
  _1204 =  /*tail*/ besselk(_1197, _1200);
  _1205 = (((((_1195 * 2) * _1201) * _1202) * _1203) * _1204) / (_1202 * _1202);
  _1206__PHI_TEMPORARY = _1205;   /* for PHI node */
  goto _1209;

_1209:
  _1206 = _1206__PHI_TEMPORARY;
  return _1206;
}


double matern_drho(double _1210, double _1211, double _1212, double _1213) {
  double _1214;
  double _1215;
  double _1216;
  double _1217;
  double _1218;
  double _1219;
  double _1220;
  double _1221;
  double _1222;
  struct l_unnamed_1 _1223;
  double _1224;
  double _1225;
  double _1225__PHI_TEMPORARY;

  if ((llvm_fcmp_oeq(_1210, 0))) {
    _1225__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1226;
  } else {
    goto _1227;
  }

_1227:
  _1214 =  /*tail*/ sqrt((_1213 * 2));
  _1215 = _1214 * _1210;
  _1216 = _1215 / _1212;
  _1217 = (-(_1215)) / (_1212 * _1212);
  _1218 =  /*tail*/ exp2((1 - _1213));
  _1219 =  /*tail*/ gamma(_1213);
  _1220 = ((_1211 * _1211) * _1218) / _1219;
  _1221 =  /*tail*/ pow(_1216, _1213);
  _1222 =  /*tail*/ pow(_1216, (_1213 + -1));
  _1223 =  /*tail*/ fwddiffebesselk_OC_7(_1213, _1216, _1217);
  _1224 = ((((_1217 * _1213) * _1220) * _1222) * ((_1223.field0))) + (((_1223.field1)) * (_1220 * _1221));
  _1225__PHI_TEMPORARY = _1224;   /* for PHI node */
  goto _1226;

_1226:
  _1225 = _1225__PHI_TEMPORARY;
  return _1225;
}


double matern_dnu(double _1228, double _1229, double _1230, double _1231) {
  double _1232;
  double _1233;
  double _1234;
  double _1235;
  double _1236;
  double _1237;
  double _1238;
  double _1239;
  double _1240;
  double _1241;
  struct l_unnamed_1 _1242;
  double _1243;
  double _1244;
  double _1245;
  double _1246;
  double _1247;
  double _1248;
  struct l_unnamed_1 _1249;
  double _1250;
  double _1251;
  double _1251__PHI_TEMPORARY;

  if ((llvm_fcmp_oeq(_1228, 0))) {
    _1251__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1252;
  } else {
    goto _1253;
  }

_1253:
  _1232 = _1231 * 2;
  _1233 =  /*tail*/ sqrt(_1232);
  _1234 =  /*tail*/ sqrt(_1232);
  _1235 = (_1233 * _1228) / _1230;
  _1236 = ((_1230 * _1228) * (llvm_select_f64((llvm_fcmp_ueq(_1232, 0)), 0, (1 / _1234)))) / (_1230 * _1230);
  _1237 = _1229 * _1229;
  _1238 = 1 - _1231;
  _1239 =  /*tail*/ exp2(_1238);
  _1240 =  /*tail*/ exp2(_1238);
  _1241 = _1237 * _1239;
  _1242 =  /*tail*/ fwddiffegamma(_1231, 1);
  _1243 = (_1242.field0);
  _1244 = _1241 / _1243;
  _1245 =  /*tail*/ pow(_1235, _1231);
  _1246 =  /*tail*/ pow(_1235, (_1231 + -1));
  _1247 =  /*tail*/ pow(_1235, _1231);
  _1248 = log(_1235);
  _1249 =  /*tail*/ fwddiffebesselk_OC_10(_1231, _1235, _1236);
  _1250 = ((((((_1246 * _1231) * _1236) + (_1247 * _1248)) * _1244) + ((((((_1237 * -0.69314718055994529) * _1240) * _1243) - (((_1242.field1)) * _1241)) * _1245) / (_1243 * _1243))) * ((_1249.field0))) + (((_1249.field1)) * (_1245 * _1244));
  _1251__PHI_TEMPORARY = _1250;   /* for PHI node */
  goto _1252;

_1252:
  _1251 = _1251__PHI_TEMPORARY;
  return _1251;
}


void besselk_buf(void* _1254, void* _1255, void* _1256, void* _1257) {
  uint32_t _1258;
  uint64_t _1259;
  uint64_t _1259__PHI_TEMPORARY;
  double _1260;
  double _1261;
  double _1262;
  uint64_t _1263;
  uint32_t _1264;

  _1258 = *(uint32_t*)_1255;
  if ((((int32_t)_1258) > ((int32_t)0u))) {
    _1259__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1265;
  } else {
    goto _1266;
  }

_1266:
  return;
  do {     /* Syntactic loop '' to make GCC happy */
_1265:
  _1259 = _1259__PHI_TEMPORARY;
  _1260 = *(double*)(((&((double*)_1256)[((int64_t)_1259)])));
  _1261 = *(double*)(((&((double*)_1257)[((int64_t)_1259)])));
  _1262 =  /*tail*/ besselk(_1260, _1261);
  *(double*)(((&((double*)_1254)[((int64_t)_1259)]))) = _1262;
  _1263 = llvm_add_u64(_1259, 1);
  _1264 = *(uint32_t*)_1255;
  if ((((int64_t)_1263) < ((int64_t)(((int64_t)(int32_t)_1264))))) {
    _1259__PHI_TEMPORARY = _1263;   /* for PHI node */
    goto _1265;
  } else {
    goto _1266;
  }

  } while (1); /* end of syntactic loop '' */
}


void besselk_dv_buf(void* _1267, void* _1268, void* _1269, void* _1270) {
  double _1271;    /* Address-exposed local */
  double _1272;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1273 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1274 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1275;    /* Address-exposed local */
  double _1276;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1277 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1278 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1279;    /* Address-exposed local */
  double _1280;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1281 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1282 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1283;    /* Address-exposed local */
  double _1284;    /* Address-exposed local */
  double _1285;    /* Address-exposed local */
  double _1286;    /* Address-exposed local */
  uint32_t _1287;
  void* _1288;
  void* _1289;
  void* _1290;
  void* _1291;
  void* _1292;
  void* _1293;
  uint64_t _1294;
  uint64_t _1294__PHI_TEMPORARY;
  double _1295;
  double _1296;
  void* _1297;
  void* _1298;
  void* _1299;
  double _1300;
  double _1301;
  double _1302;
  double _1303;
  double _1304;
  double _1305;
  double _1306;
  double _1307;
  double _1308;
  double _1309;
  double _1310;
  double _1311;
  double _1312;
  double _1313;
  double _1314;
  double _1315;
  double _1316;
  double _1317;
  double _1318;
  double _1319;
  double _1320;
  double _1321;
  double _1322;
  double _1323;
  double _1324;
  struct l_unnamed_1 _1325;
  double _1326;
  double _1327;
  double _1328;
  double _1329;
  double _1330;
  double _1331;
  double _1331__PHI_TEMPORARY;
  double _1332;
  double _1332__PHI_TEMPORARY;
  double _1333;
  double _1333__PHI_TEMPORARY;
  uint32_t _1334;
  uint32_t _1334__PHI_TEMPORARY;
  uint32_t _1335;
  uint32_t _1336;
  double _1337;
  double _1338;
  double _1339;
  double _1340;
  double _1341;
  double _1342;
  double _1343;
  double _1344;
  double _1345;
  double _1346;
  double _1347;
  double _1348;
  double _1349;
  uint64_t _1350;
  uint64_t _1350__PHI_TEMPORARY;
  double _1351;
  double _1351__PHI_TEMPORARY;
  double _1352;
  double _1352__PHI_TEMPORARY;
  double _1353;
  double _1353__PHI_TEMPORARY;
  double _1354;
  double _1354__PHI_TEMPORARY;
  uint64_t _1355;
  double _1356;
  double _1357;
  double _1358;
  double _1359;
  double _1360;
  double _1361;
  double _1362;
  double _1363;
  double _1364;
  double _1365;
  double _1366;
  double _1367;
  double _1368;
  double _1369;
  double _1370;
  double _1371;
  double _1372;
  uint64_t _1373;
  uint64_t _1373__PHI_TEMPORARY;
  double _1374;
  double _1374__PHI_TEMPORARY;
  double _1375;
  double _1375__PHI_TEMPORARY;
  double _1376;
  double _1376__PHI_TEMPORARY;
  double _1377;
  double _1377__PHI_TEMPORARY;
  uint64_t _1378;
  double _1379;
  double _1380;
  double _1381;
  double _1382;
  double _1383;
  double _1384;
  double _1385;
  double _1386;
  double _1387;
  double _1388;
  double _1389;
  double _1390;
  double _1391;
  double _1392;
  double _1393;
  uint64_t _1394;
  uint64_t _1394__PHI_TEMPORARY;
  double _1395;
  double _1395__PHI_TEMPORARY;
  double _1396;
  double _1396__PHI_TEMPORARY;
  double _1397;
  double _1397__PHI_TEMPORARY;
  double _1398;
  double _1398__PHI_TEMPORARY;
  uint64_t _1399;
  double _1400;
  double _1401;
  double _1402;
  double _1403;
  double _1404;
  double _1405;
  double _1406;
  double _1407;
  double _1408;
  double _1409;
  double _1410;
  double _1411;
  double _1412;
  double _1413;
  double _1414;
  double _1415;
  double _1416;
  double _1417;
  double _1417__PHI_TEMPORARY;
  double _1418;
  double _1418__PHI_TEMPORARY;
  double _1419;
  double _1419__PHI_TEMPORARY;
  double _1420;
  double _1420__PHI_TEMPORARY;
  double _1421;
  double _1421__PHI_TEMPORARY;
  double _1422;
  double _1423;
  double _1424;
  double _1425;
  double _1425__PHI_TEMPORARY;
  double _1426;
  double _1427;
  double _1428;
  double _1429;
  double _1430;
  struct l_unnamed_2 _1431;
  struct l_unnamed_1 _1432;
  double _1433;
  double _1434;
  double _1435;
  double _1436;
  struct l_unnamed_1 _1437;
  double _1438;
  double _1439;
  double _1440;
  double _1441;
  double _1442;
  double _1442__PHI_TEMPORARY;
  double _1443;
  double _1443__PHI_TEMPORARY;
  double _1444;
  double _1444__PHI_TEMPORARY;
  double _1445;
  double _1445__PHI_TEMPORARY;
  double _1446;
  double _1446__PHI_TEMPORARY;
  double _1447;
  double _1448;
  double _1449;
  double _1450;
  double _1451;
  double _1451__PHI_TEMPORARY;
  uint64_t _1452;
  uint32_t _1453;

  _1287 = *(uint32_t*)_1268;
  if ((((int32_t)_1287) > ((int32_t)0u))) {
    goto _1454;
  } else {
    goto _1455;
  }

_1454:
  _1288 = ((&((uint8_t*)(&_1273))[((int64_t)128)]));
  _1289 = ((&((uint8_t*)(&_1277))[((int64_t)128)]));
  _1290 = ((&((uint8_t*)(&_1281))[((int64_t)128)]));
  _1291 = ((&((uint8_t*)(&_1278))[((int64_t)128)]));
  _1292 = ((&((uint8_t*)(&_1274))[((int64_t)128)]));
  _1293 = ((&((uint8_t*)(&_1282))[((int64_t)128)]));
  _1294__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1456;

_1455:
  return;
  do {     /* Syntactic loop '' to make GCC happy */
_1456:
  _1294 = _1294__PHI_TEMPORARY;
  _1295 = *(double*)(((&((double*)_1269)[((int64_t)_1294)])));
  _1296 = *(double*)(((&((double*)_1270)[((int64_t)_1294)])));
  _1297 = memset((&_1273), 0, 256);
  _1298 = memset((&_1277), 0, 256);
  _1299 = memset((&_1281), 0, 256);
  _1300 =  /*tail*/ llvm_OC_fabs_OC_f64(_1295);
  _1301 = llvm_select_f64((llvm_fcmp_olt(_1295, 0)), -1, 1);
  if ((llvm_fcmp_ugt(_1296, 0))) {
    goto _1457;
  } else {
    _1451__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1458;
  }

_1457:
  if (((llvm_fcmp_ogt(_1300, 25)) | (llvm_fcmp_ogt(_1296, 35)))) {
    goto _1459;
  } else {
    goto _1460;
  }

_1460:
  if ((llvm_fcmp_olt((((_1295 * _1295) / 36) + 24), _1296))) {
    goto _1461;
  } else {
    goto _1462;
  }

_1462:
  _1346 =  /*tail*/ llvm_OC_floor_OC_f64(_1300);
  if ((llvm_fcmp_ogt(_1296, 1.5))) {
    goto _1463;
  } else {
    goto _1464;
  }

_1464:
  _1428 = round(_1300);
  _1429 =  /*tail*/ llvm_OC_fabs_OC_f64((_1300 - _1428));
  if ((llvm_fcmp_olt(_1429, 1.0000000000000001E-5))) {
    goto _1465;
  } else {
    goto _1466;
  }

_1466:
  _1450 =  /*tail*/ fwddiffebesselk_power_series(_1300, _1301, _1296);
  _1451__PHI_TEMPORARY = _1450;   /* for PHI node */
  goto _1458;

_1465:
  _1430 = _1300 - (llvm_select_f64((llvm_fcmp_ogt((_1300 - _1346), 0.5)), (_1346 + -1), _1346));
  _1431 =  /*tail*/ fwddiffebesselk_temme_series(_1430, _1301, _1296);
  _1432 = (_1431.field1);
  _1433 = (_1432.field0);
  _1434 = _1430 + 1;
  _1435 = 2 / _1296;
  _1436 = _1300 + 0.5;
  if ((llvm_fcmp_ogt(_1436, _1434))) {
    goto _1467;
  } else {
    _1451__PHI_TEMPORARY = _1433;   /* for PHI node */
    goto _1458;
  }

_1467:
  _1437 = (_1431.field0);
  _1438 = (_1437.field0);
  _1439 = (_1437.field1);
  _1440 = (_1432.field1);
  _1441 = _1301 * _1435;
  _1442__PHI_TEMPORARY = _1440;   /* for PHI node */
  _1443__PHI_TEMPORARY = _1439;   /* for PHI node */
  _1444__PHI_TEMPORARY = _1433;   /* for PHI node */
  _1445__PHI_TEMPORARY = _1438;   /* for PHI node */
  _1446__PHI_TEMPORARY = _1434;   /* for PHI node */
  goto _1468;

  do {     /* Syntactic loop '' to make GCC happy */
_1468:
  _1442 = _1442__PHI_TEMPORARY;
  _1443 = _1443__PHI_TEMPORARY;
  _1444 = _1444__PHI_TEMPORARY;
  _1445 = _1445__PHI_TEMPORARY;
  _1446 = _1446__PHI_TEMPORARY;
  _1447 = _1435 * _1446;
  _1448 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1447, _1443, _1445);
  _1449 = _1446 + 1;
  if ((llvm_fcmp_olt(_1449, _1436))) {
    _1442__PHI_TEMPORARY = ((_1444 + (_1441 * _1443)) + (_1447 * _1442));   /* for PHI node */
    _1443__PHI_TEMPORARY = _1448;   /* for PHI node */
    _1444__PHI_TEMPORARY = _1442;   /* for PHI node */
    _1445__PHI_TEMPORARY = _1443;   /* for PHI node */
    _1446__PHI_TEMPORARY = _1449;   /* for PHI node */
    goto _1468;
  } else {
    _1451__PHI_TEMPORARY = _1442;   /* for PHI node */
    goto _1458;
  }

  } while (1); /* end of syntactic loop '' */
_1463:
  if ((llvm_fcmp_olt(_1300, 2))) {
    goto _1469;
  } else {
    goto _1470;
  }

_1470:
  _1367 = _1300 - _1346;
  _1275 = 0;
  _1276 = 0;
  _1368 = _1367 * 4;
  _1369 = _1301 * 4;
  _1370 = _1367 * _1368;
  _1371 = (_1368 * _1301) + (_1369 * _1367);
  _1372 = _1296 * 8;
  _1373__PHI_TEMPORARY = 0;   /* for PHI node */
  _1374__PHI_TEMPORARY = 0;   /* for PHI node */
  _1375__PHI_TEMPORARY = 0;   /* for PHI node */
  _1376__PHI_TEMPORARY = 0;   /* for PHI node */
  _1377__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1471;

  do {     /* Syntactic loop '' to make GCC happy */
_1471:
  _1373 = _1373__PHI_TEMPORARY;
  _1374 = _1374__PHI_TEMPORARY;
  _1375 = _1375__PHI_TEMPORARY;
  _1376 = _1376__PHI_TEMPORARY;
  _1377 = _1377__PHI_TEMPORARY;
  _1378 = llvm_add_u64(_1373, 1);
  _1379 = _1375 + _1377;
  _1380 = _1376 + _1374;
  _1381 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1373)])));
  _1382 = _1372 * (((double)(uint32_t)(((uint32_t)_1378))));
  _1383 = (_1370 - _1381) / _1382;
  _1384 = _1377 * _1383;
  _1385 = (_1383 * _1376) + (((_1382 * _1371) * _1377) / (_1382 * _1382));
  *(double*)(((&((double*)(&_1277))[((int64_t)_1373)]))) = _1380;
  *(double*)(((&((double*)(&_1278))[((int64_t)_1373)]))) = _1379;
  *(double*)(((&((double*)_1289)[((int64_t)_1373)]))) = _1385;
  *(double*)(((&((double*)_1291)[((int64_t)_1373)]))) = _1384;
  if ((_1378 == UINT64_C(16))) {
    goto _1472;
  } else {
    _1373__PHI_TEMPORARY = _1378;   /* for PHI node */
    _1374__PHI_TEMPORARY = _1380;   /* for PHI node */
    _1375__PHI_TEMPORARY = _1379;   /* for PHI node */
    _1376__PHI_TEMPORARY = _1385;   /* for PHI node */
    _1377__PHI_TEMPORARY = _1384;   /* for PHI node */
    goto _1471;
  }

  } while (1); /* end of syntactic loop '' */
_1472:
  fixderivative_levin((&_1276), (&_1275), (&_1278), (&_1277));
  _1386 = 3.1415926535897931 / (_1296 * 2);
  _1387 =  /*tail*/ sqrt(_1386);
  _1388 = _1275;
  _1389 = _1276;
  _1390 = _1367 + 1;
  _1271 = 0;
  _1272 = 0;
  _1391 = _1390 * 4;
  _1392 = _1390 * _1391;
  _1393 = (_1391 * _1301) + (_1390 * _1369);
  _1394__PHI_TEMPORARY = 0;   /* for PHI node */
  _1395__PHI_TEMPORARY = 0;   /* for PHI node */
  _1396__PHI_TEMPORARY = 0;   /* for PHI node */
  _1397__PHI_TEMPORARY = 0;   /* for PHI node */
  _1398__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1473;

  do {     /* Syntactic loop '' to make GCC happy */
_1473:
  _1394 = _1394__PHI_TEMPORARY;
  _1395 = _1395__PHI_TEMPORARY;
  _1396 = _1396__PHI_TEMPORARY;
  _1397 = _1397__PHI_TEMPORARY;
  _1398 = _1398__PHI_TEMPORARY;
  _1399 = llvm_add_u64(_1394, 1);
  _1400 = _1396 + _1398;
  _1401 = _1397 + _1395;
  _1402 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1394)])));
  _1403 = _1372 * (((double)(uint32_t)(((uint32_t)_1399))));
  _1404 = (_1392 - _1402) / _1403;
  _1405 = _1398 * _1404;
  _1406 = (_1404 * _1397) + (((_1403 * _1393) * _1398) / (_1403 * _1403));
  *(double*)(((&((double*)(&_1273))[((int64_t)_1394)]))) = _1401;
  *(double*)(((&((double*)(&_1274))[((int64_t)_1394)]))) = _1400;
  *(double*)(((&((double*)_1288)[((int64_t)_1394)]))) = _1406;
  *(double*)(((&((double*)_1292)[((int64_t)_1394)]))) = _1405;
  if ((_1399 == UINT64_C(16))) {
    goto _1474;
  } else {
    _1394__PHI_TEMPORARY = _1399;   /* for PHI node */
    _1395__PHI_TEMPORARY = _1401;   /* for PHI node */
    _1396__PHI_TEMPORARY = _1400;   /* for PHI node */
    _1397__PHI_TEMPORARY = _1406;   /* for PHI node */
    _1398__PHI_TEMPORARY = _1405;   /* for PHI node */
    goto _1473;
  }

  } while (1); /* end of syntactic loop '' */
_1474:
  _1407 = _1388 * _1387;
  fixderivative_levin((&_1272), (&_1271), (&_1274), (&_1273));
  _1408 =  /*tail*/ sqrt(_1386);
  _1409 = 2 / _1296;
  _1410 = _1300 + 0.5;
  if ((llvm_fcmp_ogt(_1410, _1390))) {
    goto _1475;
  } else {
    _1425__PHI_TEMPORARY = _1407;   /* for PHI node */
    goto _1476;
  }

_1475:
  _1411 = _1272;
  _1412 = _1271;
  _1413 = _1387 * _1389;
  _1414 = _1408 * _1411;
  _1415 = _1412 * _1408;
  _1416 = _1301 * _1409;
  _1417__PHI_TEMPORARY = _1415;   /* for PHI node */
  _1418__PHI_TEMPORARY = _1414;   /* for PHI node */
  _1419__PHI_TEMPORARY = _1407;   /* for PHI node */
  _1420__PHI_TEMPORARY = _1413;   /* for PHI node */
  _1421__PHI_TEMPORARY = _1390;   /* for PHI node */
  goto _1477;

  do {     /* Syntactic loop '' to make GCC happy */
_1477:
  _1417 = _1417__PHI_TEMPORARY;
  _1418 = _1418__PHI_TEMPORARY;
  _1419 = _1419__PHI_TEMPORARY;
  _1420 = _1420__PHI_TEMPORARY;
  _1421 = _1421__PHI_TEMPORARY;
  _1422 = _1409 * _1421;
  _1423 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1422, _1418, _1420);
  _1424 = _1421 + 1;
  if ((llvm_fcmp_olt(_1424, _1410))) {
    _1417__PHI_TEMPORARY = ((_1419 + (_1416 * _1418)) + (_1422 * _1417));   /* for PHI node */
    _1418__PHI_TEMPORARY = _1423;   /* for PHI node */
    _1419__PHI_TEMPORARY = _1417;   /* for PHI node */
    _1420__PHI_TEMPORARY = _1418;   /* for PHI node */
    _1421__PHI_TEMPORARY = _1424;   /* for PHI node */
    goto _1477;
  } else {
    _1425__PHI_TEMPORARY = _1417;   /* for PHI node */
    goto _1476;
  }

  } while (1); /* end of syntactic loop '' */
_1476:
  _1425 = _1425__PHI_TEMPORARY;
  _1426 =  /*tail*/ exp((-(_1296)));
  _1427 = _1426 * _1425;
  _1451__PHI_TEMPORARY = _1427;   /* for PHI node */
  goto _1458;

_1469:
  _1279 = 0;
  _1347 = _1300 * (_1300 * 4);
  _1348 = (_1300 * 8) * _1301;
  _1349 = _1296 * 8;
  _1350__PHI_TEMPORARY = 0;   /* for PHI node */
  _1351__PHI_TEMPORARY = 0;   /* for PHI node */
  _1352__PHI_TEMPORARY = 0;   /* for PHI node */
  _1353__PHI_TEMPORARY = 0;   /* for PHI node */
  _1354__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1478;

  do {     /* Syntactic loop '' to make GCC happy */
_1478:
  _1350 = _1350__PHI_TEMPORARY;
  _1351 = _1351__PHI_TEMPORARY;
  _1352 = _1352__PHI_TEMPORARY;
  _1353 = _1353__PHI_TEMPORARY;
  _1354 = _1354__PHI_TEMPORARY;
  _1355 = llvm_add_u64(_1350, 1);
  _1356 = _1352 + _1354;
  _1357 = _1353 + _1351;
  _1358 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1350)])));
  _1359 = _1349 * (((double)(uint32_t)(((uint32_t)_1355))));
  _1360 = (_1347 - _1358) / _1359;
  _1361 = _1354 * _1360;
  _1362 = (_1360 * _1353) + (((_1348 * _1359) * _1354) / (_1359 * _1359));
  *(double*)(((&((double*)(&_1281))[((int64_t)_1350)]))) = _1357;
  *(double*)(((&((double*)(&_1282))[((int64_t)_1350)]))) = _1356;
  *(double*)(((&((double*)_1290)[((int64_t)_1350)]))) = _1362;
  *(double*)(((&((double*)_1293)[((int64_t)_1350)]))) = _1361;
  if ((_1355 == UINT64_C(16))) {
    goto _1479;
  } else {
    _1350__PHI_TEMPORARY = _1355;   /* for PHI node */
    _1351__PHI_TEMPORARY = _1357;   /* for PHI node */
    _1352__PHI_TEMPORARY = _1356;   /* for PHI node */
    _1353__PHI_TEMPORARY = _1362;   /* for PHI node */
    _1354__PHI_TEMPORARY = _1361;   /* for PHI node */
    goto _1478;
  }

  } while (1); /* end of syntactic loop '' */
_1479:
  fixderivative_levin((&_1280), (&_1279), (&_1282), (&_1281));
  _1363 =  /*tail*/ sqrt((3.1415926535897931 / (_1296 * 2)));
  _1364 = _1279;
  _1365 =  /*tail*/ exp((-(_1296)));
  _1366 = (_1364 * _1363) * _1365;
  _1451__PHI_TEMPORARY = _1366;   /* for PHI node */
  goto _1458;

_1461:
  _1327 =  /*tail*/ exp((_1296 * -0.5));
  _1328 = 1 / (_1296 * 8);
  _1329 = _1300 * 4;
  _1330 = (_1328 * _1301) * (_1300 * 8);
  _1331__PHI_TEMPORARY = 1;   /* for PHI node */
  _1332__PHI_TEMPORARY = 0;   /* for PHI node */
  _1333__PHI_TEMPORARY = 0;   /* for PHI node */
  _1334__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1480;

  do {     /* Syntactic loop '' to make GCC happy */
_1480:
  _1331 = _1331__PHI_TEMPORARY;
  _1332 = _1332__PHI_TEMPORARY;
  _1333 = _1333__PHI_TEMPORARY;
  _1334 = _1334__PHI_TEMPORARY;
  _1335 = llvm_add_u32(_1334, 1);
  _1336 = llvm_add_u32((_1335 << 1), -1);
  _1337 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1329, _1300, (-((((double)(uint32_t)(llvm_mul_u32(_1336, _1336)))))));
  _1338 = ((double)(uint32_t)_1335);
  _1339 = _1328 * (_1337 / _1338);
  _1340 = _1331 * _1339;
  _1341 = (_1339 * _1332) + (((_1330 * _1338) * _1331) / (_1338 * _1338));
  _1285 = _1341;
  _1286 = _1340;
  _1342 = _1341 + _1333;
  fixderivative_isconverged((&_1286), (&_1285), (&_1284), (&_1283));
  _1343 = _1284;
  if ((llvm_select_bool((llvm_fcmp_olt(_1343, 0)), 1, (_1335 == 20u)))) {
    goto _1481;
  } else {
    _1331__PHI_TEMPORARY = _1340;   /* for PHI node */
    _1332__PHI_TEMPORARY = _1341;   /* for PHI node */
    _1333__PHI_TEMPORARY = _1342;   /* for PHI node */
    _1334__PHI_TEMPORARY = _1335;   /* for PHI node */
    goto _1480;
  }

  } while (1); /* end of syntactic loop '' */
_1481:
  _1344 =  /*tail*/ sqrt((3.1415926535897931 / (_1296 * 2)));
  _1345 = ((_1327 * _1327) * _1342) * _1344;
  _1451__PHI_TEMPORARY = _1345;   /* for PHI node */
  goto _1458;

_1459:
  _1302 = _1296 / _1300;
  _1303 = -(_1301);
  _1304 = _1295 * _1295;
  _1305 = (_1296 * _1303) / _1304;
  _1306 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1302, _1302, 1);
  _1307 =  /*tail*/ llvm_OC_sqrt_OC_f64(_1306);
  _1308 = llvm_select_f64((llvm_fcmp_ueq(_1306, 0)), 0, (((_1302 * 2) * _1305) / (_1307 * 2)));
  _1309 =  /*tail*/ log(_1302);
  _1310 = _1307 + 1;
  _1311 =  /*tail*/ log(_1310);
  _1312 = (_1307 + _1309) - _1311;
  _1313 = 1 / _1300;
  _1314 =  /*tail*/ llvm_OC_sqrt_OC_f64(_1313);
  _1315 = _1304 * 2;
  _1316 = _1314 * 1.2533141373155001;
  _1317 = _1312 * (-(_1300));
  _1318 =  /*tail*/ exp(_1317);
  _1319 =  /*tail*/ exp(_1317);
  _1320 = _1316 * _1318;
  _1321 =  /*tail*/ llvm_OC_sqrt_OC_f64(_1307);
  _1322 = llvm_select_f64((llvm_fcmp_ole(_1300, _1296)), _1296, _1300);
  _1323 = llvm_select_f64((llvm_fcmp_ole(_1300, _1296)), _1300, _1296);
  _1324 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1322, _1322, (_1323 * _1323));
  _1325 =  /*tail*/ fwddiffeUk_poly_Kn((1 / _1307), ((-(_1308)) / _1306), _1300, _1301, (_1304 / _1324), ((((_1295 * 2) * _1324) - (_1315 * (((llvm_select_f64((llvm_fcmp_ole(_1300, _1296)), 0, _1301)) * _1322) + ((llvm_select_f64((llvm_fcmp_ole(_1300, _1296)), _1301, 0)) * _1323)))) / (_1324 * _1324)));
  _1326 = (((((((_1319 * _1316) * ((_1312 * _1303) - (((_1308 + (_1305 / _1302)) - (_1308 / _1310)) * _1300))) + (_1318 * (llvm_select_f64((llvm_fcmp_ueq(_1313, 0)), 0, ((_1301 * -1.2533141373155001) / (_1315 * _1314)))))) * _1321) - (_1320 * (llvm_select_f64((llvm_fcmp_ueq(_1307, 0)), 0, (_1308 / (_1321 * 2)))))) * ((_1325.field0))) / _1307) + (((_1325.field1)) * (_1320 / _1321));
  _1451__PHI_TEMPORARY = _1326;   /* for PHI node */
  goto _1458;

_1458:
  _1451 = _1451__PHI_TEMPORARY;
  *(double*)(((&((double*)_1267)[((int64_t)_1294)]))) = _1451;
  _1452 = llvm_add_u64(_1294, 1);
  _1453 = *(uint32_t*)_1268;
  if ((((int64_t)_1452) < ((int64_t)(((int64_t)(int32_t)_1453))))) {
    _1294__PHI_TEMPORARY = _1452;   /* for PHI node */
    goto _1456;
  } else {
    goto _1455;
  }

  } while (1); /* end of syntactic loop '' */
}


void besselk_dx_buf(void* _1482, void* _1483, void* _1484, void* _1485) {
  double _1486;    /* Address-exposed local */
  double _1487;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1488 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1489 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1490;    /* Address-exposed local */
  double _1491;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1492 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1493 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1494;    /* Address-exposed local */
  double _1495;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1496 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1497 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1498;    /* Address-exposed local */
  double _1499;    /* Address-exposed local */
  double _1500;    /* Address-exposed local */
  double _1501;    /* Address-exposed local */
  uint32_t _1502;
  void* _1503;
  void* _1504;
  void* _1505;
  void* _1506;
  void* _1507;
  void* _1508;
  uint64_t _1509;
  uint64_t _1509__PHI_TEMPORARY;
  double _1510;
  double _1511;
  void* _1512;
  void* _1513;
  void* _1514;
  double _1515;
  double _1516;
  double _1517;
  double _1518;
  double _1519;
  double _1520;
  double _1521;
  double _1522;
  double _1523;
  double _1524;
  double _1525;
  double _1526;
  double _1527;
  double _1528;
  double _1529;
  double _1530;
  double _1531;
  double _1532;
  double _1533;
  double _1534;
  double _1535;
  struct l_unnamed_1 _1536;
  double _1537;
  double _1538;
  double _1539;
  double _1540;
  double _1541;
  double _1542;
  double _1543;
  double _1544;
  double _1545;
  double _1545__PHI_TEMPORARY;
  double _1546;
  double _1546__PHI_TEMPORARY;
  uint32_t _1547;
  uint32_t _1547__PHI_TEMPORARY;
  double _1548;
  double _1548__PHI_TEMPORARY;
  double _1549;
  double _1549__PHI_TEMPORARY;
  uint32_t _1550;
  uint32_t _1551;
  double _1552;
  double _1553;
  double _1554;
  double _1555;
  double _1556;
  double _1557;
  double _1558;
  double _1559;
  double _1560;
  double _1561;
  double _1562;
  double _1563;
  double _1564;
  double _1565;
  double _1566;
  double _1567;
  double _1568;
  double _1569;
  uint64_t _1570;
  uint64_t _1570__PHI_TEMPORARY;
  double _1571;
  double _1571__PHI_TEMPORARY;
  double _1572;
  double _1572__PHI_TEMPORARY;
  double _1573;
  double _1573__PHI_TEMPORARY;
  double _1574;
  double _1574__PHI_TEMPORARY;
  uint64_t _1575;
  double _1576;
  double _1577;
  double _1578;
  double _1579;
  double _1580;
  double _1581;
  double _1582;
  double _1583;
  double _1584;
  double _1585;
  double _1586;
  double _1587;
  double _1588;
  double _1589;
  double _1590;
  double _1591;
  double _1592;
  double _1593;
  double _1594;
  double _1595;
  double _1596;
  double _1597;
  uint64_t _1598;
  uint64_t _1598__PHI_TEMPORARY;
  double _1599;
  double _1599__PHI_TEMPORARY;
  double _1600;
  double _1600__PHI_TEMPORARY;
  double _1601;
  double _1601__PHI_TEMPORARY;
  double _1602;
  double _1602__PHI_TEMPORARY;
  uint64_t _1603;
  double _1604;
  double _1605;
  double _1606;
  double _1607;
  double _1608;
  double _1609;
  double _1610;
  double _1611;
  double _1612;
  double _1613;
  double _1614;
  double _1615;
  double _1616;
  double _1617;
  double _1618;
  double _1619;
  double _1620;
  double _1621;
  uint64_t _1622;
  uint64_t _1622__PHI_TEMPORARY;
  double _1623;
  double _1623__PHI_TEMPORARY;
  double _1624;
  double _1624__PHI_TEMPORARY;
  double _1625;
  double _1625__PHI_TEMPORARY;
  double _1626;
  double _1626__PHI_TEMPORARY;
  uint64_t _1627;
  double _1628;
  double _1629;
  double _1630;
  double _1631;
  double _1632;
  double _1633;
  double _1634;
  double _1635;
  double _1636;
  double _1637;
  double _1638;
  double _1639;
  double _1640;
  double _1641;
  double _1642;
  double _1643;
  double _1644;
  double _1645;
  double _1646;
  double _1647;
  double _1648;
  double _1648__PHI_TEMPORARY;
  double _1649;
  double _1649__PHI_TEMPORARY;
  double _1650;
  double _1650__PHI_TEMPORARY;
  double _1651;
  double _1651__PHI_TEMPORARY;
  double _1652;
  double _1652__PHI_TEMPORARY;
  double _1653;
  double _1654;
  double _1655;
  double _1656;
  double _1656__PHI_TEMPORARY;
  double _1657;
  double _1657__PHI_TEMPORARY;
  double _1658;
  double _1659;
  double _1660;
  double _1661;
  double _1662;
  double _1663;
  double _1664;
  struct l_unnamed_2 _1665;
  struct l_unnamed_1 _1666;
  double _1667;
  double _1668;
  double _1669;
  double _1670;
  struct l_unnamed_1 _1671;
  double _1672;
  double _1673;
  double _1674;
  double _1675;
  double _1676;
  double _1676__PHI_TEMPORARY;
  double _1677;
  double _1677__PHI_TEMPORARY;
  double _1678;
  double _1678__PHI_TEMPORARY;
  double _1679;
  double _1679__PHI_TEMPORARY;
  double _1680;
  double _1680__PHI_TEMPORARY;
  double _1681;
  double _1682;
  double _1683;
  double _1684;
  double _1685;
  double _1685__PHI_TEMPORARY;
  uint64_t _1686;
  uint32_t _1687;

  _1502 = *(uint32_t*)_1483;
  if ((((int32_t)_1502) > ((int32_t)0u))) {
    goto _1688;
  } else {
    goto _1689;
  }

_1688:
  _1503 = ((&((uint8_t*)(&_1488))[((int64_t)128)]));
  _1504 = ((&((uint8_t*)(&_1492))[((int64_t)128)]));
  _1505 = ((&((uint8_t*)(&_1496))[((int64_t)128)]));
  _1506 = ((&((uint8_t*)(&_1493))[((int64_t)128)]));
  _1507 = ((&((uint8_t*)(&_1489))[((int64_t)128)]));
  _1508 = ((&((uint8_t*)(&_1497))[((int64_t)128)]));
  _1509__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1690;

_1689:
  return;
  do {     /* Syntactic loop '' to make GCC happy */
_1690:
  _1509 = _1509__PHI_TEMPORARY;
  _1510 = *(double*)(((&((double*)_1484)[((int64_t)_1509)])));
  _1511 = *(double*)(((&((double*)_1485)[((int64_t)_1509)])));
  _1512 = memset((&_1488), 0, 256);
  _1513 = memset((&_1492), 0, 256);
  _1514 = memset((&_1496), 0, 256);
  _1515 =  /*tail*/ llvm_OC_fabs_OC_f64(_1510);
  if ((llvm_fcmp_ugt(_1511, 0))) {
    goto _1691;
  } else {
    _1685__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1692;
  }

_1691:
  if (((llvm_fcmp_ogt(_1515, 25)) | (llvm_fcmp_ogt(_1511, 35)))) {
    goto _1693;
  } else {
    goto _1694;
  }

_1694:
  if ((llvm_fcmp_olt((((_1510 * _1510) / 36) + 24), _1511))) {
    goto _1695;
  } else {
    goto _1696;
  }

_1696:
  _1567 =  /*tail*/ llvm_OC_floor_OC_f64(_1515);
  if ((llvm_fcmp_ogt(_1511, 1.5))) {
    goto _1697;
  } else {
    goto _1698;
  }

_1698:
  _1662 = round(_1515);
  _1663 =  /*tail*/ llvm_OC_fabs_OC_f64((_1515 - _1662));
  if ((llvm_fcmp_olt(_1663, 1.0000000000000001E-5))) {
    goto _1699;
  } else {
    goto _1700;
  }

_1700:
  _1684 =  /*tail*/ fwddiffebesselk_power_series_OC_5(_1515, _1511);
  _1685__PHI_TEMPORARY = _1684;   /* for PHI node */
  goto _1692;

_1699:
  _1664 = _1515 - (llvm_select_f64((llvm_fcmp_ogt((_1515 - _1567), 0.5)), (_1567 + -1), _1567));
  _1665 =  /*tail*/ fwddiffebesselk_temme_series_OC_4(_1664, _1511, 1);
  _1666 = (_1665.field1);
  _1667 = (_1666.field0);
  _1668 = _1664 + 1;
  _1669 = 2 / _1511;
  _1670 = _1515 + 0.5;
  if ((llvm_fcmp_ogt(_1670, _1668))) {
    goto _1701;
  } else {
    _1685__PHI_TEMPORARY = _1667;   /* for PHI node */
    goto _1692;
  }

_1701:
  _1671 = (_1665.field0);
  _1672 = (_1671.field0);
  _1673 = (_1671.field1);
  _1674 = (_1666.field1);
  _1675 = 1 / (_1511 * _1511);
  _1676__PHI_TEMPORARY = _1674;   /* for PHI node */
  _1677__PHI_TEMPORARY = _1673;   /* for PHI node */
  _1678__PHI_TEMPORARY = _1667;   /* for PHI node */
  _1679__PHI_TEMPORARY = _1672;   /* for PHI node */
  _1680__PHI_TEMPORARY = _1668;   /* for PHI node */
  goto _1702;

  do {     /* Syntactic loop '' to make GCC happy */
_1702:
  _1676 = _1676__PHI_TEMPORARY;
  _1677 = _1677__PHI_TEMPORARY;
  _1678 = _1678__PHI_TEMPORARY;
  _1679 = _1679__PHI_TEMPORARY;
  _1680 = _1680__PHI_TEMPORARY;
  _1681 = _1669 * _1680;
  _1682 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1681, _1677, _1679);
  _1683 = _1680 + 1;
  if ((llvm_fcmp_olt(_1683, _1670))) {
    _1676__PHI_TEMPORARY = (((_1681 * _1676) + _1678) + (((_1677 * -2) * _1680) * _1675));   /* for PHI node */
    _1677__PHI_TEMPORARY = _1682;   /* for PHI node */
    _1678__PHI_TEMPORARY = _1676;   /* for PHI node */
    _1679__PHI_TEMPORARY = _1677;   /* for PHI node */
    _1680__PHI_TEMPORARY = _1683;   /* for PHI node */
    goto _1702;
  } else {
    _1685__PHI_TEMPORARY = _1676;   /* for PHI node */
    goto _1692;
  }

  } while (1); /* end of syntactic loop '' */
_1697:
  if ((llvm_fcmp_olt(_1515, 2))) {
    goto _1703;
  } else {
    goto _1704;
  }

_1704:
  _1595 = _1515 - _1567;
  _1490 = 0;
  _1491 = 0;
  _1596 = _1595 * (_1595 * 4);
  _1597 = _1511 * 8;
  _1598__PHI_TEMPORARY = 0;   /* for PHI node */
  _1599__PHI_TEMPORARY = 0;   /* for PHI node */
  _1600__PHI_TEMPORARY = 0;   /* for PHI node */
  _1601__PHI_TEMPORARY = 0;   /* for PHI node */
  _1602__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1705;

  do {     /* Syntactic loop '' to make GCC happy */
_1705:
  _1598 = _1598__PHI_TEMPORARY;
  _1599 = _1599__PHI_TEMPORARY;
  _1600 = _1600__PHI_TEMPORARY;
  _1601 = _1601__PHI_TEMPORARY;
  _1602 = _1602__PHI_TEMPORARY;
  _1603 = llvm_add_u64(_1598, 1);
  _1604 = _1600 + _1602;
  _1605 = _1601 + _1599;
  _1606 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1598)])));
  _1607 = _1596 - _1606;
  _1608 = ((double)(uint32_t)(((uint32_t)_1603)));
  _1609 = _1597 * _1608;
  _1610 = _1607 / _1609;
  _1611 = _1602 * _1610;
  _1612 = (_1610 * _1601) - ((((_1608 * 8) * _1602) * _1607) / (_1609 * _1609));
  *(double*)(((&((double*)(&_1492))[((int64_t)_1598)]))) = _1605;
  *(double*)(((&((double*)(&_1493))[((int64_t)_1598)]))) = _1604;
  *(double*)(((&((double*)_1504)[((int64_t)_1598)]))) = _1612;
  *(double*)(((&((double*)_1506)[((int64_t)_1598)]))) = _1611;
  if ((_1603 == UINT64_C(16))) {
    goto _1706;
  } else {
    _1598__PHI_TEMPORARY = _1603;   /* for PHI node */
    _1599__PHI_TEMPORARY = _1605;   /* for PHI node */
    _1600__PHI_TEMPORARY = _1604;   /* for PHI node */
    _1601__PHI_TEMPORARY = _1612;   /* for PHI node */
    _1602__PHI_TEMPORARY = _1611;   /* for PHI node */
    goto _1705;
  }

  } while (1); /* end of syntactic loop '' */
_1706:
  fixderivative_levin((&_1491), (&_1490), (&_1493), (&_1492));
  _1613 = _1511 * 2;
  _1614 = 3.1415926535897931 / _1613;
  _1615 =  /*tail*/ sqrt(_1614);
  _1616 =  /*tail*/ sqrt(_1614);
  _1617 = -6.2831853071795862 / (((_1511 * 4) * _1613) * _1616);
  _1618 = _1490;
  _1619 = _1491;
  _1620 = _1595 + 1;
  _1486 = 0;
  _1487 = 0;
  _1621 = _1620 * (_1620 * 4);
  _1622__PHI_TEMPORARY = 0;   /* for PHI node */
  _1623__PHI_TEMPORARY = 0;   /* for PHI node */
  _1624__PHI_TEMPORARY = 0;   /* for PHI node */
  _1625__PHI_TEMPORARY = 0;   /* for PHI node */
  _1626__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1707;

  do {     /* Syntactic loop '' to make GCC happy */
_1707:
  _1622 = _1622__PHI_TEMPORARY;
  _1623 = _1623__PHI_TEMPORARY;
  _1624 = _1624__PHI_TEMPORARY;
  _1625 = _1625__PHI_TEMPORARY;
  _1626 = _1626__PHI_TEMPORARY;
  _1627 = llvm_add_u64(_1622, 1);
  _1628 = _1624 + _1626;
  _1629 = _1625 + _1623;
  _1630 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1622)])));
  _1631 = _1621 - _1630;
  _1632 = ((double)(uint32_t)(((uint32_t)_1627)));
  _1633 = _1597 * _1632;
  _1634 = _1631 / _1633;
  _1635 = _1626 * _1634;
  _1636 = (_1634 * _1625) - ((((_1632 * 8) * _1626) * _1631) / (_1633 * _1633));
  *(double*)(((&((double*)(&_1488))[((int64_t)_1622)]))) = _1629;
  *(double*)(((&((double*)(&_1489))[((int64_t)_1622)]))) = _1628;
  *(double*)(((&((double*)_1503)[((int64_t)_1622)]))) = _1636;
  *(double*)(((&((double*)_1507)[((int64_t)_1622)]))) = _1635;
  if ((_1627 == UINT64_C(16))) {
    goto _1708;
  } else {
    _1622__PHI_TEMPORARY = _1627;   /* for PHI node */
    _1623__PHI_TEMPORARY = _1629;   /* for PHI node */
    _1624__PHI_TEMPORARY = _1628;   /* for PHI node */
    _1625__PHI_TEMPORARY = _1636;   /* for PHI node */
    _1626__PHI_TEMPORARY = _1635;   /* for PHI node */
    goto _1707;
  }

  } while (1); /* end of syntactic loop '' */
_1708:
  _1637 = llvm_select_f64((llvm_fcmp_ueq(_1614, 0)), 0, _1617);
  _1638 = _1615 * _1619;
  _1639 = (_1637 * _1619) + (_1618 * _1615);
  fixderivative_levin((&_1487), (&_1486), (&_1489), (&_1488));
  _1640 =  /*tail*/ sqrt(_1614);
  _1641 = 2 / _1511;
  _1642 = _1515 + 0.5;
  if ((llvm_fcmp_ogt(_1642, _1620))) {
    goto _1709;
  } else {
    _1656__PHI_TEMPORARY = _1639;   /* for PHI node */
    _1657__PHI_TEMPORARY = _1638;   /* for PHI node */
    goto _1710;
  }

_1709:
  _1643 = _1487;
  _1644 = _1486;
  _1645 = _1640 * _1643;
  _1646 = (_1644 * _1640) + (_1643 * _1637);
  _1647 = 1 / (_1511 * _1511);
  _1648__PHI_TEMPORARY = _1646;   /* for PHI node */
  _1649__PHI_TEMPORARY = _1645;   /* for PHI node */
  _1650__PHI_TEMPORARY = _1639;   /* for PHI node */
  _1651__PHI_TEMPORARY = _1638;   /* for PHI node */
  _1652__PHI_TEMPORARY = _1620;   /* for PHI node */
  goto _1711;

  do {     /* Syntactic loop '' to make GCC happy */
_1711:
  _1648 = _1648__PHI_TEMPORARY;
  _1649 = _1649__PHI_TEMPORARY;
  _1650 = _1650__PHI_TEMPORARY;
  _1651 = _1651__PHI_TEMPORARY;
  _1652 = _1652__PHI_TEMPORARY;
  _1653 = _1641 * _1652;
  _1654 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1653, _1649, _1651);
  _1655 = _1652 + 1;
  if ((llvm_fcmp_olt(_1655, _1642))) {
    _1648__PHI_TEMPORARY = (((_1653 * _1648) + _1650) + (((_1649 * -2) * _1652) * _1647));   /* for PHI node */
    _1649__PHI_TEMPORARY = _1654;   /* for PHI node */
    _1650__PHI_TEMPORARY = _1648;   /* for PHI node */
    _1651__PHI_TEMPORARY = _1649;   /* for PHI node */
    _1652__PHI_TEMPORARY = _1655;   /* for PHI node */
    goto _1711;
  } else {
    _1656__PHI_TEMPORARY = _1648;   /* for PHI node */
    _1657__PHI_TEMPORARY = _1649;   /* for PHI node */
    goto _1710;
  }

  } while (1); /* end of syntactic loop '' */
_1710:
  _1656 = _1656__PHI_TEMPORARY;
  _1657 = _1657__PHI_TEMPORARY;
  _1658 = -(_1511);
  _1659 =  /*tail*/ exp(_1658);
  _1660 =  /*tail*/ exp(_1658);
  _1661 = (_1659 * _1656) - (_1660 * _1657);
  _1685__PHI_TEMPORARY = _1661;   /* for PHI node */
  goto _1692;

_1703:
  _1494 = 0;
  _1495 = 0;
  _1568 = _1515 * (_1515 * 4);
  _1569 = _1511 * 8;
  _1570__PHI_TEMPORARY = 0;   /* for PHI node */
  _1571__PHI_TEMPORARY = 0;   /* for PHI node */
  _1572__PHI_TEMPORARY = 0;   /* for PHI node */
  _1573__PHI_TEMPORARY = 0;   /* for PHI node */
  _1574__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1712;

  do {     /* Syntactic loop '' to make GCC happy */
_1712:
  _1570 = _1570__PHI_TEMPORARY;
  _1571 = _1571__PHI_TEMPORARY;
  _1572 = _1572__PHI_TEMPORARY;
  _1573 = _1573__PHI_TEMPORARY;
  _1574 = _1574__PHI_TEMPORARY;
  _1575 = llvm_add_u64(_1570, 1);
  _1576 = _1572 + _1574;
  _1577 = _1573 + _1571;
  _1578 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1570)])));
  _1579 = _1568 - _1578;
  _1580 = ((double)(uint32_t)(((uint32_t)_1575)));
  _1581 = _1569 * _1580;
  _1582 = _1579 / _1581;
  _1583 = _1574 * _1582;
  _1584 = (_1582 * _1573) - ((((_1580 * 8) * _1574) * _1579) / (_1581 * _1581));
  *(double*)(((&((double*)(&_1496))[((int64_t)_1570)]))) = _1577;
  *(double*)(((&((double*)(&_1497))[((int64_t)_1570)]))) = _1576;
  *(double*)(((&((double*)_1505)[((int64_t)_1570)]))) = _1584;
  *(double*)(((&((double*)_1508)[((int64_t)_1570)]))) = _1583;
  if ((_1575 == UINT64_C(16))) {
    goto _1713;
  } else {
    _1570__PHI_TEMPORARY = _1575;   /* for PHI node */
    _1571__PHI_TEMPORARY = _1577;   /* for PHI node */
    _1572__PHI_TEMPORARY = _1576;   /* for PHI node */
    _1573__PHI_TEMPORARY = _1584;   /* for PHI node */
    _1574__PHI_TEMPORARY = _1583;   /* for PHI node */
    goto _1712;
  }

  } while (1); /* end of syntactic loop '' */
_1713:
  fixderivative_levin((&_1495), (&_1494), (&_1497), (&_1496));
  _1585 = _1511 * 2;
  _1586 = 3.1415926535897931 / _1585;
  _1587 =  /*tail*/ sqrt(_1586);
  _1588 =  /*tail*/ sqrt(_1586);
  _1589 = _1494;
  _1590 = _1495;
  _1591 = -(_1511);
  _1592 =  /*tail*/ exp(_1591);
  _1593 =  /*tail*/ exp(_1591);
  _1594 = ((((llvm_select_f64((llvm_fcmp_ueq(_1586, 0)), 0, (-6.2831853071795862 / (((_1511 * 4) * _1585) * _1588)))) * _1590) + (_1589 * _1587)) * _1592) - (_1593 * (_1587 * _1590));
  _1685__PHI_TEMPORARY = _1594;   /* for PHI node */
  goto _1692;

_1695:
  _1538 = _1511 * -0.5;
  _1539 =  /*tail*/ exp(_1538);
  _1540 =  /*tail*/ exp(_1538);
  _1541 = _1511 * 8;
  _1542 = 1 / _1541;
  _1543 = _1515 * 4;
  _1544 = 1 / (_1541 * _1541);
  _1545__PHI_TEMPORARY = 1;   /* for PHI node */
  _1546__PHI_TEMPORARY = 0;   /* for PHI node */
  _1547__PHI_TEMPORARY = 0;   /* for PHI node */
  _1548__PHI_TEMPORARY = 0;   /* for PHI node */
  _1549__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1714;

  do {     /* Syntactic loop '' to make GCC happy */
_1714:
  _1545 = _1545__PHI_TEMPORARY;
  _1546 = _1546__PHI_TEMPORARY;
  _1547 = _1547__PHI_TEMPORARY;
  _1548 = _1548__PHI_TEMPORARY;
  _1549 = _1549__PHI_TEMPORARY;
  _1550 = llvm_add_u32(_1547, 1);
  _1551 = llvm_add_u32((_1550 << 1), -1);
  _1552 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1543, _1515, (-((((double)(uint32_t)(llvm_mul_u32(_1551, _1551)))))));
  _1553 = _1552 / (((double)(uint32_t)_1550));
  _1554 = _1542 * _1553;
  _1555 = _1545 * _1554;
  _1556 = (_1554 * _1546) - (((_1545 * 8) * _1553) * _1544);
  _1500 = _1556;
  _1501 = _1555;
  _1557 = _1549 + _1555;
  _1558 = _1556 + _1548;
  fixderivative_isconverged((&_1501), (&_1500), (&_1499), (&_1498));
  _1559 = _1499;
  if ((llvm_select_bool((llvm_fcmp_olt(_1559, 0)), 1, (_1550 == 20u)))) {
    goto _1715;
  } else {
    _1545__PHI_TEMPORARY = _1555;   /* for PHI node */
    _1546__PHI_TEMPORARY = _1556;   /* for PHI node */
    _1547__PHI_TEMPORARY = _1550;   /* for PHI node */
    _1548__PHI_TEMPORARY = _1558;   /* for PHI node */
    _1549__PHI_TEMPORARY = _1557;   /* for PHI node */
    goto _1714;
  }

  } while (1); /* end of syntactic loop '' */
_1715:
  _1560 = _1540 * -0.5;
  _1561 = _1511 * 2;
  _1562 = 3.1415926535897931 / _1561;
  _1563 =  /*tail*/ sqrt(_1562);
  _1564 =  /*tail*/ sqrt(_1562);
  _1565 = _1557 * _1563;
  _1566 = ((((((llvm_select_f64((llvm_fcmp_ueq(_1562, 0)), 0, (-6.2831853071795862 / (((_1511 * 4) * _1561) * _1564)))) * _1557) + (_1563 * _1558)) * _1539) + (_1565 * _1560)) * _1539) + ((_1539 * _1565) * _1560);
  _1685__PHI_TEMPORARY = _1566;   /* for PHI node */
  goto _1692;

_1693:
  _1516 = _1511 / _1515;
  _1517 = _1510 * _1510;
  _1518 = _1515 / _1517;
  _1519 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1516, _1516, 1);
  _1520 =  /*tail*/ llvm_OC_sqrt_OC_f64(_1519);
  _1521 = llvm_select_f64((llvm_fcmp_ueq(_1519, 0)), 0, (((_1516 * 2) * _1518) / (_1520 * 2)));
  _1522 =  /*tail*/ log(_1516);
  _1523 = _1520 + 1;
  _1524 =  /*tail*/ log(_1523);
  _1525 =  /*tail*/ llvm_OC_sqrt_OC_f64((1 / _1515));
  _1526 = _1525 * 1.2533141373155001;
  _1527 = -(_1515);
  _1528 = ((_1520 + _1522) - _1524) * _1527;
  _1529 =  /*tail*/ exp(_1528);
  _1530 =  /*tail*/ exp(_1528);
  _1531 = _1526 * _1529;
  _1532 =  /*tail*/ llvm_OC_sqrt_OC_f64(_1520);
  _1533 = llvm_select_f64((llvm_fcmp_ole(_1515, _1511)), _1511, _1515);
  _1534 = llvm_select_f64((llvm_fcmp_ole(_1515, _1511)), _1515, _1511);
  _1535 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1533, _1533, (_1534 * _1534));
  _1536 =  /*tail*/ fwddiffeUk_poly_Kn_OC_3((1 / _1520), ((-(_1521)) / _1519), _1515, (_1517 / _1535), (((_1517 * -2) * _1511) / (_1535 * _1535)));
  _1537 = (((((((_1526 * _1527) * _1532) * ((_1521 + (_1518 / _1516)) - (_1521 / _1523))) * _1530) - (_1531 * (llvm_select_f64((llvm_fcmp_ueq(_1520, 0)), 0, (_1521 / (_1532 * 2)))))) * ((_1536.field0))) / _1520) + (((_1536.field1)) * (_1531 / _1532));
  _1685__PHI_TEMPORARY = _1537;   /* for PHI node */
  goto _1692;

_1692:
  _1685 = _1685__PHI_TEMPORARY;
  *(double*)(((&((double*)_1482)[((int64_t)_1509)]))) = _1685;
  _1686 = llvm_add_u64(_1509, 1);
  _1687 = *(uint32_t*)_1483;
  if ((((int64_t)_1686) < ((int64_t)(((int64_t)(int32_t)_1687))))) {
    _1509__PHI_TEMPORARY = _1686;   /* for PHI node */
    goto _1690;
  } else {
    goto _1689;
  }

  } while (1); /* end of syntactic loop '' */
}


void matern_buf(void* _1716, void* _1717, void* _1718, void* _1719, void* _1720, void* _1721) {
  uint32_t _1722;
  uint32_t _1723;
  uint32_t _1723__PHI_TEMPORARY;
  uint64_t _1724;
  uint64_t _1724__PHI_TEMPORARY;
  double _1725;
  double _1726;
  double _1727;
  double _1728;
  double _1729;
  double _1730;
  double _1731;
  double _1732;
  double _1733;
  double _1734;
  double _1735;
  double _1736;
  uint32_t _1737;
  uint32_t _1738;
  uint32_t _1738__PHI_TEMPORARY;
  double _1739;
  double _1739__PHI_TEMPORARY;
  uint64_t _1740;

  _1722 = *(uint32_t*)_1718;
  if ((((int32_t)_1722) > ((int32_t)0u))) {
    _1723__PHI_TEMPORARY = _1722;   /* for PHI node */
    _1724__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1741;
  } else {
    goto _1742;
  }

_1742:
  return;
  do {     /* Syntactic loop '' to make GCC happy */
_1741:
  _1723 = _1723__PHI_TEMPORARY;
  _1724 = _1724__PHI_TEMPORARY;
  _1725 = *(double*)(((&((double*)_1717)[((int64_t)_1724)])));
  _1726 = *(double*)_1719;
  if ((llvm_fcmp_oeq(_1725, 0))) {
    goto _1743;
  } else {
    goto _1744;
  }

_1744:
  _1728 = *(double*)_1721;
  _1729 = *(double*)_1720;
  _1730 =  /*tail*/ sqrt((_1728 * 2));
  _1731 = (_1725 * _1730) / _1729;
  _1732 =  /*tail*/ exp2((1 - _1728));
  _1733 =  /*tail*/ gamma(_1728);
  _1734 =  /*tail*/ pow(_1731, _1728);
  _1735 =  /*tail*/ besselk(_1728, _1731);
  _1736 = ((((_1726 * _1726) * _1732) / _1733) * _1734) * _1735;
  _1737 = *(uint32_t*)_1718;
  _1738__PHI_TEMPORARY = _1737;   /* for PHI node */
  _1739__PHI_TEMPORARY = _1736;   /* for PHI node */
  goto _1745;

_1743:
  _1727 = _1726 * _1726;
  _1738__PHI_TEMPORARY = _1723;   /* for PHI node */
  _1739__PHI_TEMPORARY = _1727;   /* for PHI node */
  goto _1745;

_1745:
  _1738 = _1738__PHI_TEMPORARY;
  _1739 = _1739__PHI_TEMPORARY;
  *(double*)(((&((double*)_1716)[((int64_t)_1724)]))) = _1739;
  _1740 = llvm_add_u64(_1724, 1);
  if ((((int64_t)_1740) < ((int64_t)(((int64_t)(int32_t)_1738))))) {
    _1723__PHI_TEMPORARY = _1738;   /* for PHI node */
    _1724__PHI_TEMPORARY = _1740;   /* for PHI node */
    goto _1741;
  } else {
    goto _1742;
  }

  } while (1); /* end of syntactic loop '' */
}


void matern_dsig_buf(void* _1746, void* _1747, void* _1748, void* _1749, void* _1750, void* _1751) {
  uint32_t _1752;
  uint32_t _1753;
  uint32_t _1753__PHI_TEMPORARY;
  uint64_t _1754;
  uint64_t _1754__PHI_TEMPORARY;
  double _1755;
  double _1756;
  double _1757;
  double _1758;
  double _1759;
  double _1760;
  double _1761;
  double _1762;
  double _1763;
  double _1764;
  double _1765;
  double _1766;
  uint32_t _1767;
  uint32_t _1768;
  uint32_t _1768__PHI_TEMPORARY;
  double _1769;
  double _1769__PHI_TEMPORARY;
  uint64_t _1770;

  _1752 = *(uint32_t*)_1748;
  if ((((int32_t)_1752) > ((int32_t)0u))) {
    _1753__PHI_TEMPORARY = _1752;   /* for PHI node */
    _1754__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1771;
  } else {
    goto _1772;
  }

_1772:
  return;
  do {     /* Syntactic loop '' to make GCC happy */
_1771:
  _1753 = _1753__PHI_TEMPORARY;
  _1754 = _1754__PHI_TEMPORARY;
  _1755 = *(double*)(((&((double*)_1747)[((int64_t)_1754)])));
  _1756 = *(double*)_1749;
  if ((llvm_fcmp_oeq(_1755, 0))) {
    goto _1773;
  } else {
    goto _1774;
  }

_1774:
  _1758 = *(double*)_1751;
  _1759 = *(double*)_1750;
  _1760 =  /*tail*/ sqrt((_1758 * 2));
  _1761 = (_1755 * _1760) / _1759;
  _1762 =  /*tail*/ exp2((1 - _1758));
  _1763 =  /*tail*/ gamma(_1758);
  _1764 =  /*tail*/ pow(_1761, _1758);
  _1765 =  /*tail*/ besselk(_1758, _1761);
  _1766 = (((((_1756 * 2) * _1762) * _1763) * _1764) * _1765) / (_1763 * _1763);
  _1767 = *(uint32_t*)_1748;
  _1768__PHI_TEMPORARY = _1767;   /* for PHI node */
  _1769__PHI_TEMPORARY = _1766;   /* for PHI node */
  goto _1775;

_1773:
  _1757 = _1756 * 2;
  _1768__PHI_TEMPORARY = _1753;   /* for PHI node */
  _1769__PHI_TEMPORARY = _1757;   /* for PHI node */
  goto _1775;

_1775:
  _1768 = _1768__PHI_TEMPORARY;
  _1769 = _1769__PHI_TEMPORARY;
  *(double*)(((&((double*)_1746)[((int64_t)_1754)]))) = _1769;
  _1770 = llvm_add_u64(_1754, 1);
  if ((((int64_t)_1770) < ((int64_t)(((int64_t)(int32_t)_1768))))) {
    _1753__PHI_TEMPORARY = _1768;   /* for PHI node */
    _1754__PHI_TEMPORARY = _1770;   /* for PHI node */
    goto _1771;
  } else {
    goto _1772;
  }

  } while (1); /* end of syntactic loop '' */
}


void matern_drho_buf(void* _1776, void* _1777, void* _1778, void* _1779, void* _1780, void* _1781) {
  uint32_t _1782;
  uint32_t _1783;
  uint32_t _1783__PHI_TEMPORARY;
  uint64_t _1784;
  uint64_t _1784__PHI_TEMPORARY;
  double _1785;
  double _1786;
  double _1787;
  double _1788;
  double _1789;
  double _1790;
  double _1791;
  double _1792;
  double _1793;
  double _1794;
  double _1795;
  double _1796;
  double _1797;
  struct l_unnamed_1 _1798;
  double _1799;
  uint32_t _1800;
  uint32_t _1801;
  uint32_t _1801__PHI_TEMPORARY;
  double _1802;
  double _1802__PHI_TEMPORARY;
  uint64_t _1803;

  _1782 = *(uint32_t*)_1778;
  if ((((int32_t)_1782) > ((int32_t)0u))) {
    _1783__PHI_TEMPORARY = _1782;   /* for PHI node */
    _1784__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1804;
  } else {
    goto _1805;
  }

_1805:
  return;
  do {     /* Syntactic loop '' to make GCC happy */
_1804:
  _1783 = _1783__PHI_TEMPORARY;
  _1784 = _1784__PHI_TEMPORARY;
  _1785 = *(double*)(((&((double*)_1777)[((int64_t)_1784)])));
  if ((llvm_fcmp_oeq(_1785, 0))) {
    _1801__PHI_TEMPORARY = _1783;   /* for PHI node */
    _1802__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1806;
  } else {
    goto _1807;
  }

_1807:
  _1786 = *(double*)_1781;
  _1787 = *(double*)_1780;
  _1788 = *(double*)_1779;
  _1789 =  /*tail*/ sqrt((_1786 * 2));
  _1790 = _1785 * _1789;
  _1791 = _1790 / _1787;
  _1792 = (-(_1790)) / (_1787 * _1787);
  _1793 =  /*tail*/ exp2((1 - _1786));
  _1794 =  /*tail*/ gamma(_1786);
  _1795 = ((_1788 * _1788) * _1793) / _1794;
  _1796 =  /*tail*/ pow(_1791, _1786);
  _1797 =  /*tail*/ pow(_1791, (_1786 + -1));
  _1798 =  /*tail*/ fwddiffebesselk_OC_7(_1786, _1791, _1792);
  _1799 = ((((_1792 * _1786) * _1795) * _1797) * ((_1798.field0))) + (((_1798.field1)) * (_1795 * _1796));
  _1800 = *(uint32_t*)_1778;
  _1801__PHI_TEMPORARY = _1800;   /* for PHI node */
  _1802__PHI_TEMPORARY = _1799;   /* for PHI node */
  goto _1806;

_1806:
  _1801 = _1801__PHI_TEMPORARY;
  _1802 = _1802__PHI_TEMPORARY;
  *(double*)(((&((double*)_1776)[((int64_t)_1784)]))) = _1802;
  _1803 = llvm_add_u64(_1784, 1);
  if ((((int64_t)_1803) < ((int64_t)(((int64_t)(int32_t)_1801))))) {
    _1783__PHI_TEMPORARY = _1801;   /* for PHI node */
    _1784__PHI_TEMPORARY = _1803;   /* for PHI node */
    goto _1804;
  } else {
    goto _1805;
  }

  } while (1); /* end of syntactic loop '' */
}


void matern_dnu_buf(void* _1808, void* _1809, void* _1810, void* _1811, void* _1812, void* _1813) {
  uint32_t _1814;
  uint32_t _1815;
  uint32_t _1815__PHI_TEMPORARY;
  uint64_t _1816;
  uint64_t _1816__PHI_TEMPORARY;
  double _1817;
  double _1818;
  double _1819;
  double _1820;
  double _1821;
  double _1822;
  double _1823;
  double _1824;
  double _1825;
  double _1826;
  double _1827;
  double _1828;
  double _1829;
  double _1830;
  struct l_unnamed_1 _1831;
  double _1832;
  double _1833;
  double _1834;
  double _1835;
  double _1836;
  double _1837;
  struct l_unnamed_1 _1838;
  double _1839;
  uint32_t _1840;
  uint32_t _1841;
  uint32_t _1841__PHI_TEMPORARY;
  double _1842;
  double _1842__PHI_TEMPORARY;
  uint64_t _1843;

  _1814 = *(uint32_t*)_1810;
  if ((((int32_t)_1814) > ((int32_t)0u))) {
    _1815__PHI_TEMPORARY = _1814;   /* for PHI node */
    _1816__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1844;
  } else {
    goto _1845;
  }

_1845:
  return;
  do {     /* Syntactic loop '' to make GCC happy */
_1844:
  _1815 = _1815__PHI_TEMPORARY;
  _1816 = _1816__PHI_TEMPORARY;
  _1817 = *(double*)(((&((double*)_1809)[((int64_t)_1816)])));
  if ((llvm_fcmp_oeq(_1817, 0))) {
    _1841__PHI_TEMPORARY = _1815;   /* for PHI node */
    _1842__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1846;
  } else {
    goto _1847;
  }

_1847:
  _1818 = *(double*)_1813;
  _1819 = *(double*)_1812;
  _1820 = *(double*)_1811;
  _1821 = _1818 * 2;
  _1822 =  /*tail*/ sqrt(_1821);
  _1823 =  /*tail*/ sqrt(_1821);
  _1824 = (_1817 * _1822) / _1819;
  _1825 = ((_1819 * _1817) * (llvm_select_f64((llvm_fcmp_ueq(_1821, 0)), 0, (1 / _1823)))) / (_1819 * _1819);
  _1826 = _1820 * _1820;
  _1827 = 1 - _1818;
  _1828 =  /*tail*/ exp2(_1827);
  _1829 =  /*tail*/ exp2(_1827);
  _1830 = _1826 * _1828;
  _1831 =  /*tail*/ fwddiffegamma(_1818, 1);
  _1832 = (_1831.field0);
  _1833 = _1830 / _1832;
  _1834 =  /*tail*/ pow(_1824, _1818);
  _1835 =  /*tail*/ pow(_1824, (_1818 + -1));
  _1836 =  /*tail*/ pow(_1824, _1818);
  _1837 = log(_1824);
  _1838 =  /*tail*/ fwddiffebesselk_OC_10(_1818, _1824, _1825);
  _1839 = ((((((_1835 * _1818) * _1825) + (_1836 * _1837)) * _1833) + ((((((_1826 * -0.69314718055994529) * _1829) * _1832) - (((_1831.field1)) * _1830)) * _1834) / (_1832 * _1832))) * ((_1838.field0))) + (((_1838.field1)) * (_1834 * _1833));
  _1840 = *(uint32_t*)_1810;
  _1841__PHI_TEMPORARY = _1840;   /* for PHI node */
  _1842__PHI_TEMPORARY = _1839;   /* for PHI node */
  goto _1846;

_1846:
  _1841 = _1841__PHI_TEMPORARY;
  _1842 = _1842__PHI_TEMPORARY;
  *(double*)(((&((double*)_1808)[((int64_t)_1816)]))) = _1842;
  _1843 = llvm_add_u64(_1816, 1);
  if ((((int64_t)_1843) < ((int64_t)(((int64_t)(int32_t)_1841))))) {
    _1815__PHI_TEMPORARY = _1841;   /* for PHI node */
    _1816__PHI_TEMPORARY = _1843;   /* for PHI node */
    goto _1844;
  } else {
    goto _1845;
  }

  } while (1); /* end of syntactic loop '' */
}


static struct l_unnamed_1 fwddiffeUk_poly_Kn(double _1848, double _1849, double _1850, double _1851, double _1852, double _1853) {
  __PREFIXALIGN__(16) struct l_array_6_double _1854 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_5_double _1855 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_11_double _1856 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _1857;
  void* _1858;
  void* _1859;
  void* _1860;
  void* _1861;
  void* _1862;
  void* _1863;
  void* _1864;
  void* _1865;
  void* _1866;
  __PREFIXALIGN__(16) struct l_array_11_double _1867 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint64_t _1868;
  uint64_t _1868__PHI_TEMPORARY;
  double _1869;
  double _1869__PHI_TEMPORARY;
  double _1870;
  double _1870__PHI_TEMPORARY;
  uint64_t _1871;
  double _1872;
  double _1873;
  double _1874;
  uint64_t _1875;
  uint64_t _1875__PHI_TEMPORARY;
  double _1876;
  double _1876__PHI_TEMPORARY;
  double _1877;
  double _1877__PHI_TEMPORARY;
  uint64_t _1878;
  double _1879;
  double _1880;
  double _1881;
  uint64_t _1882;
  uint64_t _1882__PHI_TEMPORARY;
  double _1883;
  double _1883__PHI_TEMPORARY;
  double _1884;
  double _1884__PHI_TEMPORARY;
  uint64_t _1885;
  double _1886;
  double _1887;
  double _1888;
  uint64_t _1889;
  uint64_t _1889__PHI_TEMPORARY;
  double _1890;
  double _1890__PHI_TEMPORARY;
  double _1891;
  double _1891__PHI_TEMPORARY;
  uint64_t _1892;
  double _1893;
  double _1894;
  double _1895;
  uint64_t _1896;
  uint64_t _1896__PHI_TEMPORARY;
  double _1897;
  double _1897__PHI_TEMPORARY;
  double _1898;
  double _1898__PHI_TEMPORARY;
  uint64_t _1899;
  double _1900;
  double _1901;
  double _1902;
  void* _1903;
  uint64_t _1904;
  uint64_t _1904__PHI_TEMPORARY;
  double _1905;
  double _1905__PHI_TEMPORARY;
  double _1906;
  double _1906__PHI_TEMPORARY;
  uint64_t _1907;
  double _1908;
  double _1909;
  double _1910;
  void* _1911;
  uint64_t _1912;
  uint64_t _1912__PHI_TEMPORARY;
  double _1913;
  double _1913__PHI_TEMPORARY;
  double _1914;
  double _1914__PHI_TEMPORARY;
  uint64_t _1915;
  double _1916;
  double _1917;
  double _1918;
  uint64_t _1919;
  uint64_t _1919__PHI_TEMPORARY;
  double _1920;
  double _1920__PHI_TEMPORARY;
  double _1921;
  double _1921__PHI_TEMPORARY;
  uint64_t _1922;
  double _1923;
  double _1924;
  double _1925;
  uint64_t _1926;
  uint64_t _1926__PHI_TEMPORARY;
  double _1927;
  double _1927__PHI_TEMPORARY;
  double _1928;
  double _1928__PHI_TEMPORARY;
  uint64_t _1929;
  double _1930;
  double _1931;
  double _1932;
  double _1933;
  double _1934;
  double _1935;
  void* _1936;
  void* _1937;
  double _1938;
  uint64_t _1939;
  uint64_t _1939__PHI_TEMPORARY;
  double _1940;
  double _1940__PHI_TEMPORARY;
  double _1941;
  double _1941__PHI_TEMPORARY;
  uint64_t _1942;
  uint64_t _1943;
  double _1944;
  double _1945;
  double _1946;
  double _1947;
  struct l_unnamed_1 _1948;
  struct l_unnamed_1 _1949;

  _1857 = ((&((uint8_t*)(&_1856))[((int64_t)8)]));
  _1858 = ((&((uint8_t*)(&_1856))[((int64_t)16)]));
  _1859 = ((&((uint8_t*)(&_1856))[((int64_t)24)]));
  _1860 = ((&((uint8_t*)(&_1856))[((int64_t)32)]));
  _1861 = ((&((uint8_t*)(&_1856))[((int64_t)40)]));
  _1862 = ((&((uint8_t*)(&_1856))[((int64_t)48)]));
  _1863 = ((&((uint8_t*)(&_1856))[((int64_t)56)]));
  _1864 = ((&((uint8_t*)(&_1856))[((int64_t)64)]));
  _1865 = ((&((uint8_t*)(&_1856))[((int64_t)72)]));
  _1866 = ((&((uint8_t*)(&_1856))[((int64_t)80)]));
  *((double*)&_1854) = 0.22710800170898438;
  *(double*)(((&((uint8_t*)(&_1854))[((int64_t)8)]))) = -7.3687943594796321;
  *(double*)(((&((uint8_t*)(&_1854))[((int64_t)16)]))) = 42.534998745388457;
  *(double*)(((&((uint8_t*)(&_1854))[((int64_t)24)]))) = -91.81824154324002;
  *(double*)(((&((uint8_t*)(&_1854))[((int64_t)32)]))) = 84.636217674600729;
  *(double*)(((&((uint8_t*)(&_1854))[((int64_t)40)]))) = -28.212072558200244;
  *((double*)&_1855) = 0.112152099609375;
  *(double*)(((&((uint8_t*)(&_1855))[((int64_t)8)]))) = -2.3640869140624998;
  *(double*)(((&((uint8_t*)(&_1855))[((int64_t)16)]))) = 8.78912353515625;
  *(double*)(((&((uint8_t*)(&_1855))[((int64_t)24)]))) = -11.207002616222994;
  *(double*)(((&((uint8_t*)(&_1855))[((int64_t)32)]))) = 4.6695844234262474;
  _1868__PHI_TEMPORARY = 0;   /* for PHI node */
  _1869__PHI_TEMPORARY = 0;   /* for PHI node */
  _1870__PHI_TEMPORARY = 3284469.8530720379;   /* for PHI node */
  goto _1950;

  do {     /* Syntactic loop '' to make GCC happy */
_1950:
  _1868 = _1868__PHI_TEMPORARY;
  _1869 = _1869__PHI_TEMPORARY;
  _1870 = _1870__PHI_TEMPORARY;
  _1871 = llvm_add_u64(_1868, 1);
  _1872 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u10coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(10, _1868)))])));
  _1873 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1852, _1870, _1872);
  _1874 = (_1870 * _1853) + (_1869 * _1852);
  if ((_1871 == UINT64_C(10))) {
    _1875__PHI_TEMPORARY = 0;   /* for PHI node */
    _1876__PHI_TEMPORARY = 0;   /* for PHI node */
    _1877__PHI_TEMPORARY = -242919.18790055133;   /* for PHI node */
    goto _1951;
  } else {
    _1868__PHI_TEMPORARY = _1871;   /* for PHI node */
    _1869__PHI_TEMPORARY = _1874;   /* for PHI node */
    _1870__PHI_TEMPORARY = _1873;   /* for PHI node */
    goto _1950;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_1951:
  _1875 = _1875__PHI_TEMPORARY;
  _1876 = _1876__PHI_TEMPORARY;
  _1877 = _1877__PHI_TEMPORARY;
  _1878 = llvm_add_u64(_1875, 1);
  _1879 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u9coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(9, _1875)))])));
  _1880 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1852, _1877, _1879);
  _1881 = (_1877 * _1853) + (_1876 * _1852);
  if ((_1878 == UINT64_C(9))) {
    _1882__PHI_TEMPORARY = 0;   /* for PHI node */
    _1883__PHI_TEMPORARY = 0;   /* for PHI node */
    _1884__PHI_TEMPORARY = 20204.291330966149;   /* for PHI node */
    goto _1952;
  } else {
    _1875__PHI_TEMPORARY = _1878;   /* for PHI node */
    _1876__PHI_TEMPORARY = _1881;   /* for PHI node */
    _1877__PHI_TEMPORARY = _1880;   /* for PHI node */
    goto _1951;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_1952:
  _1882 = _1882__PHI_TEMPORARY;
  _1883 = _1883__PHI_TEMPORARY;
  _1884 = _1884__PHI_TEMPORARY;
  _1885 = llvm_add_u64(_1882, 1);
  _1886 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u8coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(8, _1882)))])));
  _1887 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1852, _1884, _1886);
  _1888 = (_1884 * _1853) + (_1883 * _1852);
  if ((_1885 == UINT64_C(8))) {
    _1889__PHI_TEMPORARY = 0;   /* for PHI node */
    _1890__PHI_TEMPORARY = 0;   /* for PHI node */
    _1891__PHI_TEMPORARY = -1919.4576623184071;   /* for PHI node */
    goto _1953;
  } else {
    _1882__PHI_TEMPORARY = _1885;   /* for PHI node */
    _1883__PHI_TEMPORARY = _1888;   /* for PHI node */
    _1884__PHI_TEMPORARY = _1887;   /* for PHI node */
    goto _1952;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_1953:
  _1889 = _1889__PHI_TEMPORARY;
  _1890 = _1890__PHI_TEMPORARY;
  _1891 = _1891__PHI_TEMPORARY;
  _1892 = llvm_add_u64(_1889, 1);
  _1893 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u7coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(7, _1889)))])));
  _1894 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1852, _1891, _1893);
  _1895 = (_1891 * _1853) + (_1890 * _1852);
  if ((_1892 == UINT64_C(7))) {
    _1896__PHI_TEMPORARY = 0;   /* for PHI node */
    _1897__PHI_TEMPORARY = 0;   /* for PHI node */
    _1898__PHI_TEMPORARY = 212.57013003921713;   /* for PHI node */
    goto _1954;
  } else {
    _1889__PHI_TEMPORARY = _1892;   /* for PHI node */
    _1890__PHI_TEMPORARY = _1895;   /* for PHI node */
    _1891__PHI_TEMPORARY = _1894;   /* for PHI node */
    goto _1953;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_1954:
  _1896 = _1896__PHI_TEMPORARY;
  _1897 = _1897__PHI_TEMPORARY;
  _1898 = _1898__PHI_TEMPORARY;
  _1899 = llvm_add_u64(_1896, 1);
  _1900 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u6coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(6, _1896)))])));
  _1901 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1852, _1898, _1900);
  _1902 = (_1898 * _1853) + (_1897 * _1852);
  if ((_1899 == UINT64_C(6))) {
    goto _1955;
  } else {
    _1896__PHI_TEMPORARY = _1899;   /* for PHI node */
    _1897__PHI_TEMPORARY = _1902;   /* for PHI node */
    _1898__PHI_TEMPORARY = _1901;   /* for PHI node */
    goto _1954;
  }

  } while (1); /* end of syntactic loop '' */
_1955:
  _1903 = ((&((uint8_t*)(&_1854))[((int64_t)-8)]));
  _1904__PHI_TEMPORARY = 0;   /* for PHI node */
  _1905__PHI_TEMPORARY = 0;   /* for PHI node */
  _1906__PHI_TEMPORARY = -28.212072558200244;   /* for PHI node */
  goto _1956;

  do {     /* Syntactic loop '' to make GCC happy */
_1956:
  _1904 = _1904__PHI_TEMPORARY;
  _1905 = _1905__PHI_TEMPORARY;
  _1906 = _1906__PHI_TEMPORARY;
  _1907 = llvm_add_u64(_1904, 1);
  _1908 = *(double*)(((&((double*)_1903)[((int64_t)(llvm_sub_u64(5, _1904)))])));
  _1909 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1852, _1906, _1908);
  _1910 = (_1906 * _1853) + (_1905 * _1852);
  if ((_1907 == UINT64_C(5))) {
    goto _1957;
  } else {
    _1904__PHI_TEMPORARY = _1907;   /* for PHI node */
    _1905__PHI_TEMPORARY = _1910;   /* for PHI node */
    _1906__PHI_TEMPORARY = _1909;   /* for PHI node */
    goto _1956;
  }

  } while (1); /* end of syntactic loop '' */
_1957:
  _1911 = ((&((uint8_t*)(&_1855))[((int64_t)-8)]));
  _1912__PHI_TEMPORARY = 0;   /* for PHI node */
  _1913__PHI_TEMPORARY = 0;   /* for PHI node */
  _1914__PHI_TEMPORARY = 4.6695844234262474;   /* for PHI node */
  goto _1958;

  do {     /* Syntactic loop '' to make GCC happy */
_1958:
  _1912 = _1912__PHI_TEMPORARY;
  _1913 = _1913__PHI_TEMPORARY;
  _1914 = _1914__PHI_TEMPORARY;
  _1915 = llvm_add_u64(_1912, 1);
  _1916 = *(double*)(((&((double*)_1911)[((int64_t)(llvm_sub_u64(4, _1912)))])));
  _1917 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1852, _1914, _1916);
  _1918 = (_1914 * _1853) + (_1913 * _1852);
  if ((_1915 == UINT64_C(4))) {
    _1919__PHI_TEMPORARY = 0;   /* for PHI node */
    _1920__PHI_TEMPORARY = 0;   /* for PHI node */
    _1921__PHI_TEMPORARY = -1.0258125964506173;   /* for PHI node */
    goto _1959;
  } else {
    _1912__PHI_TEMPORARY = _1915;   /* for PHI node */
    _1913__PHI_TEMPORARY = _1918;   /* for PHI node */
    _1914__PHI_TEMPORARY = _1917;   /* for PHI node */
    goto _1958;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_1959:
  _1919 = _1919__PHI_TEMPORARY;
  _1920 = _1920__PHI_TEMPORARY;
  _1921 = _1921__PHI_TEMPORARY;
  _1922 = llvm_add_u64(_1919, 1);
  _1923 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u3coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _1919)))])));
  _1924 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1852, _1921, _1923);
  _1925 = (_1921 * _1853) + (_1920 * _1852);
  if ((_1922 == UINT64_C(3))) {
    _1926__PHI_TEMPORARY = 0;   /* for PHI node */
    _1927__PHI_TEMPORARY = 0;   /* for PHI node */
    _1928__PHI_TEMPORARY = 0.3342013888888889;   /* for PHI node */
    goto _1960;
  } else {
    _1919__PHI_TEMPORARY = _1922;   /* for PHI node */
    _1920__PHI_TEMPORARY = _1925;   /* for PHI node */
    _1921__PHI_TEMPORARY = _1924;   /* for PHI node */
    goto _1959;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_1960:
  _1926 = _1926__PHI_TEMPORARY;
  _1927 = _1927__PHI_TEMPORARY;
  _1928 = _1928__PHI_TEMPORARY;
  _1929 = llvm_add_u64(_1926, 1);
  _1930 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u2coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(2, _1926)))])));
  _1931 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1852, _1928, _1930);
  _1932 = (_1928 * _1853) + (_1927 * _1852);
  if ((_1929 == UINT64_C(2))) {
    goto _1961;
  } else {
    _1926__PHI_TEMPORARY = _1929;   /* for PHI node */
    _1927__PHI_TEMPORARY = _1932;   /* for PHI node */
    _1928__PHI_TEMPORARY = _1931;   /* for PHI node */
    goto _1960;
  }

  } while (1); /* end of syntactic loop '' */
_1961:
  _1933 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1852, -0.20833333333333334, 0.125);
  *((double*)&_1856) = 0;
  *((double*)&_1867) = 1;
  *(double*)_1857 = (_1853 * -0.20833333333333334);
  *(double*)(((&((uint8_t*)(&_1867))[((int64_t)8)]))) = _1933;
  *(double*)_1858 = _1932;
  *(double*)(((&((uint8_t*)(&_1867))[((int64_t)16)]))) = _1931;
  *(double*)_1859 = _1925;
  *(double*)(((&((uint8_t*)(&_1867))[((int64_t)24)]))) = _1924;
  *(double*)_1860 = _1918;
  *(double*)(((&((uint8_t*)(&_1867))[((int64_t)32)]))) = _1917;
  *(double*)_1861 = _1910;
  *(double*)(((&((uint8_t*)(&_1867))[((int64_t)40)]))) = _1909;
  *(double*)_1862 = _1902;
  *(double*)(((&((uint8_t*)(&_1867))[((int64_t)48)]))) = _1901;
  *(double*)_1863 = _1895;
  *(double*)(((&((uint8_t*)(&_1867))[((int64_t)56)]))) = _1894;
  *(double*)_1864 = _1888;
  *(double*)(((&((uint8_t*)(&_1867))[((int64_t)64)]))) = _1887;
  *(double*)_1865 = _1881;
  *(double*)(((&((uint8_t*)(&_1867))[((int64_t)72)]))) = _1880;
  *(double*)_1866 = _1874;
  *(double*)(((&((uint8_t*)(&_1867))[((int64_t)80)]))) = _1873;
  _1934 = (-(_1848)) / _1850;
  _1935 = (_1851 * _1848) - (_1850 * _1849);
  _1936 = ((&((uint8_t*)(&_1856))[((int64_t)-8)]));
  _1937 = ((&((uint8_t*)(&_1867))[((int64_t)-8)]));
  _1938 = 1 / (_1850 * _1850);
  _1939__PHI_TEMPORARY = 0;   /* for PHI node */
  _1940__PHI_TEMPORARY = _1874;   /* for PHI node */
  _1941__PHI_TEMPORARY = _1873;   /* for PHI node */
  goto _1962;

  do {     /* Syntactic loop '' to make GCC happy */
_1962:
  _1939 = _1939__PHI_TEMPORARY;
  _1940 = _1940__PHI_TEMPORARY;
  _1941 = _1941__PHI_TEMPORARY;
  _1942 = llvm_add_u64(_1939, 1);
  _1943 = llvm_sub_u64(10, _1939);
  _1944 = *(double*)(((&((double*)_1936)[((int64_t)_1943)])));
  _1945 = *(double*)(((&((double*)_1937)[((int64_t)_1943)])));
  _1946 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1934, _1941, _1945);
  _1947 = (_1944 + (_1940 * _1934)) + ((_1935 * _1941) * _1938);
  if ((_1942 == UINT64_C(10))) {
    goto _1963;
  } else {
    _1939__PHI_TEMPORARY = _1942;   /* for PHI node */
    _1940__PHI_TEMPORARY = _1947;   /* for PHI node */
    _1941__PHI_TEMPORARY = _1946;   /* for PHI node */
    goto _1962;
  }

  } while (1); /* end of syntactic loop '' */
_1963:
  _1948 = llvm_ctor_unnamed_1(0, 0);
  _1948.field0 = _1946;
  _1949 = _1948;
  _1949.field1 = _1947;
  return _1949;
}


static void fixderivative_isconverged(void* _1964, void* _1965, void* _1966, void* _1967) {
   /*tail*/ disconverged(_1964, _1965, _1966, /*UNDEF*/((void*)/*NULL*/0));
}


static void fixderivative_levin(void* _1968, void* _1969, void* _1970, void* _1971) {
   /*tail*/ derivative_levin(_1968, _1969, _1970, _1971);
}


static struct l_unnamed_2 fwddiffebesselk_temme_series(double _1972, double _1973, double _1974) {
  __PREFIXALIGN__(16) struct l_array_5_double _1975 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1976;    /* Address-exposed local */
  double _1977;    /* Address-exposed local */
  double _1978;    /* Address-exposed local */
  double _1979;    /* Address-exposed local */
  double _1980;    /* Address-exposed local */
  double _1981;    /* Address-exposed local */
  double _1982;    /* Address-exposed local */
  double _1983;    /* Address-exposed local */
  double _1984;
  double _1985;
  double _1986;
  uint64_t _1987;
  uint64_t _1987__PHI_TEMPORARY;
  double _1988;
  double _1988__PHI_TEMPORARY;
  double _1989;
  double _1989__PHI_TEMPORARY;
  uint64_t _1990;
  double _1991;
  double _1992;
  double _1993;
  double _1994;
  uint64_t _1995;
  uint64_t _1995__PHI_TEMPORARY;
  double _1996;
  double _1996__PHI_TEMPORARY;
  double _1997;
  double _1997__PHI_TEMPORARY;
  uint64_t _1998;
  double _1999;
  double _2000;
  double _2001;
  uint64_t _2002;
  uint64_t _2002__PHI_TEMPORARY;
  double _2003;
  double _2003__PHI_TEMPORARY;
  double _2004;
  double _2004__PHI_TEMPORARY;
  uint64_t _2005;
  double _2006;
  double _2007;
  double _2008;
  double _2009;
  double _2010;
  double _2011;
  double _2012;
  void* _2013;
  double _2014;
  uint64_t _2015;
  uint64_t _2015__PHI_TEMPORARY;
  double _2016;
  double _2016__PHI_TEMPORARY;
  double _2017;
  double _2017__PHI_TEMPORARY;
  uint64_t _2018;
  double _2019;
  double _2020;
  double _2021;
  double _2022;
  double _2023;
  double _2024;
  double _2025;
  double _2026;
  double _2027;
  double _2028;
  double _2029;
  uint64_t _2030;
  uint64_t _2030__PHI_TEMPORARY;
  double _2031;
  double _2031__PHI_TEMPORARY;
  double _2032;
  double _2032__PHI_TEMPORARY;
  uint64_t _2033;
  double _2034;
  double _2035;
  double _2036;
  double _2037;
  double _2038;
  double _2039;
  double _2040;
  uint64_t _2041;
  uint64_t _2041__PHI_TEMPORARY;
  double _2042;
  double _2042__PHI_TEMPORARY;
  double _2043;
  double _2043__PHI_TEMPORARY;
  uint64_t _2044;
  double _2045;
  double _2046;
  double _2047;
  double _2048;
  double _2049;
  double _2050;
  double _2051;
  double _2052;
  double _2053;
  double _2054;
  double _2055;
  double _2056;
  double _2057;
  uint32_t _2058;
  uint32_t _2058__PHI_TEMPORARY;
  double _2059;
  double _2059__PHI_TEMPORARY;
  double _2060;
  double _2060__PHI_TEMPORARY;
  double _2061;
  double _2061__PHI_TEMPORARY;
  double _2062;
  double _2062__PHI_TEMPORARY;
  double _2063;
  double _2063__PHI_TEMPORARY;
  double _2064;
  double _2064__PHI_TEMPORARY;
  double _2065;
  double _2065__PHI_TEMPORARY;
  double _2066;
  double _2066__PHI_TEMPORARY;
  double _2067;
  double _2067__PHI_TEMPORARY;
  double _2068;
  double _2068__PHI_TEMPORARY;
  double _2069;
  double _2069__PHI_TEMPORARY;
  double _2070;
  double _2071;
  double _2072;
  double _2073;
  double _2074;
  double _2075;
  double _2076;
  double _2077;
  double _2078;
  double _2079;
  double _2080;
  double _2081;
  uint32_t _2082;
  double _2083;
  double _2084;
  double _2085;
  double _2086;
  double _2087;
  double _2088;
  double _2089;
  double _2090;
  double _2091;
  double _2092;
  double _2093;
  double _2094;
  double _2095;
  struct l_unnamed_1 _2096;
  struct l_unnamed_1 _2097;
  struct l_unnamed_1 _2098;
  struct l_unnamed_1 _2099;
  struct l_unnamed_2 _2100;
  struct l_unnamed_2 _2101;

  *((double*)&_1975) = 1;
  *(double*)(((&((uint8_t*)(&_1975))[((int64_t)8)]))) = 0.16666666666666666;
  *(double*)(((&((uint8_t*)(&_1975))[((int64_t)16)]))) = 0.0083333333333333332;
  *(double*)(((&((uint8_t*)(&_1975))[((int64_t)24)]))) = 1.9841269841269841E-4;
  *(double*)(((&((uint8_t*)(&_1975))[((int64_t)32)]))) = 2.7557319223985893E-6;
  _1984 =  /*tail*/ log(_1974);
  _1985 = _1972 * _1972;
  _1986 = (_1972 * 2) * _1973;
  _1987__PHI_TEMPORARY = 0;   /* for PHI node */
  _1988__PHI_TEMPORARY = 0;   /* for PHI node */
  _1989__PHI_TEMPORARY = 1.9711021825948702;   /* for PHI node */
  goto _2102;

  do {     /* Syntactic loop '' to make GCC happy */
_2102:
  _1987 = _1987__PHI_TEMPORARY;
  _1988 = _1988__PHI_TEMPORARY;
  _1989 = _1989__PHI_TEMPORARY;
  _1990 = llvm_add_u64(_1987, 1);
  _1991 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_spcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _1987)))])));
  _1992 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1985, _1989, _1991);
  _1993 = (_1989 * _1986) + (_1988 * _1985);
  if ((_1990 == UINT64_C(3))) {
    goto _2103;
  } else {
    _1987__PHI_TEMPORARY = _1990;   /* for PHI node */
    _1988__PHI_TEMPORARY = _1993;   /* for PHI node */
    _1989__PHI_TEMPORARY = _1992;   /* for PHI node */
    goto _2102;
  }

  } while (1); /* end of syntactic loop '' */
_2103:
  _1994 = _1974 * 0.5;
  _1995__PHI_TEMPORARY = 0;   /* for PHI node */
  _1996__PHI_TEMPORARY = 0;   /* for PHI node */
  _1997__PHI_TEMPORARY = 0.042197734555544306;   /* for PHI node */
  goto _2104;

  do {     /* Syntactic loop '' to make GCC happy */
_2104:
  _1995 = _1995__PHI_TEMPORARY;
  _1996 = _1996__PHI_TEMPORARY;
  _1997 = _1997__PHI_TEMPORARY;
  _1998 = llvm_add_u64(_1995, 1);
  _1999 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_g1coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(2, _1995)))])));
  _2000 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1985, _1997, _1999);
  _2001 = (_1997 * _1986) + (_1996 * _1985);
  if ((_1998 == UINT64_C(2))) {
    _2002__PHI_TEMPORARY = 0;   /* for PHI node */
    _2003__PHI_TEMPORARY = 0;   /* for PHI node */
    _2004__PHI_TEMPORARY = 0.16653861138229145;   /* for PHI node */
    goto _2105;
  } else {
    _1995__PHI_TEMPORARY = _1998;   /* for PHI node */
    _1996__PHI_TEMPORARY = _2001;   /* for PHI node */
    _1997__PHI_TEMPORARY = _2000;   /* for PHI node */
    goto _2104;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2105:
  _2002 = _2002__PHI_TEMPORARY;
  _2003 = _2003__PHI_TEMPORARY;
  _2004 = _2004__PHI_TEMPORARY;
  _2005 = llvm_add_u64(_2002, 1);
  _2006 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_g2coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(2, _2002)))])));
  _2007 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1985, _2004, _2006);
  _2008 = (_2004 * _1986) + (_2003 * _1985);
  if ((_2005 == UINT64_C(2))) {
    goto _2106;
  } else {
    _2002__PHI_TEMPORARY = _2005;   /* for PHI node */
    _2003__PHI_TEMPORARY = _2008;   /* for PHI node */
    _2004__PHI_TEMPORARY = _2007;   /* for PHI node */
    goto _2105;
  }

  } while (1); /* end of syntactic loop '' */
_2106:
  _2009 = 0.69314718055994529 - _1984;
  _2010 = _2009 * _1972;
  _2011 = _2009 * _1973;
  _2012 = _2010 * _2010;
  _2013 = ((&((uint8_t*)(&_1975))[((int64_t)-8)]));
  _2014 = (_2010 * 2) * _2011;
  _2015__PHI_TEMPORARY = 0;   /* for PHI node */
  _2016__PHI_TEMPORARY = 0;   /* for PHI node */
  _2017__PHI_TEMPORARY = 2.7557319223985893E-6;   /* for PHI node */
  goto _2107;

  do {     /* Syntactic loop '' to make GCC happy */
_2107:
  _2015 = _2015__PHI_TEMPORARY;
  _2016 = _2016__PHI_TEMPORARY;
  _2017 = _2017__PHI_TEMPORARY;
  _2018 = llvm_add_u64(_2015, 1);
  _2019 = *(double*)(((&((double*)_2013)[((int64_t)(llvm_sub_u64(4, _2015)))])));
  _2020 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2012, _2017, _2019);
  _2021 = (_2014 * _2017) + (_2016 * _2012);
  if ((_2018 == UINT64_C(4))) {
    goto _2108;
  } else {
    _2015__PHI_TEMPORARY = _2018;   /* for PHI node */
    _2016__PHI_TEMPORARY = _2021;   /* for PHI node */
    _2017__PHI_TEMPORARY = _2020;   /* for PHI node */
    goto _2107;
  }

  } while (1); /* end of syntactic loop '' */
_2108:
  _2022 =  /*tail*/ cosh(_2010);
  _2023 =  /*tail*/ sinh(_2010);
  _2024 = _2000 * _2011;
  _2025 = (_2022 * _2001) + (((_2020 * _2008) + (_2021 * _2007)) * _2009);
  _2026 =  /*tail*/ pow(_1994, _1972);
  _2027 =  /*tail*/ pow(_1994, _1972);
  _2028 = log(_1994);
  _2029 = _2028 * _1973;
  _2030__PHI_TEMPORARY = 0;   /* for PHI node */
  _2031__PHI_TEMPORARY = 0;   /* for PHI node */
  _2032__PHI_TEMPORARY = -0.23263776388631713;   /* for PHI node */
  goto _2109;

  do {     /* Syntactic loop '' to make GCC happy */
_2109:
  _2030 = _2030__PHI_TEMPORARY;
  _2031 = _2031__PHI_TEMPORARY;
  _2032 = _2032__PHI_TEMPORARY;
  _2033 = llvm_add_u64(_2030, 1);
  _2034 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_besselk_temme_series_OC_pqkcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _2030)))])));
  _2035 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1972, _2032, _2034);
  _2036 = (_2032 * _1973) + (_2031 * _1972);
  if ((_2033 == UINT64_C(3))) {
    goto _2110;
  } else {
    _2030__PHI_TEMPORARY = _2033;   /* for PHI node */
    _2031__PHI_TEMPORARY = _2036;   /* for PHI node */
    _2032__PHI_TEMPORARY = _2035;   /* for PHI node */
    goto _2109;
  }

  } while (1); /* end of syntactic loop '' */
_2110:
  _2037 = _2009 * (_2007 * _2020);
  _2038 = _2025 + (_2024 * _2023);
  _2039 = _2026 * 2;
  _2040 = -(_1972);
  _2041__PHI_TEMPORARY = 0;   /* for PHI node */
  _2042__PHI_TEMPORARY = 0;   /* for PHI node */
  _2043__PHI_TEMPORARY = -0.23263776388631713;   /* for PHI node */
  goto _2111;

  do {     /* Syntactic loop '' to make GCC happy */
_2111:
  _2041 = _2041__PHI_TEMPORARY;
  _2042 = _2042__PHI_TEMPORARY;
  _2043 = _2043__PHI_TEMPORARY;
  _2044 = llvm_add_u64(_2041, 1);
  _2045 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_besselk_temme_series_OC_pqkcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _2041)))])));
  _2046 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2040, _2043, _2045);
  _2047 = (_2042 * _2040) - (_2043 * _1973);
  if ((_2044 == UINT64_C(3))) {
    goto _2112;
  } else {
    _2041__PHI_TEMPORARY = _2044;   /* for PHI node */
    _2042__PHI_TEMPORARY = _2047;   /* for PHI node */
    _2043__PHI_TEMPORARY = _2046;   /* for PHI node */
    goto _2111;
  }

  } while (1); /* end of syntactic loop '' */
_2112:
  _2048 = _1994 * _1994;
  _2049 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2000, _2022, _2037);
  _2050 = _2029 * _2027;
  _2051 = _1992 * _2049;
  _2052 = (_2038 * _1992) + (_2049 * _1993);
  _2053 = _2035 / _2039;
  _2054 = ((_2036 * _2039) - ((_2050 * 2) * _2035)) / (_2039 * _2039);
  _2055 = (_2026 * _2046) * 0.5;
  _2056 = ((_2046 * _2050) + (_2047 * _2026)) * 0.5;
  _2057 = (_2040 - _1972) * _1973;
  _2058__PHI_TEMPORARY = 0;   /* for PHI node */
  _2059__PHI_TEMPORARY = 0;   /* for PHI node */
  _2060__PHI_TEMPORARY = 0;   /* for PHI node */
  _2061__PHI_TEMPORARY = 0;   /* for PHI node */
  _2062__PHI_TEMPORARY = 0;   /* for PHI node */
  _2063__PHI_TEMPORARY = 1;   /* for PHI node */
  _2064__PHI_TEMPORARY = _2056;   /* for PHI node */
  _2065__PHI_TEMPORARY = _2055;   /* for PHI node */
  _2066__PHI_TEMPORARY = _2054;   /* for PHI node */
  _2067__PHI_TEMPORARY = _2053;   /* for PHI node */
  _2068__PHI_TEMPORARY = _2052;   /* for PHI node */
  _2069__PHI_TEMPORARY = _2051;   /* for PHI node */
  goto _2113;

  do {     /* Syntactic loop '' to make GCC happy */
_2113:
  _2058 = _2058__PHI_TEMPORARY;
  _2059 = _2059__PHI_TEMPORARY;
  _2060 = _2060__PHI_TEMPORARY;
  _2061 = _2061__PHI_TEMPORARY;
  _2062 = _2062__PHI_TEMPORARY;
  _2063 = _2063__PHI_TEMPORARY;
  _2064 = _2064__PHI_TEMPORARY;
  _2065 = _2065__PHI_TEMPORARY;
  _2066 = _2066__PHI_TEMPORARY;
  _2067 = _2067__PHI_TEMPORARY;
  _2068 = _2068__PHI_TEMPORARY;
  _2069 = _2069__PHI_TEMPORARY;
  _2070 = _2063 * _2069;
  _2071 = _2068 * _2063;
  _1976 = _2071;
  _1977 = _2070;
  _2072 = ((double)(uint32_t)_2058);
  _2073 =  /*tail*/ llvm_OC_fmuladd_OC_f64((-(_2072)), _2069, _2067);
  _2074 = _2063 * _2073;
  _2075 = (_2066 - (_2068 * _2072)) * _2063;
  _1978 = _2075;
  _1979 = _2074;
  _2076 = _2062 + _2070;
  _2077 = _2071 + _2061;
  _2078 = _2060 + _2074;
  _2079 = _2075 + _2059;
  fixderivative_isconverged((&_1977), (&_1976), (&_1981), (&_1980));
  fixderivative_isconverged_OC_1((&_1979), (&_1978), (&_1983), (&_1982));
  _2080 = _1981;
  _2081 = _1983;
  if ((llvm_select_bool((llvm_fcmp_olt(_2080, 0)), (llvm_fcmp_olt(_2081, 0)), 0))) {
    goto _2114;
  } else {
    goto _2115;
  }

_2115:
  _2082 = llvm_add_u32(_2058, 1);
  _2083 = ((double)(uint32_t)_2082);
  _2084 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2083, _2069, _2067);
  _2085 = _2065 + _2084;
  _2086 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2040, _1972, (((double)(uint32_t)(llvm_mul_u32(_2082, _2082)))));
  _2087 = _2085 / _2086;
  _2088 = ((((_2066 + _2064) + (_2068 * _2083)) * _2086) - (_2057 * _2085)) / (_2086 * _2086);
  _2089 = _2083 - _1972;
  _2090 = _2067 / _2089;
  _2091 = ((_2067 * _1973) + (_2066 * _2089)) / (_2089 * _2089);
  _2092 = _2083 + _1972;
  _2093 = _2065 / _2092;
  _2094 = ((_2064 * _2092) - (_2065 * _1973)) / (_2092 * _2092);
  _2095 = (_2048 / _2083) * _2063;
  if ((_2082 == 500u)) {
    goto _2114;
  } else {
    _2058__PHI_TEMPORARY = _2082;   /* for PHI node */
    _2059__PHI_TEMPORARY = _2079;   /* for PHI node */
    _2060__PHI_TEMPORARY = _2078;   /* for PHI node */
    _2061__PHI_TEMPORARY = _2077;   /* for PHI node */
    _2062__PHI_TEMPORARY = _2076;   /* for PHI node */
    _2063__PHI_TEMPORARY = _2095;   /* for PHI node */
    _2064__PHI_TEMPORARY = _2094;   /* for PHI node */
    _2065__PHI_TEMPORARY = _2093;   /* for PHI node */
    _2066__PHI_TEMPORARY = _2091;   /* for PHI node */
    _2067__PHI_TEMPORARY = _2090;   /* for PHI node */
    _2068__PHI_TEMPORARY = _2088;   /* for PHI node */
    _2069__PHI_TEMPORARY = _2087;   /* for PHI node */
    goto _2113;
  }

  } while (1); /* end of syntactic loop '' */
_2114:
  _2096 = llvm_ctor_unnamed_1(0, 0);
  _2096.field0 = _2077;
  _2097 = llvm_ctor_unnamed_1(0, 0);
  _2097.field0 = _2076;
  _2098 = _2096;
  _2098.field1 = ((_2079 * _1994) / _2048);
  _2099 = _2097;
  _2099.field1 = (_2078 / _1994);
  _2100 = llvm_ctor_unnamed_2(llvm_ctor_unnamed_1(0, 0), llvm_ctor_unnamed_1(0, 0));
  _2100.field0 = _2099;
  _2101 = _2100;
  _2101.field1 = _2098;
  return _2101;
}


static void fixderivative_isconverged_OC_1(void* _2116, void* _2117, void* _2118, void* _2119) {
   /*tail*/ disconverged(_2116, _2117, _2118, /*UNDEF*/((void*)/*NULL*/0));
}


static double fwddiffebesselk_power_series(double _2120, double _2121, double _2122) {
  double _2123;    /* Address-exposed local */
  double _2124;    /* Address-exposed local */
  double _2125;    /* Address-exposed local */
  double _2126;    /* Address-exposed local */
  struct l_unnamed_1 _2127;
  double _2128;
  double _2129;
  double _2130;
  double _2131;
  double _2131__PHI_TEMPORARY;
  double _2132;
  double _2132__PHI_TEMPORARY;
  uint32_t _2133;
  uint32_t _2133__PHI_TEMPORARY;
  double _2134;
  double _2134__PHI_TEMPORARY;
  double _2135;
  double _2135__PHI_TEMPORARY;
  double _2136;
  double _2136__PHI_TEMPORARY;
  double _2137;
  double _2137__PHI_TEMPORARY;
  double _2138;
  double _2138__PHI_TEMPORARY;
  double _2139;
  double _2139__PHI_TEMPORARY;
  double _2140;
  double _2140__PHI_TEMPORARY;
  uint32_t _2141;
  double _2142;
  double _2143;
  double _2144;
  double _2145;
  double _2146;
  double _2147;
  double _2148;
  double _2149;
  double _2150;
  double _2151;
  double _2152;
  double _2153;
  double _2154;
  double _2155;
  double _2156;
  double _2157;
  double _2158;
  double _2159;
  double _2160;
  double _2161;
  double _2162;
  double _2163;
  double _2164;
  double _2165;
  double _2166;
  double _2167;
  double _2168;
  double _2169;
  double _2170;
  double _2171;

  _2127 =  /*tail*/ fwddiffegamma(_2120, _2121);
  _2128 =  /*tail*/ sinpi((0.5 - _2120));
  _2129 = _2122 * _2122;
  _2126 = 1;
  _2130 = _2129 * _2121;
  _2131__PHI_TEMPORARY = 1;   /* for PHI node */
  _2132__PHI_TEMPORARY = 0;   /* for PHI node */
  _2133__PHI_TEMPORARY = 0;   /* for PHI node */
  _2134__PHI_TEMPORARY = 0;   /* for PHI node */
  _2135__PHI_TEMPORARY = 0;   /* for PHI node */
  _2136__PHI_TEMPORARY = 0;   /* for PHI node */
  _2137__PHI_TEMPORARY = 0;   /* for PHI node */
  _2138__PHI_TEMPORARY = 0;   /* for PHI node */
  _2139__PHI_TEMPORARY = 1;   /* for PHI node */
  _2140__PHI_TEMPORARY = 4;   /* for PHI node */
  goto _2172;

  do {     /* Syntactic loop '' to make GCC happy */
_2172:
  _2131 = _2131__PHI_TEMPORARY;
  _2132 = _2132__PHI_TEMPORARY;
  _2133 = _2133__PHI_TEMPORARY;
  _2134 = _2134__PHI_TEMPORARY;
  _2135 = _2135__PHI_TEMPORARY;
  _2136 = _2136__PHI_TEMPORARY;
  _2137 = _2137__PHI_TEMPORARY;
  _2138 = _2138__PHI_TEMPORARY;
  _2139 = _2139__PHI_TEMPORARY;
  _2140 = _2140__PHI_TEMPORARY;
  _2141 = llvm_add_u32(_2133, 1);
  _2142 = _2135 + _2131;
  _2143 = _2132 + _2134;
  _2144 = _2137 + _2139;
  _2145 = _2138 + _2136;
  _2146 = ((double)(uint32_t)_2141);
  _2147 = (_2146 - _2120) * _2140;
  _2148 = _2129 / _2147;
  _2149 = _2148 * _2131;
  _2150 = (((_2130 * _2140) * _2131) / (_2147 * _2147)) + (_2148 * _2132);
  _2123 = _2150;
  _2124 = _2149;
  fixderivative_isconverged((&_2124), (&_2123), (&_2126), (&_2125));
  _2151 = _2126;
  if ((llvm_fcmp_olt(_2151, 0))) {
    goto _2173;
  } else {
    goto _2174;
  }

_2174:
  _2152 = (_2146 + _2120) * _2140;
  _2153 = _2129 / _2152;
  _2154 = _2139 * _2153;
  _2155 = (_2153 * _2138) - (((_2130 * _2139) * _2140) / (_2152 * _2152));
  _2156 = _2140 + 4;
  if ((_2141 == 49u)) {
    goto _2173;
  } else {
    _2131__PHI_TEMPORARY = _2149;   /* for PHI node */
    _2132__PHI_TEMPORARY = _2150;   /* for PHI node */
    _2133__PHI_TEMPORARY = _2141;   /* for PHI node */
    _2134__PHI_TEMPORARY = _2143;   /* for PHI node */
    _2135__PHI_TEMPORARY = _2142;   /* for PHI node */
    _2136__PHI_TEMPORARY = _2145;   /* for PHI node */
    _2137__PHI_TEMPORARY = _2144;   /* for PHI node */
    _2138__PHI_TEMPORARY = _2155;   /* for PHI node */
    _2139__PHI_TEMPORARY = _2154;   /* for PHI node */
    _2140__PHI_TEMPORARY = _2156;   /* for PHI node */
    goto _2172;
  }

  } while (1); /* end of syntactic loop '' */
_2173:
  _2157 =  /*tail*/ sinpi((-(_2120)));
  _2158 = (_2127.field1);
  _2159 = (_2127.field0);
  _2160 = _2159 * _2157;
  _2161 = _2160 * _2120;
  _2162 = 3.1415926535897931 / _2161;
  _2163 = _2122 * 0.5;
  _2164 =  /*tail*/ pow(_2163, _2120);
  _2165 =  /*tail*/ pow(_2163, _2120);
  _2166 = log(_2163);
  _2167 = (_2166 * _2121) * _2165;
  _2168 = _2164 * _2164;
  _2169 = _2168 * _2162;
  _2170 = _2164 * 2;
  _2171 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2159, _2142, (_2144 * _2169));
  return (((((((_2142 * _2158) + (_2143 * _2159)) + (_2169 * _2145)) + ((((_2170 * _2162) * _2167) - (((_2168 * 3.1415926535897931) * ((((_2157 * _2158) - (((_2121 * 3.1415926535897962) * _2128) * _2159)) * _2120) + (_2160 * _2121))) / (_2161 * _2161))) * _2144)) * _2170) - ((_2167 * 2) * _2171)) / (_2170 * _2170));
}


static struct l_unnamed_1 fwddiffegamma(double _2175, double _2176) {
  double _2177;
  double _2178;
  double _2179;
  double _2180;
  double _2181;
  double _2182;
  double _2183;
  double _2183__PHI_TEMPORARY;
  double _2184;
  double _2184__PHI_TEMPORARY;
  double _2185;
  double _2185__PHI_TEMPORARY;
  double _2186;
  double _2186__PHI_TEMPORARY;
  double _2187;
  double _2188;
  double _2189;
  uint64_t _2190;
  uint64_t _2190__PHI_TEMPORARY;
  double _2191;
  double _2191__PHI_TEMPORARY;
  double _2192;
  double _2192__PHI_TEMPORARY;
  uint64_t _2193;
  double _2194;
  double _2195;
  double _2196;
  double _2197;
  double _2198;
  double _2199;
  double _2200;
  double _2201;
  double _2202;
  double _2203;
  double _2204;
  double _2205;
  double _2206;
  double _2207;
  double _2208;
  double _2209;
  double _2210;
  double _2211;
  double _2212;
  double _2213;
  double _2213__PHI_TEMPORARY;
  double _2214;
  double _2214__PHI_TEMPORARY;
  double _2215;
  double _2215__PHI_TEMPORARY;
  double _2216;
  double _2216__PHI_TEMPORARY;
  double _2217;
  double _2217__PHI_TEMPORARY;
  double _2218;
  double _2218__PHI_TEMPORARY;
  double _2219;
  double _2220;
  double _2221;
  double _2222;
  double _2222__PHI_TEMPORARY;
  double _2223;
  double _2223__PHI_TEMPORARY;
  double _2224;
  double _2224__PHI_TEMPORARY;
  double _2225;
  double _2226;
  double _2227;
  double _2228;
  double _2228__PHI_TEMPORARY;
  double _2229;
  double _2229__PHI_TEMPORARY;
  double _2230;
  double _2230__PHI_TEMPORARY;
  double _2231;
  uint64_t _2232;
  uint64_t _2232__PHI_TEMPORARY;
  double _2233;
  double _2233__PHI_TEMPORARY;
  double _2234;
  double _2234__PHI_TEMPORARY;
  uint64_t _2235;
  double _2236;
  double _2237;
  double _2238;
  uint64_t _2239;
  uint64_t _2239__PHI_TEMPORARY;
  double _2240;
  double _2240__PHI_TEMPORARY;
  double _2241;
  double _2241__PHI_TEMPORARY;
  uint64_t _2242;
  double _2243;
  double _2244;
  double _2245;
  double _2246;
  double _2247;
  double _2248;
  double _2249;
  double _2250;
  double _2251;
  double _2252;
  double _2253;
  double _2254;
  double _2254__PHI_TEMPORARY;
  double _2255;
  double _2255__PHI_TEMPORARY;
  struct l_unnamed_1 _2256;
  struct l_unnamed_1 _2257;

  if ((llvm_fcmp_olt(_2175, 0))) {
    goto _2258;
  } else {
    _2183__PHI_TEMPORARY = 0;   /* for PHI node */
    _2185__PHI_TEMPORARY = _2176;   /* for PHI node */
    _2186__PHI_TEMPORARY = _2175;   /* for PHI node */
    goto _2259;
  }

_2258:
  _2177 =  /*tail*/ sinpi(_2175);
  _2178 =  /*tail*/ sinpi((_2175 + 0.5));
  if ((llvm_fcmp_oeq(_2177, 0))) {
    _2254__PHI_TEMPORARY = 0;   /* for PHI node */
    _2255__PHI_TEMPORARY = (*(double*)&FPConstant2);   /* for PHI node */
    goto _2260;
  } else {
    goto _2261;
  }

_2261:
  _2179 = -(_2175);
  _2180 = -(_2176);
  _2181 = _2177 * _2179;
  _2182 = (_2177 * _2180) - (((_2175 * 3.1415926535897962) * _2176) * _2178);
  _2183__PHI_TEMPORARY = _2182;   /* for PHI node */
  _2184__PHI_TEMPORARY = _2181;   /* for PHI node */
  _2185__PHI_TEMPORARY = _2180;   /* for PHI node */
  _2186__PHI_TEMPORARY = _2179;   /* for PHI node */
  goto _2259;

_2259:
  _2183 = _2183__PHI_TEMPORARY;
  _2184 = _2184__PHI_TEMPORARY;
  _2185 = _2185__PHI_TEMPORARY;
  _2186 = _2186__PHI_TEMPORARY;
  _2187 =  /*tail*/ llvm_OC_fabs_OC_f64(_2186);
  if ((llvm_fcmp_ueq(_2187, (*(double*)&FPConstant1)))) {
    _2254__PHI_TEMPORARY = _2185;   /* for PHI node */
    _2255__PHI_TEMPORARY = _2186;   /* for PHI node */
    goto _2260;
  } else {
    goto _2262;
  }

_2262:
  if ((llvm_fcmp_ogt(_2186, 11.5))) {
    goto _2263;
  } else {
    goto _2264;
  }

_2264:
  if ((llvm_fcmp_ult(_2186, 3))) {
    _2213__PHI_TEMPORARY = 0;   /* for PHI node */
    _2214__PHI_TEMPORARY = 1;   /* for PHI node */
    _2215__PHI_TEMPORARY = _2186;   /* for PHI node */
    goto _2265;
  } else {
    _2216__PHI_TEMPORARY = _2186;   /* for PHI node */
    _2217__PHI_TEMPORARY = 0;   /* for PHI node */
    _2218__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2266;
  }

_2263:
  _2188 = 1 / _2186;
  _2189 = 1 / (_2186 * _2186);
  _2190__PHI_TEMPORARY = 0;   /* for PHI node */
  _2191__PHI_TEMPORARY = 0;   /* for PHI node */
  _2192__PHI_TEMPORARY = 7.1473913781436109E-4;   /* for PHI node */
  goto _2267;

  do {     /* Syntactic loop '' to make GCC happy */
_2267:
  _2190 = _2190__PHI_TEMPORARY;
  _2191 = _2191__PHI_TEMPORARY;
  _2192 = _2192__PHI_TEMPORARY;
  _2193 = llvm_add_u64(_2190, 1);
  _2194 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_gamma_OC_coefs))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(9, _2190)))])));
  _2195 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2188, _2192, _2194);
  _2196 = (_2191 * _2188) - ((_2185 * _2192) * _2189);
  if ((_2193 == UINT64_C(9))) {
    goto _2268;
  } else {
    _2190__PHI_TEMPORARY = _2193;   /* for PHI node */
    _2191__PHI_TEMPORARY = _2196;   /* for PHI node */
    _2192__PHI_TEMPORARY = _2195;   /* for PHI node */
    goto _2267;
  }

  } while (1); /* end of syntactic loop '' */
_2268:
  _2197 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2186, 0.5, -0.25);
  _2198 =  /*tail*/ pow(_2186, _2197);
  _2199 =  /*tail*/ pow(_2186, (_2197 + -1));
  _2200 =  /*tail*/ pow(_2186, _2197);
  _2201 = log(_2186);
  _2202 = ((_2199 * _2197) + ((_2201 * 0.5) * _2200)) * _2185;
  _2203 = _2198 * 2.5066282746310002;
  _2204 =  /*tail*/ exp(_2186);
  _2205 =  /*tail*/ exp(_2186);
  _2206 = _2198 / _2204;
  _2207 = _2203 * _2206;
  _2208 = _2195 * _2207;
  _2209 = ((((((_2202 * _2204) - ((_2198 * _2185) * _2205)) * _2203) / (_2204 * _2204)) + ((_2206 * 2.5066282746310002) * _2202)) * _2195) + (_2207 * _2196);
  _2210 = _2184 * _2208;
  _2211 = llvm_select_f64((llvm_fcmp_olt(_2175, 0)), ((((_2209 * _2184) + (_2208 * _2183)) * -3.1415926535897931) / (_2210 * _2210)), _2209);
  _2212 = llvm_select_f64((llvm_fcmp_olt(_2175, 0)), (3.1415926535897931 / _2210), _2208);
  _2254__PHI_TEMPORARY = _2211;   /* for PHI node */
  _2255__PHI_TEMPORARY = _2212;   /* for PHI node */
  goto _2260;

_2265:
  _2213 = _2213__PHI_TEMPORARY;
  _2214 = _2214__PHI_TEMPORARY;
  _2215 = _2215__PHI_TEMPORARY;
  if ((llvm_fcmp_olt(_2215, 2))) {
    _2222__PHI_TEMPORARY = _2215;   /* for PHI node */
    _2223__PHI_TEMPORARY = _2213;   /* for PHI node */
    _2224__PHI_TEMPORARY = _2214;   /* for PHI node */
    goto _2269;
  } else {
    _2228__PHI_TEMPORARY = _2213;   /* for PHI node */
    _2229__PHI_TEMPORARY = _2214;   /* for PHI node */
    _2230__PHI_TEMPORARY = _2215;   /* for PHI node */
    goto _2270;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2266:
  _2216 = _2216__PHI_TEMPORARY;
  _2217 = _2217__PHI_TEMPORARY;
  _2218 = _2218__PHI_TEMPORARY;
  _2219 = _2216 + -1;
  _2220 = _2219 * _2218;
  _2221 = (_2218 * _2185) + (_2217 * _2219);
  if ((llvm_fcmp_ult(_2219, 3))) {
    _2213__PHI_TEMPORARY = _2221;   /* for PHI node */
    _2214__PHI_TEMPORARY = _2220;   /* for PHI node */
    _2215__PHI_TEMPORARY = _2219;   /* for PHI node */
    goto _2265;
  } else {
    _2216__PHI_TEMPORARY = _2219;   /* for PHI node */
    _2217__PHI_TEMPORARY = _2221;   /* for PHI node */
    _2218__PHI_TEMPORARY = _2220;   /* for PHI node */
    goto _2266;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2269:
  _2222 = _2222__PHI_TEMPORARY;
  _2223 = _2223__PHI_TEMPORARY;
  _2224 = _2224__PHI_TEMPORARY;
  _2225 = _2224 / _2222;
  _2226 = ((_2223 * _2222) - (_2224 * _2185)) / (_2222 * _2222);
  _2227 = _2222 + 1;
  if ((llvm_fcmp_olt(_2227, 2))) {
    _2222__PHI_TEMPORARY = _2227;   /* for PHI node */
    _2223__PHI_TEMPORARY = _2226;   /* for PHI node */
    _2224__PHI_TEMPORARY = _2225;   /* for PHI node */
    goto _2269;
  } else {
    _2228__PHI_TEMPORARY = _2226;   /* for PHI node */
    _2229__PHI_TEMPORARY = _2225;   /* for PHI node */
    _2230__PHI_TEMPORARY = _2227;   /* for PHI node */
    goto _2270;
  }

  } while (1); /* end of syntactic loop '' */
_2270:
  _2228 = _2228__PHI_TEMPORARY;
  _2229 = _2229__PHI_TEMPORARY;
  _2230 = _2230__PHI_TEMPORARY;
  _2231 = _2230 + -2;
  _2232__PHI_TEMPORARY = 0;   /* for PHI node */
  _2233__PHI_TEMPORARY = 0;   /* for PHI node */
  _2234__PHI_TEMPORARY = 4.2127604874716217E-5;   /* for PHI node */
  goto _2271;

  do {     /* Syntactic loop '' to make GCC happy */
_2271:
  _2232 = _2232__PHI_TEMPORARY;
  _2233 = _2233__PHI_TEMPORARY;
  _2234 = _2234__PHI_TEMPORARY;
  _2235 = llvm_add_u64(_2232, 1);
  _2236 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_gamma_OC_P))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(7, _2232)))])));
  _2237 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2231, _2234, _2236);
  _2238 = (_2234 * _2185) + (_2233 * _2231);
  if ((_2235 == UINT64_C(7))) {
    _2239__PHI_TEMPORARY = 0;   /* for PHI node */
    _2240__PHI_TEMPORARY = 0;   /* for PHI node */
    _2241__PHI_TEMPORARY = -1.3971485174761705E-5;   /* for PHI node */
    goto _2272;
  } else {
    _2232__PHI_TEMPORARY = _2235;   /* for PHI node */
    _2233__PHI_TEMPORARY = _2238;   /* for PHI node */
    _2234__PHI_TEMPORARY = _2237;   /* for PHI node */
    goto _2271;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2272:
  _2239 = _2239__PHI_TEMPORARY;
  _2240 = _2240__PHI_TEMPORARY;
  _2241 = _2241__PHI_TEMPORARY;
  _2242 = llvm_add_u64(_2239, 1);
  _2243 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_gamma_OC_Q))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(8, _2239)))])));
  _2244 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2231, _2241, _2243);
  _2245 = (_2241 * _2185) + (_2240 * _2231);
  if ((_2242 == UINT64_C(8))) {
    goto _2273;
  } else {
    _2239__PHI_TEMPORARY = _2242;   /* for PHI node */
    _2240__PHI_TEMPORARY = _2245;   /* for PHI node */
    _2241__PHI_TEMPORARY = _2244;   /* for PHI node */
    goto _2272;
  }

  } while (1); /* end of syntactic loop '' */
_2273:
  if ((llvm_fcmp_olt(_2175, 0))) {
    goto _2274;
  } else {
    goto _2275;
  }

_2274:
  _2246 = _2244 * 3.1415926535897931;
  _2247 = _2184 * _2229;
  _2248 = _2247 * _2237;
  _2249 = _2246 / _2248;
  _2250 = (((_2248 * 3.1415926535897931) * _2245) - (_2246 * ((_2237 * ((_2229 * _2183) + (_2228 * _2184))) + (_2238 * _2247)))) / (_2248 * _2248);
  _2254__PHI_TEMPORARY = _2250;   /* for PHI node */
  _2255__PHI_TEMPORARY = _2249;   /* for PHI node */
  goto _2260;

_2275:
  _2251 = _2229 * _2237;
  _2252 = _2251 / _2244;
  _2253 = ((_2244 * ((_2237 * _2228) + (_2238 * _2229))) - (_2245 * _2251)) / (_2244 * _2244);
  _2254__PHI_TEMPORARY = _2253;   /* for PHI node */
  _2255__PHI_TEMPORARY = _2252;   /* for PHI node */
  goto _2260;

_2260:
  _2254 = _2254__PHI_TEMPORARY;
  _2255 = _2255__PHI_TEMPORARY;
  _2256 = llvm_ctor_unnamed_1(0, 0);
  _2256.field0 = _2255;
  _2257 = _2256;
  _2257.field1 = _2254;
  return _2257;
}


static struct l_unnamed_1 fwddiffeUk_poly_Kn_OC_3(double _2276, double _2277, double _2278, double _2279, double _2280) {
  __PREFIXALIGN__(16) struct l_array_6_double _2281 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_5_double _2282 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_11_double _2283 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _2284;
  void* _2285;
  void* _2286;
  void* _2287;
  void* _2288;
  void* _2289;
  void* _2290;
  void* _2291;
  void* _2292;
  void* _2293;
  __PREFIXALIGN__(16) struct l_array_11_double _2294 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint64_t _2295;
  uint64_t _2295__PHI_TEMPORARY;
  double _2296;
  double _2296__PHI_TEMPORARY;
  double _2297;
  double _2297__PHI_TEMPORARY;
  uint64_t _2298;
  double _2299;
  double _2300;
  double _2301;
  uint64_t _2302;
  uint64_t _2302__PHI_TEMPORARY;
  double _2303;
  double _2303__PHI_TEMPORARY;
  double _2304;
  double _2304__PHI_TEMPORARY;
  uint64_t _2305;
  double _2306;
  double _2307;
  double _2308;
  uint64_t _2309;
  uint64_t _2309__PHI_TEMPORARY;
  double _2310;
  double _2310__PHI_TEMPORARY;
  double _2311;
  double _2311__PHI_TEMPORARY;
  uint64_t _2312;
  double _2313;
  double _2314;
  double _2315;
  uint64_t _2316;
  uint64_t _2316__PHI_TEMPORARY;
  double _2317;
  double _2317__PHI_TEMPORARY;
  double _2318;
  double _2318__PHI_TEMPORARY;
  uint64_t _2319;
  double _2320;
  double _2321;
  double _2322;
  uint64_t _2323;
  uint64_t _2323__PHI_TEMPORARY;
  double _2324;
  double _2324__PHI_TEMPORARY;
  double _2325;
  double _2325__PHI_TEMPORARY;
  uint64_t _2326;
  double _2327;
  double _2328;
  double _2329;
  void* _2330;
  uint64_t _2331;
  uint64_t _2331__PHI_TEMPORARY;
  double _2332;
  double _2332__PHI_TEMPORARY;
  double _2333;
  double _2333__PHI_TEMPORARY;
  uint64_t _2334;
  double _2335;
  double _2336;
  double _2337;
  void* _2338;
  uint64_t _2339;
  uint64_t _2339__PHI_TEMPORARY;
  double _2340;
  double _2340__PHI_TEMPORARY;
  double _2341;
  double _2341__PHI_TEMPORARY;
  uint64_t _2342;
  double _2343;
  double _2344;
  double _2345;
  uint64_t _2346;
  uint64_t _2346__PHI_TEMPORARY;
  double _2347;
  double _2347__PHI_TEMPORARY;
  double _2348;
  double _2348__PHI_TEMPORARY;
  uint64_t _2349;
  double _2350;
  double _2351;
  double _2352;
  uint64_t _2353;
  uint64_t _2353__PHI_TEMPORARY;
  double _2354;
  double _2354__PHI_TEMPORARY;
  double _2355;
  double _2355__PHI_TEMPORARY;
  uint64_t _2356;
  double _2357;
  double _2358;
  double _2359;
  double _2360;
  double _2361;
  double _2362;
  void* _2363;
  void* _2364;
  double _2365;
  uint64_t _2366;
  uint64_t _2366__PHI_TEMPORARY;
  double _2367;
  double _2367__PHI_TEMPORARY;
  double _2368;
  double _2368__PHI_TEMPORARY;
  uint64_t _2369;
  uint64_t _2370;
  double _2371;
  double _2372;
  double _2373;
  double _2374;
  struct l_unnamed_1 _2375;
  struct l_unnamed_1 _2376;

  _2284 = ((&((uint8_t*)(&_2283))[((int64_t)8)]));
  _2285 = ((&((uint8_t*)(&_2283))[((int64_t)16)]));
  _2286 = ((&((uint8_t*)(&_2283))[((int64_t)24)]));
  _2287 = ((&((uint8_t*)(&_2283))[((int64_t)32)]));
  _2288 = ((&((uint8_t*)(&_2283))[((int64_t)40)]));
  _2289 = ((&((uint8_t*)(&_2283))[((int64_t)48)]));
  _2290 = ((&((uint8_t*)(&_2283))[((int64_t)56)]));
  _2291 = ((&((uint8_t*)(&_2283))[((int64_t)64)]));
  _2292 = ((&((uint8_t*)(&_2283))[((int64_t)72)]));
  _2293 = ((&((uint8_t*)(&_2283))[((int64_t)80)]));
  *((double*)&_2281) = 0.22710800170898438;
  *(double*)(((&((uint8_t*)(&_2281))[((int64_t)8)]))) = -7.3687943594796321;
  *(double*)(((&((uint8_t*)(&_2281))[((int64_t)16)]))) = 42.534998745388457;
  *(double*)(((&((uint8_t*)(&_2281))[((int64_t)24)]))) = -91.81824154324002;
  *(double*)(((&((uint8_t*)(&_2281))[((int64_t)32)]))) = 84.636217674600729;
  *(double*)(((&((uint8_t*)(&_2281))[((int64_t)40)]))) = -28.212072558200244;
  *((double*)&_2282) = 0.112152099609375;
  *(double*)(((&((uint8_t*)(&_2282))[((int64_t)8)]))) = -2.3640869140624998;
  *(double*)(((&((uint8_t*)(&_2282))[((int64_t)16)]))) = 8.78912353515625;
  *(double*)(((&((uint8_t*)(&_2282))[((int64_t)24)]))) = -11.207002616222994;
  *(double*)(((&((uint8_t*)(&_2282))[((int64_t)32)]))) = 4.6695844234262474;
  _2295__PHI_TEMPORARY = 0;   /* for PHI node */
  _2296__PHI_TEMPORARY = 0;   /* for PHI node */
  _2297__PHI_TEMPORARY = 3284469.8530720379;   /* for PHI node */
  goto _2377;

  do {     /* Syntactic loop '' to make GCC happy */
_2377:
  _2295 = _2295__PHI_TEMPORARY;
  _2296 = _2296__PHI_TEMPORARY;
  _2297 = _2297__PHI_TEMPORARY;
  _2298 = llvm_add_u64(_2295, 1);
  _2299 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u10coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(10, _2295)))])));
  _2300 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2279, _2297, _2299);
  _2301 = (_2297 * _2280) + (_2296 * _2279);
  if ((_2298 == UINT64_C(10))) {
    _2302__PHI_TEMPORARY = 0;   /* for PHI node */
    _2303__PHI_TEMPORARY = 0;   /* for PHI node */
    _2304__PHI_TEMPORARY = -242919.18790055133;   /* for PHI node */
    goto _2378;
  } else {
    _2295__PHI_TEMPORARY = _2298;   /* for PHI node */
    _2296__PHI_TEMPORARY = _2301;   /* for PHI node */
    _2297__PHI_TEMPORARY = _2300;   /* for PHI node */
    goto _2377;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2378:
  _2302 = _2302__PHI_TEMPORARY;
  _2303 = _2303__PHI_TEMPORARY;
  _2304 = _2304__PHI_TEMPORARY;
  _2305 = llvm_add_u64(_2302, 1);
  _2306 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u9coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(9, _2302)))])));
  _2307 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2279, _2304, _2306);
  _2308 = (_2304 * _2280) + (_2303 * _2279);
  if ((_2305 == UINT64_C(9))) {
    _2309__PHI_TEMPORARY = 0;   /* for PHI node */
    _2310__PHI_TEMPORARY = 0;   /* for PHI node */
    _2311__PHI_TEMPORARY = 20204.291330966149;   /* for PHI node */
    goto _2379;
  } else {
    _2302__PHI_TEMPORARY = _2305;   /* for PHI node */
    _2303__PHI_TEMPORARY = _2308;   /* for PHI node */
    _2304__PHI_TEMPORARY = _2307;   /* for PHI node */
    goto _2378;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2379:
  _2309 = _2309__PHI_TEMPORARY;
  _2310 = _2310__PHI_TEMPORARY;
  _2311 = _2311__PHI_TEMPORARY;
  _2312 = llvm_add_u64(_2309, 1);
  _2313 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u8coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(8, _2309)))])));
  _2314 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2279, _2311, _2313);
  _2315 = (_2311 * _2280) + (_2310 * _2279);
  if ((_2312 == UINT64_C(8))) {
    _2316__PHI_TEMPORARY = 0;   /* for PHI node */
    _2317__PHI_TEMPORARY = 0;   /* for PHI node */
    _2318__PHI_TEMPORARY = -1919.4576623184071;   /* for PHI node */
    goto _2380;
  } else {
    _2309__PHI_TEMPORARY = _2312;   /* for PHI node */
    _2310__PHI_TEMPORARY = _2315;   /* for PHI node */
    _2311__PHI_TEMPORARY = _2314;   /* for PHI node */
    goto _2379;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2380:
  _2316 = _2316__PHI_TEMPORARY;
  _2317 = _2317__PHI_TEMPORARY;
  _2318 = _2318__PHI_TEMPORARY;
  _2319 = llvm_add_u64(_2316, 1);
  _2320 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u7coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(7, _2316)))])));
  _2321 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2279, _2318, _2320);
  _2322 = (_2318 * _2280) + (_2317 * _2279);
  if ((_2319 == UINT64_C(7))) {
    _2323__PHI_TEMPORARY = 0;   /* for PHI node */
    _2324__PHI_TEMPORARY = 0;   /* for PHI node */
    _2325__PHI_TEMPORARY = 212.57013003921713;   /* for PHI node */
    goto _2381;
  } else {
    _2316__PHI_TEMPORARY = _2319;   /* for PHI node */
    _2317__PHI_TEMPORARY = _2322;   /* for PHI node */
    _2318__PHI_TEMPORARY = _2321;   /* for PHI node */
    goto _2380;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2381:
  _2323 = _2323__PHI_TEMPORARY;
  _2324 = _2324__PHI_TEMPORARY;
  _2325 = _2325__PHI_TEMPORARY;
  _2326 = llvm_add_u64(_2323, 1);
  _2327 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u6coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(6, _2323)))])));
  _2328 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2279, _2325, _2327);
  _2329 = (_2325 * _2280) + (_2324 * _2279);
  if ((_2326 == UINT64_C(6))) {
    goto _2382;
  } else {
    _2323__PHI_TEMPORARY = _2326;   /* for PHI node */
    _2324__PHI_TEMPORARY = _2329;   /* for PHI node */
    _2325__PHI_TEMPORARY = _2328;   /* for PHI node */
    goto _2381;
  }

  } while (1); /* end of syntactic loop '' */
_2382:
  _2330 = ((&((uint8_t*)(&_2281))[((int64_t)-8)]));
  _2331__PHI_TEMPORARY = 0;   /* for PHI node */
  _2332__PHI_TEMPORARY = 0;   /* for PHI node */
  _2333__PHI_TEMPORARY = -28.212072558200244;   /* for PHI node */
  goto _2383;

  do {     /* Syntactic loop '' to make GCC happy */
_2383:
  _2331 = _2331__PHI_TEMPORARY;
  _2332 = _2332__PHI_TEMPORARY;
  _2333 = _2333__PHI_TEMPORARY;
  _2334 = llvm_add_u64(_2331, 1);
  _2335 = *(double*)(((&((double*)_2330)[((int64_t)(llvm_sub_u64(5, _2331)))])));
  _2336 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2279, _2333, _2335);
  _2337 = (_2333 * _2280) + (_2332 * _2279);
  if ((_2334 == UINT64_C(5))) {
    goto _2384;
  } else {
    _2331__PHI_TEMPORARY = _2334;   /* for PHI node */
    _2332__PHI_TEMPORARY = _2337;   /* for PHI node */
    _2333__PHI_TEMPORARY = _2336;   /* for PHI node */
    goto _2383;
  }

  } while (1); /* end of syntactic loop '' */
_2384:
  _2338 = ((&((uint8_t*)(&_2282))[((int64_t)-8)]));
  _2339__PHI_TEMPORARY = 0;   /* for PHI node */
  _2340__PHI_TEMPORARY = 0;   /* for PHI node */
  _2341__PHI_TEMPORARY = 4.6695844234262474;   /* for PHI node */
  goto _2385;

  do {     /* Syntactic loop '' to make GCC happy */
_2385:
  _2339 = _2339__PHI_TEMPORARY;
  _2340 = _2340__PHI_TEMPORARY;
  _2341 = _2341__PHI_TEMPORARY;
  _2342 = llvm_add_u64(_2339, 1);
  _2343 = *(double*)(((&((double*)_2338)[((int64_t)(llvm_sub_u64(4, _2339)))])));
  _2344 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2279, _2341, _2343);
  _2345 = (_2341 * _2280) + (_2340 * _2279);
  if ((_2342 == UINT64_C(4))) {
    _2346__PHI_TEMPORARY = 0;   /* for PHI node */
    _2347__PHI_TEMPORARY = 0;   /* for PHI node */
    _2348__PHI_TEMPORARY = -1.0258125964506173;   /* for PHI node */
    goto _2386;
  } else {
    _2339__PHI_TEMPORARY = _2342;   /* for PHI node */
    _2340__PHI_TEMPORARY = _2345;   /* for PHI node */
    _2341__PHI_TEMPORARY = _2344;   /* for PHI node */
    goto _2385;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2386:
  _2346 = _2346__PHI_TEMPORARY;
  _2347 = _2347__PHI_TEMPORARY;
  _2348 = _2348__PHI_TEMPORARY;
  _2349 = llvm_add_u64(_2346, 1);
  _2350 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u3coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _2346)))])));
  _2351 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2279, _2348, _2350);
  _2352 = (_2348 * _2280) + (_2347 * _2279);
  if ((_2349 == UINT64_C(3))) {
    _2353__PHI_TEMPORARY = 0;   /* for PHI node */
    _2354__PHI_TEMPORARY = 0;   /* for PHI node */
    _2355__PHI_TEMPORARY = 0.3342013888888889;   /* for PHI node */
    goto _2387;
  } else {
    _2346__PHI_TEMPORARY = _2349;   /* for PHI node */
    _2347__PHI_TEMPORARY = _2352;   /* for PHI node */
    _2348__PHI_TEMPORARY = _2351;   /* for PHI node */
    goto _2386;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2387:
  _2353 = _2353__PHI_TEMPORARY;
  _2354 = _2354__PHI_TEMPORARY;
  _2355 = _2355__PHI_TEMPORARY;
  _2356 = llvm_add_u64(_2353, 1);
  _2357 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u2coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(2, _2353)))])));
  _2358 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2279, _2355, _2357);
  _2359 = (_2355 * _2280) + (_2354 * _2279);
  if ((_2356 == UINT64_C(2))) {
    goto _2388;
  } else {
    _2353__PHI_TEMPORARY = _2356;   /* for PHI node */
    _2354__PHI_TEMPORARY = _2359;   /* for PHI node */
    _2355__PHI_TEMPORARY = _2358;   /* for PHI node */
    goto _2387;
  }

  } while (1); /* end of syntactic loop '' */
_2388:
  _2360 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2279, -0.20833333333333334, 0.125);
  *((double*)&_2283) = 0;
  *((double*)&_2294) = 1;
  *(double*)_2284 = (_2280 * -0.20833333333333334);
  *(double*)(((&((uint8_t*)(&_2294))[((int64_t)8)]))) = _2360;
  *(double*)_2285 = _2359;
  *(double*)(((&((uint8_t*)(&_2294))[((int64_t)16)]))) = _2358;
  *(double*)_2286 = _2352;
  *(double*)(((&((uint8_t*)(&_2294))[((int64_t)24)]))) = _2351;
  *(double*)_2287 = _2345;
  *(double*)(((&((uint8_t*)(&_2294))[((int64_t)32)]))) = _2344;
  *(double*)_2288 = _2337;
  *(double*)(((&((uint8_t*)(&_2294))[((int64_t)40)]))) = _2336;
  *(double*)_2289 = _2329;
  *(double*)(((&((uint8_t*)(&_2294))[((int64_t)48)]))) = _2328;
  *(double*)_2290 = _2322;
  *(double*)(((&((uint8_t*)(&_2294))[((int64_t)56)]))) = _2321;
  *(double*)_2291 = _2315;
  *(double*)(((&((uint8_t*)(&_2294))[((int64_t)64)]))) = _2314;
  *(double*)_2292 = _2308;
  *(double*)(((&((uint8_t*)(&_2294))[((int64_t)72)]))) = _2307;
  *(double*)_2293 = _2301;
  *(double*)(((&((uint8_t*)(&_2294))[((int64_t)80)]))) = _2300;
  _2361 = (-(_2276)) / _2278;
  _2362 = _2277 * _2278;
  _2363 = ((&((uint8_t*)(&_2283))[((int64_t)-8)]));
  _2364 = ((&((uint8_t*)(&_2294))[((int64_t)-8)]));
  _2365 = 1 / (_2278 * _2278);
  _2366__PHI_TEMPORARY = 0;   /* for PHI node */
  _2367__PHI_TEMPORARY = _2301;   /* for PHI node */
  _2368__PHI_TEMPORARY = _2300;   /* for PHI node */
  goto _2389;

  do {     /* Syntactic loop '' to make GCC happy */
_2389:
  _2366 = _2366__PHI_TEMPORARY;
  _2367 = _2367__PHI_TEMPORARY;
  _2368 = _2368__PHI_TEMPORARY;
  _2369 = llvm_add_u64(_2366, 1);
  _2370 = llvm_sub_u64(10, _2366);
  _2371 = *(double*)(((&((double*)_2363)[((int64_t)_2370)])));
  _2372 = *(double*)(((&((double*)_2364)[((int64_t)_2370)])));
  _2373 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2361, _2368, _2372);
  _2374 = ((_2367 * _2361) - ((_2362 * _2368) * _2365)) + _2371;
  if ((_2369 == UINT64_C(10))) {
    goto _2390;
  } else {
    _2366__PHI_TEMPORARY = _2369;   /* for PHI node */
    _2367__PHI_TEMPORARY = _2374;   /* for PHI node */
    _2368__PHI_TEMPORARY = _2373;   /* for PHI node */
    goto _2389;
  }

  } while (1); /* end of syntactic loop '' */
_2390:
  _2375 = llvm_ctor_unnamed_1(0, 0);
  _2375.field0 = _2373;
  _2376 = _2375;
  _2376.field1 = _2374;
  return _2376;
}


static struct l_unnamed_2 fwddiffebesselk_temme_series_OC_4(double _2391, double _2392, double _2393) {
  __PREFIXALIGN__(16) struct l_array_5_double _2394 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _2395;    /* Address-exposed local */
  double _2396;    /* Address-exposed local */
  double _2397;    /* Address-exposed local */
  double _2398;    /* Address-exposed local */
  double _2399;    /* Address-exposed local */
  double _2400;    /* Address-exposed local */
  double _2401;    /* Address-exposed local */
  double _2402;    /* Address-exposed local */
  double _2403;
  double _2404;
  double _2405;
  uint64_t _2406;
  uint64_t _2406__PHI_TEMPORARY;
  double _2407;
  double _2407__PHI_TEMPORARY;
  uint64_t _2408;
  double _2409;
  double _2410;
  double _2411;
  uint64_t _2412;
  uint64_t _2412__PHI_TEMPORARY;
  double _2413;
  double _2413__PHI_TEMPORARY;
  uint64_t _2414;
  double _2415;
  double _2416;
  uint64_t _2417;
  uint64_t _2417__PHI_TEMPORARY;
  double _2418;
  double _2418__PHI_TEMPORARY;
  uint64_t _2419;
  double _2420;
  double _2421;
  double _2422;
  double _2423;
  double _2424;
  double _2425;
  double _2426;
  void* _2427;
  double _2428;
  uint64_t _2429;
  uint64_t _2429__PHI_TEMPORARY;
  double _2430;
  double _2430__PHI_TEMPORARY;
  double _2431;
  double _2431__PHI_TEMPORARY;
  uint64_t _2432;
  double _2433;
  double _2434;
  double _2435;
  double _2436;
  double _2437;
  double _2438;
  double _2439;
  double _2440;
  double _2441;
  double _2442;
  double _2443;
  uint64_t _2444;
  uint64_t _2444__PHI_TEMPORARY;
  double _2445;
  double _2445__PHI_TEMPORARY;
  uint64_t _2446;
  double _2447;
  double _2448;
  double _2449;
  double _2450;
  double _2451;
  double _2452;
  uint64_t _2453;
  uint64_t _2453__PHI_TEMPORARY;
  double _2454;
  double _2454__PHI_TEMPORARY;
  uint64_t _2455;
  double _2456;
  double _2457;
  double _2458;
  double _2459;
  double _2460;
  double _2461;
  double _2462;
  double _2463;
  double _2464;
  double _2465;
  uint32_t _2466;
  uint32_t _2466__PHI_TEMPORARY;
  double _2467;
  double _2467__PHI_TEMPORARY;
  double _2468;
  double _2468__PHI_TEMPORARY;
  double _2469;
  double _2469__PHI_TEMPORARY;
  double _2470;
  double _2470__PHI_TEMPORARY;
  double _2471;
  double _2471__PHI_TEMPORARY;
  double _2472;
  double _2472__PHI_TEMPORARY;
  double _2473;
  double _2473__PHI_TEMPORARY;
  double _2474;
  double _2474__PHI_TEMPORARY;
  double _2475;
  double _2475__PHI_TEMPORARY;
  double _2476;
  double _2476__PHI_TEMPORARY;
  double _2477;
  double _2477__PHI_TEMPORARY;
  double _2478;
  double _2478__PHI_TEMPORARY;
  double _2479;
  double _2480;
  double _2481;
  double _2482;
  double _2483;
  double _2484;
  double _2485;
  double _2486;
  double _2487;
  double _2488;
  double _2489;
  double _2490;
  uint32_t _2491;
  double _2492;
  double _2493;
  double _2494;
  double _2495;
  double _2496;
  double _2497;
  double _2498;
  double _2499;
  double _2500;
  double _2501;
  double _2502;
  double _2503;
  double _2504;
  double _2505;
  struct l_unnamed_1 _2506;
  struct l_unnamed_1 _2507;
  struct l_unnamed_1 _2508;
  struct l_unnamed_1 _2509;
  struct l_unnamed_2 _2510;
  struct l_unnamed_2 _2511;

  _2403 = _2392 * 0.5;
  *((double*)&_2394) = 1;
  *(double*)(((&((uint8_t*)(&_2394))[((int64_t)8)]))) = 0.16666666666666666;
  *(double*)(((&((uint8_t*)(&_2394))[((int64_t)16)]))) = 0.0083333333333333332;
  *(double*)(((&((uint8_t*)(&_2394))[((int64_t)24)]))) = 1.9841269841269841E-4;
  *(double*)(((&((uint8_t*)(&_2394))[((int64_t)32)]))) = 2.7557319223985893E-6;
  _2404 =  /*tail*/ log(_2392);
  _2405 = _2391 * _2391;
  _2406__PHI_TEMPORARY = 0;   /* for PHI node */
  _2407__PHI_TEMPORARY = 1.9711021825948702;   /* for PHI node */
  goto _2512;

  do {     /* Syntactic loop '' to make GCC happy */
_2512:
  _2406 = _2406__PHI_TEMPORARY;
  _2407 = _2407__PHI_TEMPORARY;
  _2408 = llvm_add_u64(_2406, 1);
  _2409 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_spcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _2406)))])));
  _2410 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2405, _2407, _2409);
  if ((_2408 == UINT64_C(3))) {
    goto _2513;
  } else {
    _2406__PHI_TEMPORARY = _2408;   /* for PHI node */
    _2407__PHI_TEMPORARY = _2410;   /* for PHI node */
    goto _2512;
  }

  } while (1); /* end of syntactic loop '' */
_2513:
  _2411 = _2393 * 0.5;
  _2412__PHI_TEMPORARY = 0;   /* for PHI node */
  _2413__PHI_TEMPORARY = 0.042197734555544306;   /* for PHI node */
  goto _2514;

  do {     /* Syntactic loop '' to make GCC happy */
_2514:
  _2412 = _2412__PHI_TEMPORARY;
  _2413 = _2413__PHI_TEMPORARY;
  _2414 = llvm_add_u64(_2412, 1);
  _2415 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_g1coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(2, _2412)))])));
  _2416 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2405, _2413, _2415);
  if ((_2414 == UINT64_C(2))) {
    _2417__PHI_TEMPORARY = 0;   /* for PHI node */
    _2418__PHI_TEMPORARY = 0.16653861138229145;   /* for PHI node */
    goto _2515;
  } else {
    _2412__PHI_TEMPORARY = _2414;   /* for PHI node */
    _2413__PHI_TEMPORARY = _2416;   /* for PHI node */
    goto _2514;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2515:
  _2417 = _2417__PHI_TEMPORARY;
  _2418 = _2418__PHI_TEMPORARY;
  _2419 = llvm_add_u64(_2417, 1);
  _2420 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_g2coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(2, _2417)))])));
  _2421 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2405, _2418, _2420);
  if ((_2419 == UINT64_C(2))) {
    goto _2516;
  } else {
    _2417__PHI_TEMPORARY = _2419;   /* for PHI node */
    _2418__PHI_TEMPORARY = _2421;   /* for PHI node */
    goto _2515;
  }

  } while (1); /* end of syntactic loop '' */
_2516:
  _2422 = 0.69314718055994529 - _2404;
  _2423 = (-(_2393)) / _2392;
  _2424 = _2422 * _2391;
  _2425 = _2423 * _2391;
  _2426 = _2424 * _2424;
  _2427 = ((&((uint8_t*)(&_2394))[((int64_t)-8)]));
  _2428 = (_2425 * 2) * _2424;
  _2429__PHI_TEMPORARY = 0;   /* for PHI node */
  _2430__PHI_TEMPORARY = 0;   /* for PHI node */
  _2431__PHI_TEMPORARY = 2.7557319223985893E-6;   /* for PHI node */
  goto _2517;

  do {     /* Syntactic loop '' to make GCC happy */
_2517:
  _2429 = _2429__PHI_TEMPORARY;
  _2430 = _2430__PHI_TEMPORARY;
  _2431 = _2431__PHI_TEMPORARY;
  _2432 = llvm_add_u64(_2429, 1);
  _2433 = *(double*)(((&((double*)_2427)[((int64_t)(llvm_sub_u64(4, _2429)))])));
  _2434 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2426, _2431, _2433);
  _2435 = (_2428 * _2431) + (_2430 * _2426);
  if ((_2432 == UINT64_C(4))) {
    goto _2518;
  } else {
    _2429__PHI_TEMPORARY = _2432;   /* for PHI node */
    _2430__PHI_TEMPORARY = _2435;   /* for PHI node */
    _2431__PHI_TEMPORARY = _2434;   /* for PHI node */
    goto _2517;
  }

  } while (1); /* end of syntactic loop '' */
_2518:
  _2436 = _2403 * _2403;
  _2437 =  /*tail*/ sinh(_2424);
  _2438 = _2421 * _2434;
  _2439 = (_2438 * _2423) + ((_2421 * _2422) * _2435);
  _2440 = (_2416 * _2425) * _2437;
  _2441 =  /*tail*/ pow(_2403, _2391);
  _2442 =  /*tail*/ pow(_2403, (_2391 + -1));
  _2443 = _2411 * _2391;
  _2444__PHI_TEMPORARY = 0;   /* for PHI node */
  _2445__PHI_TEMPORARY = -0.23263776388631713;   /* for PHI node */
  goto _2519;

  do {     /* Syntactic loop '' to make GCC happy */
_2519:
  _2444 = _2444__PHI_TEMPORARY;
  _2445 = _2445__PHI_TEMPORARY;
  _2446 = llvm_add_u64(_2444, 1);
  _2447 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_besselk_temme_series_OC_pqkcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _2444)))])));
  _2448 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2391, _2445, _2447);
  if ((_2446 == UINT64_C(3))) {
    goto _2520;
  } else {
    _2444__PHI_TEMPORARY = _2446;   /* for PHI node */
    _2445__PHI_TEMPORARY = _2448;   /* for PHI node */
    goto _2519;
  }

  } while (1); /* end of syntactic loop '' */
_2520:
  _2449 =  /*tail*/ cosh(_2424);
  _2450 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2416, _2449, (_2422 * _2438));
  _2451 = _2443 * _2442;
  _2452 = -(_2391);
  _2453__PHI_TEMPORARY = 0;   /* for PHI node */
  _2454__PHI_TEMPORARY = -0.23263776388631713;   /* for PHI node */
  goto _2521;

  do {     /* Syntactic loop '' to make GCC happy */
_2521:
  _2453 = _2453__PHI_TEMPORARY;
  _2454 = _2454__PHI_TEMPORARY;
  _2455 = llvm_add_u64(_2453, 1);
  _2456 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_besselk_temme_series_OC_pqkcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _2453)))])));
  _2457 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2452, _2454, _2456);
  if ((_2455 == UINT64_C(3))) {
    goto _2522;
  } else {
    _2453__PHI_TEMPORARY = _2455;   /* for PHI node */
    _2454__PHI_TEMPORARY = _2457;   /* for PHI node */
    goto _2521;
  }

  } while (1); /* end of syntactic loop '' */
_2522:
  _2458 = _2441 * 2;
  _2459 = _2410 * _2450;
  _2460 = (_2439 + _2440) * _2410;
  _2461 = _2448 / _2458;
  _2462 = ((_2451 * -2) * _2448) / (_2458 * _2458);
  _2463 = (_2441 * _2457) * 0.5;
  _2464 = (_2451 * 0.5) * _2457;
  _2465 = (_2403 * _2411) * 2;
  _2466__PHI_TEMPORARY = 0;   /* for PHI node */
  _2467__PHI_TEMPORARY = 0;   /* for PHI node */
  _2468__PHI_TEMPORARY = 0;   /* for PHI node */
  _2469__PHI_TEMPORARY = 0;   /* for PHI node */
  _2470__PHI_TEMPORARY = 0;   /* for PHI node */
  _2471__PHI_TEMPORARY = 0;   /* for PHI node */
  _2472__PHI_TEMPORARY = 1;   /* for PHI node */
  _2473__PHI_TEMPORARY = _2464;   /* for PHI node */
  _2474__PHI_TEMPORARY = _2463;   /* for PHI node */
  _2475__PHI_TEMPORARY = _2462;   /* for PHI node */
  _2476__PHI_TEMPORARY = _2461;   /* for PHI node */
  _2477__PHI_TEMPORARY = _2460;   /* for PHI node */
  _2478__PHI_TEMPORARY = _2459;   /* for PHI node */
  goto _2523;

  do {     /* Syntactic loop '' to make GCC happy */
_2523:
  _2466 = _2466__PHI_TEMPORARY;
  _2467 = _2467__PHI_TEMPORARY;
  _2468 = _2468__PHI_TEMPORARY;
  _2469 = _2469__PHI_TEMPORARY;
  _2470 = _2470__PHI_TEMPORARY;
  _2471 = _2471__PHI_TEMPORARY;
  _2472 = _2472__PHI_TEMPORARY;
  _2473 = _2473__PHI_TEMPORARY;
  _2474 = _2474__PHI_TEMPORARY;
  _2475 = _2475__PHI_TEMPORARY;
  _2476 = _2476__PHI_TEMPORARY;
  _2477 = _2477__PHI_TEMPORARY;
  _2478 = _2478__PHI_TEMPORARY;
  _2479 = _2472 * _2478;
  _2480 = (_2478 * _2471) + (_2477 * _2472);
  _2395 = _2480;
  _2396 = _2479;
  _2481 = ((double)(uint32_t)_2466);
  _2482 =  /*tail*/ llvm_OC_fmuladd_OC_f64((-(_2481)), _2478, _2476);
  _2483 = _2472 * _2482;
  _2484 = (_2482 * _2471) + ((_2475 - (_2477 * _2481)) * _2472);
  _2397 = _2484;
  _2398 = _2483;
  _2485 = _2470 + _2479;
  _2486 = _2480 + _2469;
  _2487 = _2468 + _2483;
  _2488 = _2484 + _2467;
  fixderivative_isconverged((&_2396), (&_2395), (&_2400), (&_2399));
  fixderivative_isconverged_OC_1((&_2398), (&_2397), (&_2402), (&_2401));
  _2489 = _2400;
  _2490 = _2402;
  if ((llvm_select_bool((llvm_fcmp_olt(_2489, 0)), (llvm_fcmp_olt(_2490, 0)), 0))) {
    goto _2524;
  } else {
    goto _2525;
  }

_2525:
  _2491 = llvm_add_u32(_2466, 1);
  _2492 = ((double)(uint32_t)_2491);
  _2493 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2492, _2478, _2476);
  _2494 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2452, _2391, (((double)(uint32_t)(llvm_mul_u32(_2491, _2491)))));
  _2495 = (_2474 + _2493) / _2494;
  _2496 = (((_2475 + _2473) + (_2477 * _2492)) * _2494) / (_2494 * _2494);
  _2497 = _2492 - _2391;
  _2498 = _2476 / _2497;
  _2499 = (_2475 * _2497) / (_2497 * _2497);
  _2500 = _2492 + _2391;
  _2501 = _2474 / _2500;
  _2502 = (_2473 * _2500) / (_2500 * _2500);
  _2503 = _2436 / _2492;
  _2504 = _2503 * _2472;
  _2505 = (((_2465 * _2492) * _2472) / (_2492 * _2492)) + (_2471 * _2503);
  if ((_2491 == 500u)) {
    goto _2524;
  } else {
    _2466__PHI_TEMPORARY = _2491;   /* for PHI node */
    _2467__PHI_TEMPORARY = _2488;   /* for PHI node */
    _2468__PHI_TEMPORARY = _2487;   /* for PHI node */
    _2469__PHI_TEMPORARY = _2486;   /* for PHI node */
    _2470__PHI_TEMPORARY = _2485;   /* for PHI node */
    _2471__PHI_TEMPORARY = _2505;   /* for PHI node */
    _2472__PHI_TEMPORARY = _2504;   /* for PHI node */
    _2473__PHI_TEMPORARY = _2502;   /* for PHI node */
    _2474__PHI_TEMPORARY = _2501;   /* for PHI node */
    _2475__PHI_TEMPORARY = _2499;   /* for PHI node */
    _2476__PHI_TEMPORARY = _2498;   /* for PHI node */
    _2477__PHI_TEMPORARY = _2496;   /* for PHI node */
    _2478__PHI_TEMPORARY = _2495;   /* for PHI node */
    goto _2523;
  }

  } while (1); /* end of syntactic loop '' */
_2524:
  _2506 = llvm_ctor_unnamed_1(0, 0);
  _2506.field0 = _2486;
  _2507 = llvm_ctor_unnamed_1(0, 0);
  _2507.field0 = _2485;
  _2508 = _2506;
  _2508.field1 = (((_2488 * _2403) - (_2487 * _2411)) / _2436);
  _2509 = _2507;
  _2509.field1 = (_2487 / _2403);
  _2510 = llvm_ctor_unnamed_2(llvm_ctor_unnamed_1(0, 0), llvm_ctor_unnamed_1(0, 0));
  _2510.field0 = _2509;
  _2511 = _2510;
  _2511.field1 = _2508;
  return _2511;
}


static double fwddiffebesselk_power_series_OC_5(double _2526, double _2527) {
  double _2528;    /* Address-exposed local */
  double _2529;    /* Address-exposed local */
  double _2530;    /* Address-exposed local */
  double _2531;    /* Address-exposed local */
  double _2532;
  double _2533;
  double _2534;
  double _2535;
  double _2535__PHI_TEMPORARY;
  double _2536;
  double _2536__PHI_TEMPORARY;
  uint32_t _2537;
  uint32_t _2537__PHI_TEMPORARY;
  double _2538;
  double _2538__PHI_TEMPORARY;
  double _2539;
  double _2539__PHI_TEMPORARY;
  double _2540;
  double _2540__PHI_TEMPORARY;
  double _2541;
  double _2541__PHI_TEMPORARY;
  double _2542;
  double _2542__PHI_TEMPORARY;
  double _2543;
  double _2543__PHI_TEMPORARY;
  double _2544;
  double _2544__PHI_TEMPORARY;
  uint32_t _2545;
  double _2546;
  double _2547;
  double _2548;
  double _2549;
  double _2550;
  double _2551;
  double _2552;
  double _2553;
  double _2554;
  double _2555;
  double _2556;
  double _2557;
  double _2558;
  double _2559;
  double _2560;
  double _2561;
  double _2562;
  double _2563;
  double _2564;
  double _2565;
  double _2566;
  double _2567;
  double _2568;
  double _2569;

  _2532 =  /*tail*/ gamma(_2526);
  _2533 = _2527 * _2527;
  _2534 = _2527 * 2;
  _2531 = 1;
  _2535__PHI_TEMPORARY = 1;   /* for PHI node */
  _2536__PHI_TEMPORARY = 0;   /* for PHI node */
  _2537__PHI_TEMPORARY = 0;   /* for PHI node */
  _2538__PHI_TEMPORARY = 0;   /* for PHI node */
  _2539__PHI_TEMPORARY = 0;   /* for PHI node */
  _2540__PHI_TEMPORARY = 0;   /* for PHI node */
  _2541__PHI_TEMPORARY = 0;   /* for PHI node */
  _2542__PHI_TEMPORARY = 0;   /* for PHI node */
  _2543__PHI_TEMPORARY = 1;   /* for PHI node */
  _2544__PHI_TEMPORARY = 4;   /* for PHI node */
  goto _2570;

  do {     /* Syntactic loop '' to make GCC happy */
_2570:
  _2535 = _2535__PHI_TEMPORARY;
  _2536 = _2536__PHI_TEMPORARY;
  _2537 = _2537__PHI_TEMPORARY;
  _2538 = _2538__PHI_TEMPORARY;
  _2539 = _2539__PHI_TEMPORARY;
  _2540 = _2540__PHI_TEMPORARY;
  _2541 = _2541__PHI_TEMPORARY;
  _2542 = _2542__PHI_TEMPORARY;
  _2543 = _2543__PHI_TEMPORARY;
  _2544 = _2544__PHI_TEMPORARY;
  _2545 = llvm_add_u32(_2537, 1);
  _2546 = _2539 + _2535;
  _2547 = _2536 + _2538;
  _2548 = _2541 + _2543;
  _2549 = _2542 + _2540;
  _2550 = ((double)(uint32_t)_2545);
  _2551 = (_2550 - _2526) * _2544;
  _2552 = _2533 / _2551;
  _2553 = _2552 * _2535;
  _2554 = (((_2551 * _2534) * _2535) / (_2551 * _2551)) + (_2552 * _2536);
  _2528 = _2554;
  _2529 = _2553;
  fixderivative_isconverged((&_2529), (&_2528), (&_2531), (&_2530));
  _2555 = _2531;
  if ((llvm_fcmp_olt(_2555, 0))) {
    goto _2571;
  } else {
    goto _2572;
  }

_2572:
  _2556 = (_2550 + _2526) * _2544;
  _2557 = _2533 / _2556;
  _2558 = _2543 * _2557;
  _2559 = (((_2543 * _2534) * _2556) / (_2556 * _2556)) + (_2557 * _2542);
  _2560 = _2544 + 4;
  if ((_2545 == 49u)) {
    goto _2571;
  } else {
    _2535__PHI_TEMPORARY = _2553;   /* for PHI node */
    _2536__PHI_TEMPORARY = _2554;   /* for PHI node */
    _2537__PHI_TEMPORARY = _2545;   /* for PHI node */
    _2538__PHI_TEMPORARY = _2547;   /* for PHI node */
    _2539__PHI_TEMPORARY = _2546;   /* for PHI node */
    _2540__PHI_TEMPORARY = _2549;   /* for PHI node */
    _2541__PHI_TEMPORARY = _2548;   /* for PHI node */
    _2542__PHI_TEMPORARY = _2559;   /* for PHI node */
    _2543__PHI_TEMPORARY = _2558;   /* for PHI node */
    _2544__PHI_TEMPORARY = _2560;   /* for PHI node */
    goto _2570;
  }

  } while (1); /* end of syntactic loop '' */
_2571:
  _2561 =  /*tail*/ sinpi((-(_2526)));
  _2562 = 3.1415926535897931 / ((_2532 * _2561) * _2526);
  _2563 = _2527 * 0.5;
  _2564 =  /*tail*/ pow(_2563, _2526);
  _2565 =  /*tail*/ pow(_2563, (_2526 + -1));
  _2566 = _2565 * _2526;
  _2567 = (_2564 * _2564) * _2562;
  _2568 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2532, _2546, (_2548 * _2567));
  _2569 = _2564 * 2;
  return ((((((_2567 * _2549) + (_2547 * _2532)) + (((_2564 * _2548) * _2566) * _2562)) * _2569) - (_2568 * _2566)) / (_2569 * _2569));
}


static struct l_unnamed_1 fwddiffebesselk_OC_7(double _2573, double _2574, double _2575) {
  double _2576;    /* Address-exposed local */
  double _2577;    /* Address-exposed local */
  double _2578;    /* Address-exposed local */
  double _2579;    /* Address-exposed local */
  double _2580;    /* Address-exposed local */
  double _2581;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _2582 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _2583;
  __PREFIXALIGN__(16) struct l_array_32_double _2584 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _2585;    /* Address-exposed local */
  void* _2586;
  double _2587;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _2588 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _2589;
  __PREFIXALIGN__(16) struct l_array_32_double _2590 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _2591;    /* Address-exposed local */
  void* _2592;
  double _2593;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _2594 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _2595;
  __PREFIXALIGN__(16) struct l_array_32_double _2596 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _2597;    /* Address-exposed local */
  void* _2598;
  double _2599;    /* Address-exposed local */
  double _2600;    /* Address-exposed local */
  double _2601;    /* Address-exposed local */
  double _2602;
  double _2603;
  double _2604;
  double _2605;
  double _2606;
  double _2607;
  double _2608;
  double _2609;
  double _2610;
  double _2611;
  double _2612;
  double _2613;
  double _2614;
  double _2615;
  double _2616;
  double _2617;
  double _2618;
  double _2619;
  double _2620;
  double _2621;
  double _2622;
  double _2623;
  struct l_unnamed_1 _2624;
  double _2625;
  double _2626;
  double _2627;
  double _2628;
  double _2629;
  double _2630;
  double _2631;
  double _2632;
  double _2633;
  double _2634;
  double _2635;
  double _2636;
  double _2636__PHI_TEMPORARY;
  double _2637;
  double _2637__PHI_TEMPORARY;
  uint32_t _2638;
  uint32_t _2638__PHI_TEMPORARY;
  double _2639;
  double _2639__PHI_TEMPORARY;
  double _2640;
  double _2640__PHI_TEMPORARY;
  uint32_t _2641;
  uint32_t _2642;
  double _2643;
  double _2644;
  double _2645;
  double _2646;
  double _2647;
  double _2648;
  double _2649;
  double _2650;
  double _2651;
  double _2652;
  double _2653;
  double _2654;
  double _2655;
  double _2656;
  double _2657;
  double _2658;
  double _2659;
  double _2660;
  void* _2661;
  double _2662;
  double _2663;
  double _2664;
  uint64_t _2665;
  uint64_t _2665__PHI_TEMPORARY;
  double _2666;
  double _2666__PHI_TEMPORARY;
  double _2667;
  double _2667__PHI_TEMPORARY;
  double _2668;
  double _2668__PHI_TEMPORARY;
  double _2669;
  double _2669__PHI_TEMPORARY;
  uint64_t _2670;
  double _2671;
  double _2672;
  double _2673;
  double _2674;
  double _2675;
  double _2676;
  double _2677;
  double _2678;
  double _2679;
  double _2680;
  double _2681;
  double _2682;
  double _2683;
  double _2684;
  double _2685;
  double _2686;
  double _2687;
  double _2688;
  double _2689;
  double _2690;
  double _2691;
  double _2692;
  void* _2693;
  double _2694;
  double _2695;
  double _2696;
  uint64_t _2697;
  uint64_t _2697__PHI_TEMPORARY;
  double _2698;
  double _2698__PHI_TEMPORARY;
  double _2699;
  double _2699__PHI_TEMPORARY;
  double _2700;
  double _2700__PHI_TEMPORARY;
  double _2701;
  double _2701__PHI_TEMPORARY;
  uint64_t _2702;
  double _2703;
  double _2704;
  double _2705;
  double _2706;
  double _2707;
  double _2708;
  double _2709;
  double _2710;
  double _2711;
  double _2712;
  double _2713;
  double _2714;
  double _2715;
  double _2716;
  double _2717;
  double _2718;
  double _2719;
  void* _2720;
  double _2721;
  uint64_t _2722;
  uint64_t _2722__PHI_TEMPORARY;
  double _2723;
  double _2723__PHI_TEMPORARY;
  double _2724;
  double _2724__PHI_TEMPORARY;
  double _2725;
  double _2725__PHI_TEMPORARY;
  double _2726;
  double _2726__PHI_TEMPORARY;
  uint64_t _2727;
  double _2728;
  double _2729;
  double _2730;
  double _2731;
  double _2732;
  double _2733;
  double _2734;
  double _2735;
  double _2736;
  double _2737;
  double _2738;
  double _2739;
  double _2740;
  double _2741;
  double _2742;
  double _2743;
  double _2744;
  double _2745;
  double _2746;
  double _2747;
  double _2748;
  double _2749;
  double _2749__PHI_TEMPORARY;
  double _2750;
  double _2750__PHI_TEMPORARY;
  double _2751;
  double _2751__PHI_TEMPORARY;
  double _2752;
  double _2752__PHI_TEMPORARY;
  double _2753;
  double _2753__PHI_TEMPORARY;
  double _2754;
  double _2755;
  double _2756;
  double _2757;
  double _2757__PHI_TEMPORARY;
  double _2758;
  double _2758__PHI_TEMPORARY;
  double _2759;
  double _2760;
  double _2761;
  double _2762;
  double _2763;
  double _2764;
  double _2765;
  double _2766;
  struct l_unnamed_2 _2767;
  struct l_unnamed_1 _2768;
  struct l_unnamed_1 _2769;
  double _2770;
  double _2771;
  double _2772;
  double _2773;
  double _2774;
  double _2775;
  double _2776;
  double _2777;
  double _2778;
  double _2779;
  double _2779__PHI_TEMPORARY;
  double _2780;
  double _2780__PHI_TEMPORARY;
  double _2781;
  double _2781__PHI_TEMPORARY;
  double _2782;
  double _2782__PHI_TEMPORARY;
  double _2783;
  double _2783__PHI_TEMPORARY;
  double _2784;
  double _2785;
  double _2786;
  double _2787;
  double _2788;
  double _2789;
  double _2790;
  double _2790__PHI_TEMPORARY;
  double _2791;
  double _2791__PHI_TEMPORARY;
  uint32_t _2792;
  uint32_t _2792__PHI_TEMPORARY;
  double _2793;
  double _2793__PHI_TEMPORARY;
  double _2794;
  double _2794__PHI_TEMPORARY;
  double _2795;
  double _2795__PHI_TEMPORARY;
  double _2796;
  double _2796__PHI_TEMPORARY;
  double _2797;
  double _2797__PHI_TEMPORARY;
  double _2798;
  double _2798__PHI_TEMPORARY;
  double _2799;
  double _2799__PHI_TEMPORARY;
  uint32_t _2800;
  double _2801;
  double _2802;
  double _2803;
  double _2804;
  double _2805;
  double _2806;
  double _2807;
  double _2808;
  double _2809;
  double _2810;
  double _2811;
  double _2812;
  double _2813;
  double _2814;
  double _2815;
  double _2816;
  double _2817;
  double _2818;
  double _2819;
  double _2820;
  double _2821;
  double _2822;
  double _2823;
  double _2824;
  double _2825;
  double _2826;
  double _2827;
  double _2827__PHI_TEMPORARY;
  double _2828;
  double _2828__PHI_TEMPORARY;
  struct l_unnamed_1 _2829;
  struct l_unnamed_1 _2830;

  _2583 = ((&((uint8_t*)(&_2582))[((int64_t)128)]));
  _2586 = memset((&_2582), 0, 256);
  _2589 = ((&((uint8_t*)(&_2588))[((int64_t)128)]));
  _2592 = memset((&_2588), 0, 256);
  _2595 = ((&((uint8_t*)(&_2594))[((int64_t)128)]));
  _2598 = memset((&_2594), 0, 256);
  _2602 =  /*tail*/ llvm_OC_fabs_OC_f64(_2573);
  if ((llvm_fcmp_ugt(_2574, 0))) {
    goto _2831;
  } else {
    _2827__PHI_TEMPORARY = 0;   /* for PHI node */
    _2828__PHI_TEMPORARY = (*(double*)&FPConstant2);   /* for PHI node */
    goto _2832;
  }

_2831:
  if (((llvm_fcmp_ogt(_2602, 25)) | (llvm_fcmp_ogt(_2574, 35)))) {
    goto _2833;
  } else {
    goto _2834;
  }

_2833:
  _2603 = _2574 / _2602;
  _2604 = _2573 * _2573;
  _2605 = (_2602 * _2575) / _2604;
  _2606 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2603, _2603, 1);
  _2607 =  /*tail*/ llvm_OC_sqrt_OC_f64(_2606);
  _2608 = llvm_select_f64((llvm_fcmp_ueq(_2606, 0)), 0, (((_2603 * 2) * _2605) / (_2607 * 2)));
  _2609 =  /*tail*/ log(_2603);
  _2610 = _2607 + 1;
  _2611 =  /*tail*/ log(_2610);
  _2612 =  /*tail*/ llvm_OC_sqrt_OC_f64((1 / _2602));
  _2613 = _2612 * 1.2533141373155001;
  _2614 = -(_2602);
  _2615 = ((_2607 + _2609) - _2611) * _2614;
  _2616 =  /*tail*/ exp(_2615);
  _2617 =  /*tail*/ exp(_2615);
  _2618 = _2613 * _2616;
  _2619 =  /*tail*/ llvm_OC_sqrt_OC_f64(_2607);
  _2620 = _2618 / _2619;
  _2621 = llvm_select_f64((llvm_fcmp_ole(_2602, _2574)), _2574, _2602);
  _2622 = llvm_select_f64((llvm_fcmp_ole(_2602, _2574)), _2602, _2574);
  _2623 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2621, _2621, (_2622 * _2622));
  _2624 =  /*tail*/ fwddiffeUk_poly_Kn_OC_3((1 / _2607), ((-(_2608)) / _2606), _2602, (_2604 / _2623), (((_2604 * -2) * (((llvm_select_f64((llvm_fcmp_ole(_2602, _2574)), _2575, 0)) * _2621) + ((llvm_select_f64((llvm_fcmp_ole(_2602, _2574)), 0, _2575)) * _2622))) / (_2623 * _2623)));
  _2625 = (_2624.field0);
  _2626 = _2620 * _2625;
  _2627 = (((((((_2613 * _2614) * _2619) * ((_2608 + (_2605 / _2603)) - (_2608 / _2610))) * _2617) - (_2618 * (llvm_select_f64((llvm_fcmp_ueq(_2607, 0)), 0, (_2608 / (_2619 * 2)))))) * _2625) / _2607) + (((_2624.field1)) * _2620);
  _2827__PHI_TEMPORARY = _2627;   /* for PHI node */
  _2828__PHI_TEMPORARY = _2626;   /* for PHI node */
  goto _2832;

_2834:
  if ((llvm_fcmp_olt((((_2573 * _2573) / 36) + 24), _2574))) {
    goto _2835;
  } else {
    goto _2836;
  }

_2835:
  _2628 = _2574 * -0.5;
  _2629 =  /*tail*/ exp(_2628);
  _2630 =  /*tail*/ exp(_2628);
  _2631 = _2574 * 8;
  _2632 = 1 / _2631;
  _2633 = _2575 * 8;
  _2634 = _2602 * 4;
  _2635 = 1 / (_2631 * _2631);
  _2636__PHI_TEMPORARY = 1;   /* for PHI node */
  _2637__PHI_TEMPORARY = 0;   /* for PHI node */
  _2638__PHI_TEMPORARY = 0;   /* for PHI node */
  _2639__PHI_TEMPORARY = 0;   /* for PHI node */
  _2640__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _2837;

  do {     /* Syntactic loop '' to make GCC happy */
_2837:
  _2636 = _2636__PHI_TEMPORARY;
  _2637 = _2637__PHI_TEMPORARY;
  _2638 = _2638__PHI_TEMPORARY;
  _2639 = _2639__PHI_TEMPORARY;
  _2640 = _2640__PHI_TEMPORARY;
  _2641 = llvm_add_u32(_2638, 1);
  _2642 = llvm_add_u32((_2641 << 1), -1);
  _2643 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2634, _2602, (-((((double)(uint32_t)(llvm_mul_u32(_2642, _2642)))))));
  _2644 = _2643 / (((double)(uint32_t)_2641));
  _2645 = _2632 * _2644;
  _2646 = _2636 * _2645;
  _2647 = (_2645 * _2637) - (((_2633 * _2636) * _2644) * _2635);
  _2600 = _2647;
  _2601 = _2646;
  _2648 = _2640 + _2646;
  _2649 = _2647 + _2639;
  fixderivative_isconverged((&_2601), (&_2600), (&_2599), (&_2597));
  _2650 = _2599;
  if ((llvm_select_bool((llvm_fcmp_olt(_2650, 0)), 1, (_2641 == 20u)))) {
    goto _2838;
  } else {
    _2636__PHI_TEMPORARY = _2646;   /* for PHI node */
    _2637__PHI_TEMPORARY = _2647;   /* for PHI node */
    _2638__PHI_TEMPORARY = _2641;   /* for PHI node */
    _2639__PHI_TEMPORARY = _2649;   /* for PHI node */
    _2640__PHI_TEMPORARY = _2648;   /* for PHI node */
    goto _2837;
  }

  } while (1); /* end of syntactic loop '' */
_2838:
  _2651 = (_2575 * -0.5) * _2630;
  _2652 = _2574 * 2;
  _2653 = 3.1415926535897931 / _2652;
  _2654 =  /*tail*/ sqrt(_2653);
  _2655 =  /*tail*/ sqrt(_2653);
  _2656 = _2648 * _2654;
  _2657 = _2629 * _2656;
  _2658 = _2629 * _2657;
  _2659 = ((((((llvm_select_f64((llvm_fcmp_ueq(_2653, 0)), 0, ((_2575 * -6.2831853071795862) / (((_2574 * 4) * _2652) * _2655)))) * _2648) + (_2654 * _2649)) * _2629) + (_2656 * _2651)) * _2629) + (_2657 * _2651);
  _2827__PHI_TEMPORARY = _2659;   /* for PHI node */
  _2828__PHI_TEMPORARY = _2658;   /* for PHI node */
  goto _2832;

_2836:
  _2660 =  /*tail*/ llvm_OC_floor_OC_f64(_2602);
  if ((llvm_fcmp_ogt(_2574, 1.5))) {
    goto _2839;
  } else {
    goto _2840;
  }

_2839:
  if ((llvm_fcmp_olt(_2602, 2))) {
    goto _2841;
  } else {
    goto _2842;
  }

_2841:
  _2591 = 0;
  _2593 = 0;
  _2661 = ((&((uint8_t*)(&_2596))[((int64_t)128)]));
  _2662 = _2602 * (_2602 * 4);
  _2663 = _2574 * 8;
  _2664 = _2575 * 8;
  _2665__PHI_TEMPORARY = 0;   /* for PHI node */
  _2666__PHI_TEMPORARY = 0;   /* for PHI node */
  _2667__PHI_TEMPORARY = 0;   /* for PHI node */
  _2668__PHI_TEMPORARY = 0;   /* for PHI node */
  _2669__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _2843;

  do {     /* Syntactic loop '' to make GCC happy */
_2843:
  _2665 = _2665__PHI_TEMPORARY;
  _2666 = _2666__PHI_TEMPORARY;
  _2667 = _2667__PHI_TEMPORARY;
  _2668 = _2668__PHI_TEMPORARY;
  _2669 = _2669__PHI_TEMPORARY;
  _2670 = llvm_add_u64(_2665, 1);
  _2671 = _2667 + _2669;
  _2672 = _2668 + _2666;
  _2673 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_2665)])));
  _2674 = _2662 - _2673;
  _2675 = ((double)(uint32_t)(((uint32_t)_2670)));
  _2676 = _2663 * _2675;
  _2677 = _2674 / _2676;
  _2678 = _2669 * _2677;
  _2679 = (_2677 * _2668) - ((((_2664 * _2675) * _2669) * _2674) / (_2676 * _2676));
  *(double*)(((&((double*)(&_2594))[((int64_t)_2665)]))) = _2672;
  *(double*)(((&((double*)(&_2596))[((int64_t)_2665)]))) = _2671;
  *(double*)(((&((double*)_2595)[((int64_t)_2665)]))) = _2679;
  *(double*)(((&((double*)_2661)[((int64_t)_2665)]))) = _2678;
  if ((_2670 == UINT64_C(16))) {
    goto _2844;
  } else {
    _2665__PHI_TEMPORARY = _2670;   /* for PHI node */
    _2666__PHI_TEMPORARY = _2672;   /* for PHI node */
    _2667__PHI_TEMPORARY = _2671;   /* for PHI node */
    _2668__PHI_TEMPORARY = _2679;   /* for PHI node */
    _2669__PHI_TEMPORARY = _2678;   /* for PHI node */
    goto _2843;
  }

  } while (1); /* end of syntactic loop '' */
_2844:
  fixderivative_levin((&_2593), (&_2591), (&_2596), (&_2594));
  _2680 = _2574 * 2;
  _2681 = 3.1415926535897931 / _2680;
  _2682 =  /*tail*/ sqrt(_2681);
  _2683 =  /*tail*/ sqrt(_2681);
  _2684 = _2591;
  _2685 = _2593;
  _2686 = _2682 * _2685;
  _2687 = -(_2574);
  _2688 =  /*tail*/ exp(_2687);
  _2689 =  /*tail*/ exp(_2687);
  _2690 = _2686 * _2688;
  _2691 = ((((llvm_select_f64((llvm_fcmp_ueq(_2681, 0)), 0, ((_2575 * -6.2831853071795862) / (((_2574 * 4) * _2680) * _2683)))) * _2685) + (_2684 * _2682)) * _2688) - ((_2686 * _2575) * _2689);
  _2827__PHI_TEMPORARY = _2691;   /* for PHI node */
  _2828__PHI_TEMPORARY = _2690;   /* for PHI node */
  goto _2832;

_2842:
  _2692 = _2602 - _2660;
  _2585 = 0;
  _2587 = 0;
  _2693 = ((&((uint8_t*)(&_2590))[((int64_t)128)]));
  _2694 = _2692 * (_2692 * 4);
  _2695 = _2574 * 8;
  _2696 = _2575 * -8;
  _2697__PHI_TEMPORARY = 0;   /* for PHI node */
  _2698__PHI_TEMPORARY = 0;   /* for PHI node */
  _2699__PHI_TEMPORARY = 0;   /* for PHI node */
  _2700__PHI_TEMPORARY = 0;   /* for PHI node */
  _2701__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _2845;

  do {     /* Syntactic loop '' to make GCC happy */
_2845:
  _2697 = _2697__PHI_TEMPORARY;
  _2698 = _2698__PHI_TEMPORARY;
  _2699 = _2699__PHI_TEMPORARY;
  _2700 = _2700__PHI_TEMPORARY;
  _2701 = _2701__PHI_TEMPORARY;
  _2702 = llvm_add_u64(_2697, 1);
  _2703 = _2699 + _2701;
  _2704 = _2700 + _2698;
  _2705 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_2697)])));
  _2706 = _2694 - _2705;
  _2707 = ((double)(uint32_t)(((uint32_t)_2702)));
  _2708 = _2695 * _2707;
  _2709 = _2706 / _2708;
  _2710 = _2701 * _2709;
  _2711 = ((((_2696 * _2707) * _2701) * _2706) / (_2708 * _2708)) + (_2709 * _2700);
  *(double*)(((&((double*)(&_2588))[((int64_t)_2697)]))) = _2704;
  *(double*)(((&((double*)(&_2590))[((int64_t)_2697)]))) = _2703;
  *(double*)(((&((double*)_2589)[((int64_t)_2697)]))) = _2711;
  *(double*)(((&((double*)_2693)[((int64_t)_2697)]))) = _2710;
  if ((_2702 == UINT64_C(16))) {
    goto _2846;
  } else {
    _2697__PHI_TEMPORARY = _2702;   /* for PHI node */
    _2698__PHI_TEMPORARY = _2704;   /* for PHI node */
    _2699__PHI_TEMPORARY = _2703;   /* for PHI node */
    _2700__PHI_TEMPORARY = _2711;   /* for PHI node */
    _2701__PHI_TEMPORARY = _2710;   /* for PHI node */
    goto _2845;
  }

  } while (1); /* end of syntactic loop '' */
_2846:
  fixderivative_levin((&_2587), (&_2585), (&_2590), (&_2588));
  _2712 = _2574 * 2;
  _2713 = 3.1415926535897931 / _2712;
  _2714 =  /*tail*/ sqrt(_2713);
  _2715 =  /*tail*/ sqrt(_2713);
  _2716 = (_2575 * -6.2831853071795862) / (((_2574 * 4) * _2712) * _2715);
  _2717 = _2585;
  _2718 = _2587;
  _2719 = _2692 + 1;
  _2580 = 0;
  _2581 = 0;
  _2720 = ((&((uint8_t*)(&_2584))[((int64_t)128)]));
  _2721 = _2719 * (_2719 * 4);
  _2722__PHI_TEMPORARY = 0;   /* for PHI node */
  _2723__PHI_TEMPORARY = 0;   /* for PHI node */
  _2724__PHI_TEMPORARY = 0;   /* for PHI node */
  _2725__PHI_TEMPORARY = 0;   /* for PHI node */
  _2726__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _2847;

  do {     /* Syntactic loop '' to make GCC happy */
_2847:
  _2722 = _2722__PHI_TEMPORARY;
  _2723 = _2723__PHI_TEMPORARY;
  _2724 = _2724__PHI_TEMPORARY;
  _2725 = _2725__PHI_TEMPORARY;
  _2726 = _2726__PHI_TEMPORARY;
  _2727 = llvm_add_u64(_2722, 1);
  _2728 = _2724 + _2726;
  _2729 = _2725 + _2723;
  _2730 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_2722)])));
  _2731 = _2721 - _2730;
  _2732 = ((double)(uint32_t)(((uint32_t)_2727)));
  _2733 = _2695 * _2732;
  _2734 = _2731 / _2733;
  _2735 = _2726 * _2734;
  _2736 = ((((_2696 * _2732) * _2726) * _2731) / (_2733 * _2733)) + (_2734 * _2725);
  *(double*)(((&((double*)(&_2582))[((int64_t)_2722)]))) = _2729;
  *(double*)(((&((double*)(&_2584))[((int64_t)_2722)]))) = _2728;
  *(double*)(((&((double*)_2583)[((int64_t)_2722)]))) = _2736;
  *(double*)(((&((double*)_2720)[((int64_t)_2722)]))) = _2735;
  if ((_2727 == UINT64_C(16))) {
    goto _2848;
  } else {
    _2722__PHI_TEMPORARY = _2727;   /* for PHI node */
    _2723__PHI_TEMPORARY = _2729;   /* for PHI node */
    _2724__PHI_TEMPORARY = _2728;   /* for PHI node */
    _2725__PHI_TEMPORARY = _2736;   /* for PHI node */
    _2726__PHI_TEMPORARY = _2735;   /* for PHI node */
    goto _2847;
  }

  } while (1); /* end of syntactic loop '' */
_2848:
  _2737 = llvm_select_f64((llvm_fcmp_ueq(_2713, 0)), 0, _2716);
  _2738 = _2714 * _2718;
  _2739 = (_2737 * _2718) + (_2717 * _2714);
  fixderivative_levin((&_2581), (&_2580), (&_2584), (&_2582));
  _2740 =  /*tail*/ sqrt(_2713);
  _2741 = 2 / _2574;
  _2742 = _2575 * -2;
  _2743 = _2602 + 0.5;
  if ((llvm_fcmp_ogt(_2743, _2719))) {
    goto _2849;
  } else {
    _2757__PHI_TEMPORARY = _2739;   /* for PHI node */
    _2758__PHI_TEMPORARY = _2738;   /* for PHI node */
    goto _2850;
  }

_2849:
  _2744 = _2581;
  _2745 = _2580;
  _2746 = _2740 * _2744;
  _2747 = (_2745 * _2740) + (_2744 * _2737);
  _2748 = 1 / (_2574 * _2574);
  _2749__PHI_TEMPORARY = _2747;   /* for PHI node */
  _2750__PHI_TEMPORARY = _2746;   /* for PHI node */
  _2751__PHI_TEMPORARY = _2739;   /* for PHI node */
  _2752__PHI_TEMPORARY = _2738;   /* for PHI node */
  _2753__PHI_TEMPORARY = _2719;   /* for PHI node */
  goto _2851;

  do {     /* Syntactic loop '' to make GCC happy */
_2851:
  _2749 = _2749__PHI_TEMPORARY;
  _2750 = _2750__PHI_TEMPORARY;
  _2751 = _2751__PHI_TEMPORARY;
  _2752 = _2752__PHI_TEMPORARY;
  _2753 = _2753__PHI_TEMPORARY;
  _2754 = _2741 * _2753;
  _2755 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2754, _2750, _2752);
  _2756 = _2753 + 1;
  if ((llvm_fcmp_olt(_2756, _2743))) {
    _2749__PHI_TEMPORARY = (((_2754 * _2749) + _2751) + (((_2742 * _2750) * _2753) * _2748));   /* for PHI node */
    _2750__PHI_TEMPORARY = _2755;   /* for PHI node */
    _2751__PHI_TEMPORARY = _2749;   /* for PHI node */
    _2752__PHI_TEMPORARY = _2750;   /* for PHI node */
    _2753__PHI_TEMPORARY = _2756;   /* for PHI node */
    goto _2851;
  } else {
    _2757__PHI_TEMPORARY = _2749;   /* for PHI node */
    _2758__PHI_TEMPORARY = _2750;   /* for PHI node */
    goto _2850;
  }

  } while (1); /* end of syntactic loop '' */
_2850:
  _2757 = _2757__PHI_TEMPORARY;
  _2758 = _2758__PHI_TEMPORARY;
  _2759 = -(_2574);
  _2760 =  /*tail*/ exp(_2759);
  _2761 =  /*tail*/ exp(_2759);
  _2762 = _2758 * _2760;
  _2763 = (_2760 * _2757) - ((_2758 * _2575) * _2761);
  _2827__PHI_TEMPORARY = _2763;   /* for PHI node */
  _2828__PHI_TEMPORARY = _2762;   /* for PHI node */
  goto _2832;

_2840:
  _2764 = round(_2602);
  _2765 =  /*tail*/ llvm_OC_fabs_OC_f64((_2602 - _2764));
  if ((llvm_fcmp_olt(_2765, 1.0000000000000001E-5))) {
    goto _2852;
  } else {
    goto _2853;
  }

_2852:
  _2766 = _2602 - (llvm_select_f64((llvm_fcmp_ogt((_2602 - _2660), 0.5)), (_2660 + -1), _2660));
  _2767 =  /*tail*/ fwddiffebesselk_temme_series_OC_4(_2766, _2574, _2575);
  _2768 = (_2767.field0);
  _2769 = (_2767.field1);
  _2770 = (_2768.field0);
  _2771 = (_2769.field0);
  _2772 = _2766 + 1;
  _2773 = 2 / _2574;
  _2774 = _2575 * -2;
  _2775 = _2602 + 0.5;
  if ((llvm_fcmp_ogt(_2775, _2772))) {
    goto _2854;
  } else {
    _2827__PHI_TEMPORARY = _2771;   /* for PHI node */
    _2828__PHI_TEMPORARY = _2770;   /* for PHI node */
    goto _2832;
  }

_2854:
  _2776 = (_2768.field1);
  _2777 = (_2769.field1);
  _2778 = 1 / (_2574 * _2574);
  _2779__PHI_TEMPORARY = _2777;   /* for PHI node */
  _2780__PHI_TEMPORARY = _2776;   /* for PHI node */
  _2781__PHI_TEMPORARY = _2771;   /* for PHI node */
  _2782__PHI_TEMPORARY = _2770;   /* for PHI node */
  _2783__PHI_TEMPORARY = _2772;   /* for PHI node */
  goto _2855;

  do {     /* Syntactic loop '' to make GCC happy */
_2855:
  _2779 = _2779__PHI_TEMPORARY;
  _2780 = _2780__PHI_TEMPORARY;
  _2781 = _2781__PHI_TEMPORARY;
  _2782 = _2782__PHI_TEMPORARY;
  _2783 = _2783__PHI_TEMPORARY;
  _2784 = _2773 * _2783;
  _2785 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2784, _2780, _2782);
  _2786 = _2783 + 1;
  if ((llvm_fcmp_olt(_2786, _2775))) {
    _2779__PHI_TEMPORARY = (((_2784 * _2779) + _2781) + (((_2774 * _2780) * _2783) * _2778));   /* for PHI node */
    _2780__PHI_TEMPORARY = _2785;   /* for PHI node */
    _2781__PHI_TEMPORARY = _2779;   /* for PHI node */
    _2782__PHI_TEMPORARY = _2780;   /* for PHI node */
    _2783__PHI_TEMPORARY = _2786;   /* for PHI node */
    goto _2855;
  } else {
    _2827__PHI_TEMPORARY = _2779;   /* for PHI node */
    _2828__PHI_TEMPORARY = _2780;   /* for PHI node */
    goto _2832;
  }

  } while (1); /* end of syntactic loop '' */
_2853:
  _2787 =  /*tail*/ gamma(_2602);
  _2788 = _2574 * _2574;
  _2789 = (_2574 * 2) * _2575;
  _2579 = 1;
  _2790__PHI_TEMPORARY = 1;   /* for PHI node */
  _2791__PHI_TEMPORARY = 0;   /* for PHI node */
  _2792__PHI_TEMPORARY = 0;   /* for PHI node */
  _2793__PHI_TEMPORARY = 0;   /* for PHI node */
  _2794__PHI_TEMPORARY = 0;   /* for PHI node */
  _2795__PHI_TEMPORARY = 0;   /* for PHI node */
  _2796__PHI_TEMPORARY = 0;   /* for PHI node */
  _2797__PHI_TEMPORARY = 0;   /* for PHI node */
  _2798__PHI_TEMPORARY = 1;   /* for PHI node */
  _2799__PHI_TEMPORARY = 4;   /* for PHI node */
  goto _2856;

  do {     /* Syntactic loop '' to make GCC happy */
_2856:
  _2790 = _2790__PHI_TEMPORARY;
  _2791 = _2791__PHI_TEMPORARY;
  _2792 = _2792__PHI_TEMPORARY;
  _2793 = _2793__PHI_TEMPORARY;
  _2794 = _2794__PHI_TEMPORARY;
  _2795 = _2795__PHI_TEMPORARY;
  _2796 = _2796__PHI_TEMPORARY;
  _2797 = _2797__PHI_TEMPORARY;
  _2798 = _2798__PHI_TEMPORARY;
  _2799 = _2799__PHI_TEMPORARY;
  _2800 = llvm_add_u32(_2792, 1);
  _2801 = _2790 + _2794;
  _2802 = _2793 + _2791;
  _2803 = _2796 + _2798;
  _2804 = _2797 + _2795;
  _2805 = ((double)(uint32_t)_2800);
  _2806 = (_2805 - _2602) * _2799;
  _2807 = _2788 / _2806;
  _2808 = _2790 * _2807;
  _2809 = (((_2790 * _2789) * _2806) / (_2806 * _2806)) + (_2807 * _2791);
  _2576 = _2809;
  _2577 = _2808;
  fixderivative_isconverged((&_2577), (&_2576), (&_2579), (&_2578));
  _2810 = _2579;
  if ((llvm_fcmp_olt(_2810, 0))) {
    goto _2857;
  } else {
    goto _2858;
  }

_2858:
  _2811 = (_2602 + _2805) * _2799;
  _2812 = _2788 / _2811;
  _2813 = _2798 * _2812;
  _2814 = (((_2798 * _2789) * _2811) / (_2811 * _2811)) + (_2812 * _2797);
  _2815 = _2799 + 4;
  if ((_2800 == 49u)) {
    goto _2857;
  } else {
    _2790__PHI_TEMPORARY = _2808;   /* for PHI node */
    _2791__PHI_TEMPORARY = _2809;   /* for PHI node */
    _2792__PHI_TEMPORARY = _2800;   /* for PHI node */
    _2793__PHI_TEMPORARY = _2802;   /* for PHI node */
    _2794__PHI_TEMPORARY = _2801;   /* for PHI node */
    _2795__PHI_TEMPORARY = _2804;   /* for PHI node */
    _2796__PHI_TEMPORARY = _2803;   /* for PHI node */
    _2797__PHI_TEMPORARY = _2814;   /* for PHI node */
    _2798__PHI_TEMPORARY = _2813;   /* for PHI node */
    _2799__PHI_TEMPORARY = _2815;   /* for PHI node */
    goto _2856;
  }

  } while (1); /* end of syntactic loop '' */
_2857:
  _2816 =  /*tail*/ sinpi((-(_2602)));
  _2817 = 3.1415926535897931 / (_2602 * (_2787 * _2816));
  _2818 = _2574 * 0.5;
  _2819 =  /*tail*/ pow(_2818, _2602);
  _2820 =  /*tail*/ pow(_2818, (_2602 + -1));
  _2821 = ((_2602 * _2575) * 0.5) * _2820;
  _2822 = (_2819 * _2819) * _2817;
  _2823 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2787, _2801, (_2803 * _2822));
  _2824 = _2819 * 2;
  _2825 = _2823 / _2824;
  _2826 = (((((_2822 * _2804) + (_2802 * _2787)) + ((((_2803 * 2) * _2819) * _2821) * _2817)) * _2824) - ((_2821 * 2) * _2823)) / (_2824 * _2824);
  _2827__PHI_TEMPORARY = _2826;   /* for PHI node */
  _2828__PHI_TEMPORARY = _2825;   /* for PHI node */
  goto _2832;

_2832:
  _2827 = _2827__PHI_TEMPORARY;
  _2828 = _2828__PHI_TEMPORARY;
  _2829 = llvm_ctor_unnamed_1(0, 0);
  _2829.field0 = _2828;
  _2830 = _2829;
  _2830.field1 = _2827;
  return _2830;
}


static struct l_unnamed_1 fwddiffebesselk_OC_10(double _2859, double _2860, double _2861) {
  double _2862;    /* Address-exposed local */
  double _2863;    /* Address-exposed local */
  double _2864;    /* Address-exposed local */
  double _2865;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_5_double _2866 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _2867;    /* Address-exposed local */
  double _2868;    /* Address-exposed local */
  double _2869;    /* Address-exposed local */
  double _2870;    /* Address-exposed local */
  double _2871;    /* Address-exposed local */
  double _2872;    /* Address-exposed local */
  double _2873;    /* Address-exposed local */
  double _2874;    /* Address-exposed local */
  double _2875;    /* Address-exposed local */
  double _2876;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _2877 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _2878;
  __PREFIXALIGN__(16) struct l_array_32_double _2879 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _2880;    /* Address-exposed local */
  void* _2881;
  double _2882;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _2883 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _2884;
  __PREFIXALIGN__(16) struct l_array_32_double _2885 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _2886;    /* Address-exposed local */
  void* _2887;
  double _2888;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _2889 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _2890;
  __PREFIXALIGN__(16) struct l_array_32_double _2891 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _2892;    /* Address-exposed local */
  void* _2893;
  double _2894;    /* Address-exposed local */
  double _2895;    /* Address-exposed local */
  double _2896;    /* Address-exposed local */
  double _2897;
  double _2898;
  double _2899;
  double _2900;
  double _2901;
  double _2902;
  double _2903;
  double _2904;
  double _2905;
  double _2906;
  double _2907;
  double _2908;
  double _2909;
  double _2910;
  double _2911;
  double _2912;
  double _2913;
  double _2914;
  double _2915;
  double _2916;
  double _2917;
  double _2918;
  double _2919;
  double _2920;
  double _2921;
  struct l_unnamed_1 _2922;
  double _2923;
  double _2924;
  double _2925;
  double _2926;
  double _2927;
  double _2928;
  double _2929;
  double _2930;
  double _2931;
  double _2932;
  double _2933;
  double _2934;
  double _2935;
  double _2935__PHI_TEMPORARY;
  double _2936;
  double _2936__PHI_TEMPORARY;
  uint32_t _2937;
  uint32_t _2937__PHI_TEMPORARY;
  double _2938;
  double _2938__PHI_TEMPORARY;
  double _2939;
  double _2939__PHI_TEMPORARY;
  uint32_t _2940;
  uint32_t _2941;
  double _2942;
  double _2943;
  double _2944;
  double _2945;
  double _2946;
  double _2947;
  double _2948;
  double _2949;
  double _2950;
  double _2951;
  double _2952;
  double _2953;
  double _2954;
  double _2955;
  double _2956;
  double _2957;
  double _2958;
  double _2959;
  double _2960;
  void* _2961;
  double _2962;
  double _2963;
  double _2964;
  double _2965;
  uint64_t _2966;
  uint64_t _2966__PHI_TEMPORARY;
  double _2967;
  double _2967__PHI_TEMPORARY;
  double _2968;
  double _2968__PHI_TEMPORARY;
  double _2969;
  double _2969__PHI_TEMPORARY;
  double _2970;
  double _2970__PHI_TEMPORARY;
  uint64_t _2971;
  double _2972;
  double _2973;
  double _2974;
  double _2975;
  double _2976;
  double _2977;
  double _2978;
  double _2979;
  double _2980;
  double _2981;
  double _2982;
  double _2983;
  double _2984;
  double _2985;
  double _2986;
  double _2987;
  double _2988;
  double _2989;
  double _2990;
  double _2991;
  double _2992;
  double _2993;
  void* _2994;
  double _2995;
  double _2996;
  double _2997;
  double _2998;
  double _2999;
  double _3000;
  uint64_t _3001;
  uint64_t _3001__PHI_TEMPORARY;
  double _3002;
  double _3002__PHI_TEMPORARY;
  double _3003;
  double _3003__PHI_TEMPORARY;
  double _3004;
  double _3004__PHI_TEMPORARY;
  double _3005;
  double _3005__PHI_TEMPORARY;
  uint64_t _3006;
  double _3007;
  double _3008;
  double _3009;
  double _3010;
  double _3011;
  double _3012;
  double _3013;
  double _3014;
  double _3015;
  double _3016;
  double _3017;
  double _3018;
  double _3019;
  double _3020;
  double _3021;
  double _3022;
  double _3023;
  void* _3024;
  double _3025;
  double _3026;
  double _3027;
  uint64_t _3028;
  uint64_t _3028__PHI_TEMPORARY;
  double _3029;
  double _3029__PHI_TEMPORARY;
  double _3030;
  double _3030__PHI_TEMPORARY;
  double _3031;
  double _3031__PHI_TEMPORARY;
  double _3032;
  double _3032__PHI_TEMPORARY;
  uint64_t _3033;
  double _3034;
  double _3035;
  double _3036;
  double _3037;
  double _3038;
  double _3039;
  double _3040;
  double _3041;
  double _3042;
  double _3043;
  double _3044;
  double _3045;
  double _3046;
  double _3047;
  double _3048;
  double _3049;
  double _3050;
  double _3051;
  double _3052;
  double _3053;
  double _3054;
  double _3055;
  double _3056;
  double _3056__PHI_TEMPORARY;
  double _3057;
  double _3057__PHI_TEMPORARY;
  double _3058;
  double _3058__PHI_TEMPORARY;
  double _3059;
  double _3059__PHI_TEMPORARY;
  double _3060;
  double _3060__PHI_TEMPORARY;
  double _3061;
  double _3062;
  double _3063;
  double _3064;
  double _3064__PHI_TEMPORARY;
  double _3065;
  double _3065__PHI_TEMPORARY;
  double _3066;
  double _3067;
  double _3068;
  double _3069;
  double _3070;
  double _3071;
  double _3072;
  double _3073;
  double _3074;
  double _3075;
  double _3076;
  uint64_t _3077;
  uint64_t _3077__PHI_TEMPORARY;
  double _3078;
  double _3078__PHI_TEMPORARY;
  double _3079;
  double _3079__PHI_TEMPORARY;
  uint64_t _3080;
  double _3081;
  double _3082;
  double _3083;
  double _3084;
  uint64_t _3085;
  uint64_t _3085__PHI_TEMPORARY;
  double _3086;
  double _3086__PHI_TEMPORARY;
  double _3087;
  double _3087__PHI_TEMPORARY;
  uint64_t _3088;
  double _3089;
  double _3090;
  double _3091;
  uint64_t _3092;
  uint64_t _3092__PHI_TEMPORARY;
  double _3093;
  double _3093__PHI_TEMPORARY;
  double _3094;
  double _3094__PHI_TEMPORARY;
  uint64_t _3095;
  double _3096;
  double _3097;
  double _3098;
  double _3099;
  double _3100;
  double _3101;
  double _3102;
  double _3103;
  void* _3104;
  double _3105;
  uint64_t _3106;
  uint64_t _3106__PHI_TEMPORARY;
  double _3107;
  double _3107__PHI_TEMPORARY;
  double _3108;
  double _3108__PHI_TEMPORARY;
  uint64_t _3109;
  double _3110;
  double _3111;
  double _3112;
  double _3113;
  double _3114;
  double _3115;
  double _3116;
  double _3117;
  double _3118;
  double _3119;
  double _3120;
  double _3121;
  uint64_t _3122;
  uint64_t _3122__PHI_TEMPORARY;
  double _3123;
  double _3123__PHI_TEMPORARY;
  double _3124;
  double _3124__PHI_TEMPORARY;
  uint64_t _3125;
  double _3126;
  double _3127;
  double _3128;
  double _3129;
  double _3130;
  double _3131;
  double _3132;
  double _3133;
  double _3134;
  uint64_t _3135;
  uint64_t _3135__PHI_TEMPORARY;
  double _3136;
  double _3136__PHI_TEMPORARY;
  double _3137;
  double _3137__PHI_TEMPORARY;
  uint64_t _3138;
  double _3139;
  double _3140;
  double _3141;
  double _3142;
  double _3143;
  double _3144;
  double _3145;
  double _3146;
  double _3147;
  double _3148;
  double _3149;
  double _3150;
  double _3151;
  double _3152;
  double _3153;
  double _3154;
  uint32_t _3155;
  uint32_t _3155__PHI_TEMPORARY;
  double _3156;
  double _3156__PHI_TEMPORARY;
  double _3157;
  double _3157__PHI_TEMPORARY;
  double _3158;
  double _3158__PHI_TEMPORARY;
  double _3159;
  double _3159__PHI_TEMPORARY;
  double _3160;
  double _3160__PHI_TEMPORARY;
  double _3161;
  double _3161__PHI_TEMPORARY;
  double _3162;
  double _3162__PHI_TEMPORARY;
  double _3163;
  double _3163__PHI_TEMPORARY;
  double _3164;
  double _3164__PHI_TEMPORARY;
  double _3165;
  double _3165__PHI_TEMPORARY;
  double _3166;
  double _3166__PHI_TEMPORARY;
  double _3167;
  double _3167__PHI_TEMPORARY;
  double _3168;
  double _3169;
  double _3170;
  double _3171;
  double _3172;
  double _3173;
  double _3174;
  double _3175;
  double _3176;
  double _3177;
  double _3178;
  double _3179;
  uint32_t _3180;
  double _3181;
  double _3182;
  double _3183;
  double _3184;
  double _3185;
  double _3186;
  double _3187;
  double _3188;
  double _3189;
  double _3190;
  double _3191;
  double _3192;
  double _3193;
  double _3194;
  double _3195;
  double _3196;
  double _3197;
  double _3198;
  double _3199;
  double _3200;
  double _3201;
  double _3202;
  double _3203;
  double _3204;
  double _3204__PHI_TEMPORARY;
  double _3205;
  double _3205__PHI_TEMPORARY;
  double _3206;
  double _3206__PHI_TEMPORARY;
  double _3207;
  double _3207__PHI_TEMPORARY;
  double _3208;
  double _3208__PHI_TEMPORARY;
  double _3209;
  double _3210;
  double _3211;
  struct l_unnamed_1 _3212;
  double _3213;
  double _3214;
  double _3215;
  double _3216;
  double _3217;
  double _3217__PHI_TEMPORARY;
  double _3218;
  double _3218__PHI_TEMPORARY;
  uint32_t _3219;
  uint32_t _3219__PHI_TEMPORARY;
  double _3220;
  double _3220__PHI_TEMPORARY;
  double _3221;
  double _3221__PHI_TEMPORARY;
  double _3222;
  double _3222__PHI_TEMPORARY;
  double _3223;
  double _3223__PHI_TEMPORARY;
  double _3224;
  double _3224__PHI_TEMPORARY;
  double _3225;
  double _3225__PHI_TEMPORARY;
  double _3226;
  double _3226__PHI_TEMPORARY;
  uint32_t _3227;
  double _3228;
  double _3229;
  double _3230;
  double _3231;
  double _3232;
  double _3233;
  double _3234;
  double _3235;
  double _3236;
  double _3237;
  double _3238;
  double _3239;
  double _3240;
  double _3241;
  double _3242;
  double _3243;
  double _3244;
  double _3245;
  double _3246;
  double _3247;
  double _3248;
  double _3249;
  double _3250;
  double _3251;
  double _3252;
  double _3253;
  double _3254;
  double _3255;
  double _3256;
  double _3257;
  double _3258;
  double _3259;
  double _3260;
  double _3261;
  double _3262;
  double _3262__PHI_TEMPORARY;
  double _3263;
  double _3263__PHI_TEMPORARY;
  struct l_unnamed_1 _3264;
  struct l_unnamed_1 _3265;

  _2878 = ((&((uint8_t*)(&_2877))[((int64_t)128)]));
  _2881 = memset((&_2877), 0, 256);
  _2884 = ((&((uint8_t*)(&_2883))[((int64_t)128)]));
  _2887 = memset((&_2883), 0, 256);
  _2890 = ((&((uint8_t*)(&_2889))[((int64_t)128)]));
  _2893 = memset((&_2889), 0, 256);
  _2897 =  /*tail*/ llvm_OC_fabs_OC_f64(_2859);
  _2898 = llvm_select_f64((llvm_fcmp_olt(_2859, 0)), -1, 1);
  if ((llvm_fcmp_ugt(_2860, 0))) {
    goto _3266;
  } else {
    _3262__PHI_TEMPORARY = 0;   /* for PHI node */
    _3263__PHI_TEMPORARY = (*(double*)&FPConstant2);   /* for PHI node */
    goto _3267;
  }

_3266:
  if (((llvm_fcmp_ogt(_2897, 25)) | (llvm_fcmp_ogt(_2860, 35)))) {
    goto _3268;
  } else {
    goto _3269;
  }

_3268:
  _2899 = _2860 / _2897;
  _2900 = _2859 * _2859;
  _2901 = ((_2897 * _2861) - (_2898 * _2860)) / _2900;
  _2902 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2899, _2899, 1);
  _2903 =  /*tail*/ llvm_OC_sqrt_OC_f64(_2902);
  _2904 = llvm_select_f64((llvm_fcmp_ueq(_2902, 0)), 0, (((_2899 * 2) * _2901) / (_2903 * 2)));
  _2905 =  /*tail*/ log(_2899);
  _2906 = _2903 + 1;
  _2907 =  /*tail*/ log(_2906);
  _2908 = (_2903 + _2905) - _2907;
  _2909 = 1 / _2897;
  _2910 =  /*tail*/ llvm_OC_sqrt_OC_f64(_2909);
  _2911 = _2900 * 2;
  _2912 = _2910 * 1.2533141373155001;
  _2913 = _2908 * (-(_2897));
  _2914 =  /*tail*/ exp(_2913);
  _2915 =  /*tail*/ exp(_2913);
  _2916 = _2912 * _2914;
  _2917 =  /*tail*/ llvm_OC_sqrt_OC_f64(_2903);
  _2918 = _2916 / _2917;
  _2919 = llvm_select_f64((llvm_fcmp_ole(_2897, _2860)), _2860, _2897);
  _2920 = llvm_select_f64((llvm_fcmp_ole(_2897, _2860)), _2897, _2860);
  _2921 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2919, _2919, (_2920 * _2920));
  _2922 =  /*tail*/ fwddiffeUk_poly_Kn((1 / _2903), ((-(_2904)) / _2902), _2897, _2898, (_2900 / _2921), ((((_2859 * 2) * _2921) - (_2911 * (((llvm_select_f64((llvm_fcmp_ole(_2897, _2860)), _2861, _2898)) * _2919) + ((llvm_select_f64((llvm_fcmp_ole(_2897, _2860)), _2898, _2861)) * _2920)))) / (_2921 * _2921)));
  _2923 = (_2922.field0);
  _2924 = _2918 * _2923;
  _2925 = (((((((_2915 * _2912) * ((_2908 * (-(_2898))) - (((_2904 + (_2901 / _2899)) - (_2904 / _2906)) * _2897))) + (_2914 * (llvm_select_f64((llvm_fcmp_ueq(_2909, 0)), 0, ((_2898 * -1.2533141373155001) / (_2911 * _2910)))))) * _2917) - (_2916 * (llvm_select_f64((llvm_fcmp_ueq(_2903, 0)), 0, (_2904 / (_2917 * 2)))))) * _2923) / _2903) + (((_2922.field1)) * _2918);
  _3262__PHI_TEMPORARY = _2925;   /* for PHI node */
  _3263__PHI_TEMPORARY = _2924;   /* for PHI node */
  goto _3267;

_3269:
  if ((llvm_fcmp_olt((((_2859 * _2859) / 36) + 24), _2860))) {
    goto _3270;
  } else {
    goto _3271;
  }

_3270:
  _2926 = _2860 * -0.5;
  _2927 =  /*tail*/ exp(_2926);
  _2928 =  /*tail*/ exp(_2926);
  _2929 = _2860 * 8;
  _2930 = 1 / _2929;
  _2931 = _2861 * 8;
  _2932 = _2897 * 4;
  _2933 = (_2930 * _2898) * (_2897 * 8);
  _2934 = 1 / (_2929 * _2929);
  _2935__PHI_TEMPORARY = 1;   /* for PHI node */
  _2936__PHI_TEMPORARY = 0;   /* for PHI node */
  _2937__PHI_TEMPORARY = 0;   /* for PHI node */
  _2938__PHI_TEMPORARY = 0;   /* for PHI node */
  _2939__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _3272;

  do {     /* Syntactic loop '' to make GCC happy */
_3272:
  _2935 = _2935__PHI_TEMPORARY;
  _2936 = _2936__PHI_TEMPORARY;
  _2937 = _2937__PHI_TEMPORARY;
  _2938 = _2938__PHI_TEMPORARY;
  _2939 = _2939__PHI_TEMPORARY;
  _2940 = llvm_add_u32(_2937, 1);
  _2941 = llvm_add_u32((_2940 << 1), -1);
  _2942 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2932, _2897, (-((((double)(uint32_t)(llvm_mul_u32(_2941, _2941)))))));
  _2943 = ((double)(uint32_t)_2940);
  _2944 = _2942 / _2943;
  _2945 = _2930 * _2944;
  _2946 = _2935 * _2945;
  _2947 = ((((_2933 * _2943) / (_2943 * _2943)) - ((_2931 * _2944) * _2934)) * _2935) + (_2945 * _2936);
  _2895 = _2947;
  _2896 = _2946;
  _2948 = _2939 + _2946;
  _2949 = _2947 + _2938;
  fixderivative_isconverged((&_2896), (&_2895), (&_2894), (&_2892));
  _2950 = _2894;
  if ((llvm_select_bool((llvm_fcmp_olt(_2950, 0)), 1, (_2940 == 20u)))) {
    goto _3273;
  } else {
    _2935__PHI_TEMPORARY = _2946;   /* for PHI node */
    _2936__PHI_TEMPORARY = _2947;   /* for PHI node */
    _2937__PHI_TEMPORARY = _2940;   /* for PHI node */
    _2938__PHI_TEMPORARY = _2949;   /* for PHI node */
    _2939__PHI_TEMPORARY = _2948;   /* for PHI node */
    goto _3272;
  }

  } while (1); /* end of syntactic loop '' */
_3273:
  _2951 = (_2861 * -0.5) * _2928;
  _2952 = _2860 * 2;
  _2953 = 3.1415926535897931 / _2952;
  _2954 =  /*tail*/ sqrt(_2953);
  _2955 =  /*tail*/ sqrt(_2953);
  _2956 = _2948 * _2954;
  _2957 = _2927 * _2956;
  _2958 = _2927 * _2957;
  _2959 = ((((((llvm_select_f64((llvm_fcmp_ueq(_2953, 0)), 0, ((_2861 * -6.2831853071795862) / (((_2860 * 4) * _2952) * _2955)))) * _2948) + (_2954 * _2949)) * _2927) + (_2956 * _2951)) * _2927) + (_2957 * _2951);
  _3262__PHI_TEMPORARY = _2959;   /* for PHI node */
  _3263__PHI_TEMPORARY = _2958;   /* for PHI node */
  goto _3267;

_3271:
  _2960 =  /*tail*/ llvm_OC_floor_OC_f64(_2897);
  if ((llvm_fcmp_ogt(_2860, 1.5))) {
    goto _3274;
  } else {
    goto _3275;
  }

_3274:
  if ((llvm_fcmp_olt(_2897, 2))) {
    goto _3276;
  } else {
    goto _3277;
  }

_3276:
  _2886 = 0;
  _2888 = 0;
  _2961 = ((&((uint8_t*)(&_2891))[((int64_t)128)]));
  _2962 = _2897 * (_2897 * 4);
  _2963 = (_2897 * 8) * _2898;
  _2964 = _2860 * 8;
  _2965 = _2861 * 8;
  _2966__PHI_TEMPORARY = 0;   /* for PHI node */
  _2967__PHI_TEMPORARY = 0;   /* for PHI node */
  _2968__PHI_TEMPORARY = 0;   /* for PHI node */
  _2969__PHI_TEMPORARY = 0;   /* for PHI node */
  _2970__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _3278;

  do {     /* Syntactic loop '' to make GCC happy */
_3278:
  _2966 = _2966__PHI_TEMPORARY;
  _2967 = _2967__PHI_TEMPORARY;
  _2968 = _2968__PHI_TEMPORARY;
  _2969 = _2969__PHI_TEMPORARY;
  _2970 = _2970__PHI_TEMPORARY;
  _2971 = llvm_add_u64(_2966, 1);
  _2972 = _2968 + _2970;
  _2973 = _2969 + _2967;
  _2974 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_2966)])));
  _2975 = _2962 - _2974;
  _2976 = ((double)(uint32_t)(((uint32_t)_2971)));
  _2977 = _2964 * _2976;
  _2978 = _2975 / _2977;
  _2979 = _2970 * _2978;
  _2980 = ((((_2963 * _2977) - ((_2965 * _2976) * _2975)) * _2970) / (_2977 * _2977)) + (_2978 * _2969);
  *(double*)(((&((double*)(&_2889))[((int64_t)_2966)]))) = _2973;
  *(double*)(((&((double*)(&_2891))[((int64_t)_2966)]))) = _2972;
  *(double*)(((&((double*)_2890)[((int64_t)_2966)]))) = _2980;
  *(double*)(((&((double*)_2961)[((int64_t)_2966)]))) = _2979;
  if ((_2971 == UINT64_C(16))) {
    goto _3279;
  } else {
    _2966__PHI_TEMPORARY = _2971;   /* for PHI node */
    _2967__PHI_TEMPORARY = _2973;   /* for PHI node */
    _2968__PHI_TEMPORARY = _2972;   /* for PHI node */
    _2969__PHI_TEMPORARY = _2980;   /* for PHI node */
    _2970__PHI_TEMPORARY = _2979;   /* for PHI node */
    goto _3278;
  }

  } while (1); /* end of syntactic loop '' */
_3279:
  fixderivative_levin((&_2888), (&_2886), (&_2891), (&_2889));
  _2981 = _2860 * 2;
  _2982 = 3.1415926535897931 / _2981;
  _2983 =  /*tail*/ sqrt(_2982);
  _2984 =  /*tail*/ sqrt(_2982);
  _2985 = _2886;
  _2986 = _2888;
  _2987 = _2983 * _2986;
  _2988 = -(_2860);
  _2989 =  /*tail*/ exp(_2988);
  _2990 =  /*tail*/ exp(_2988);
  _2991 = _2987 * _2989;
  _2992 = ((((llvm_select_f64((llvm_fcmp_ueq(_2982, 0)), 0, ((_2861 * -6.2831853071795862) / (((_2860 * 4) * _2981) * _2984)))) * _2986) + (_2985 * _2983)) * _2989) - ((_2987 * _2861) * _2990);
  _3262__PHI_TEMPORARY = _2992;   /* for PHI node */
  _3263__PHI_TEMPORARY = _2991;   /* for PHI node */
  goto _3267;

_3277:
  _2993 = _2897 - _2960;
  _2880 = 0;
  _2882 = 0;
  _2994 = ((&((uint8_t*)(&_2885))[((int64_t)128)]));
  _2995 = _2993 * 4;
  _2996 = _2898 * 4;
  _2997 = _2993 * _2995;
  _2998 = (_2995 * _2898) + (_2996 * _2993);
  _2999 = _2860 * 8;
  _3000 = _2861 * 8;
  _3001__PHI_TEMPORARY = 0;   /* for PHI node */
  _3002__PHI_TEMPORARY = 0;   /* for PHI node */
  _3003__PHI_TEMPORARY = 0;   /* for PHI node */
  _3004__PHI_TEMPORARY = 0;   /* for PHI node */
  _3005__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _3280;

  do {     /* Syntactic loop '' to make GCC happy */
_3280:
  _3001 = _3001__PHI_TEMPORARY;
  _3002 = _3002__PHI_TEMPORARY;
  _3003 = _3003__PHI_TEMPORARY;
  _3004 = _3004__PHI_TEMPORARY;
  _3005 = _3005__PHI_TEMPORARY;
  _3006 = llvm_add_u64(_3001, 1);
  _3007 = _3003 + _3005;
  _3008 = _3004 + _3002;
  _3009 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_3001)])));
  _3010 = _2997 - _3009;
  _3011 = ((double)(uint32_t)(((uint32_t)_3006)));
  _3012 = _2999 * _3011;
  _3013 = _3010 / _3012;
  _3014 = _3005 * _3013;
  _3015 = ((((_3012 * _2998) - ((_3000 * _3011) * _3010)) * _3005) / (_3012 * _3012)) + (_3013 * _3004);
  *(double*)(((&((double*)(&_2883))[((int64_t)_3001)]))) = _3008;
  *(double*)(((&((double*)(&_2885))[((int64_t)_3001)]))) = _3007;
  *(double*)(((&((double*)_2884)[((int64_t)_3001)]))) = _3015;
  *(double*)(((&((double*)_2994)[((int64_t)_3001)]))) = _3014;
  if ((_3006 == UINT64_C(16))) {
    goto _3281;
  } else {
    _3001__PHI_TEMPORARY = _3006;   /* for PHI node */
    _3002__PHI_TEMPORARY = _3008;   /* for PHI node */
    _3003__PHI_TEMPORARY = _3007;   /* for PHI node */
    _3004__PHI_TEMPORARY = _3015;   /* for PHI node */
    _3005__PHI_TEMPORARY = _3014;   /* for PHI node */
    goto _3280;
  }

  } while (1); /* end of syntactic loop '' */
_3281:
  fixderivative_levin((&_2882), (&_2880), (&_2885), (&_2883));
  _3016 = _2860 * 2;
  _3017 = 3.1415926535897931 / _3016;
  _3018 =  /*tail*/ sqrt(_3017);
  _3019 =  /*tail*/ sqrt(_3017);
  _3020 = (_2861 * -6.2831853071795862) / (((_2860 * 4) * _3016) * _3019);
  _3021 = _2880;
  _3022 = _2882;
  _3023 = _2993 + 1;
  _2875 = 0;
  _2876 = 0;
  _3024 = ((&((uint8_t*)(&_2879))[((int64_t)128)]));
  _3025 = _3023 * 4;
  _3026 = _3023 * _3025;
  _3027 = (_3025 * _2898) + (_3023 * _2996);
  _3028__PHI_TEMPORARY = 0;   /* for PHI node */
  _3029__PHI_TEMPORARY = 0;   /* for PHI node */
  _3030__PHI_TEMPORARY = 0;   /* for PHI node */
  _3031__PHI_TEMPORARY = 0;   /* for PHI node */
  _3032__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _3282;

  do {     /* Syntactic loop '' to make GCC happy */
_3282:
  _3028 = _3028__PHI_TEMPORARY;
  _3029 = _3029__PHI_TEMPORARY;
  _3030 = _3030__PHI_TEMPORARY;
  _3031 = _3031__PHI_TEMPORARY;
  _3032 = _3032__PHI_TEMPORARY;
  _3033 = llvm_add_u64(_3028, 1);
  _3034 = _3030 + _3032;
  _3035 = _3031 + _3029;
  _3036 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_3028)])));
  _3037 = _3026 - _3036;
  _3038 = ((double)(uint32_t)(((uint32_t)_3033)));
  _3039 = _2999 * _3038;
  _3040 = _3037 / _3039;
  _3041 = _3032 * _3040;
  _3042 = ((((_3039 * _3027) - ((_3000 * _3038) * _3037)) * _3032) / (_3039 * _3039)) + (_3040 * _3031);
  *(double*)(((&((double*)(&_2877))[((int64_t)_3028)]))) = _3035;
  *(double*)(((&((double*)(&_2879))[((int64_t)_3028)]))) = _3034;
  *(double*)(((&((double*)_2878)[((int64_t)_3028)]))) = _3042;
  *(double*)(((&((double*)_3024)[((int64_t)_3028)]))) = _3041;
  if ((_3033 == UINT64_C(16))) {
    goto _3283;
  } else {
    _3028__PHI_TEMPORARY = _3033;   /* for PHI node */
    _3029__PHI_TEMPORARY = _3035;   /* for PHI node */
    _3030__PHI_TEMPORARY = _3034;   /* for PHI node */
    _3031__PHI_TEMPORARY = _3042;   /* for PHI node */
    _3032__PHI_TEMPORARY = _3041;   /* for PHI node */
    goto _3282;
  }

  } while (1); /* end of syntactic loop '' */
_3283:
  _3043 = llvm_select_f64((llvm_fcmp_ueq(_3017, 0)), 0, _3020);
  _3044 = _3018 * _3022;
  _3045 = (_3043 * _3022) + (_3021 * _3018);
  fixderivative_levin((&_2876), (&_2875), (&_2879), (&_2877));
  _3046 =  /*tail*/ sqrt(_3017);
  _3047 = 2 / _2860;
  _3048 = _2897 + 0.5;
  if ((llvm_fcmp_ogt(_3048, _3023))) {
    goto _3284;
  } else {
    _3064__PHI_TEMPORARY = _3045;   /* for PHI node */
    _3065__PHI_TEMPORARY = _3044;   /* for PHI node */
    goto _3285;
  }

_3284:
  _3049 = _2861 * 2;
  _3050 = _2876;
  _3051 = _2875;
  _3052 = _3046 * _3050;
  _3053 = (_3051 * _3046) + (_3050 * _3043);
  _3054 = _3047 * _2898;
  _3055 = 1 / (_2860 * _2860);
  _3056__PHI_TEMPORARY = _3053;   /* for PHI node */
  _3057__PHI_TEMPORARY = _3052;   /* for PHI node */
  _3058__PHI_TEMPORARY = _3045;   /* for PHI node */
  _3059__PHI_TEMPORARY = _3044;   /* for PHI node */
  _3060__PHI_TEMPORARY = _3023;   /* for PHI node */
  goto _3286;

  do {     /* Syntactic loop '' to make GCC happy */
_3286:
  _3056 = _3056__PHI_TEMPORARY;
  _3057 = _3057__PHI_TEMPORARY;
  _3058 = _3058__PHI_TEMPORARY;
  _3059 = _3059__PHI_TEMPORARY;
  _3060 = _3060__PHI_TEMPORARY;
  _3061 = _3047 * _3060;
  _3062 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_3061, _3057, _3059);
  _3063 = _3060 + 1;
  if ((llvm_fcmp_olt(_3063, _3048))) {
    _3056__PHI_TEMPORARY = (((_3061 * _3056) + _3058) + ((_3054 - ((_3049 * _3060) * _3055)) * _3057));   /* for PHI node */
    _3057__PHI_TEMPORARY = _3062;   /* for PHI node */
    _3058__PHI_TEMPORARY = _3056;   /* for PHI node */
    _3059__PHI_TEMPORARY = _3057;   /* for PHI node */
    _3060__PHI_TEMPORARY = _3063;   /* for PHI node */
    goto _3286;
  } else {
    _3064__PHI_TEMPORARY = _3056;   /* for PHI node */
    _3065__PHI_TEMPORARY = _3057;   /* for PHI node */
    goto _3285;
  }

  } while (1); /* end of syntactic loop '' */
_3285:
  _3064 = _3064__PHI_TEMPORARY;
  _3065 = _3065__PHI_TEMPORARY;
  _3066 = -(_2860);
  _3067 =  /*tail*/ exp(_3066);
  _3068 =  /*tail*/ exp(_3066);
  _3069 = _3065 * _3067;
  _3070 = (_3067 * _3064) - ((_3065 * _2861) * _3068);
  _3262__PHI_TEMPORARY = _3070;   /* for PHI node */
  _3263__PHI_TEMPORARY = _3069;   /* for PHI node */
  goto _3267;

_3275:
  _3071 = round(_2897);
  _3072 =  /*tail*/ llvm_OC_fabs_OC_f64((_2897 - _3071));
  if ((llvm_fcmp_olt(_3072, 1.0000000000000001E-5))) {
    goto _3287;
  } else {
    goto _3288;
  }

_3287:
  _3073 = _2897 - (llvm_select_f64((llvm_fcmp_ogt((_2897 - _2960), 0.5)), (_2960 + -1), _2960));
  *((double*)&_2866) = 1;
  *(double*)(((&((uint8_t*)(&_2866))[((int64_t)8)]))) = 0.16666666666666666;
  *(double*)(((&((uint8_t*)(&_2866))[((int64_t)16)]))) = 0.0083333333333333332;
  *(double*)(((&((uint8_t*)(&_2866))[((int64_t)24)]))) = 1.9841269841269841E-4;
  *(double*)(((&((uint8_t*)(&_2866))[((int64_t)32)]))) = 2.7557319223985893E-6;
  _3074 =  /*tail*/ log(_2860);
  _3075 = _3073 * _3073;
  _3076 = (_2898 * 2) * _3073;
  _3077__PHI_TEMPORARY = 0;   /* for PHI node */
  _3078__PHI_TEMPORARY = 0;   /* for PHI node */
  _3079__PHI_TEMPORARY = 1.9711021825948702;   /* for PHI node */
  goto _3289;

  do {     /* Syntactic loop '' to make GCC happy */
_3289:
  _3077 = _3077__PHI_TEMPORARY;
  _3078 = _3078__PHI_TEMPORARY;
  _3079 = _3079__PHI_TEMPORARY;
  _3080 = llvm_add_u64(_3077, 1);
  _3081 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_spcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _3077)))])));
  _3082 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_3075, _3079, _3081);
  _3083 = (_3079 * _3076) + (_3078 * _3075);
  if ((_3080 == UINT64_C(3))) {
    goto _3290;
  } else {
    _3077__PHI_TEMPORARY = _3080;   /* for PHI node */
    _3078__PHI_TEMPORARY = _3083;   /* for PHI node */
    _3079__PHI_TEMPORARY = _3082;   /* for PHI node */
    goto _3289;
  }

  } while (1); /* end of syntactic loop '' */
_3290:
  _3084 = _2860 * 0.5;
  _3085__PHI_TEMPORARY = 0;   /* for PHI node */
  _3086__PHI_TEMPORARY = 0;   /* for PHI node */
  _3087__PHI_TEMPORARY = 0.042197734555544306;   /* for PHI node */
  goto _3291;

  do {     /* Syntactic loop '' to make GCC happy */
_3291:
  _3085 = _3085__PHI_TEMPORARY;
  _3086 = _3086__PHI_TEMPORARY;
  _3087 = _3087__PHI_TEMPORARY;
  _3088 = llvm_add_u64(_3085, 1);
  _3089 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_g1coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(2, _3085)))])));
  _3090 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_3075, _3087, _3089);
  _3091 = (_3087 * _3076) + (_3086 * _3075);
  if ((_3088 == UINT64_C(2))) {
    _3092__PHI_TEMPORARY = 0;   /* for PHI node */
    _3093__PHI_TEMPORARY = 0;   /* for PHI node */
    _3094__PHI_TEMPORARY = 0.16653861138229145;   /* for PHI node */
    goto _3292;
  } else {
    _3085__PHI_TEMPORARY = _3088;   /* for PHI node */
    _3086__PHI_TEMPORARY = _3091;   /* for PHI node */
    _3087__PHI_TEMPORARY = _3090;   /* for PHI node */
    goto _3291;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_3292:
  _3092 = _3092__PHI_TEMPORARY;
  _3093 = _3093__PHI_TEMPORARY;
  _3094 = _3094__PHI_TEMPORARY;
  _3095 = llvm_add_u64(_3092, 1);
  _3096 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_g2coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(2, _3092)))])));
  _3097 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_3075, _3094, _3096);
  _3098 = (_3094 * _3076) + (_3093 * _3075);
  if ((_3095 == UINT64_C(2))) {
    goto _3293;
  } else {
    _3092__PHI_TEMPORARY = _3095;   /* for PHI node */
    _3093__PHI_TEMPORARY = _3098;   /* for PHI node */
    _3094__PHI_TEMPORARY = _3097;   /* for PHI node */
    goto _3292;
  }

  } while (1); /* end of syntactic loop '' */
_3293:
  _3099 = 0.69314718055994529 - _3074;
  _3100 = (-(_2861)) / _2860;
  _3101 = _3073 * _3099;
  _3102 = (_3099 * _2898) + (_3073 * _3100);
  _3103 = _3101 * _3101;
  _3104 = ((&((uint8_t*)(&_2866))[((int64_t)-8)]));
  _3105 = (_3101 * 2) * _3102;
  _3106__PHI_TEMPORARY = 0;   /* for PHI node */
  _3107__PHI_TEMPORARY = 0;   /* for PHI node */
  _3108__PHI_TEMPORARY = 2.7557319223985893E-6;   /* for PHI node */
  goto _3294;

  do {     /* Syntactic loop '' to make GCC happy */
_3294:
  _3106 = _3106__PHI_TEMPORARY;
  _3107 = _3107__PHI_TEMPORARY;
  _3108 = _3108__PHI_TEMPORARY;
  _3109 = llvm_add_u64(_3106, 1);
  _3110 = *(double*)(((&((double*)_3104)[((int64_t)(llvm_sub_u64(4, _3106)))])));
  _3111 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_3103, _3108, _3110);
  _3112 = (_3105 * _3108) + (_3107 * _3103);
  if ((_3109 == UINT64_C(4))) {
    goto _3295;
  } else {
    _3106__PHI_TEMPORARY = _3109;   /* for PHI node */
    _3107__PHI_TEMPORARY = _3112;   /* for PHI node */
    _3108__PHI_TEMPORARY = _3111;   /* for PHI node */
    goto _3294;
  }

  } while (1); /* end of syntactic loop '' */
_3295:
  _3113 =  /*tail*/ cosh(_3101);
  _3114 = _3097 * _3111;
  _3115 = _3113 * _3091;
  _3116 = (((_3111 * _3098) + (_3112 * _3097)) * _3099) + (_3114 * _3100);
  _3117 =  /*tail*/ pow(_3084, _3073);
  _3118 =  /*tail*/ pow(_3084, (_3073 + -1));
  _3119 =  /*tail*/ pow(_3084, _3073);
  _3120 = log(_3084);
  _3121 = _3120 * _2898;
  _3122__PHI_TEMPORARY = 0;   /* for PHI node */
  _3123__PHI_TEMPORARY = 0;   /* for PHI node */
  _3124__PHI_TEMPORARY = -0.23263776388631713;   /* for PHI node */
  goto _3296;

  do {     /* Syntactic loop '' to make GCC happy */
_3296:
  _3122 = _3122__PHI_TEMPORARY;
  _3123 = _3123__PHI_TEMPORARY;
  _3124 = _3124__PHI_TEMPORARY;
  _3125 = llvm_add_u64(_3122, 1);
  _3126 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_besselk_temme_series_OC_pqkcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _3122)))])));
  _3127 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_3073, _3124, _3126);
  _3128 = (_3124 * _2898) + (_3123 * _3073);
  if ((_3125 == UINT64_C(3))) {
    goto _3297;
  } else {
    _3122__PHI_TEMPORARY = _3125;   /* for PHI node */
    _3123__PHI_TEMPORARY = _3128;   /* for PHI node */
    _3124__PHI_TEMPORARY = _3127;   /* for PHI node */
    goto _3296;
  }

  } while (1); /* end of syntactic loop '' */
_3297:
  _3129 = _2861 * 0.5;
  _3130 = _3090 * _3102;
  _3131 = _3121 * _3119;
  _3132 = _3099 * _3114;
  _3133 = (_3073 * _3129) * _3118;
  _3134 = -(_3073);
  _3135__PHI_TEMPORARY = 0;   /* for PHI node */
  _3136__PHI_TEMPORARY = 0;   /* for PHI node */
  _3137__PHI_TEMPORARY = -0.23263776388631713;   /* for PHI node */
  goto _3298;

  do {     /* Syntactic loop '' to make GCC happy */
_3298:
  _3135 = _3135__PHI_TEMPORARY;
  _3136 = _3136__PHI_TEMPORARY;
  _3137 = _3137__PHI_TEMPORARY;
  _3138 = llvm_add_u64(_3135, 1);
  _3139 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_besselk_temme_series_OC_pqkcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _3135)))])));
  _3140 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_3134, _3137, _3139);
  _3141 = (_3136 * _3134) - (_3137 * _2898);
  if ((_3138 == UINT64_C(3))) {
    goto _3299;
  } else {
    _3135__PHI_TEMPORARY = _3138;   /* for PHI node */
    _3136__PHI_TEMPORARY = _3141;   /* for PHI node */
    _3137__PHI_TEMPORARY = _3140;   /* for PHI node */
    goto _3298;
  }

  } while (1); /* end of syntactic loop '' */
_3299:
  _3142 =  /*tail*/ sinh(_3101);
  _3143 = _3117 * 2;
  _3144 = _3084 * _3084;
  _3145 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_3090, _3113, _3132);
  _3146 = _3131 + _3133;
  _3147 = _3082 * _3145;
  _3148 = (((_3116 + _3115) + (_3130 * _3142)) * _3082) + (_3145 * _3083);
  _3149 = _3127 / _3143;
  _3150 = ((_3128 * _3143) - ((_3146 * 2) * _3127)) / (_3143 * _3143);
  _3151 = (_3117 * _3140) * 0.5;
  _3152 = ((_3140 * _3146) + (_3141 * _3117)) * 0.5;
  _3153 = (_3134 - _3073) * _2898;
  _3154 = (_3084 * _3129) * 2;
  _3155__PHI_TEMPORARY = 0;   /* for PHI node */
  _3156__PHI_TEMPORARY = 0;   /* for PHI node */
  _3157__PHI_TEMPORARY = 0;   /* for PHI node */
  _3158__PHI_TEMPORARY = 0;   /* for PHI node */
  _3159__PHI_TEMPORARY = 0;   /* for PHI node */
  _3160__PHI_TEMPORARY = 0;   /* for PHI node */
  _3161__PHI_TEMPORARY = 1;   /* for PHI node */
  _3162__PHI_TEMPORARY = _3152;   /* for PHI node */
  _3163__PHI_TEMPORARY = _3151;   /* for PHI node */
  _3164__PHI_TEMPORARY = _3150;   /* for PHI node */
  _3165__PHI_TEMPORARY = _3149;   /* for PHI node */
  _3166__PHI_TEMPORARY = _3148;   /* for PHI node */
  _3167__PHI_TEMPORARY = _3147;   /* for PHI node */
  goto _3300;

  do {     /* Syntactic loop '' to make GCC happy */
_3300:
  _3155 = _3155__PHI_TEMPORARY;
  _3156 = _3156__PHI_TEMPORARY;
  _3157 = _3157__PHI_TEMPORARY;
  _3158 = _3158__PHI_TEMPORARY;
  _3159 = _3159__PHI_TEMPORARY;
  _3160 = _3160__PHI_TEMPORARY;
  _3161 = _3161__PHI_TEMPORARY;
  _3162 = _3162__PHI_TEMPORARY;
  _3163 = _3163__PHI_TEMPORARY;
  _3164 = _3164__PHI_TEMPORARY;
  _3165 = _3165__PHI_TEMPORARY;
  _3166 = _3166__PHI_TEMPORARY;
  _3167 = _3167__PHI_TEMPORARY;
  _3168 = _3161 * _3167;
  _3169 = (_3167 * _3160) + (_3166 * _3161);
  _2867 = _3169;
  _2868 = _3168;
  _3170 = ((double)(uint32_t)_3155);
  _3171 =  /*tail*/ llvm_OC_fmuladd_OC_f64((-(_3170)), _3167, _3165);
  _3172 = _3161 * _3171;
  _3173 = (_3171 * _3160) + ((_3164 - (_3166 * _3170)) * _3161);
  _2869 = _3173;
  _2870 = _3172;
  _3174 = _3159 + _3168;
  _3175 = _3169 + _3158;
  _3176 = _3157 + _3172;
  _3177 = _3173 + _3156;
  fixderivative_isconverged((&_2868), (&_2867), (&_2872), (&_2871));
  fixderivative_isconverged_OC_1((&_2870), (&_2869), (&_2874), (&_2873));
  _3178 = _2872;
  _3179 = _2874;
  if ((llvm_select_bool((llvm_fcmp_olt(_3178, 0)), (llvm_fcmp_olt(_3179, 0)), 0))) {
    goto _3301;
  } else {
    goto _3302;
  }

_3302:
  _3180 = llvm_add_u32(_3155, 1);
  _3181 = ((double)(uint32_t)_3180);
  _3182 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_3181, _3167, _3165);
  _3183 = _3163 + _3182;
  _3184 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_3134, _3073, (((double)(uint32_t)(llvm_mul_u32(_3180, _3180)))));
  _3185 = _3183 / _3184;
  _3186 = ((((_3164 + _3162) + (_3166 * _3181)) * _3184) - (_3153 * _3183)) / (_3184 * _3184);
  _3187 = _3181 - _3073;
  _3188 = _3165 / _3187;
  _3189 = ((_3165 * _2898) + (_3164 * _3187)) / (_3187 * _3187);
  _3190 = _3073 + _3181;
  _3191 = _3163 / _3190;
  _3192 = ((_3162 * _3190) - (_3163 * _2898)) / (_3190 * _3190);
  _3193 = _3144 / _3181;
  _3194 = _3193 * _3161;
  _3195 = (((_3154 * _3181) * _3161) / (_3181 * _3181)) + (_3160 * _3193);
  if ((_3180 == 500u)) {
    goto _3301;
  } else {
    _3155__PHI_TEMPORARY = _3180;   /* for PHI node */
    _3156__PHI_TEMPORARY = _3177;   /* for PHI node */
    _3157__PHI_TEMPORARY = _3176;   /* for PHI node */
    _3158__PHI_TEMPORARY = _3175;   /* for PHI node */
    _3159__PHI_TEMPORARY = _3174;   /* for PHI node */
    _3160__PHI_TEMPORARY = _3195;   /* for PHI node */
    _3161__PHI_TEMPORARY = _3194;   /* for PHI node */
    _3162__PHI_TEMPORARY = _3192;   /* for PHI node */
    _3163__PHI_TEMPORARY = _3191;   /* for PHI node */
    _3164__PHI_TEMPORARY = _3189;   /* for PHI node */
    _3165__PHI_TEMPORARY = _3188;   /* for PHI node */
    _3166__PHI_TEMPORARY = _3186;   /* for PHI node */
    _3167__PHI_TEMPORARY = _3185;   /* for PHI node */
    goto _3300;
  }

  } while (1); /* end of syntactic loop '' */
_3301:
  _3196 = _3073 + 1;
  _3197 = 2 / _2860;
  _3198 = _2897 + 0.5;
  if ((llvm_fcmp_ogt(_3198, _3196))) {
    goto _3303;
  } else {
    _3262__PHI_TEMPORARY = _3175;   /* for PHI node */
    _3263__PHI_TEMPORARY = _3174;   /* for PHI node */
    goto _3267;
  }

_3303:
  _3199 = _2861 * 2;
  _3200 = ((_3177 * _3084) - (_3176 * _3129)) / _3144;
  _3201 = _3176 / _3084;
  _3202 = _3197 * _2898;
  _3203 = 1 / (_2860 * _2860);
  _3204__PHI_TEMPORARY = _3200;   /* for PHI node */
  _3205__PHI_TEMPORARY = _3201;   /* for PHI node */
  _3206__PHI_TEMPORARY = _3175;   /* for PHI node */
  _3207__PHI_TEMPORARY = _3174;   /* for PHI node */
  _3208__PHI_TEMPORARY = _3196;   /* for PHI node */
  goto _3304;

  do {     /* Syntactic loop '' to make GCC happy */
_3304:
  _3204 = _3204__PHI_TEMPORARY;
  _3205 = _3205__PHI_TEMPORARY;
  _3206 = _3206__PHI_TEMPORARY;
  _3207 = _3207__PHI_TEMPORARY;
  _3208 = _3208__PHI_TEMPORARY;
  _3209 = _3197 * _3208;
  _3210 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_3209, _3205, _3207);
  _3211 = _3208 + 1;
  if ((llvm_fcmp_olt(_3211, _3198))) {
    _3204__PHI_TEMPORARY = (((_3209 * _3204) + _3206) + ((_3202 - ((_3199 * _3208) * _3203)) * _3205));   /* for PHI node */
    _3205__PHI_TEMPORARY = _3210;   /* for PHI node */
    _3206__PHI_TEMPORARY = _3204;   /* for PHI node */
    _3207__PHI_TEMPORARY = _3205;   /* for PHI node */
    _3208__PHI_TEMPORARY = _3211;   /* for PHI node */
    goto _3304;
  } else {
    _3262__PHI_TEMPORARY = _3204;   /* for PHI node */
    _3263__PHI_TEMPORARY = _3205;   /* for PHI node */
    goto _3267;
  }

  } while (1); /* end of syntactic loop '' */
_3288:
  _3212 =  /*tail*/ fwddiffegamma(_2897, _2898);
  _3213 =  /*tail*/ sinpi((0.5 - _2897));
  _3214 = _2860 * _2860;
  _3215 = (_2860 * 2) * _2861;
  _2865 = 1;
  _3216 = _2898 * _3214;
  _3217__PHI_TEMPORARY = 1;   /* for PHI node */
  _3218__PHI_TEMPORARY = 0;   /* for PHI node */
  _3219__PHI_TEMPORARY = 0;   /* for PHI node */
  _3220__PHI_TEMPORARY = 0;   /* for PHI node */
  _3221__PHI_TEMPORARY = 0;   /* for PHI node */
  _3222__PHI_TEMPORARY = 0;   /* for PHI node */
  _3223__PHI_TEMPORARY = 0;   /* for PHI node */
  _3224__PHI_TEMPORARY = 0;   /* for PHI node */
  _3225__PHI_TEMPORARY = 1;   /* for PHI node */
  _3226__PHI_TEMPORARY = 4;   /* for PHI node */
  goto _3305;

  do {     /* Syntactic loop '' to make GCC happy */
_3305:
  _3217 = _3217__PHI_TEMPORARY;
  _3218 = _3218__PHI_TEMPORARY;
  _3219 = _3219__PHI_TEMPORARY;
  _3220 = _3220__PHI_TEMPORARY;
  _3221 = _3221__PHI_TEMPORARY;
  _3222 = _3222__PHI_TEMPORARY;
  _3223 = _3223__PHI_TEMPORARY;
  _3224 = _3224__PHI_TEMPORARY;
  _3225 = _3225__PHI_TEMPORARY;
  _3226 = _3226__PHI_TEMPORARY;
  _3227 = llvm_add_u32(_3219, 1);
  _3228 = _3217 + _3221;
  _3229 = _3220 + _3218;
  _3230 = _3223 + _3225;
  _3231 = _3224 + _3222;
  _3232 = ((double)(uint32_t)_3227);
  _3233 = (_3232 - _2897) * _3226;
  _3234 = _3214 / _3233;
  _3235 = _3216 * _3226;
  _3236 = _3217 * _3234;
  _3237 = ((((_3233 * _3215) + _3235) * _3217) / (_3233 * _3233)) + (_3234 * _3218);
  _2862 = _3237;
  _2863 = _3236;
  fixderivative_isconverged((&_2863), (&_2862), (&_2865), (&_2864));
  _3238 = _2865;
  if ((llvm_fcmp_olt(_3238, 0))) {
    goto _3306;
  } else {
    goto _3307;
  }

_3307:
  _3239 = (_2897 + _3232) * _3226;
  _3240 = _3214 / _3239;
  _3241 = _3225 * _3240;
  _3242 = ((((_3239 * _3215) - _3235) * _3225) / (_3239 * _3239)) + (_3240 * _3224);
  _3243 = _3226 + 4;
  if ((_3227 == 49u)) {
    goto _3306;
  } else {
    _3217__PHI_TEMPORARY = _3236;   /* for PHI node */
    _3218__PHI_TEMPORARY = _3237;   /* for PHI node */
    _3219__PHI_TEMPORARY = _3227;   /* for PHI node */
    _3220__PHI_TEMPORARY = _3229;   /* for PHI node */
    _3221__PHI_TEMPORARY = _3228;   /* for PHI node */
    _3222__PHI_TEMPORARY = _3231;   /* for PHI node */
    _3223__PHI_TEMPORARY = _3230;   /* for PHI node */
    _3224__PHI_TEMPORARY = _3242;   /* for PHI node */
    _3225__PHI_TEMPORARY = _3241;   /* for PHI node */
    _3226__PHI_TEMPORARY = _3243;   /* for PHI node */
    goto _3305;
  }

  } while (1); /* end of syntactic loop '' */
_3306:
  _3244 =  /*tail*/ sinpi((-(_2897)));
  _3245 = (_3212.field1);
  _3246 = (_3212.field0);
  _3247 = _3246 * _3244;
  _3248 = _2897 * _3247;
  _3249 = 3.1415926535897931 / _3248;
  _3250 = _2860 * 0.5;
  _3251 =  /*tail*/ pow(_3250, _2897);
  _3252 =  /*tail*/ pow(_3250, (_2897 + -1));
  _3253 =  /*tail*/ pow(_3250, _2897);
  _3254 = log(_3250);
  _3255 = ((_3254 * _2898) * _3253) + (((_2861 * 0.5) * _2897) * _3252);
  _3256 = _3251 * _3251;
  _3257 = _3256 * _3249;
  _3258 = _3251 * 2;
  _3259 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_3246, _3228, (_3230 * _3257));
  _3260 = _3259 / _3258;
  _3261 = ((((((_3228 * _3245) + (_3229 * _3246)) + (_3257 * _3231)) + ((((_3249 * _3258) * _3255) - (((_3256 * 3.1415926535897931) * ((((_3244 * _3245) - (((_2898 * 3.1415926535897962) * _3213) * _3246)) * _2897) + (_3247 * _2898))) / (_3248 * _3248))) * _3230)) * _3258) - ((_3255 * 2) * _3259)) / (_3258 * _3258);
  _3262__PHI_TEMPORARY = _3261;   /* for PHI node */
  _3263__PHI_TEMPORARY = _3260;   /* for PHI node */
  goto _3267;

_3267:
  _3262 = _3262__PHI_TEMPORARY;
  _3263 = _3263__PHI_TEMPORARY;
  _3264 = llvm_ctor_unnamed_1(0, 0);
  _3264.field0 = _3263;
  _3265 = _3264;
  _3265.field1 = _3262;
  return _3265;
}

