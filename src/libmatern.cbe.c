/* Provide Declarations */
#include <stdint.h>
#include <math.h>
#include "libmatern.cbe.h"
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

static struct l_unnamed_1 fwddiffegamma(double _2332, double _2333);

double gamma(double _71);

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
double _fmax(double _1, double _2) __ATTRIBUTELIST__((nothrow));
double _fmin(double _3, double _4) __ATTRIBUTELIST__((nothrow));
double horner(double _5, void* _6, uint32_t _7) __ATTRIBUTELIST__((nothrow));
double sinpi(double _19) __ATTRIBUTELIST__((nothrow));
double sin(double _2683) __ATTRIBUTELIST__((nothrow));
void isconverged(void* _41, void* _42) __ATTRIBUTELIST__((noinline, nothrow));
void disconverged(void* _45, void* _46, void* _47, void* _48) __ATTRIBUTELIST__((nothrow));
bool isnearint(double _55) __ATTRIBUTELIST__((nothrow));
double _fma(double _58, double _59, double _60) __ATTRIBUTELIST__((nothrow));
struct l_unnamed_1 fmadd(double _62, double _63, double _64, double _65, double _66) __ATTRIBUTELIST__((nothrow));
double gamma(double _71) __ATTRIBUTELIST__((nothrow));
double exp(double _2684) __ATTRIBUTELIST__((nothrow));
double besselk_power_series(double _130, double _131) __ATTRIBUTELIST__((nothrow));
struct l_unnamed_1 up_recurrence(double _155, double _156, double _157, double _158, double _159) __ATTRIBUTELIST__((nothrow));
double besselkx_large_args(double _173, double _174) __ATTRIBUTELIST__((nothrow));
double besselk_large_args(double _191, double _192) __ATTRIBUTELIST__((nothrow));
double Uk_poly_Kn(double _210, double _211, double _212) __ATTRIBUTELIST__((nothrow));
double besselk_large_orders(double _275, double _276) __ATTRIBUTELIST__((nothrow));
double log(double _2685) __ATTRIBUTELIST__((nothrow));
double levin_scale(double _289, uint32_t _290, uint32_t _291) __ATTRIBUTELIST__((nothrow));
void _levin(void* _295, void* _296) __ATTRIBUTELIST__((nothrow));
void levin(void* _342, void* _343) __ATTRIBUTELIST__((nothrow));
void derivative_levin(void* _389, void* _390, void* _391, void* _392) __ATTRIBUTELIST__((nothrow));
double besselkx_levin(double _483, double _484) __ATTRIBUTELIST__((nothrow));
double f0_local_expansion(double _501, double _502) __ATTRIBUTELIST__((nothrow));
double cosh(double _2686) __ATTRIBUTELIST__((nothrow));
struct l_unnamed_1 besselk_temme_series(double _534, double _535) __ATTRIBUTELIST__((nothrow));
double besselk(double _619, double _620) __ATTRIBUTELIST__((nothrow));
double besselk_dv(double _751, double _752) __ATTRIBUTELIST__((nothrow));
double besselk_dx(double _1136, double _1137) __ATTRIBUTELIST__((nothrow));
double matern(double _1404, double _1405, double _1406, double _1407) __ATTRIBUTELIST__((nothrow));
double matern_dsig(double _1420, double _1421, double _1422, double _1423) __ATTRIBUTELIST__((nothrow));
double matern_drho(double _1436, double _1437, double _1438, double _1439) __ATTRIBUTELIST__((nothrow));
double matern_dnu(double _1735, double _1736, double _1737, double _1738) __ATTRIBUTELIST__((nothrow));
double exp2(double _2687) __ATTRIBUTELIST__((nothrow));
static struct l_unnamed_1 fwddiffeUk_poly_Kn(double _2204, double _2205, double _2206, double _2207, double _2208, double _2209) __ATTRIBUTELIST__((nothrow));
static void fixderivative_isconverged(void* _2320, void* _2321, void* _2322, void* _2323) __ATTRIBUTELIST__((nothrow));
static void fixderivative_levin(void* _2324, void* _2325, void* _2326, void* _2327) __ATTRIBUTELIST__((nothrow));
double sinh(double _2688) __ATTRIBUTELIST__((nothrow));
static void fixderivative_isconverged_OC_1(void* _2328, void* _2329, void* _2330, void* _2331) __ATTRIBUTELIST__((nothrow));
static struct l_unnamed_1 fwddiffegamma(double _2332, double _2333) __ATTRIBUTELIST__((nothrow));
static struct l_unnamed_1 fwddiffeUk_poly_Kn_OC_3(double _2433, double _2434, double _2435, double _2436, double _2437) __ATTRIBUTELIST__((nothrow));
static struct l_unnamed_2 fwddiffebesselk_temme_series_OC_4(double _2548, double _2549, double _2550) __ATTRIBUTELIST__((nothrow));
double round(double _2689);
void* memset(void* _2690, uint32_t _2691, uint64_t _2692);


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
  double _755;    /* Address-exposed local */
  double _756;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_5_double _757 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _758;    /* Address-exposed local */
  double _759;    /* Address-exposed local */
  double _760;    /* Address-exposed local */
  double _761;    /* Address-exposed local */
  double _762;    /* Address-exposed local */
  double _763;    /* Address-exposed local */
  double _764;    /* Address-exposed local */
  double _765;    /* Address-exposed local */
  double _766;    /* Address-exposed local */
  double _767;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _768 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _769 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _770;    /* Address-exposed local */
  double _771;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _772 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _773 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _774;    /* Address-exposed local */
  double _775;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _776 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _777 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _778;    /* Address-exposed local */
  double _779;    /* Address-exposed local */
  double _780;    /* Address-exposed local */
  double _781;    /* Address-exposed local */
  void* _782;
  void* _783;
  void* _784;
  void* _785;
  void* _786;
  void* _787;
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
  double _800;
  double _801;
  double _802;
  double _803;
  double _804;
  double _805;
  double _806;
  double _807;
  double _808;
  double _809;
  double _810;
  double _811;
  double _812;
  struct l_unnamed_1 _813;
  double _814;
  double _815;
  double _816;
  double _817;
  double _818;
  double _819;
  double _819__PHI_TEMPORARY;
  double _820;
  double _820__PHI_TEMPORARY;
  double _821;
  double _821__PHI_TEMPORARY;
  uint32_t _822;
  uint32_t _822__PHI_TEMPORARY;
  uint32_t _823;
  uint32_t _824;
  double _825;
  double _826;
  double _827;
  double _828;
  double _829;
  double _830;
  double _831;
  double _832;
  double _833;
  double _834;
  void* _835;
  double _836;
  double _837;
  double _838;
  uint64_t _839;
  uint64_t _839__PHI_TEMPORARY;
  double _840;
  double _840__PHI_TEMPORARY;
  double _841;
  double _841__PHI_TEMPORARY;
  double _842;
  double _842__PHI_TEMPORARY;
  double _843;
  double _843__PHI_TEMPORARY;
  uint64_t _844;
  double _845;
  double _846;
  double _847;
  double _848;
  double _849;
  double _850;
  double _851;
  double _852;
  double _853;
  double _854;
  double _855;
  double _856;
  void* _857;
  double _858;
  double _859;
  double _860;
  double _861;
  double _862;
  uint64_t _863;
  uint64_t _863__PHI_TEMPORARY;
  double _864;
  double _864__PHI_TEMPORARY;
  double _865;
  double _865__PHI_TEMPORARY;
  double _866;
  double _866__PHI_TEMPORARY;
  double _867;
  double _867__PHI_TEMPORARY;
  uint64_t _868;
  double _869;
  double _870;
  double _871;
  double _872;
  double _873;
  double _874;
  double _875;
  double _876;
  double _877;
  double _878;
  double _879;
  double _880;
  void* _881;
  double _882;
  double _883;
  double _884;
  uint64_t _885;
  uint64_t _885__PHI_TEMPORARY;
  double _886;
  double _886__PHI_TEMPORARY;
  double _887;
  double _887__PHI_TEMPORARY;
  double _888;
  double _888__PHI_TEMPORARY;
  double _889;
  double _889__PHI_TEMPORARY;
  uint64_t _890;
  double _891;
  double _892;
  double _893;
  double _894;
  double _895;
  double _896;
  double _897;
  double _898;
  double _899;
  double _900;
  double _901;
  double _902;
  double _903;
  double _904;
  double _905;
  double _906;
  double _907;
  double _908;
  double _908__PHI_TEMPORARY;
  double _909;
  double _909__PHI_TEMPORARY;
  double _910;
  double _910__PHI_TEMPORARY;
  double _911;
  double _911__PHI_TEMPORARY;
  double _912;
  double _912__PHI_TEMPORARY;
  double _913;
  double _914;
  double _915;
  double _916;
  double _916__PHI_TEMPORARY;
  double _917;
  double _918;
  double _919;
  double _920;
  double _921;
  double _922;
  double _923;
  double _924;
  uint64_t _925;
  uint64_t _925__PHI_TEMPORARY;
  double _926;
  double _926__PHI_TEMPORARY;
  double _927;
  double _927__PHI_TEMPORARY;
  uint64_t _928;
  double _929;
  double _930;
  double _931;
  uint64_t _932;
  uint64_t _932__PHI_TEMPORARY;
  double _933;
  double _933__PHI_TEMPORARY;
  double _934;
  double _934__PHI_TEMPORARY;
  uint64_t _935;
  double _936;
  double _937;
  double _938;
  uint64_t _939;
  uint64_t _939__PHI_TEMPORARY;
  double _940;
  double _940__PHI_TEMPORARY;
  double _941;
  double _941__PHI_TEMPORARY;
  uint64_t _942;
  double _943;
  double _944;
  double _945;
  double _946;
  double _947;
  double _948;
  double _949;
  void* _950;
  double _951;
  uint64_t _952;
  uint64_t _952__PHI_TEMPORARY;
  double _953;
  double _953__PHI_TEMPORARY;
  double _954;
  double _954__PHI_TEMPORARY;
  uint64_t _955;
  double _956;
  double _957;
  double _958;
  double _959;
  double _960;
  double _961;
  double _962;
  double _963;
  double _964;
  double _965;
  uint64_t _966;
  uint64_t _966__PHI_TEMPORARY;
  double _967;
  double _967__PHI_TEMPORARY;
  double _968;
  double _968__PHI_TEMPORARY;
  uint64_t _969;
  double _970;
  double _971;
  double _972;
  double _973;
  double _974;
  double _975;
  double _976;
  uint64_t _977;
  uint64_t _977__PHI_TEMPORARY;
  double _978;
  double _978__PHI_TEMPORARY;
  double _979;
  double _979__PHI_TEMPORARY;
  uint64_t _980;
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
  uint32_t _995;
  uint32_t _995__PHI_TEMPORARY;
  double _996;
  double _996__PHI_TEMPORARY;
  double _997;
  double _997__PHI_TEMPORARY;
  double _998;
  double _998__PHI_TEMPORARY;
  double _999;
  double _999__PHI_TEMPORARY;
  double _1000;
  double _1000__PHI_TEMPORARY;
  double _1001;
  double _1001__PHI_TEMPORARY;
  double _1002;
  double _1002__PHI_TEMPORARY;
  double _1003;
  double _1003__PHI_TEMPORARY;
  double _1004;
  double _1004__PHI_TEMPORARY;
  double _1005;
  double _1005__PHI_TEMPORARY;
  double _1006;
  double _1006__PHI_TEMPORARY;
  double _1007;
  double _1008;
  double _1009;
  double _1010;
  double _1011;
  double _1012;
  double _1013;
  double _1014;
  double _1015;
  double _1016;
  double _1017;
  double _1018;
  uint32_t _1019;
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
  double _1032;
  double _1033;
  double _1034;
  double _1035;
  double _1036;
  double _1037;
  double _1038;
  double _1039;
  double _1039__PHI_TEMPORARY;
  double _1040;
  double _1040__PHI_TEMPORARY;
  double _1041;
  double _1041__PHI_TEMPORARY;
  double _1042;
  double _1042__PHI_TEMPORARY;
  double _1043;
  double _1043__PHI_TEMPORARY;
  double _1044;
  double _1045;
  double _1046;
  struct l_unnamed_1 _1047;
  double _1048;
  double _1049;
  double _1050;
  double _1051;
  double _1051__PHI_TEMPORARY;
  double _1052;
  double _1052__PHI_TEMPORARY;
  uint32_t _1053;
  uint32_t _1053__PHI_TEMPORARY;
  double _1054;
  double _1054__PHI_TEMPORARY;
  double _1055;
  double _1055__PHI_TEMPORARY;
  double _1056;
  double _1056__PHI_TEMPORARY;
  double _1057;
  double _1057__PHI_TEMPORARY;
  double _1058;
  double _1058__PHI_TEMPORARY;
  double _1059;
  double _1059__PHI_TEMPORARY;
  double _1060;
  double _1060__PHI_TEMPORARY;
  uint32_t _1061;
  double _1062;
  double _1063;
  double _1064;
  double _1065;
  double _1066;
  double _1067;
  double _1068;
  double _1069;
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
  double _1087;
  double _1088;
  double _1089;
  double _1090;
  double _1091;
  double _1092;
  double _1093;
  double _1094;
  double _1094__PHI_TEMPORARY;

  _782 = ((&((uint8_t*)(&_768))[((int64_t)128)]));
  _783 = memset((&_768), 0, 256);
  _784 = ((&((uint8_t*)(&_772))[((int64_t)128)]));
  _785 = memset((&_772), 0, 256);
  _786 = ((&((uint8_t*)(&_776))[((int64_t)128)]));
  _787 = memset((&_776), 0, 256);
  _788 =  /*tail*/ llvm_OC_fabs_OC_f64(_751);
  _789 = llvm_select_f64((llvm_fcmp_olt(_751, 0)), -1, 1);
  if ((llvm_fcmp_ugt(_752, 0))) {
    goto _1095;
  } else {
    _1094__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1096;
  }

_1095:
  if (((llvm_fcmp_ogt(_788, 25)) | (llvm_fcmp_ogt(_752, 35)))) {
    goto _1097;
  } else {
    goto _1098;
  }

_1097:
  _790 = _752 / _788;
  _791 = -(_789);
  _792 = _751 * _751;
  _793 = (_791 * _752) / _792;
  _794 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_790, _790, 1);
  _795 =  /*tail*/ llvm_OC_sqrt_OC_f64(_794);
  _796 = llvm_select_f64((llvm_fcmp_ueq(_794, 0)), 0, (((_790 * 2) * _793) / (_795 * 2)));
  _797 =  /*tail*/ log(_790);
  _798 = _795 + 1;
  _799 =  /*tail*/ log(_798);
  _800 = (_795 + _797) - _799;
  _801 = 1 / _788;
  _802 =  /*tail*/ llvm_OC_sqrt_OC_f64(_801);
  _803 = _792 * 2;
  _804 = _802 * 1.2533141373155001;
  _805 = _800 * (-(_788));
  _806 =  /*tail*/ exp(_805);
  _807 =  /*tail*/ exp(_805);
  _808 = _804 * _806;
  _809 =  /*tail*/ llvm_OC_sqrt_OC_f64(_795);
  _810 = llvm_select_f64((llvm_fcmp_ole(_788, _752)), _752, _788);
  _811 = llvm_select_f64((llvm_fcmp_ole(_788, _752)), _788, _752);
  _812 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_810, _810, (_811 * _811));
  _813 =  /*tail*/ fwddiffeUk_poly_Kn((1 / _795), ((-(_796)) / _794), _788, _789, (_792 / _812), ((((_751 * 2) * _812) - (_803 * (((llvm_select_f64((llvm_fcmp_ole(_788, _752)), 0, _789)) * _810) + ((llvm_select_f64((llvm_fcmp_ole(_788, _752)), _789, 0)) * _811)))) / (_812 * _812)));
  _814 = (((((((_807 * _804) * ((_800 * _791) - (((_796 + (_793 / _790)) - (_796 / _798)) * _788))) + (_806 * (llvm_select_f64((llvm_fcmp_ueq(_801, 0)), 0, ((_789 * -1.2533141373155001) / (_803 * _802)))))) * _809) - (_808 * (llvm_select_f64((llvm_fcmp_ueq(_795, 0)), 0, (_796 / (_809 * 2)))))) * ((_813.field0))) / _795) + (((_813.field1)) * (_808 / _809));
  _1094__PHI_TEMPORARY = _814;   /* for PHI node */
  goto _1096;

_1098:
  if ((llvm_fcmp_olt((((_751 * _751) / 36) + 24), _752))) {
    goto _1099;
  } else {
    goto _1100;
  }

_1099:
  _815 =  /*tail*/ exp((_752 * -0.5));
  _816 = 1 / (_752 * 8);
  _817 = _788 * 4;
  _818 = (_816 * _789) * (_788 * 8);
  _819__PHI_TEMPORARY = 1;   /* for PHI node */
  _820__PHI_TEMPORARY = 0;   /* for PHI node */
  _821__PHI_TEMPORARY = 0;   /* for PHI node */
  _822__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1101;

  do {     /* Syntactic loop '' to make GCC happy */
_1101:
  _819 = _819__PHI_TEMPORARY;
  _820 = _820__PHI_TEMPORARY;
  _821 = _821__PHI_TEMPORARY;
  _822 = _822__PHI_TEMPORARY;
  _823 = llvm_add_u32(_822, 1);
  _824 = llvm_add_u32((_823 << 1), -1);
  _825 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_817, _788, (-((((double)(uint32_t)(llvm_mul_u32(_824, _824)))))));
  _826 = ((double)(uint32_t)_823);
  _827 = _816 * (_825 / _826);
  _828 = _819 * _827;
  _829 = (_827 * _820) + (((_818 * _826) * _819) / (_826 * _826));
  _780 = _829;
  _781 = _828;
  _830 = _829 + _821;
  fixderivative_isconverged((&_781), (&_780), (&_779), (&_778));
  _831 = _779;
  if ((llvm_select_bool((llvm_fcmp_olt(_831, 0)), 1, (_823 == 20u)))) {
    goto _1102;
  } else {
    _819__PHI_TEMPORARY = _828;   /* for PHI node */
    _820__PHI_TEMPORARY = _829;   /* for PHI node */
    _821__PHI_TEMPORARY = _830;   /* for PHI node */
    _822__PHI_TEMPORARY = _823;   /* for PHI node */
    goto _1101;
  }

  } while (1); /* end of syntactic loop '' */
_1102:
  _832 =  /*tail*/ sqrt((3.1415926535897931 / (_752 * 2)));
  _833 = ((_815 * _815) * _830) * _832;
  _1094__PHI_TEMPORARY = _833;   /* for PHI node */
  goto _1096;

_1100:
  _834 =  /*tail*/ llvm_OC_floor_OC_f64(_788);
  if ((llvm_fcmp_ogt(_752, 1.5))) {
    goto _1103;
  } else {
    goto _1104;
  }

_1103:
  if ((llvm_fcmp_olt(_788, 2))) {
    goto _1105;
  } else {
    goto _1106;
  }

_1105:
  _774 = 0;
  _835 = ((&((uint8_t*)(&_777))[((int64_t)128)]));
  _836 = _788 * (_788 * 4);
  _837 = (_788 * 8) * _789;
  _838 = _752 * 8;
  _839__PHI_TEMPORARY = 0;   /* for PHI node */
  _840__PHI_TEMPORARY = 0;   /* for PHI node */
  _841__PHI_TEMPORARY = 0;   /* for PHI node */
  _842__PHI_TEMPORARY = 0;   /* for PHI node */
  _843__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1107;

  do {     /* Syntactic loop '' to make GCC happy */
_1107:
  _839 = _839__PHI_TEMPORARY;
  _840 = _840__PHI_TEMPORARY;
  _841 = _841__PHI_TEMPORARY;
  _842 = _842__PHI_TEMPORARY;
  _843 = _843__PHI_TEMPORARY;
  _844 = llvm_add_u64(_839, 1);
  _845 = _841 + _843;
  _846 = _842 + _840;
  _847 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_839)])));
  _848 = _838 * (((double)(uint32_t)(((uint32_t)_844))));
  _849 = (_836 - _847) / _848;
  _850 = _843 * _849;
  _851 = (_849 * _842) + (((_837 * _848) * _843) / (_848 * _848));
  *(double*)(((&((double*)(&_776))[((int64_t)_839)]))) = _846;
  *(double*)(((&((double*)(&_777))[((int64_t)_839)]))) = _845;
  *(double*)(((&((double*)_786)[((int64_t)_839)]))) = _851;
  *(double*)(((&((double*)_835)[((int64_t)_839)]))) = _850;
  if ((_844 == UINT64_C(16))) {
    goto _1108;
  } else {
    _839__PHI_TEMPORARY = _844;   /* for PHI node */
    _840__PHI_TEMPORARY = _846;   /* for PHI node */
    _841__PHI_TEMPORARY = _845;   /* for PHI node */
    _842__PHI_TEMPORARY = _851;   /* for PHI node */
    _843__PHI_TEMPORARY = _850;   /* for PHI node */
    goto _1107;
  }

  } while (1); /* end of syntactic loop '' */
_1108:
  fixderivative_levin((&_775), (&_774), (&_777), (&_776));
  _852 =  /*tail*/ sqrt((3.1415926535897931 / (_752 * 2)));
  _853 = _774;
  _854 =  /*tail*/ exp((-(_752)));
  _855 = (_853 * _852) * _854;
  _1094__PHI_TEMPORARY = _855;   /* for PHI node */
  goto _1096;

_1106:
  _856 = _788 - _834;
  _770 = 0;
  _771 = 0;
  _857 = ((&((uint8_t*)(&_773))[((int64_t)128)]));
  _858 = _856 * 4;
  _859 = _789 * 4;
  _860 = _856 * _858;
  _861 = (_858 * _789) + (_859 * _856);
  _862 = _752 * 8;
  _863__PHI_TEMPORARY = 0;   /* for PHI node */
  _864__PHI_TEMPORARY = 0;   /* for PHI node */
  _865__PHI_TEMPORARY = 0;   /* for PHI node */
  _866__PHI_TEMPORARY = 0;   /* for PHI node */
  _867__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1109;

  do {     /* Syntactic loop '' to make GCC happy */
_1109:
  _863 = _863__PHI_TEMPORARY;
  _864 = _864__PHI_TEMPORARY;
  _865 = _865__PHI_TEMPORARY;
  _866 = _866__PHI_TEMPORARY;
  _867 = _867__PHI_TEMPORARY;
  _868 = llvm_add_u64(_863, 1);
  _869 = _865 + _867;
  _870 = _866 + _864;
  _871 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_863)])));
  _872 = _862 * (((double)(uint32_t)(((uint32_t)_868))));
  _873 = (_860 - _871) / _872;
  _874 = _867 * _873;
  _875 = (_873 * _866) + (((_872 * _861) * _867) / (_872 * _872));
  *(double*)(((&((double*)(&_772))[((int64_t)_863)]))) = _870;
  *(double*)(((&((double*)(&_773))[((int64_t)_863)]))) = _869;
  *(double*)(((&((double*)_784)[((int64_t)_863)]))) = _875;
  *(double*)(((&((double*)_857)[((int64_t)_863)]))) = _874;
  if ((_868 == UINT64_C(16))) {
    goto _1110;
  } else {
    _863__PHI_TEMPORARY = _868;   /* for PHI node */
    _864__PHI_TEMPORARY = _870;   /* for PHI node */
    _865__PHI_TEMPORARY = _869;   /* for PHI node */
    _866__PHI_TEMPORARY = _875;   /* for PHI node */
    _867__PHI_TEMPORARY = _874;   /* for PHI node */
    goto _1109;
  }

  } while (1); /* end of syntactic loop '' */
_1110:
  fixderivative_levin((&_771), (&_770), (&_773), (&_772));
  _876 = 3.1415926535897931 / (_752 * 2);
  _877 =  /*tail*/ sqrt(_876);
  _878 = _770;
  _879 = _771;
  _880 = _856 + 1;
  _766 = 0;
  _767 = 0;
  _881 = ((&((uint8_t*)(&_769))[((int64_t)128)]));
  _882 = _880 * 4;
  _883 = _880 * _882;
  _884 = (_882 * _789) + (_880 * _859);
  _885__PHI_TEMPORARY = 0;   /* for PHI node */
  _886__PHI_TEMPORARY = 0;   /* for PHI node */
  _887__PHI_TEMPORARY = 0;   /* for PHI node */
  _888__PHI_TEMPORARY = 0;   /* for PHI node */
  _889__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1111;

  do {     /* Syntactic loop '' to make GCC happy */
_1111:
  _885 = _885__PHI_TEMPORARY;
  _886 = _886__PHI_TEMPORARY;
  _887 = _887__PHI_TEMPORARY;
  _888 = _888__PHI_TEMPORARY;
  _889 = _889__PHI_TEMPORARY;
  _890 = llvm_add_u64(_885, 1);
  _891 = _887 + _889;
  _892 = _888 + _886;
  _893 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_885)])));
  _894 = _862 * (((double)(uint32_t)(((uint32_t)_890))));
  _895 = (_883 - _893) / _894;
  _896 = _889 * _895;
  _897 = (_895 * _888) + (((_894 * _884) * _889) / (_894 * _894));
  *(double*)(((&((double*)(&_768))[((int64_t)_885)]))) = _892;
  *(double*)(((&((double*)(&_769))[((int64_t)_885)]))) = _891;
  *(double*)(((&((double*)_782)[((int64_t)_885)]))) = _897;
  *(double*)(((&((double*)_881)[((int64_t)_885)]))) = _896;
  if ((_890 == UINT64_C(16))) {
    goto _1112;
  } else {
    _885__PHI_TEMPORARY = _890;   /* for PHI node */
    _886__PHI_TEMPORARY = _892;   /* for PHI node */
    _887__PHI_TEMPORARY = _891;   /* for PHI node */
    _888__PHI_TEMPORARY = _897;   /* for PHI node */
    _889__PHI_TEMPORARY = _896;   /* for PHI node */
    goto _1111;
  }

  } while (1); /* end of syntactic loop '' */
_1112:
  _898 = _878 * _877;
  fixderivative_levin((&_767), (&_766), (&_769), (&_768));
  _899 =  /*tail*/ sqrt(_876);
  _900 = 2 / _752;
  _901 = _788 + 0.5;
  if ((llvm_fcmp_ogt(_901, _880))) {
    goto _1113;
  } else {
    _916__PHI_TEMPORARY = _898;   /* for PHI node */
    goto _1114;
  }

_1113:
  _902 = _767;
  _903 = _766;
  _904 = _877 * _879;
  _905 = _899 * _902;
  _906 = _903 * _899;
  _907 = _789 * _900;
  _908__PHI_TEMPORARY = _906;   /* for PHI node */
  _909__PHI_TEMPORARY = _905;   /* for PHI node */
  _910__PHI_TEMPORARY = _898;   /* for PHI node */
  _911__PHI_TEMPORARY = _904;   /* for PHI node */
  _912__PHI_TEMPORARY = _880;   /* for PHI node */
  goto _1115;

  do {     /* Syntactic loop '' to make GCC happy */
_1115:
  _908 = _908__PHI_TEMPORARY;
  _909 = _909__PHI_TEMPORARY;
  _910 = _910__PHI_TEMPORARY;
  _911 = _911__PHI_TEMPORARY;
  _912 = _912__PHI_TEMPORARY;
  _913 = _900 * _912;
  _914 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_913, _909, _911);
  _915 = _912 + 1;
  if ((llvm_fcmp_olt(_915, _901))) {
    _908__PHI_TEMPORARY = ((_910 + (_907 * _909)) + (_913 * _908));   /* for PHI node */
    _909__PHI_TEMPORARY = _914;   /* for PHI node */
    _910__PHI_TEMPORARY = _908;   /* for PHI node */
    _911__PHI_TEMPORARY = _909;   /* for PHI node */
    _912__PHI_TEMPORARY = _915;   /* for PHI node */
    goto _1115;
  } else {
    _916__PHI_TEMPORARY = _908;   /* for PHI node */
    goto _1114;
  }

  } while (1); /* end of syntactic loop '' */
_1114:
  _916 = _916__PHI_TEMPORARY;
  _917 =  /*tail*/ exp((-(_752)));
  _918 = _917 * _916;
  _1094__PHI_TEMPORARY = _918;   /* for PHI node */
  goto _1096;

_1104:
  _919 = round(_788);
  _920 =  /*tail*/ llvm_OC_fabs_OC_f64((_788 - _919));
  if ((llvm_fcmp_olt(_920, 1.0000000000000001E-5))) {
    goto _1116;
  } else {
    goto _1117;
  }

_1116:
  _921 = _788 - (llvm_select_f64((llvm_fcmp_ogt((_788 - _834), 0.5)), (_834 + -1), _834));
  *((double*)&_757) = 1;
  *(double*)(((&((uint8_t*)(&_757))[((int64_t)8)]))) = 0.16666666666666666;
  *(double*)(((&((uint8_t*)(&_757))[((int64_t)16)]))) = 0.0083333333333333332;
  *(double*)(((&((uint8_t*)(&_757))[((int64_t)24)]))) = 1.9841269841269841E-4;
  *(double*)(((&((uint8_t*)(&_757))[((int64_t)32)]))) = 2.7557319223985893E-6;
  _922 =  /*tail*/ log(_752);
  _923 = _921 * _921;
  _924 = (_789 * 2) * _921;
  _925__PHI_TEMPORARY = 0;   /* for PHI node */
  _926__PHI_TEMPORARY = 0;   /* for PHI node */
  _927__PHI_TEMPORARY = 1.9711021825948702;   /* for PHI node */
  goto _1118;

  do {     /* Syntactic loop '' to make GCC happy */
_1118:
  _925 = _925__PHI_TEMPORARY;
  _926 = _926__PHI_TEMPORARY;
  _927 = _927__PHI_TEMPORARY;
  _928 = llvm_add_u64(_925, 1);
  _929 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_spcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _925)))])));
  _930 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_923, _927, _929);
  _931 = (_927 * _924) + (_926 * _923);
  if ((_928 == UINT64_C(3))) {
    _932__PHI_TEMPORARY = 0;   /* for PHI node */
    _933__PHI_TEMPORARY = 0;   /* for PHI node */
    _934__PHI_TEMPORARY = 0.042197734555544306;   /* for PHI node */
    goto _1119;
  } else {
    _925__PHI_TEMPORARY = _928;   /* for PHI node */
    _926__PHI_TEMPORARY = _931;   /* for PHI node */
    _927__PHI_TEMPORARY = _930;   /* for PHI node */
    goto _1118;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_1119:
  _932 = _932__PHI_TEMPORARY;
  _933 = _933__PHI_TEMPORARY;
  _934 = _934__PHI_TEMPORARY;
  _935 = llvm_add_u64(_932, 1);
  _936 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_g1coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(2, _932)))])));
  _937 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_923, _934, _936);
  _938 = (_934 * _924) + (_933 * _923);
  if ((_935 == UINT64_C(2))) {
    _939__PHI_TEMPORARY = 0;   /* for PHI node */
    _940__PHI_TEMPORARY = 0;   /* for PHI node */
    _941__PHI_TEMPORARY = 0.16653861138229145;   /* for PHI node */
    goto _1120;
  } else {
    _932__PHI_TEMPORARY = _935;   /* for PHI node */
    _933__PHI_TEMPORARY = _938;   /* for PHI node */
    _934__PHI_TEMPORARY = _937;   /* for PHI node */
    goto _1119;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_1120:
  _939 = _939__PHI_TEMPORARY;
  _940 = _940__PHI_TEMPORARY;
  _941 = _941__PHI_TEMPORARY;
  _942 = llvm_add_u64(_939, 1);
  _943 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_g2coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(2, _939)))])));
  _944 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_923, _941, _943);
  _945 = (_941 * _924) + (_940 * _923);
  if ((_942 == UINT64_C(2))) {
    goto _1121;
  } else {
    _939__PHI_TEMPORARY = _942;   /* for PHI node */
    _940__PHI_TEMPORARY = _945;   /* for PHI node */
    _941__PHI_TEMPORARY = _944;   /* for PHI node */
    goto _1120;
  }

  } while (1); /* end of syntactic loop '' */
_1121:
  _946 = 0.69314718055994529 - _922;
  _947 = _921 * _946;
  _948 = _946 * _789;
  _949 = _947 * _947;
  _950 = ((&((uint8_t*)(&_757))[((int64_t)-8)]));
  _951 = (_947 * 2) * _948;
  _952__PHI_TEMPORARY = 0;   /* for PHI node */
  _953__PHI_TEMPORARY = 0;   /* for PHI node */
  _954__PHI_TEMPORARY = 2.7557319223985893E-6;   /* for PHI node */
  goto _1122;

  do {     /* Syntactic loop '' to make GCC happy */
_1122:
  _952 = _952__PHI_TEMPORARY;
  _953 = _953__PHI_TEMPORARY;
  _954 = _954__PHI_TEMPORARY;
  _955 = llvm_add_u64(_952, 1);
  _956 = *(double*)(((&((double*)_950)[((int64_t)(llvm_sub_u64(4, _952)))])));
  _957 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_949, _954, _956);
  _958 = (_951 * _954) + (_953 * _949);
  if ((_955 == UINT64_C(4))) {
    goto _1123;
  } else {
    _952__PHI_TEMPORARY = _955;   /* for PHI node */
    _953__PHI_TEMPORARY = _958;   /* for PHI node */
    _954__PHI_TEMPORARY = _957;   /* for PHI node */
    goto _1122;
  }

  } while (1); /* end of syntactic loop '' */
_1123:
  _959 = _752 * 0.5;
  _960 =  /*tail*/ cosh(_947);
  _961 = ((_957 * _945) + (_958 * _944)) * _946;
  _962 = _937 * _948;
  _963 =  /*tail*/ pow(_959, _921);
  _964 =  /*tail*/ pow(_959, _921);
  _965 = log(_959);
  _966__PHI_TEMPORARY = 0;   /* for PHI node */
  _967__PHI_TEMPORARY = 0;   /* for PHI node */
  _968__PHI_TEMPORARY = -0.23263776388631713;   /* for PHI node */
  goto _1124;

  do {     /* Syntactic loop '' to make GCC happy */
_1124:
  _966 = _966__PHI_TEMPORARY;
  _967 = _967__PHI_TEMPORARY;
  _968 = _968__PHI_TEMPORARY;
  _969 = llvm_add_u64(_966, 1);
  _970 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_besselk_temme_series_OC_pqkcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _966)))])));
  _971 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_921, _968, _970);
  _972 = (_968 * _789) + (_967 * _921);
  if ((_969 == UINT64_C(3))) {
    goto _1125;
  } else {
    _966__PHI_TEMPORARY = _969;   /* for PHI node */
    _967__PHI_TEMPORARY = _972;   /* for PHI node */
    _968__PHI_TEMPORARY = _971;   /* for PHI node */
    goto _1124;
  }

  } while (1); /* end of syntactic loop '' */
_1125:
  _973 =  /*tail*/ sinh(_947);
  _974 = _944 * _957;
  _975 = ((_960 * _938) + _961) + (_962 * _973);
  _976 = -(_921);
  _977__PHI_TEMPORARY = 0;   /* for PHI node */
  _978__PHI_TEMPORARY = 0;   /* for PHI node */
  _979__PHI_TEMPORARY = -0.23263776388631713;   /* for PHI node */
  goto _1126;

  do {     /* Syntactic loop '' to make GCC happy */
_1126:
  _977 = _977__PHI_TEMPORARY;
  _978 = _978__PHI_TEMPORARY;
  _979 = _979__PHI_TEMPORARY;
  _980 = llvm_add_u64(_977, 1);
  _981 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_besselk_temme_series_OC_pqkcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _977)))])));
  _982 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_976, _979, _981);
  _983 = (_978 * _976) - (_979 * _789);
  if ((_980 == UINT64_C(3))) {
    goto _1127;
  } else {
    _977__PHI_TEMPORARY = _980;   /* for PHI node */
    _978__PHI_TEMPORARY = _983;   /* for PHI node */
    _979__PHI_TEMPORARY = _982;   /* for PHI node */
    goto _1126;
  }

  } while (1); /* end of syntactic loop '' */
_1127:
  _984 = _963 * 2;
  _985 = _959 * _959;
  _986 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_937, _960, (_946 * _974));
  _987 = (_965 * _789) * _964;
  _988 = _930 * _986;
  _989 = (_975 * _930) + (_986 * _931);
  _990 = _971 / _984;
  _991 = ((_972 * _984) - ((_987 * 2) * _971)) / (_984 * _984);
  _992 = (_963 * _982) * 0.5;
  _993 = ((_982 * _987) + (_983 * _963)) * 0.5;
  _994 = (_976 - _921) * _789;
  _995__PHI_TEMPORARY = 0;   /* for PHI node */
  _996__PHI_TEMPORARY = 0;   /* for PHI node */
  _997__PHI_TEMPORARY = 0;   /* for PHI node */
  _998__PHI_TEMPORARY = 0;   /* for PHI node */
  _999__PHI_TEMPORARY = 0;   /* for PHI node */
  _1000__PHI_TEMPORARY = 1;   /* for PHI node */
  _1001__PHI_TEMPORARY = _993;   /* for PHI node */
  _1002__PHI_TEMPORARY = _992;   /* for PHI node */
  _1003__PHI_TEMPORARY = _991;   /* for PHI node */
  _1004__PHI_TEMPORARY = _990;   /* for PHI node */
  _1005__PHI_TEMPORARY = _989;   /* for PHI node */
  _1006__PHI_TEMPORARY = _988;   /* for PHI node */
  goto _1128;

  do {     /* Syntactic loop '' to make GCC happy */
_1128:
  _995 = _995__PHI_TEMPORARY;
  _996 = _996__PHI_TEMPORARY;
  _997 = _997__PHI_TEMPORARY;
  _998 = _998__PHI_TEMPORARY;
  _999 = _999__PHI_TEMPORARY;
  _1000 = _1000__PHI_TEMPORARY;
  _1001 = _1001__PHI_TEMPORARY;
  _1002 = _1002__PHI_TEMPORARY;
  _1003 = _1003__PHI_TEMPORARY;
  _1004 = _1004__PHI_TEMPORARY;
  _1005 = _1005__PHI_TEMPORARY;
  _1006 = _1006__PHI_TEMPORARY;
  _1007 = _1000 * _1006;
  _1008 = _1005 * _1000;
  _758 = _1008;
  _759 = _1007;
  _1009 = ((double)(uint32_t)_995);
  _1010 =  /*tail*/ llvm_OC_fmuladd_OC_f64((-(_1009)), _1006, _1004);
  _1011 = _1000 * _1010;
  _1012 = (_1003 - (_1005 * _1009)) * _1000;
  _760 = _1012;
  _761 = _1011;
  _1013 = _999 + _1007;
  _1014 = _1008 + _998;
  _1015 = _997 + _1011;
  _1016 = _1012 + _996;
  fixderivative_isconverged((&_759), (&_758), (&_763), (&_762));
  fixderivative_isconverged_OC_1((&_761), (&_760), (&_765), (&_764));
  _1017 = _763;
  _1018 = _765;
  if ((llvm_select_bool((llvm_fcmp_olt(_1017, 0)), (llvm_fcmp_olt(_1018, 0)), 0))) {
    goto _1129;
  } else {
    goto _1130;
  }

_1130:
  _1019 = llvm_add_u32(_995, 1);
  _1020 = ((double)(uint32_t)_1019);
  _1021 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1020, _1006, _1004);
  _1022 = _1002 + _1021;
  _1023 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_976, _921, (((double)(uint32_t)(llvm_mul_u32(_1019, _1019)))));
  _1024 = _1022 / _1023;
  _1025 = ((((_1003 + _1001) + (_1005 * _1020)) * _1023) - (_994 * _1022)) / (_1023 * _1023);
  _1026 = _1020 - _921;
  _1027 = _1004 / _1026;
  _1028 = ((_1004 * _789) + (_1003 * _1026)) / (_1026 * _1026);
  _1029 = _921 + _1020;
  _1030 = _1002 / _1029;
  _1031 = ((_1001 * _1029) - (_1002 * _789)) / (_1029 * _1029);
  _1032 = (_985 / _1020) * _1000;
  if ((_1019 == 500u)) {
    goto _1129;
  } else {
    _995__PHI_TEMPORARY = _1019;   /* for PHI node */
    _996__PHI_TEMPORARY = _1016;   /* for PHI node */
    _997__PHI_TEMPORARY = _1015;   /* for PHI node */
    _998__PHI_TEMPORARY = _1014;   /* for PHI node */
    _999__PHI_TEMPORARY = _1013;   /* for PHI node */
    _1000__PHI_TEMPORARY = _1032;   /* for PHI node */
    _1001__PHI_TEMPORARY = _1031;   /* for PHI node */
    _1002__PHI_TEMPORARY = _1030;   /* for PHI node */
    _1003__PHI_TEMPORARY = _1028;   /* for PHI node */
    _1004__PHI_TEMPORARY = _1027;   /* for PHI node */
    _1005__PHI_TEMPORARY = _1025;   /* for PHI node */
    _1006__PHI_TEMPORARY = _1024;   /* for PHI node */
    goto _1128;
  }

  } while (1); /* end of syntactic loop '' */
_1129:
  _1033 = _921 + 1;
  _1034 = 2 / _752;
  _1035 = _788 + 0.5;
  if ((llvm_fcmp_ogt(_1035, _1033))) {
    goto _1131;
  } else {
    _1094__PHI_TEMPORARY = _1014;   /* for PHI node */
    goto _1096;
  }

_1131:
  _1036 = (_1016 * _959) / _985;
  _1037 = _1015 / _959;
  _1038 = _789 * _1034;
  _1039__PHI_TEMPORARY = _1036;   /* for PHI node */
  _1040__PHI_TEMPORARY = _1037;   /* for PHI node */
  _1041__PHI_TEMPORARY = _1014;   /* for PHI node */
  _1042__PHI_TEMPORARY = _1013;   /* for PHI node */
  _1043__PHI_TEMPORARY = _1033;   /* for PHI node */
  goto _1132;

  do {     /* Syntactic loop '' to make GCC happy */
_1132:
  _1039 = _1039__PHI_TEMPORARY;
  _1040 = _1040__PHI_TEMPORARY;
  _1041 = _1041__PHI_TEMPORARY;
  _1042 = _1042__PHI_TEMPORARY;
  _1043 = _1043__PHI_TEMPORARY;
  _1044 = _1034 * _1043;
  _1045 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1044, _1040, _1042);
  _1046 = _1043 + 1;
  if ((llvm_fcmp_olt(_1046, _1035))) {
    _1039__PHI_TEMPORARY = ((_1041 + (_1038 * _1040)) + (_1044 * _1039));   /* for PHI node */
    _1040__PHI_TEMPORARY = _1045;   /* for PHI node */
    _1041__PHI_TEMPORARY = _1039;   /* for PHI node */
    _1042__PHI_TEMPORARY = _1040;   /* for PHI node */
    _1043__PHI_TEMPORARY = _1046;   /* for PHI node */
    goto _1132;
  } else {
    _1094__PHI_TEMPORARY = _1039;   /* for PHI node */
    goto _1096;
  }

  } while (1); /* end of syntactic loop '' */
_1117:
  _1047 =  /*tail*/ fwddiffegamma(_788, _789);
  _1048 =  /*tail*/ sinpi((0.5 - _788));
  _1049 = _752 * _752;
  _756 = 1;
  _1050 = _1049 * _789;
  _1051__PHI_TEMPORARY = 1;   /* for PHI node */
  _1052__PHI_TEMPORARY = 0;   /* for PHI node */
  _1053__PHI_TEMPORARY = 0;   /* for PHI node */
  _1054__PHI_TEMPORARY = 0;   /* for PHI node */
  _1055__PHI_TEMPORARY = 0;   /* for PHI node */
  _1056__PHI_TEMPORARY = 0;   /* for PHI node */
  _1057__PHI_TEMPORARY = 0;   /* for PHI node */
  _1058__PHI_TEMPORARY = 0;   /* for PHI node */
  _1059__PHI_TEMPORARY = 1;   /* for PHI node */
  _1060__PHI_TEMPORARY = 4;   /* for PHI node */
  goto _1133;

  do {     /* Syntactic loop '' to make GCC happy */
_1133:
  _1051 = _1051__PHI_TEMPORARY;
  _1052 = _1052__PHI_TEMPORARY;
  _1053 = _1053__PHI_TEMPORARY;
  _1054 = _1054__PHI_TEMPORARY;
  _1055 = _1055__PHI_TEMPORARY;
  _1056 = _1056__PHI_TEMPORARY;
  _1057 = _1057__PHI_TEMPORARY;
  _1058 = _1058__PHI_TEMPORARY;
  _1059 = _1059__PHI_TEMPORARY;
  _1060 = _1060__PHI_TEMPORARY;
  _1061 = llvm_add_u32(_1053, 1);
  _1062 = _1051 + _1055;
  _1063 = _1054 + _1052;
  _1064 = _1057 + _1059;
  _1065 = _1058 + _1056;
  _1066 = ((double)(uint32_t)_1061);
  _1067 = (_1066 - _788) * _1060;
  _1068 = _1049 / _1067;
  _1069 = _1051 * _1068;
  _1070 = _1060 * _1050;
  _1071 = ((_1070 * _1051) / (_1067 * _1067)) + (_1068 * _1052);
  _753 = _1071;
  _754 = _1069;
  fixderivative_isconverged((&_754), (&_753), (&_756), (&_755));
  _1072 = _756;
  if ((llvm_fcmp_olt(_1072, 0))) {
    goto _1134;
  } else {
    goto _1135;
  }

_1135:
  _1073 = (_788 + _1066) * _1060;
  _1074 = _1049 / _1073;
  _1075 = _1059 * _1074;
  _1076 = (_1074 * _1058) - ((_1070 * _1059) / (_1073 * _1073));
  _1077 = _1060 + 4;
  if ((_1061 == 49u)) {
    goto _1134;
  } else {
    _1051__PHI_TEMPORARY = _1069;   /* for PHI node */
    _1052__PHI_TEMPORARY = _1071;   /* for PHI node */
    _1053__PHI_TEMPORARY = _1061;   /* for PHI node */
    _1054__PHI_TEMPORARY = _1063;   /* for PHI node */
    _1055__PHI_TEMPORARY = _1062;   /* for PHI node */
    _1056__PHI_TEMPORARY = _1065;   /* for PHI node */
    _1057__PHI_TEMPORARY = _1064;   /* for PHI node */
    _1058__PHI_TEMPORARY = _1076;   /* for PHI node */
    _1059__PHI_TEMPORARY = _1075;   /* for PHI node */
    _1060__PHI_TEMPORARY = _1077;   /* for PHI node */
    goto _1133;
  }

  } while (1); /* end of syntactic loop '' */
_1134:
  _1078 =  /*tail*/ sinpi((-(_788)));
  _1079 = (_1047.field1);
  _1080 = (_1047.field0);
  _1081 = _1080 * _1078;
  _1082 = _788 * _1081;
  _1083 = 3.1415926535897931 / _1082;
  _1084 = _752 * 0.5;
  _1085 =  /*tail*/ pow(_1084, _788);
  _1086 =  /*tail*/ pow(_1084, _788);
  _1087 = log(_1084);
  _1088 = (_1087 * _789) * _1086;
  _1089 = _1085 * _1085;
  _1090 = _1089 * _1083;
  _1091 = _1085 * 2;
  _1092 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1080, _1062, (_1064 * _1090));
  _1093 = ((((((_1062 * _1079) + (_1063 * _1080)) + (_1090 * _1065)) + ((((_1083 * _1091) * _1088) - (((_1089 * 3.1415926535897931) * ((((_1078 * _1079) - (((_789 * 3.1415926535897962) * _1048) * _1080)) * _788) + (_1081 * _789))) / (_1082 * _1082))) * _1064)) * _1091) - ((_1088 * 2) * _1092)) / (_1091 * _1091);
  _1094__PHI_TEMPORARY = _1093;   /* for PHI node */
  goto _1096;

_1096:
  _1094 = _1094__PHI_TEMPORARY;
  return _1094;
}


double besselk_dx(double _1136, double _1137) {
  double _1138;    /* Address-exposed local */
  double _1139;    /* Address-exposed local */
  double _1140;    /* Address-exposed local */
  double _1141;    /* Address-exposed local */
  double _1142;    /* Address-exposed local */
  double _1143;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1144 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1145 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1146;    /* Address-exposed local */
  double _1147;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1148 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1149 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1150;    /* Address-exposed local */
  double _1151;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1152 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1153 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1154;    /* Address-exposed local */
  double _1155;    /* Address-exposed local */
  double _1156;    /* Address-exposed local */
  double _1157;    /* Address-exposed local */
  void* _1158;
  void* _1159;
  void* _1160;
  void* _1161;
  void* _1162;
  void* _1163;
  double _1164;
  double _1165;
  double _1166;
  double _1167;
  double _1168;
  double _1169;
  double _1170;
  double _1171;
  double _1172;
  double _1173;
  double _1174;
  double _1175;
  double _1176;
  double _1177;
  double _1178;
  double _1179;
  double _1180;
  double _1181;
  double _1182;
  double _1183;
  double _1184;
  struct l_unnamed_1 _1185;
  double _1186;
  double _1187;
  double _1188;
  double _1189;
  double _1190;
  double _1191;
  double _1192;
  double _1193;
  double _1194;
  double _1194__PHI_TEMPORARY;
  double _1195;
  double _1195__PHI_TEMPORARY;
  uint32_t _1196;
  uint32_t _1196__PHI_TEMPORARY;
  double _1197;
  double _1197__PHI_TEMPORARY;
  double _1198;
  double _1198__PHI_TEMPORARY;
  uint32_t _1199;
  uint32_t _1200;
  double _1201;
  double _1202;
  double _1203;
  double _1204;
  double _1205;
  double _1206;
  double _1207;
  double _1208;
  double _1209;
  double _1210;
  double _1211;
  double _1212;
  double _1213;
  double _1214;
  double _1215;
  double _1216;
  void* _1217;
  double _1218;
  double _1219;
  uint64_t _1220;
  uint64_t _1220__PHI_TEMPORARY;
  double _1221;
  double _1221__PHI_TEMPORARY;
  double _1222;
  double _1222__PHI_TEMPORARY;
  double _1223;
  double _1223__PHI_TEMPORARY;
  double _1224;
  double _1224__PHI_TEMPORARY;
  uint64_t _1225;
  double _1226;
  double _1227;
  double _1228;
  double _1229;
  double _1230;
  double _1231;
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
  double _1242;
  double _1243;
  double _1244;
  double _1245;
  void* _1246;
  double _1247;
  double _1248;
  uint64_t _1249;
  uint64_t _1249__PHI_TEMPORARY;
  double _1250;
  double _1250__PHI_TEMPORARY;
  double _1251;
  double _1251__PHI_TEMPORARY;
  double _1252;
  double _1252__PHI_TEMPORARY;
  double _1253;
  double _1253__PHI_TEMPORARY;
  uint64_t _1254;
  double _1255;
  double _1256;
  double _1257;
  double _1258;
  double _1259;
  double _1260;
  double _1261;
  double _1262;
  double _1263;
  double _1264;
  double _1265;
  double _1266;
  double _1267;
  double _1268;
  double _1269;
  double _1270;
  double _1271;
  void* _1272;
  double _1273;
  uint64_t _1274;
  uint64_t _1274__PHI_TEMPORARY;
  double _1275;
  double _1275__PHI_TEMPORARY;
  double _1276;
  double _1276__PHI_TEMPORARY;
  double _1277;
  double _1277__PHI_TEMPORARY;
  double _1278;
  double _1278__PHI_TEMPORARY;
  uint64_t _1279;
  double _1280;
  double _1281;
  double _1282;
  double _1283;
  double _1284;
  double _1285;
  double _1286;
  double _1287;
  double _1288;
  double _1289;
  double _1290;
  double _1291;
  double _1292;
  double _1293;
  double _1294;
  double _1295;
  double _1296;
  double _1297;
  double _1298;
  double _1299;
  double _1300;
  double _1300__PHI_TEMPORARY;
  double _1301;
  double _1301__PHI_TEMPORARY;
  double _1302;
  double _1302__PHI_TEMPORARY;
  double _1303;
  double _1303__PHI_TEMPORARY;
  double _1304;
  double _1304__PHI_TEMPORARY;
  double _1305;
  double _1306;
  double _1307;
  double _1308;
  double _1308__PHI_TEMPORARY;
  double _1309;
  double _1309__PHI_TEMPORARY;
  double _1310;
  double _1311;
  double _1312;
  double _1313;
  double _1314;
  double _1315;
  double _1316;
  struct l_unnamed_2 _1317;
  struct l_unnamed_1 _1318;
  double _1319;
  double _1320;
  double _1321;
  double _1322;
  struct l_unnamed_1 _1323;
  double _1324;
  double _1325;
  double _1326;
  double _1327;
  double _1328;
  double _1328__PHI_TEMPORARY;
  double _1329;
  double _1329__PHI_TEMPORARY;
  double _1330;
  double _1330__PHI_TEMPORARY;
  double _1331;
  double _1331__PHI_TEMPORARY;
  double _1332;
  double _1332__PHI_TEMPORARY;
  double _1333;
  double _1334;
  double _1335;
  double _1336;
  double _1337;
  double _1338;
  double _1339;
  double _1339__PHI_TEMPORARY;
  double _1340;
  double _1340__PHI_TEMPORARY;
  uint32_t _1341;
  uint32_t _1341__PHI_TEMPORARY;
  double _1342;
  double _1342__PHI_TEMPORARY;
  double _1343;
  double _1343__PHI_TEMPORARY;
  double _1344;
  double _1344__PHI_TEMPORARY;
  double _1345;
  double _1345__PHI_TEMPORARY;
  double _1346;
  double _1346__PHI_TEMPORARY;
  double _1347;
  double _1347__PHI_TEMPORARY;
  double _1348;
  double _1348__PHI_TEMPORARY;
  uint32_t _1349;
  double _1350;
  double _1351;
  double _1352;
  double _1353;
  double _1354;
  double _1355;
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
  double _1373;
  double _1374;
  double _1375;
  double _1375__PHI_TEMPORARY;

  _1158 = ((&((uint8_t*)(&_1144))[((int64_t)128)]));
  _1159 = memset((&_1144), 0, 256);
  _1160 = ((&((uint8_t*)(&_1148))[((int64_t)128)]));
  _1161 = memset((&_1148), 0, 256);
  _1162 = ((&((uint8_t*)(&_1152))[((int64_t)128)]));
  _1163 = memset((&_1152), 0, 256);
  _1164 =  /*tail*/ llvm_OC_fabs_OC_f64(_1136);
  if ((llvm_fcmp_ugt(_1137, 0))) {
    goto _1376;
  } else {
    _1375__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1377;
  }

_1376:
  if (((llvm_fcmp_ogt(_1164, 25)) | (llvm_fcmp_ogt(_1137, 35)))) {
    goto _1378;
  } else {
    goto _1379;
  }

_1378:
  _1165 = _1137 / _1164;
  _1166 = _1136 * _1136;
  _1167 = _1164 / _1166;
  _1168 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1165, _1165, 1);
  _1169 =  /*tail*/ llvm_OC_sqrt_OC_f64(_1168);
  _1170 = llvm_select_f64((llvm_fcmp_ueq(_1168, 0)), 0, (((_1165 * 2) * _1167) / (_1169 * 2)));
  _1171 =  /*tail*/ log(_1165);
  _1172 = _1169 + 1;
  _1173 =  /*tail*/ log(_1172);
  _1174 =  /*tail*/ llvm_OC_sqrt_OC_f64((1 / _1164));
  _1175 = _1174 * 1.2533141373155001;
  _1176 = -(_1164);
  _1177 = ((_1169 + _1171) - _1173) * _1176;
  _1178 =  /*tail*/ exp(_1177);
  _1179 =  /*tail*/ exp(_1177);
  _1180 = _1175 * _1178;
  _1181 =  /*tail*/ llvm_OC_sqrt_OC_f64(_1169);
  _1182 = llvm_select_f64((llvm_fcmp_ole(_1164, _1137)), _1137, _1164);
  _1183 = llvm_select_f64((llvm_fcmp_ole(_1164, _1137)), _1164, _1137);
  _1184 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1182, _1182, (_1183 * _1183));
  _1185 =  /*tail*/ fwddiffeUk_poly_Kn_OC_3((1 / _1169), ((-(_1170)) / _1168), _1164, (_1166 / _1184), (((_1166 * -2) * _1137) / (_1184 * _1184)));
  _1186 = (((((((_1175 * _1176) * _1181) * ((_1170 + (_1167 / _1165)) - (_1170 / _1172))) * _1179) - (_1180 * (llvm_select_f64((llvm_fcmp_ueq(_1169, 0)), 0, (_1170 / (_1181 * 2)))))) * ((_1185.field0))) / _1169) + (((_1185.field1)) * (_1180 / _1181));
  _1375__PHI_TEMPORARY = _1186;   /* for PHI node */
  goto _1377;

_1379:
  if ((llvm_fcmp_olt((((_1136 * _1136) / 36) + 24), _1137))) {
    goto _1380;
  } else {
    goto _1381;
  }

_1380:
  _1187 = _1137 * -0.5;
  _1188 =  /*tail*/ exp(_1187);
  _1189 =  /*tail*/ exp(_1187);
  _1190 = _1137 * 8;
  _1191 = 1 / _1190;
  _1192 = _1164 * 4;
  _1193 = 1 / (_1190 * _1190);
  _1194__PHI_TEMPORARY = 1;   /* for PHI node */
  _1195__PHI_TEMPORARY = 0;   /* for PHI node */
  _1196__PHI_TEMPORARY = 0;   /* for PHI node */
  _1197__PHI_TEMPORARY = 0;   /* for PHI node */
  _1198__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1382;

  do {     /* Syntactic loop '' to make GCC happy */
_1382:
  _1194 = _1194__PHI_TEMPORARY;
  _1195 = _1195__PHI_TEMPORARY;
  _1196 = _1196__PHI_TEMPORARY;
  _1197 = _1197__PHI_TEMPORARY;
  _1198 = _1198__PHI_TEMPORARY;
  _1199 = llvm_add_u32(_1196, 1);
  _1200 = llvm_add_u32((_1199 << 1), -1);
  _1201 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1192, _1164, (-((((double)(uint32_t)(llvm_mul_u32(_1200, _1200)))))));
  _1202 = _1201 / (((double)(uint32_t)_1199));
  _1203 = _1191 * _1202;
  _1204 = _1194 * _1203;
  _1205 = (_1203 * _1195) - (((_1194 * 8) * _1202) * _1193);
  _1156 = _1205;
  _1157 = _1204;
  _1206 = _1198 + _1204;
  _1207 = _1205 + _1197;
  fixderivative_isconverged((&_1157), (&_1156), (&_1155), (&_1154));
  _1208 = _1155;
  if ((llvm_select_bool((llvm_fcmp_olt(_1208, 0)), 1, (_1199 == 20u)))) {
    goto _1383;
  } else {
    _1194__PHI_TEMPORARY = _1204;   /* for PHI node */
    _1195__PHI_TEMPORARY = _1205;   /* for PHI node */
    _1196__PHI_TEMPORARY = _1199;   /* for PHI node */
    _1197__PHI_TEMPORARY = _1207;   /* for PHI node */
    _1198__PHI_TEMPORARY = _1206;   /* for PHI node */
    goto _1382;
  }

  } while (1); /* end of syntactic loop '' */
_1383:
  _1209 = _1189 * -0.5;
  _1210 = _1137 * 2;
  _1211 = 3.1415926535897931 / _1210;
  _1212 =  /*tail*/ sqrt(_1211);
  _1213 =  /*tail*/ sqrt(_1211);
  _1214 = _1206 * _1212;
  _1215 = ((((((llvm_select_f64((llvm_fcmp_ueq(_1211, 0)), 0, (-6.2831853071795862 / (((_1137 * 4) * _1210) * _1213)))) * _1206) + (_1212 * _1207)) * _1188) + (_1214 * _1209)) * _1188) + ((_1188 * _1214) * _1209);
  _1375__PHI_TEMPORARY = _1215;   /* for PHI node */
  goto _1377;

_1381:
  _1216 =  /*tail*/ llvm_OC_floor_OC_f64(_1164);
  if ((llvm_fcmp_ogt(_1137, 1.5))) {
    goto _1384;
  } else {
    goto _1385;
  }

_1384:
  if ((llvm_fcmp_olt(_1164, 2))) {
    goto _1386;
  } else {
    goto _1387;
  }

_1386:
  _1150 = 0;
  _1151 = 0;
  _1217 = ((&((uint8_t*)(&_1153))[((int64_t)128)]));
  _1218 = _1164 * (_1164 * 4);
  _1219 = _1137 * 8;
  _1220__PHI_TEMPORARY = 0;   /* for PHI node */
  _1221__PHI_TEMPORARY = 0;   /* for PHI node */
  _1222__PHI_TEMPORARY = 0;   /* for PHI node */
  _1223__PHI_TEMPORARY = 0;   /* for PHI node */
  _1224__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1388;

  do {     /* Syntactic loop '' to make GCC happy */
_1388:
  _1220 = _1220__PHI_TEMPORARY;
  _1221 = _1221__PHI_TEMPORARY;
  _1222 = _1222__PHI_TEMPORARY;
  _1223 = _1223__PHI_TEMPORARY;
  _1224 = _1224__PHI_TEMPORARY;
  _1225 = llvm_add_u64(_1220, 1);
  _1226 = _1222 + _1224;
  _1227 = _1223 + _1221;
  _1228 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1220)])));
  _1229 = _1218 - _1228;
  _1230 = ((double)(uint32_t)(((uint32_t)_1225)));
  _1231 = _1219 * _1230;
  _1232 = _1229 / _1231;
  _1233 = _1224 * _1232;
  _1234 = (_1232 * _1223) - ((((_1230 * 8) * _1224) * _1229) / (_1231 * _1231));
  *(double*)(((&((double*)(&_1152))[((int64_t)_1220)]))) = _1227;
  *(double*)(((&((double*)(&_1153))[((int64_t)_1220)]))) = _1226;
  *(double*)(((&((double*)_1162)[((int64_t)_1220)]))) = _1234;
  *(double*)(((&((double*)_1217)[((int64_t)_1220)]))) = _1233;
  if ((_1225 == UINT64_C(16))) {
    goto _1389;
  } else {
    _1220__PHI_TEMPORARY = _1225;   /* for PHI node */
    _1221__PHI_TEMPORARY = _1227;   /* for PHI node */
    _1222__PHI_TEMPORARY = _1226;   /* for PHI node */
    _1223__PHI_TEMPORARY = _1234;   /* for PHI node */
    _1224__PHI_TEMPORARY = _1233;   /* for PHI node */
    goto _1388;
  }

  } while (1); /* end of syntactic loop '' */
_1389:
  fixderivative_levin((&_1151), (&_1150), (&_1153), (&_1152));
  _1235 = _1137 * 2;
  _1236 = 3.1415926535897931 / _1235;
  _1237 =  /*tail*/ sqrt(_1236);
  _1238 =  /*tail*/ sqrt(_1236);
  _1239 = _1150;
  _1240 = _1151;
  _1241 = -(_1137);
  _1242 =  /*tail*/ exp(_1241);
  _1243 =  /*tail*/ exp(_1241);
  _1244 = ((((llvm_select_f64((llvm_fcmp_ueq(_1236, 0)), 0, (-6.2831853071795862 / (((_1137 * 4) * _1235) * _1238)))) * _1240) + (_1239 * _1237)) * _1242) - (_1243 * (_1237 * _1240));
  _1375__PHI_TEMPORARY = _1244;   /* for PHI node */
  goto _1377;

_1387:
  _1245 = _1164 - _1216;
  _1146 = 0;
  _1147 = 0;
  _1246 = ((&((uint8_t*)(&_1149))[((int64_t)128)]));
  _1247 = _1245 * (_1245 * 4);
  _1248 = _1137 * 8;
  _1249__PHI_TEMPORARY = 0;   /* for PHI node */
  _1250__PHI_TEMPORARY = 0;   /* for PHI node */
  _1251__PHI_TEMPORARY = 0;   /* for PHI node */
  _1252__PHI_TEMPORARY = 0;   /* for PHI node */
  _1253__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1390;

  do {     /* Syntactic loop '' to make GCC happy */
_1390:
  _1249 = _1249__PHI_TEMPORARY;
  _1250 = _1250__PHI_TEMPORARY;
  _1251 = _1251__PHI_TEMPORARY;
  _1252 = _1252__PHI_TEMPORARY;
  _1253 = _1253__PHI_TEMPORARY;
  _1254 = llvm_add_u64(_1249, 1);
  _1255 = _1251 + _1253;
  _1256 = _1252 + _1250;
  _1257 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1249)])));
  _1258 = _1247 - _1257;
  _1259 = ((double)(uint32_t)(((uint32_t)_1254)));
  _1260 = _1248 * _1259;
  _1261 = _1258 / _1260;
  _1262 = _1253 * _1261;
  _1263 = (_1261 * _1252) - ((((_1259 * 8) * _1253) * _1258) / (_1260 * _1260));
  *(double*)(((&((double*)(&_1148))[((int64_t)_1249)]))) = _1256;
  *(double*)(((&((double*)(&_1149))[((int64_t)_1249)]))) = _1255;
  *(double*)(((&((double*)_1160)[((int64_t)_1249)]))) = _1263;
  *(double*)(((&((double*)_1246)[((int64_t)_1249)]))) = _1262;
  if ((_1254 == UINT64_C(16))) {
    goto _1391;
  } else {
    _1249__PHI_TEMPORARY = _1254;   /* for PHI node */
    _1250__PHI_TEMPORARY = _1256;   /* for PHI node */
    _1251__PHI_TEMPORARY = _1255;   /* for PHI node */
    _1252__PHI_TEMPORARY = _1263;   /* for PHI node */
    _1253__PHI_TEMPORARY = _1262;   /* for PHI node */
    goto _1390;
  }

  } while (1); /* end of syntactic loop '' */
_1391:
  fixderivative_levin((&_1147), (&_1146), (&_1149), (&_1148));
  _1264 = _1137 * 2;
  _1265 = 3.1415926535897931 / _1264;
  _1266 =  /*tail*/ sqrt(_1265);
  _1267 =  /*tail*/ sqrt(_1265);
  _1268 = -6.2831853071795862 / (((_1137 * 4) * _1264) * _1267);
  _1269 = _1146;
  _1270 = _1147;
  _1271 = _1245 + 1;
  _1142 = 0;
  _1143 = 0;
  _1272 = ((&((uint8_t*)(&_1145))[((int64_t)128)]));
  _1273 = _1271 * (_1271 * 4);
  _1274__PHI_TEMPORARY = 0;   /* for PHI node */
  _1275__PHI_TEMPORARY = 0;   /* for PHI node */
  _1276__PHI_TEMPORARY = 0;   /* for PHI node */
  _1277__PHI_TEMPORARY = 0;   /* for PHI node */
  _1278__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1392;

  do {     /* Syntactic loop '' to make GCC happy */
_1392:
  _1274 = _1274__PHI_TEMPORARY;
  _1275 = _1275__PHI_TEMPORARY;
  _1276 = _1276__PHI_TEMPORARY;
  _1277 = _1277__PHI_TEMPORARY;
  _1278 = _1278__PHI_TEMPORARY;
  _1279 = llvm_add_u64(_1274, 1);
  _1280 = _1276 + _1278;
  _1281 = _1277 + _1275;
  _1282 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1274)])));
  _1283 = _1273 - _1282;
  _1284 = ((double)(uint32_t)(((uint32_t)_1279)));
  _1285 = _1248 * _1284;
  _1286 = _1283 / _1285;
  _1287 = _1278 * _1286;
  _1288 = (_1286 * _1277) - ((((_1284 * 8) * _1278) * _1283) / (_1285 * _1285));
  *(double*)(((&((double*)(&_1144))[((int64_t)_1274)]))) = _1281;
  *(double*)(((&((double*)(&_1145))[((int64_t)_1274)]))) = _1280;
  *(double*)(((&((double*)_1158)[((int64_t)_1274)]))) = _1288;
  *(double*)(((&((double*)_1272)[((int64_t)_1274)]))) = _1287;
  if ((_1279 == UINT64_C(16))) {
    goto _1393;
  } else {
    _1274__PHI_TEMPORARY = _1279;   /* for PHI node */
    _1275__PHI_TEMPORARY = _1281;   /* for PHI node */
    _1276__PHI_TEMPORARY = _1280;   /* for PHI node */
    _1277__PHI_TEMPORARY = _1288;   /* for PHI node */
    _1278__PHI_TEMPORARY = _1287;   /* for PHI node */
    goto _1392;
  }

  } while (1); /* end of syntactic loop '' */
_1393:
  _1289 = llvm_select_f64((llvm_fcmp_ueq(_1265, 0)), 0, _1268);
  _1290 = _1266 * _1270;
  _1291 = (_1289 * _1270) + (_1269 * _1266);
  fixderivative_levin((&_1143), (&_1142), (&_1145), (&_1144));
  _1292 =  /*tail*/ sqrt(_1265);
  _1293 = 2 / _1137;
  _1294 = _1164 + 0.5;
  if ((llvm_fcmp_ogt(_1294, _1271))) {
    goto _1394;
  } else {
    _1308__PHI_TEMPORARY = _1291;   /* for PHI node */
    _1309__PHI_TEMPORARY = _1290;   /* for PHI node */
    goto _1395;
  }

_1394:
  _1295 = _1143;
  _1296 = _1142;
  _1297 = _1292 * _1295;
  _1298 = (_1296 * _1292) + (_1295 * _1289);
  _1299 = 1 / (_1137 * _1137);
  _1300__PHI_TEMPORARY = _1298;   /* for PHI node */
  _1301__PHI_TEMPORARY = _1297;   /* for PHI node */
  _1302__PHI_TEMPORARY = _1291;   /* for PHI node */
  _1303__PHI_TEMPORARY = _1290;   /* for PHI node */
  _1304__PHI_TEMPORARY = _1271;   /* for PHI node */
  goto _1396;

  do {     /* Syntactic loop '' to make GCC happy */
_1396:
  _1300 = _1300__PHI_TEMPORARY;
  _1301 = _1301__PHI_TEMPORARY;
  _1302 = _1302__PHI_TEMPORARY;
  _1303 = _1303__PHI_TEMPORARY;
  _1304 = _1304__PHI_TEMPORARY;
  _1305 = _1293 * _1304;
  _1306 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1305, _1301, _1303);
  _1307 = _1304 + 1;
  if ((llvm_fcmp_olt(_1307, _1294))) {
    _1300__PHI_TEMPORARY = (((_1305 * _1300) + _1302) + (((_1301 * -2) * _1304) * _1299));   /* for PHI node */
    _1301__PHI_TEMPORARY = _1306;   /* for PHI node */
    _1302__PHI_TEMPORARY = _1300;   /* for PHI node */
    _1303__PHI_TEMPORARY = _1301;   /* for PHI node */
    _1304__PHI_TEMPORARY = _1307;   /* for PHI node */
    goto _1396;
  } else {
    _1308__PHI_TEMPORARY = _1300;   /* for PHI node */
    _1309__PHI_TEMPORARY = _1301;   /* for PHI node */
    goto _1395;
  }

  } while (1); /* end of syntactic loop '' */
_1395:
  _1308 = _1308__PHI_TEMPORARY;
  _1309 = _1309__PHI_TEMPORARY;
  _1310 = -(_1137);
  _1311 =  /*tail*/ exp(_1310);
  _1312 =  /*tail*/ exp(_1310);
  _1313 = (_1311 * _1308) - (_1312 * _1309);
  _1375__PHI_TEMPORARY = _1313;   /* for PHI node */
  goto _1377;

_1385:
  _1314 = round(_1164);
  _1315 =  /*tail*/ llvm_OC_fabs_OC_f64((_1164 - _1314));
  if ((llvm_fcmp_olt(_1315, 1.0000000000000001E-5))) {
    goto _1397;
  } else {
    goto _1398;
  }

_1397:
  _1316 = _1164 - (llvm_select_f64((llvm_fcmp_ogt((_1164 - _1216), 0.5)), (_1216 + -1), _1216));
  _1317 =  /*tail*/ fwddiffebesselk_temme_series_OC_4(_1316, _1137, 1);
  _1318 = (_1317.field1);
  _1319 = (_1318.field0);
  _1320 = _1316 + 1;
  _1321 = 2 / _1137;
  _1322 = _1164 + 0.5;
  if ((llvm_fcmp_ogt(_1322, _1320))) {
    goto _1399;
  } else {
    _1375__PHI_TEMPORARY = _1319;   /* for PHI node */
    goto _1377;
  }

_1399:
  _1323 = (_1317.field0);
  _1324 = (_1323.field0);
  _1325 = (_1323.field1);
  _1326 = (_1318.field1);
  _1327 = 1 / (_1137 * _1137);
  _1328__PHI_TEMPORARY = _1326;   /* for PHI node */
  _1329__PHI_TEMPORARY = _1325;   /* for PHI node */
  _1330__PHI_TEMPORARY = _1319;   /* for PHI node */
  _1331__PHI_TEMPORARY = _1324;   /* for PHI node */
  _1332__PHI_TEMPORARY = _1320;   /* for PHI node */
  goto _1400;

  do {     /* Syntactic loop '' to make GCC happy */
_1400:
  _1328 = _1328__PHI_TEMPORARY;
  _1329 = _1329__PHI_TEMPORARY;
  _1330 = _1330__PHI_TEMPORARY;
  _1331 = _1331__PHI_TEMPORARY;
  _1332 = _1332__PHI_TEMPORARY;
  _1333 = _1321 * _1332;
  _1334 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1333, _1329, _1331);
  _1335 = _1332 + 1;
  if ((llvm_fcmp_olt(_1335, _1322))) {
    _1328__PHI_TEMPORARY = (((_1333 * _1328) + _1330) + (((_1329 * -2) * _1332) * _1327));   /* for PHI node */
    _1329__PHI_TEMPORARY = _1334;   /* for PHI node */
    _1330__PHI_TEMPORARY = _1328;   /* for PHI node */
    _1331__PHI_TEMPORARY = _1329;   /* for PHI node */
    _1332__PHI_TEMPORARY = _1335;   /* for PHI node */
    goto _1400;
  } else {
    _1375__PHI_TEMPORARY = _1328;   /* for PHI node */
    goto _1377;
  }

  } while (1); /* end of syntactic loop '' */
_1398:
  _1336 =  /*tail*/ gamma(_1164);
  _1337 = _1137 * _1137;
  _1338 = _1137 * 2;
  _1141 = 1;
  _1339__PHI_TEMPORARY = 1;   /* for PHI node */
  _1340__PHI_TEMPORARY = 0;   /* for PHI node */
  _1341__PHI_TEMPORARY = 0;   /* for PHI node */
  _1342__PHI_TEMPORARY = 0;   /* for PHI node */
  _1343__PHI_TEMPORARY = 0;   /* for PHI node */
  _1344__PHI_TEMPORARY = 0;   /* for PHI node */
  _1345__PHI_TEMPORARY = 0;   /* for PHI node */
  _1346__PHI_TEMPORARY = 0;   /* for PHI node */
  _1347__PHI_TEMPORARY = 1;   /* for PHI node */
  _1348__PHI_TEMPORARY = 4;   /* for PHI node */
  goto _1401;

  do {     /* Syntactic loop '' to make GCC happy */
_1401:
  _1339 = _1339__PHI_TEMPORARY;
  _1340 = _1340__PHI_TEMPORARY;
  _1341 = _1341__PHI_TEMPORARY;
  _1342 = _1342__PHI_TEMPORARY;
  _1343 = _1343__PHI_TEMPORARY;
  _1344 = _1344__PHI_TEMPORARY;
  _1345 = _1345__PHI_TEMPORARY;
  _1346 = _1346__PHI_TEMPORARY;
  _1347 = _1347__PHI_TEMPORARY;
  _1348 = _1348__PHI_TEMPORARY;
  _1349 = llvm_add_u32(_1341, 1);
  _1350 = _1339 + _1343;
  _1351 = _1342 + _1340;
  _1352 = _1345 + _1347;
  _1353 = _1346 + _1344;
  _1354 = ((double)(uint32_t)_1349);
  _1355 = (_1354 - _1164) * _1348;
  _1356 = _1337 / _1355;
  _1357 = _1339 * _1356;
  _1358 = (((_1339 * _1338) * _1355) / (_1355 * _1355)) + (_1356 * _1340);
  _1138 = _1358;
  _1139 = _1357;
  fixderivative_isconverged((&_1139), (&_1138), (&_1141), (&_1140));
  _1359 = _1141;
  if ((llvm_fcmp_olt(_1359, 0))) {
    goto _1402;
  } else {
    goto _1403;
  }

_1403:
  _1360 = (_1164 + _1354) * _1348;
  _1361 = _1337 / _1360;
  _1362 = _1347 * _1361;
  _1363 = (((_1347 * _1338) * _1360) / (_1360 * _1360)) + (_1361 * _1346);
  _1364 = _1348 + 4;
  if ((_1349 == 49u)) {
    goto _1402;
  } else {
    _1339__PHI_TEMPORARY = _1357;   /* for PHI node */
    _1340__PHI_TEMPORARY = _1358;   /* for PHI node */
    _1341__PHI_TEMPORARY = _1349;   /* for PHI node */
    _1342__PHI_TEMPORARY = _1351;   /* for PHI node */
    _1343__PHI_TEMPORARY = _1350;   /* for PHI node */
    _1344__PHI_TEMPORARY = _1353;   /* for PHI node */
    _1345__PHI_TEMPORARY = _1352;   /* for PHI node */
    _1346__PHI_TEMPORARY = _1363;   /* for PHI node */
    _1347__PHI_TEMPORARY = _1362;   /* for PHI node */
    _1348__PHI_TEMPORARY = _1364;   /* for PHI node */
    goto _1401;
  }

  } while (1); /* end of syntactic loop '' */
_1402:
  _1365 =  /*tail*/ sinpi((-(_1164)));
  _1366 = 3.1415926535897931 / (_1164 * (_1336 * _1365));
  _1367 = _1137 * 0.5;
  _1368 =  /*tail*/ pow(_1367, _1164);
  _1369 =  /*tail*/ pow(_1367, (_1164 + -1));
  _1370 = _1369 * _1164;
  _1371 = (_1368 * _1368) * _1366;
  _1372 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1336, _1350, (_1352 * _1371));
  _1373 = _1368 * 2;
  _1374 = (((((_1371 * _1353) + (_1351 * _1336)) + (((_1368 * _1352) * _1370) * _1366)) * _1373) - (_1372 * _1370)) / (_1373 * _1373);
  _1375__PHI_TEMPORARY = _1374;   /* for PHI node */
  goto _1377;

_1377:
  _1375 = _1375__PHI_TEMPORARY;
  return _1375;
}


double matern(double _1404, double _1405, double _1406, double _1407) {
  double _1408;
  double _1409;
  double _1410;
  double _1411;
  double _1412;
  double _1413;
  double _1414;
  double _1415;
  double _1416;
  double _1416__PHI_TEMPORARY;

  if ((llvm_fcmp_oeq(_1404, 0))) {
    goto _1417;
  } else {
    goto _1418;
  }

_1417:
  _1408 = _1405 * _1405;
  _1416__PHI_TEMPORARY = _1408;   /* for PHI node */
  goto _1419;

_1418:
  _1409 =  /*tail*/ sqrt((_1407 * 2));
  _1410 = (_1409 * _1404) / _1406;
  _1411 =  /*tail*/ exp2((1 - _1407));
  _1412 =  /*tail*/ gamma(_1407);
  _1413 =  /*tail*/ pow(_1410, _1407);
  _1414 =  /*tail*/ besselk(_1407, _1410);
  _1415 = ((((_1405 * _1405) * _1411) / _1412) * _1413) * _1414;
  _1416__PHI_TEMPORARY = _1415;   /* for PHI node */
  goto _1419;

_1419:
  _1416 = _1416__PHI_TEMPORARY;
  return _1416;
}


double matern_dsig(double _1420, double _1421, double _1422, double _1423) {
  double _1424;
  double _1425;
  double _1426;
  double _1427;
  double _1428;
  double _1429;
  double _1430;
  double _1431;
  double _1432;
  double _1432__PHI_TEMPORARY;

  if ((llvm_fcmp_oeq(_1420, 0))) {
    goto _1433;
  } else {
    goto _1434;
  }

_1433:
  _1424 = _1421 * 2;
  _1432__PHI_TEMPORARY = _1424;   /* for PHI node */
  goto _1435;

_1434:
  _1425 =  /*tail*/ sqrt((_1423 * 2));
  _1426 = (_1425 * _1420) / _1422;
  _1427 =  /*tail*/ exp2((1 - _1423));
  _1428 =  /*tail*/ gamma(_1423);
  _1429 =  /*tail*/ pow(_1426, _1423);
  _1430 =  /*tail*/ besselk(_1423, _1426);
  _1431 = (((((_1421 * 2) * _1427) * _1428) * _1429) * _1430) / (_1428 * _1428);
  _1432__PHI_TEMPORARY = _1431;   /* for PHI node */
  goto _1435;

_1435:
  _1432 = _1432__PHI_TEMPORARY;
  return _1432;
}


double matern_drho(double _1436, double _1437, double _1438, double _1439) {
  double _1440;    /* Address-exposed local */
  double _1441;    /* Address-exposed local */
  double _1442;    /* Address-exposed local */
  double _1443;    /* Address-exposed local */
  double _1444;    /* Address-exposed local */
  double _1445;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1446 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1447 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1448;    /* Address-exposed local */
  double _1449;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1450 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1451 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1452;    /* Address-exposed local */
  double _1453;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1454 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1455 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1456;    /* Address-exposed local */
  double _1457;    /* Address-exposed local */
  double _1458;    /* Address-exposed local */
  double _1459;    /* Address-exposed local */
  double _1460;
  double _1461;
  double _1462;
  double _1463;
  double _1464;
  double _1465;
  double _1466;
  double _1467;
  double _1468;
  double _1469;
  void* _1470;
  void* _1471;
  void* _1472;
  void* _1473;
  void* _1474;
  void* _1475;
  double _1476;
  double _1477;
  double _1478;
  double _1479;
  double _1480;
  double _1481;
  double _1482;
  double _1483;
  double _1484;
  double _1485;
  double _1486;
  double _1487;
  double _1488;
  double _1489;
  double _1490;
  double _1491;
  double _1492;
  double _1493;
  double _1494;
  double _1495;
  double _1496;
  double _1497;
  struct l_unnamed_1 _1498;
  double _1499;
  double _1500;
  double _1501;
  double _1502;
  double _1503;
  double _1504;
  double _1505;
  double _1506;
  double _1507;
  double _1508;
  double _1509;
  double _1510;
  double _1510__PHI_TEMPORARY;
  double _1511;
  double _1511__PHI_TEMPORARY;
  uint32_t _1512;
  uint32_t _1512__PHI_TEMPORARY;
  double _1513;
  double _1513__PHI_TEMPORARY;
  double _1514;
  double _1514__PHI_TEMPORARY;
  uint32_t _1515;
  uint32_t _1516;
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
  void* _1535;
  double _1536;
  double _1537;
  double _1538;
  uint64_t _1539;
  uint64_t _1539__PHI_TEMPORARY;
  double _1540;
  double _1540__PHI_TEMPORARY;
  double _1541;
  double _1541__PHI_TEMPORARY;
  double _1542;
  double _1542__PHI_TEMPORARY;
  double _1543;
  double _1543__PHI_TEMPORARY;
  uint64_t _1544;
  double _1545;
  double _1546;
  double _1547;
  double _1548;
  double _1549;
  double _1550;
  double _1551;
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
  void* _1567;
  double _1568;
  double _1569;
  double _1570;
  uint64_t _1571;
  uint64_t _1571__PHI_TEMPORARY;
  double _1572;
  double _1572__PHI_TEMPORARY;
  double _1573;
  double _1573__PHI_TEMPORARY;
  double _1574;
  double _1574__PHI_TEMPORARY;
  double _1575;
  double _1575__PHI_TEMPORARY;
  uint64_t _1576;
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
  void* _1594;
  double _1595;
  uint64_t _1596;
  uint64_t _1596__PHI_TEMPORARY;
  double _1597;
  double _1597__PHI_TEMPORARY;
  double _1598;
  double _1598__PHI_TEMPORARY;
  double _1599;
  double _1599__PHI_TEMPORARY;
  double _1600;
  double _1600__PHI_TEMPORARY;
  uint64_t _1601;
  double _1602;
  double _1603;
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
  double _1622;
  double _1623;
  double _1623__PHI_TEMPORARY;
  double _1624;
  double _1624__PHI_TEMPORARY;
  double _1625;
  double _1625__PHI_TEMPORARY;
  double _1626;
  double _1626__PHI_TEMPORARY;
  double _1627;
  double _1627__PHI_TEMPORARY;
  double _1628;
  double _1629;
  double _1630;
  double _1631;
  double _1631__PHI_TEMPORARY;
  double _1632;
  double _1632__PHI_TEMPORARY;
  double _1633;
  double _1634;
  double _1635;
  double _1636;
  double _1637;
  double _1638;
  double _1639;
  double _1640;
  struct l_unnamed_2 _1641;
  struct l_unnamed_1 _1642;
  struct l_unnamed_1 _1643;
  double _1644;
  double _1645;
  double _1646;
  double _1647;
  double _1648;
  double _1649;
  double _1650;
  double _1651;
  double _1652;
  double _1653;
  double _1653__PHI_TEMPORARY;
  double _1654;
  double _1654__PHI_TEMPORARY;
  double _1655;
  double _1655__PHI_TEMPORARY;
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
  double _1664__PHI_TEMPORARY;
  double _1665;
  double _1665__PHI_TEMPORARY;
  uint32_t _1666;
  uint32_t _1666__PHI_TEMPORARY;
  double _1667;
  double _1667__PHI_TEMPORARY;
  double _1668;
  double _1668__PHI_TEMPORARY;
  double _1669;
  double _1669__PHI_TEMPORARY;
  double _1670;
  double _1670__PHI_TEMPORARY;
  double _1671;
  double _1671__PHI_TEMPORARY;
  double _1672;
  double _1672__PHI_TEMPORARY;
  double _1673;
  double _1673__PHI_TEMPORARY;
  uint32_t _1674;
  double _1675;
  double _1676;
  double _1677;
  double _1678;
  double _1679;
  double _1680;
  double _1681;
  double _1682;
  double _1683;
  double _1684;
  double _1685;
  double _1686;
  double _1687;
  double _1688;
  double _1689;
  double _1690;
  double _1691;
  double _1692;
  double _1693;
  double _1694;
  double _1695;
  double _1696;
  double _1697;
  double _1698;
  double _1699;
  double _1700;
  double _1701;
  double _1701__PHI_TEMPORARY;
  double _1702;
  double _1702__PHI_TEMPORARY;
  double _1703;
  double _1704;
  double _1704__PHI_TEMPORARY;

  if ((llvm_fcmp_oeq(_1436, 0))) {
    _1704__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1705;
  } else {
    goto _1706;
  }

_1706:
  _1460 =  /*tail*/ sqrt((_1439 * 2));
  _1461 = _1460 * _1436;
  _1462 = _1461 / _1438;
  _1463 = (-(_1461)) / (_1438 * _1438);
  _1464 =  /*tail*/ exp2((1 - _1439));
  _1465 =  /*tail*/ gamma(_1439);
  _1466 = ((_1437 * _1437) * _1464) / _1465;
  _1467 =  /*tail*/ pow(_1462, _1439);
  _1468 =  /*tail*/ pow(_1462, (_1439 + -1));
  _1469 = _1466 * _1467;
  _1470 = ((&((uint8_t*)(&_1446))[((int64_t)128)]));
  _1471 = memset((&_1446), 0, 256);
  _1472 = ((&((uint8_t*)(&_1450))[((int64_t)128)]));
  _1473 = memset((&_1450), 0, 256);
  _1474 = ((&((uint8_t*)(&_1454))[((int64_t)128)]));
  _1475 = memset((&_1454), 0, 256);
  _1476 =  /*tail*/ llvm_OC_fabs_OC_f64(_1439);
  if ((llvm_fcmp_ugt(_1462, 0))) {
    goto _1707;
  } else {
    _1701__PHI_TEMPORARY = 0;   /* for PHI node */
    _1702__PHI_TEMPORARY = (*(double*)&FPConstant2);   /* for PHI node */
    goto _1708;
  }

_1707:
  if (((llvm_fcmp_ogt(_1476, 25)) | (llvm_fcmp_ogt(_1462, 35)))) {
    goto _1709;
  } else {
    goto _1710;
  }

_1709:
  _1477 = _1462 / _1476;
  _1478 = _1439 * _1439;
  _1479 = (_1463 * _1476) / _1478;
  _1480 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1477, _1477, 1);
  _1481 =  /*tail*/ llvm_OC_sqrt_OC_f64(_1480);
  _1482 = llvm_select_f64((llvm_fcmp_ueq(_1480, 0)), 0, (((_1477 * 2) * _1479) / (_1481 * 2)));
  _1483 =  /*tail*/ log(_1477);
  _1484 = _1481 + 1;
  _1485 =  /*tail*/ log(_1484);
  _1486 =  /*tail*/ llvm_OC_sqrt_OC_f64((1 / _1476));
  _1487 = _1486 * 1.2533141373155001;
  _1488 = -(_1476);
  _1489 = ((_1481 + _1483) - _1485) * _1488;
  _1490 =  /*tail*/ exp(_1489);
  _1491 =  /*tail*/ exp(_1489);
  _1492 = _1487 * _1490;
  _1493 =  /*tail*/ llvm_OC_sqrt_OC_f64(_1481);
  _1494 = _1492 / _1493;
  _1495 = llvm_select_f64((llvm_fcmp_ole(_1476, _1462)), _1462, _1476);
  _1496 = llvm_select_f64((llvm_fcmp_ole(_1476, _1462)), _1476, _1462);
  _1497 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1495, _1495, (_1496 * _1496));
  _1498 =  /*tail*/ fwddiffeUk_poly_Kn_OC_3((1 / _1481), ((-(_1482)) / _1480), _1476, (_1478 / _1497), (((_1478 * -2) * (((llvm_select_f64((llvm_fcmp_ole(_1476, _1462)), _1463, 0)) * _1495) + ((llvm_select_f64((llvm_fcmp_ole(_1476, _1462)), 0, _1463)) * _1496))) / (_1497 * _1497)));
  _1499 = (_1498.field0);
  _1500 = _1494 * _1499;
  _1501 = (((((((_1487 * _1488) * _1493) * ((_1482 + (_1479 / _1477)) - (_1482 / _1484))) * _1491) - (_1492 * (llvm_select_f64((llvm_fcmp_ueq(_1481, 0)), 0, (_1482 / (_1493 * 2)))))) * _1499) / _1481) + (((_1498.field1)) * _1494);
  _1701__PHI_TEMPORARY = _1501;   /* for PHI node */
  _1702__PHI_TEMPORARY = _1500;   /* for PHI node */
  goto _1708;

_1710:
  if ((llvm_fcmp_olt((((_1439 * _1439) / 36) + 24), _1462))) {
    goto _1711;
  } else {
    goto _1712;
  }

_1711:
  _1502 = _1462 * -0.5;
  _1503 =  /*tail*/ exp(_1502);
  _1504 =  /*tail*/ exp(_1502);
  _1505 = _1462 * 8;
  _1506 = 1 / _1505;
  _1507 = _1463 * 8;
  _1508 = _1476 * 4;
  _1509 = 1 / (_1505 * _1505);
  _1510__PHI_TEMPORARY = 1;   /* for PHI node */
  _1511__PHI_TEMPORARY = 0;   /* for PHI node */
  _1512__PHI_TEMPORARY = 0;   /* for PHI node */
  _1513__PHI_TEMPORARY = 0;   /* for PHI node */
  _1514__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1713;

  do {     /* Syntactic loop '' to make GCC happy */
_1713:
  _1510 = _1510__PHI_TEMPORARY;
  _1511 = _1511__PHI_TEMPORARY;
  _1512 = _1512__PHI_TEMPORARY;
  _1513 = _1513__PHI_TEMPORARY;
  _1514 = _1514__PHI_TEMPORARY;
  _1515 = llvm_add_u32(_1512, 1);
  _1516 = llvm_add_u32((_1515 << 1), -1);
  _1517 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1508, _1476, (-((((double)(uint32_t)(llvm_mul_u32(_1516, _1516)))))));
  _1518 = _1517 / (((double)(uint32_t)_1515));
  _1519 = _1506 * _1518;
  _1520 = _1510 * _1519;
  _1521 = (_1519 * _1511) - (((_1507 * _1510) * _1518) * _1509);
  _1458 = _1521;
  _1459 = _1520;
  _1522 = _1514 + _1520;
  _1523 = _1521 + _1513;
  fixderivative_isconverged((&_1459), (&_1458), (&_1457), (&_1456));
  _1524 = _1457;
  if ((llvm_select_bool((llvm_fcmp_olt(_1524, 0)), 1, (_1515 == 20u)))) {
    goto _1714;
  } else {
    _1510__PHI_TEMPORARY = _1520;   /* for PHI node */
    _1511__PHI_TEMPORARY = _1521;   /* for PHI node */
    _1512__PHI_TEMPORARY = _1515;   /* for PHI node */
    _1513__PHI_TEMPORARY = _1523;   /* for PHI node */
    _1514__PHI_TEMPORARY = _1522;   /* for PHI node */
    goto _1713;
  }

  } while (1); /* end of syntactic loop '' */
_1714:
  _1525 = (_1463 * -0.5) * _1504;
  _1526 = _1462 * 2;
  _1527 = 3.1415926535897931 / _1526;
  _1528 =  /*tail*/ sqrt(_1527);
  _1529 =  /*tail*/ sqrt(_1527);
  _1530 = _1522 * _1528;
  _1531 = _1503 * _1530;
  _1532 = _1503 * _1531;
  _1533 = ((((((llvm_select_f64((llvm_fcmp_ueq(_1527, 0)), 0, ((_1463 * -6.2831853071795862) / (((_1462 * 4) * _1526) * _1529)))) * _1522) + (_1528 * _1523)) * _1503) + (_1530 * _1525)) * _1503) + (_1531 * _1525);
  _1701__PHI_TEMPORARY = _1533;   /* for PHI node */
  _1702__PHI_TEMPORARY = _1532;   /* for PHI node */
  goto _1708;

_1712:
  _1534 =  /*tail*/ llvm_OC_floor_OC_f64(_1476);
  if ((llvm_fcmp_ogt(_1462, 1.5))) {
    goto _1715;
  } else {
    goto _1716;
  }

_1715:
  if ((llvm_fcmp_olt(_1476, 2))) {
    goto _1717;
  } else {
    goto _1718;
  }

_1717:
  _1452 = 0;
  _1453 = 0;
  _1535 = ((&((uint8_t*)(&_1455))[((int64_t)128)]));
  _1536 = _1476 * (_1476 * 4);
  _1537 = _1462 * 8;
  _1538 = _1463 * 8;
  _1539__PHI_TEMPORARY = 0;   /* for PHI node */
  _1540__PHI_TEMPORARY = 0;   /* for PHI node */
  _1541__PHI_TEMPORARY = 0;   /* for PHI node */
  _1542__PHI_TEMPORARY = 0;   /* for PHI node */
  _1543__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1719;

  do {     /* Syntactic loop '' to make GCC happy */
_1719:
  _1539 = _1539__PHI_TEMPORARY;
  _1540 = _1540__PHI_TEMPORARY;
  _1541 = _1541__PHI_TEMPORARY;
  _1542 = _1542__PHI_TEMPORARY;
  _1543 = _1543__PHI_TEMPORARY;
  _1544 = llvm_add_u64(_1539, 1);
  _1545 = _1541 + _1543;
  _1546 = _1542 + _1540;
  _1547 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1539)])));
  _1548 = _1536 - _1547;
  _1549 = ((double)(uint32_t)(((uint32_t)_1544)));
  _1550 = _1537 * _1549;
  _1551 = _1548 / _1550;
  _1552 = _1543 * _1551;
  _1553 = (_1551 * _1542) - ((((_1538 * _1549) * _1543) * _1548) / (_1550 * _1550));
  *(double*)(((&((double*)(&_1454))[((int64_t)_1539)]))) = _1546;
  *(double*)(((&((double*)(&_1455))[((int64_t)_1539)]))) = _1545;
  *(double*)(((&((double*)_1474)[((int64_t)_1539)]))) = _1553;
  *(double*)(((&((double*)_1535)[((int64_t)_1539)]))) = _1552;
  if ((_1544 == UINT64_C(16))) {
    goto _1720;
  } else {
    _1539__PHI_TEMPORARY = _1544;   /* for PHI node */
    _1540__PHI_TEMPORARY = _1546;   /* for PHI node */
    _1541__PHI_TEMPORARY = _1545;   /* for PHI node */
    _1542__PHI_TEMPORARY = _1553;   /* for PHI node */
    _1543__PHI_TEMPORARY = _1552;   /* for PHI node */
    goto _1719;
  }

  } while (1); /* end of syntactic loop '' */
_1720:
  fixderivative_levin((&_1453), (&_1452), (&_1455), (&_1454));
  _1554 = _1462 * 2;
  _1555 = 3.1415926535897931 / _1554;
  _1556 =  /*tail*/ sqrt(_1555);
  _1557 =  /*tail*/ sqrt(_1555);
  _1558 = _1452;
  _1559 = _1453;
  _1560 = _1556 * _1559;
  _1561 = -(_1462);
  _1562 =  /*tail*/ exp(_1561);
  _1563 =  /*tail*/ exp(_1561);
  _1564 = _1560 * _1562;
  _1565 = ((((llvm_select_f64((llvm_fcmp_ueq(_1555, 0)), 0, ((_1463 * -6.2831853071795862) / (((_1462 * 4) * _1554) * _1557)))) * _1559) + (_1558 * _1556)) * _1562) - ((_1560 * _1463) * _1563);
  _1701__PHI_TEMPORARY = _1565;   /* for PHI node */
  _1702__PHI_TEMPORARY = _1564;   /* for PHI node */
  goto _1708;

_1718:
  _1566 = _1476 - _1534;
  _1448 = 0;
  _1449 = 0;
  _1567 = ((&((uint8_t*)(&_1451))[((int64_t)128)]));
  _1568 = _1566 * (_1566 * 4);
  _1569 = _1462 * 8;
  _1570 = _1463 * -8;
  _1571__PHI_TEMPORARY = 0;   /* for PHI node */
  _1572__PHI_TEMPORARY = 0;   /* for PHI node */
  _1573__PHI_TEMPORARY = 0;   /* for PHI node */
  _1574__PHI_TEMPORARY = 0;   /* for PHI node */
  _1575__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1721;

  do {     /* Syntactic loop '' to make GCC happy */
_1721:
  _1571 = _1571__PHI_TEMPORARY;
  _1572 = _1572__PHI_TEMPORARY;
  _1573 = _1573__PHI_TEMPORARY;
  _1574 = _1574__PHI_TEMPORARY;
  _1575 = _1575__PHI_TEMPORARY;
  _1576 = llvm_add_u64(_1571, 1);
  _1577 = _1573 + _1575;
  _1578 = _1574 + _1572;
  _1579 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1571)])));
  _1580 = _1568 - _1579;
  _1581 = ((double)(uint32_t)(((uint32_t)_1576)));
  _1582 = _1569 * _1581;
  _1583 = _1580 / _1582;
  _1584 = _1575 * _1583;
  _1585 = ((((_1570 * _1581) * _1575) * _1580) / (_1582 * _1582)) + (_1583 * _1574);
  *(double*)(((&((double*)(&_1450))[((int64_t)_1571)]))) = _1578;
  *(double*)(((&((double*)(&_1451))[((int64_t)_1571)]))) = _1577;
  *(double*)(((&((double*)_1472)[((int64_t)_1571)]))) = _1585;
  *(double*)(((&((double*)_1567)[((int64_t)_1571)]))) = _1584;
  if ((_1576 == UINT64_C(16))) {
    goto _1722;
  } else {
    _1571__PHI_TEMPORARY = _1576;   /* for PHI node */
    _1572__PHI_TEMPORARY = _1578;   /* for PHI node */
    _1573__PHI_TEMPORARY = _1577;   /* for PHI node */
    _1574__PHI_TEMPORARY = _1585;   /* for PHI node */
    _1575__PHI_TEMPORARY = _1584;   /* for PHI node */
    goto _1721;
  }

  } while (1); /* end of syntactic loop '' */
_1722:
  fixderivative_levin((&_1449), (&_1448), (&_1451), (&_1450));
  _1586 = _1462 * 2;
  _1587 = 3.1415926535897931 / _1586;
  _1588 =  /*tail*/ sqrt(_1587);
  _1589 =  /*tail*/ sqrt(_1587);
  _1590 = ((_1462 * 4) * _1586) * _1589;
  _1591 = _1448;
  _1592 = _1449;
  _1593 = _1566 + 1;
  _1444 = 0;
  _1445 = 0;
  _1594 = ((&((uint8_t*)(&_1447))[((int64_t)128)]));
  _1595 = _1593 * (_1593 * 4);
  _1596__PHI_TEMPORARY = 0;   /* for PHI node */
  _1597__PHI_TEMPORARY = 0;   /* for PHI node */
  _1598__PHI_TEMPORARY = 0;   /* for PHI node */
  _1599__PHI_TEMPORARY = 0;   /* for PHI node */
  _1600__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1723;

  do {     /* Syntactic loop '' to make GCC happy */
_1723:
  _1596 = _1596__PHI_TEMPORARY;
  _1597 = _1597__PHI_TEMPORARY;
  _1598 = _1598__PHI_TEMPORARY;
  _1599 = _1599__PHI_TEMPORARY;
  _1600 = _1600__PHI_TEMPORARY;
  _1601 = llvm_add_u64(_1596, 1);
  _1602 = _1598 + _1600;
  _1603 = _1599 + _1597;
  _1604 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1596)])));
  _1605 = _1595 - _1604;
  _1606 = ((double)(uint32_t)(((uint32_t)_1601)));
  _1607 = _1569 * _1606;
  _1608 = _1605 / _1607;
  _1609 = _1600 * _1608;
  _1610 = ((((_1570 * _1606) * _1600) * _1605) / (_1607 * _1607)) + (_1608 * _1599);
  *(double*)(((&((double*)(&_1446))[((int64_t)_1596)]))) = _1603;
  *(double*)(((&((double*)(&_1447))[((int64_t)_1596)]))) = _1602;
  *(double*)(((&((double*)_1470)[((int64_t)_1596)]))) = _1610;
  *(double*)(((&((double*)_1594)[((int64_t)_1596)]))) = _1609;
  if ((_1601 == UINT64_C(16))) {
    goto _1724;
  } else {
    _1596__PHI_TEMPORARY = _1601;   /* for PHI node */
    _1597__PHI_TEMPORARY = _1603;   /* for PHI node */
    _1598__PHI_TEMPORARY = _1602;   /* for PHI node */
    _1599__PHI_TEMPORARY = _1610;   /* for PHI node */
    _1600__PHI_TEMPORARY = _1609;   /* for PHI node */
    goto _1723;
  }

  } while (1); /* end of syntactic loop '' */
_1724:
  _1611 = llvm_select_f64((llvm_fcmp_ueq(_1587, 0)), 0, ((_1463 * -6.2831853071795862) / _1590));
  _1612 = _1588 * _1592;
  _1613 = (_1611 * _1592) + (_1591 * _1588);
  fixderivative_levin((&_1445), (&_1444), (&_1447), (&_1446));
  _1614 =  /*tail*/ sqrt(_1587);
  _1615 = 2 / _1462;
  _1616 = _1463 * -2;
  _1617 = _1476 + 0.5;
  if ((llvm_fcmp_ogt(_1617, _1593))) {
    goto _1725;
  } else {
    _1631__PHI_TEMPORARY = _1613;   /* for PHI node */
    _1632__PHI_TEMPORARY = _1612;   /* for PHI node */
    goto _1726;
  }

_1725:
  _1618 = _1445;
  _1619 = _1444;
  _1620 = _1614 * _1618;
  _1621 = (_1619 * _1614) + (_1618 * _1611);
  _1622 = 1 / (_1462 * _1462);
  _1623__PHI_TEMPORARY = _1621;   /* for PHI node */
  _1624__PHI_TEMPORARY = _1620;   /* for PHI node */
  _1625__PHI_TEMPORARY = _1613;   /* for PHI node */
  _1626__PHI_TEMPORARY = _1612;   /* for PHI node */
  _1627__PHI_TEMPORARY = _1593;   /* for PHI node */
  goto _1727;

  do {     /* Syntactic loop '' to make GCC happy */
_1727:
  _1623 = _1623__PHI_TEMPORARY;
  _1624 = _1624__PHI_TEMPORARY;
  _1625 = _1625__PHI_TEMPORARY;
  _1626 = _1626__PHI_TEMPORARY;
  _1627 = _1627__PHI_TEMPORARY;
  _1628 = _1615 * _1627;
  _1629 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1628, _1624, _1626);
  _1630 = _1627 + 1;
  if ((llvm_fcmp_olt(_1630, _1617))) {
    _1623__PHI_TEMPORARY = (((_1628 * _1623) + _1625) + (((_1616 * _1624) * _1627) * _1622));   /* for PHI node */
    _1624__PHI_TEMPORARY = _1629;   /* for PHI node */
    _1625__PHI_TEMPORARY = _1623;   /* for PHI node */
    _1626__PHI_TEMPORARY = _1624;   /* for PHI node */
    _1627__PHI_TEMPORARY = _1630;   /* for PHI node */
    goto _1727;
  } else {
    _1631__PHI_TEMPORARY = _1623;   /* for PHI node */
    _1632__PHI_TEMPORARY = _1624;   /* for PHI node */
    goto _1726;
  }

  } while (1); /* end of syntactic loop '' */
_1726:
  _1631 = _1631__PHI_TEMPORARY;
  _1632 = _1632__PHI_TEMPORARY;
  _1633 = -(_1462);
  _1634 =  /*tail*/ exp(_1633);
  _1635 =  /*tail*/ exp(_1633);
  _1636 = _1632 * _1634;
  _1637 = (_1634 * _1631) - ((_1632 * _1463) * _1635);
  _1701__PHI_TEMPORARY = _1637;   /* for PHI node */
  _1702__PHI_TEMPORARY = _1636;   /* for PHI node */
  goto _1708;

_1716:
  _1638 = round(_1476);
  _1639 =  /*tail*/ llvm_OC_fabs_OC_f64((_1476 - _1638));
  if ((llvm_fcmp_olt(_1639, 1.0000000000000001E-5))) {
    goto _1728;
  } else {
    goto _1729;
  }

_1728:
  _1640 = _1476 - (llvm_select_f64((llvm_fcmp_ogt((_1476 - _1534), 0.5)), (_1534 + -1), _1534));
  _1641 =  /*tail*/ fwddiffebesselk_temme_series_OC_4(_1640, _1462, _1463);
  _1642 = (_1641.field0);
  _1643 = (_1641.field1);
  _1644 = (_1642.field0);
  _1645 = (_1643.field0);
  _1646 = _1640 + 1;
  _1647 = 2 / _1462;
  _1648 = _1463 * -2;
  _1649 = _1476 + 0.5;
  if ((llvm_fcmp_ogt(_1649, _1646))) {
    goto _1730;
  } else {
    _1701__PHI_TEMPORARY = _1645;   /* for PHI node */
    _1702__PHI_TEMPORARY = _1644;   /* for PHI node */
    goto _1708;
  }

_1730:
  _1650 = (_1642.field1);
  _1651 = (_1643.field1);
  _1652 = 1 / (_1462 * _1462);
  _1653__PHI_TEMPORARY = _1651;   /* for PHI node */
  _1654__PHI_TEMPORARY = _1650;   /* for PHI node */
  _1655__PHI_TEMPORARY = _1645;   /* for PHI node */
  _1656__PHI_TEMPORARY = _1644;   /* for PHI node */
  _1657__PHI_TEMPORARY = _1646;   /* for PHI node */
  goto _1731;

  do {     /* Syntactic loop '' to make GCC happy */
_1731:
  _1653 = _1653__PHI_TEMPORARY;
  _1654 = _1654__PHI_TEMPORARY;
  _1655 = _1655__PHI_TEMPORARY;
  _1656 = _1656__PHI_TEMPORARY;
  _1657 = _1657__PHI_TEMPORARY;
  _1658 = _1647 * _1657;
  _1659 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1658, _1654, _1656);
  _1660 = _1657 + 1;
  if ((llvm_fcmp_olt(_1660, _1649))) {
    _1653__PHI_TEMPORARY = (((_1658 * _1653) + _1655) + (((_1648 * _1654) * _1657) * _1652));   /* for PHI node */
    _1654__PHI_TEMPORARY = _1659;   /* for PHI node */
    _1655__PHI_TEMPORARY = _1653;   /* for PHI node */
    _1656__PHI_TEMPORARY = _1654;   /* for PHI node */
    _1657__PHI_TEMPORARY = _1660;   /* for PHI node */
    goto _1731;
  } else {
    _1701__PHI_TEMPORARY = _1653;   /* for PHI node */
    _1702__PHI_TEMPORARY = _1654;   /* for PHI node */
    goto _1708;
  }

  } while (1); /* end of syntactic loop '' */
_1729:
  _1661 =  /*tail*/ gamma(_1476);
  _1662 = _1462 * _1462;
  _1663 = (_1462 * 2) * _1463;
  _1443 = 1;
  _1664__PHI_TEMPORARY = 1;   /* for PHI node */
  _1665__PHI_TEMPORARY = 0;   /* for PHI node */
  _1666__PHI_TEMPORARY = 0;   /* for PHI node */
  _1667__PHI_TEMPORARY = 0;   /* for PHI node */
  _1668__PHI_TEMPORARY = 0;   /* for PHI node */
  _1669__PHI_TEMPORARY = 0;   /* for PHI node */
  _1670__PHI_TEMPORARY = 0;   /* for PHI node */
  _1671__PHI_TEMPORARY = 0;   /* for PHI node */
  _1672__PHI_TEMPORARY = 1;   /* for PHI node */
  _1673__PHI_TEMPORARY = 4;   /* for PHI node */
  goto _1732;

  do {     /* Syntactic loop '' to make GCC happy */
_1732:
  _1664 = _1664__PHI_TEMPORARY;
  _1665 = _1665__PHI_TEMPORARY;
  _1666 = _1666__PHI_TEMPORARY;
  _1667 = _1667__PHI_TEMPORARY;
  _1668 = _1668__PHI_TEMPORARY;
  _1669 = _1669__PHI_TEMPORARY;
  _1670 = _1670__PHI_TEMPORARY;
  _1671 = _1671__PHI_TEMPORARY;
  _1672 = _1672__PHI_TEMPORARY;
  _1673 = _1673__PHI_TEMPORARY;
  _1674 = llvm_add_u32(_1666, 1);
  _1675 = _1664 + _1668;
  _1676 = _1667 + _1665;
  _1677 = _1670 + _1672;
  _1678 = _1671 + _1669;
  _1679 = ((double)(uint32_t)_1674);
  _1680 = (_1679 - _1476) * _1673;
  _1681 = _1662 / _1680;
  _1682 = _1664 * _1681;
  _1683 = (((_1664 * _1663) * _1680) / (_1680 * _1680)) + (_1681 * _1665);
  _1440 = _1683;
  _1441 = _1682;
  fixderivative_isconverged((&_1441), (&_1440), (&_1443), (&_1442));
  _1684 = _1443;
  if ((llvm_fcmp_olt(_1684, 0))) {
    goto _1733;
  } else {
    goto _1734;
  }

_1734:
  _1685 = (_1476 + _1679) * _1673;
  _1686 = _1662 / _1685;
  _1687 = _1672 * _1686;
  _1688 = (((_1672 * _1663) * _1685) / (_1685 * _1685)) + (_1686 * _1671);
  _1689 = _1673 + 4;
  if ((_1674 == 49u)) {
    goto _1733;
  } else {
    _1664__PHI_TEMPORARY = _1682;   /* for PHI node */
    _1665__PHI_TEMPORARY = _1683;   /* for PHI node */
    _1666__PHI_TEMPORARY = _1674;   /* for PHI node */
    _1667__PHI_TEMPORARY = _1676;   /* for PHI node */
    _1668__PHI_TEMPORARY = _1675;   /* for PHI node */
    _1669__PHI_TEMPORARY = _1678;   /* for PHI node */
    _1670__PHI_TEMPORARY = _1677;   /* for PHI node */
    _1671__PHI_TEMPORARY = _1688;   /* for PHI node */
    _1672__PHI_TEMPORARY = _1687;   /* for PHI node */
    _1673__PHI_TEMPORARY = _1689;   /* for PHI node */
    goto _1732;
  }

  } while (1); /* end of syntactic loop '' */
_1733:
  _1690 =  /*tail*/ sinpi((-(_1476)));
  _1691 = 3.1415926535897931 / (_1476 * (_1661 * _1690));
  _1692 = _1462 * 0.5;
  _1693 =  /*tail*/ pow(_1692, _1476);
  _1694 =  /*tail*/ pow(_1692, (_1476 + -1));
  _1695 = ((_1463 * _1476) * 0.5) * _1694;
  _1696 = (_1693 * _1693) * _1691;
  _1697 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1661, _1675, (_1677 * _1696));
  _1698 = _1693 * 2;
  _1699 = _1697 / _1698;
  _1700 = (((((_1696 * _1678) + (_1676 * _1661)) + ((((_1677 * 2) * _1693) * _1695) * _1691)) * _1698) - ((_1695 * 2) * _1697)) / (_1698 * _1698);
  _1701__PHI_TEMPORARY = _1700;   /* for PHI node */
  _1702__PHI_TEMPORARY = _1699;   /* for PHI node */
  goto _1708;

_1708:
  _1701 = _1701__PHI_TEMPORARY;
  _1702 = _1702__PHI_TEMPORARY;
  _1703 = ((((_1463 * _1439) * _1466) * _1468) * _1702) + (_1701 * _1469);
  _1704__PHI_TEMPORARY = _1703;   /* for PHI node */
  goto _1705;

_1705:
  _1704 = _1704__PHI_TEMPORARY;
  return _1704;
}


double matern_dnu(double _1735, double _1736, double _1737, double _1738) {
  double _1739;    /* Address-exposed local */
  double _1740;    /* Address-exposed local */
  double _1741;    /* Address-exposed local */
  double _1742;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_5_double _1743 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1744;    /* Address-exposed local */
  double _1745;    /* Address-exposed local */
  double _1746;    /* Address-exposed local */
  double _1747;    /* Address-exposed local */
  double _1748;    /* Address-exposed local */
  double _1749;    /* Address-exposed local */
  double _1750;    /* Address-exposed local */
  double _1751;    /* Address-exposed local */
  double _1752;    /* Address-exposed local */
  double _1753;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1754 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1755 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1756;    /* Address-exposed local */
  double _1757;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1758 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1759 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1760;    /* Address-exposed local */
  double _1761;    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1762 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_32_double _1763 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _1764;    /* Address-exposed local */
  double _1765;    /* Address-exposed local */
  double _1766;    /* Address-exposed local */
  double _1767;    /* Address-exposed local */
  double _1768;
  double _1769;
  double _1770;
  double _1771;
  double _1772;
  double _1773;
  double _1774;
  double _1775;
  double _1776;
  double _1777;
  struct l_unnamed_1 _1778;
  double _1779;
  double _1780;
  double _1781;
  double _1782;
  double _1783;
  double _1784;
  double _1785;
  double _1786;
  void* _1787;
  void* _1788;
  void* _1789;
  void* _1790;
  void* _1791;
  void* _1792;
  double _1793;
  double _1794;
  double _1795;
  double _1796;
  double _1797;
  double _1798;
  double _1799;
  double _1800;
  double _1801;
  double _1802;
  double _1803;
  double _1804;
  double _1805;
  double _1806;
  double _1807;
  double _1808;
  double _1809;
  double _1810;
  double _1811;
  double _1812;
  double _1813;
  double _1814;
  double _1815;
  double _1816;
  double _1817;
  struct l_unnamed_1 _1818;
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
  double _1831;
  double _1831__PHI_TEMPORARY;
  double _1832;
  double _1832__PHI_TEMPORARY;
  uint32_t _1833;
  uint32_t _1833__PHI_TEMPORARY;
  double _1834;
  double _1834__PHI_TEMPORARY;
  double _1835;
  double _1835__PHI_TEMPORARY;
  uint32_t _1836;
  uint32_t _1837;
  double _1838;
  double _1839;
  double _1840;
  double _1841;
  double _1842;
  double _1843;
  double _1844;
  double _1845;
  double _1846;
  double _1847;
  double _1848;
  double _1849;
  double _1850;
  double _1851;
  double _1852;
  double _1853;
  double _1854;
  double _1855;
  double _1856;
  void* _1857;
  double _1858;
  double _1859;
  double _1860;
  double _1861;
  uint64_t _1862;
  uint64_t _1862__PHI_TEMPORARY;
  double _1863;
  double _1863__PHI_TEMPORARY;
  double _1864;
  double _1864__PHI_TEMPORARY;
  double _1865;
  double _1865__PHI_TEMPORARY;
  double _1866;
  double _1866__PHI_TEMPORARY;
  uint64_t _1867;
  double _1868;
  double _1869;
  double _1870;
  double _1871;
  double _1872;
  double _1873;
  double _1874;
  double _1875;
  double _1876;
  double _1877;
  double _1878;
  double _1879;
  double _1880;
  double _1881;
  double _1882;
  double _1883;
  double _1884;
  double _1885;
  double _1886;
  double _1887;
  double _1888;
  double _1889;
  void* _1890;
  double _1891;
  double _1892;
  double _1893;
  double _1894;
  double _1895;
  double _1896;
  uint64_t _1897;
  uint64_t _1897__PHI_TEMPORARY;
  double _1898;
  double _1898__PHI_TEMPORARY;
  double _1899;
  double _1899__PHI_TEMPORARY;
  double _1900;
  double _1900__PHI_TEMPORARY;
  double _1901;
  double _1901__PHI_TEMPORARY;
  uint64_t _1902;
  double _1903;
  double _1904;
  double _1905;
  double _1906;
  double _1907;
  double _1908;
  double _1909;
  double _1910;
  double _1911;
  double _1912;
  double _1913;
  double _1914;
  double _1915;
  double _1916;
  double _1917;
  double _1918;
  double _1919;
  void* _1920;
  double _1921;
  double _1922;
  double _1923;
  uint64_t _1924;
  uint64_t _1924__PHI_TEMPORARY;
  double _1925;
  double _1925__PHI_TEMPORARY;
  double _1926;
  double _1926__PHI_TEMPORARY;
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
  double _1936;
  double _1937;
  double _1938;
  double _1939;
  double _1940;
  double _1941;
  double _1942;
  double _1943;
  double _1944;
  double _1945;
  double _1946;
  double _1947;
  double _1948;
  double _1949;
  double _1950;
  double _1951;
  double _1952;
  double _1952__PHI_TEMPORARY;
  double _1953;
  double _1953__PHI_TEMPORARY;
  double _1954;
  double _1954__PHI_TEMPORARY;
  double _1955;
  double _1955__PHI_TEMPORARY;
  double _1956;
  double _1956__PHI_TEMPORARY;
  double _1957;
  double _1958;
  double _1959;
  double _1960;
  double _1960__PHI_TEMPORARY;
  double _1961;
  double _1961__PHI_TEMPORARY;
  double _1962;
  double _1963;
  double _1964;
  double _1965;
  double _1966;
  double _1967;
  double _1968;
  double _1969;
  double _1970;
  double _1971;
  double _1972;
  uint64_t _1973;
  uint64_t _1973__PHI_TEMPORARY;
  double _1974;
  double _1974__PHI_TEMPORARY;
  double _1975;
  double _1975__PHI_TEMPORARY;
  uint64_t _1976;
  double _1977;
  double _1978;
  double _1979;
  uint64_t _1980;
  uint64_t _1980__PHI_TEMPORARY;
  double _1981;
  double _1981__PHI_TEMPORARY;
  double _1982;
  double _1982__PHI_TEMPORARY;
  uint64_t _1983;
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
  double _1995;
  double _1996;
  double _1997;
  double _1998;
  void* _1999;
  double _2000;
  uint64_t _2001;
  uint64_t _2001__PHI_TEMPORARY;
  double _2002;
  double _2002__PHI_TEMPORARY;
  double _2003;
  double _2003__PHI_TEMPORARY;
  uint64_t _2004;
  double _2005;
  double _2006;
  double _2007;
  double _2008;
  double _2009;
  double _2010;
  double _2011;
  double _2012;
  double _2013;
  double _2014;
  double _2015;
  double _2016;
  double _2017;
  uint64_t _2018;
  uint64_t _2018__PHI_TEMPORARY;
  double _2019;
  double _2019__PHI_TEMPORARY;
  double _2020;
  double _2020__PHI_TEMPORARY;
  uint64_t _2021;
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
  double _2041;
  double _2042;
  double _2043;
  double _2044;
  double _2045;
  double _2046;
  double _2047;
  double _2048;
  double _2049;
  uint32_t _2050;
  uint32_t _2050__PHI_TEMPORARY;
  double _2051;
  double _2051__PHI_TEMPORARY;
  double _2052;
  double _2052__PHI_TEMPORARY;
  double _2053;
  double _2053__PHI_TEMPORARY;
  double _2054;
  double _2054__PHI_TEMPORARY;
  double _2055;
  double _2055__PHI_TEMPORARY;
  double _2056;
  double _2056__PHI_TEMPORARY;
  double _2057;
  double _2057__PHI_TEMPORARY;
  double _2058;
  double _2058__PHI_TEMPORARY;
  double _2059;
  double _2059__PHI_TEMPORARY;
  double _2060;
  double _2060__PHI_TEMPORARY;
  double _2061;
  double _2061__PHI_TEMPORARY;
  double _2062;
  double _2062__PHI_TEMPORARY;
  double _2063;
  double _2064;
  double _2065;
  double _2066;
  double _2067;
  double _2068;
  double _2069;
  double _2070;
  double _2071;
  double _2072;
  double _2073;
  double _2074;
  uint32_t _2075;
  double _2076;
  double _2077;
  double _2078;
  double _2079;
  double _2080;
  double _2081;
  double _2082;
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
  double _2096;
  double _2097;
  double _2098;
  double _2099;
  double _2099__PHI_TEMPORARY;
  double _2100;
  double _2100__PHI_TEMPORARY;
  double _2101;
  double _2101__PHI_TEMPORARY;
  double _2102;
  double _2102__PHI_TEMPORARY;
  double _2103;
  double _2103__PHI_TEMPORARY;
  double _2104;
  double _2105;
  double _2106;
  struct l_unnamed_1 _2107;
  double _2108;
  double _2109;
  double _2110;
  double _2111;
  double _2112;
  double _2112__PHI_TEMPORARY;
  double _2113;
  double _2113__PHI_TEMPORARY;
  uint32_t _2114;
  uint32_t _2114__PHI_TEMPORARY;
  double _2115;
  double _2115__PHI_TEMPORARY;
  double _2116;
  double _2116__PHI_TEMPORARY;
  double _2117;
  double _2117__PHI_TEMPORARY;
  double _2118;
  double _2118__PHI_TEMPORARY;
  double _2119;
  double _2119__PHI_TEMPORARY;
  double _2120;
  double _2120__PHI_TEMPORARY;
  double _2121;
  double _2121__PHI_TEMPORARY;
  uint32_t _2122;
  double _2123;
  double _2124;
  double _2125;
  double _2126;
  double _2127;
  double _2128;
  double _2129;
  double _2130;
  double _2131;
  double _2132;
  double _2133;
  double _2134;
  double _2135;
  double _2136;
  double _2137;
  double _2138;
  double _2139;
  double _2140;
  double _2141;
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
  double _2157__PHI_TEMPORARY;
  double _2158;
  double _2158__PHI_TEMPORARY;
  double _2159;
  double _2160;
  double _2160__PHI_TEMPORARY;

  if ((llvm_fcmp_oeq(_1735, 0))) {
    _2160__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _2161;
  } else {
    goto _2162;
  }

_2162:
  _1768 = _1738 * 2;
  _1769 =  /*tail*/ sqrt(_1768);
  _1770 =  /*tail*/ sqrt(_1768);
  _1771 = (_1769 * _1735) / _1737;
  _1772 = ((_1737 * _1735) * (llvm_select_f64((llvm_fcmp_ueq(_1768, 0)), 0, (1 / _1770)))) / (_1737 * _1737);
  _1773 = _1736 * _1736;
  _1774 = 1 - _1738;
  _1775 =  /*tail*/ exp2(_1774);
  _1776 =  /*tail*/ exp2(_1774);
  _1777 = _1773 * _1775;
  _1778 =  /*tail*/ fwddiffegamma(_1738, 1);
  _1779 = (_1778.field0);
  _1780 = _1777 / _1779;
  _1781 =  /*tail*/ pow(_1771, _1738);
  _1782 =  /*tail*/ pow(_1771, (_1738 + -1));
  _1783 =  /*tail*/ pow(_1771, _1738);
  _1784 = log(_1771);
  _1785 = _1781 * _1780;
  _1786 = ((((_1782 * _1738) * _1772) + (_1783 * _1784)) * _1780) + ((((((_1773 * -0.69314718055994529) * _1776) * _1779) - (((_1778.field1)) * _1777)) * _1781) / (_1779 * _1779));
  _1787 = ((&((uint8_t*)(&_1754))[((int64_t)128)]));
  _1788 = memset((&_1754), 0, 256);
  _1789 = ((&((uint8_t*)(&_1758))[((int64_t)128)]));
  _1790 = memset((&_1758), 0, 256);
  _1791 = ((&((uint8_t*)(&_1762))[((int64_t)128)]));
  _1792 = memset((&_1762), 0, 256);
  _1793 =  /*tail*/ llvm_OC_fabs_OC_f64(_1738);
  _1794 = llvm_select_f64((llvm_fcmp_olt(_1738, 0)), -1, 1);
  if ((llvm_fcmp_ugt(_1771, 0))) {
    goto _2163;
  } else {
    _2157__PHI_TEMPORARY = 0;   /* for PHI node */
    _2158__PHI_TEMPORARY = (*(double*)&FPConstant2);   /* for PHI node */
    goto _2164;
  }

_2163:
  if (((llvm_fcmp_ogt(_1793, 25)) | (llvm_fcmp_ogt(_1771, 35)))) {
    goto _2165;
  } else {
    goto _2166;
  }

_2165:
  _1795 = _1771 / _1793;
  _1796 = _1738 * _1738;
  _1797 = ((_1772 * _1793) - (_1771 * _1794)) / _1796;
  _1798 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1795, _1795, 1);
  _1799 =  /*tail*/ llvm_OC_sqrt_OC_f64(_1798);
  _1800 = llvm_select_f64((llvm_fcmp_ueq(_1798, 0)), 0, (((_1795 * 2) * _1797) / (_1799 * 2)));
  _1801 =  /*tail*/ log(_1795);
  _1802 = _1799 + 1;
  _1803 =  /*tail*/ log(_1802);
  _1804 = (_1799 + _1801) - _1803;
  _1805 = 1 / _1793;
  _1806 =  /*tail*/ llvm_OC_sqrt_OC_f64(_1805);
  _1807 = _1796 * 2;
  _1808 = _1806 * 1.2533141373155001;
  _1809 = _1804 * (-(_1793));
  _1810 =  /*tail*/ exp(_1809);
  _1811 =  /*tail*/ exp(_1809);
  _1812 = _1808 * _1810;
  _1813 =  /*tail*/ llvm_OC_sqrt_OC_f64(_1799);
  _1814 = _1812 / _1813;
  _1815 = llvm_select_f64((llvm_fcmp_ole(_1793, _1771)), _1771, _1793);
  _1816 = llvm_select_f64((llvm_fcmp_ole(_1793, _1771)), _1793, _1771);
  _1817 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1815, _1815, (_1816 * _1816));
  _1818 =  /*tail*/ fwddiffeUk_poly_Kn((1 / _1799), ((-(_1800)) / _1798), _1793, _1794, (_1796 / _1817), (((_1817 * _1768) - ((((llvm_select_f64((llvm_fcmp_ole(_1793, _1771)), _1772, _1794)) * _1815) + ((llvm_select_f64((llvm_fcmp_ole(_1793, _1771)), _1794, _1772)) * _1816)) * _1807)) / (_1817 * _1817)));
  _1819 = (_1818.field0);
  _1820 = _1814 * _1819;
  _1821 = (((((((_1811 * _1808) * ((_1804 * (-(_1794))) - (((_1800 + (_1797 / _1795)) - (_1800 / _1802)) * _1793))) + (_1810 * (llvm_select_f64((llvm_fcmp_ueq(_1805, 0)), 0, ((_1794 * -1.2533141373155001) / (_1806 * _1807)))))) * _1813) - (_1812 * (llvm_select_f64((llvm_fcmp_ueq(_1799, 0)), 0, (_1800 / (_1813 * 2)))))) * _1819) / _1799) + (((_1818.field1)) * _1814);
  _2157__PHI_TEMPORARY = _1821;   /* for PHI node */
  _2158__PHI_TEMPORARY = _1820;   /* for PHI node */
  goto _2164;

_2166:
  if ((llvm_fcmp_olt((((_1738 * _1738) / 36) + 24), _1771))) {
    goto _2167;
  } else {
    goto _2168;
  }

_2167:
  _1822 = _1771 * -0.5;
  _1823 =  /*tail*/ exp(_1822);
  _1824 =  /*tail*/ exp(_1822);
  _1825 = _1771 * 8;
  _1826 = 1 / _1825;
  _1827 = _1772 * 8;
  _1828 = _1793 * 4;
  _1829 = ((_1793 * 8) * _1794) * _1826;
  _1830 = 1 / (_1825 * _1825);
  _1831__PHI_TEMPORARY = 1;   /* for PHI node */
  _1832__PHI_TEMPORARY = 0;   /* for PHI node */
  _1833__PHI_TEMPORARY = 0;   /* for PHI node */
  _1834__PHI_TEMPORARY = 0;   /* for PHI node */
  _1835__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _2169;

  do {     /* Syntactic loop '' to make GCC happy */
_2169:
  _1831 = _1831__PHI_TEMPORARY;
  _1832 = _1832__PHI_TEMPORARY;
  _1833 = _1833__PHI_TEMPORARY;
  _1834 = _1834__PHI_TEMPORARY;
  _1835 = _1835__PHI_TEMPORARY;
  _1836 = llvm_add_u32(_1833, 1);
  _1837 = llvm_add_u32((_1836 << 1), -1);
  _1838 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1828, _1793, (-((((double)(uint32_t)(llvm_mul_u32(_1837, _1837)))))));
  _1839 = ((double)(uint32_t)_1836);
  _1840 = _1838 / _1839;
  _1841 = _1826 * _1840;
  _1842 = _1831 * _1841;
  _1843 = ((((_1829 * _1839) / (_1839 * _1839)) - ((_1827 * _1840) * _1830)) * _1831) + (_1841 * _1832);
  _1766 = _1843;
  _1767 = _1842;
  _1844 = _1835 + _1842;
  _1845 = _1843 + _1834;
  fixderivative_isconverged((&_1767), (&_1766), (&_1765), (&_1764));
  _1846 = _1765;
  if ((llvm_select_bool((llvm_fcmp_olt(_1846, 0)), 1, (_1836 == 20u)))) {
    goto _2170;
  } else {
    _1831__PHI_TEMPORARY = _1842;   /* for PHI node */
    _1832__PHI_TEMPORARY = _1843;   /* for PHI node */
    _1833__PHI_TEMPORARY = _1836;   /* for PHI node */
    _1834__PHI_TEMPORARY = _1845;   /* for PHI node */
    _1835__PHI_TEMPORARY = _1844;   /* for PHI node */
    goto _2169;
  }

  } while (1); /* end of syntactic loop '' */
_2170:
  _1847 = (_1772 * -0.5) * _1824;
  _1848 = _1771 * 2;
  _1849 = 3.1415926535897931 / _1848;
  _1850 =  /*tail*/ sqrt(_1849);
  _1851 =  /*tail*/ sqrt(_1849);
  _1852 = _1844 * _1850;
  _1853 = _1823 * _1852;
  _1854 = _1823 * _1853;
  _1855 = ((((((llvm_select_f64((llvm_fcmp_ueq(_1849, 0)), 0, ((_1772 * -6.2831853071795862) / (((_1771 * 4) * _1848) * _1851)))) * _1844) + (_1850 * _1845)) * _1823) + (_1852 * _1847)) * _1823) + (_1853 * _1847);
  _2157__PHI_TEMPORARY = _1855;   /* for PHI node */
  _2158__PHI_TEMPORARY = _1854;   /* for PHI node */
  goto _2164;

_2168:
  _1856 =  /*tail*/ llvm_OC_floor_OC_f64(_1793);
  if ((llvm_fcmp_ogt(_1771, 1.5))) {
    goto _2171;
  } else {
    goto _2172;
  }

_2171:
  if ((llvm_fcmp_olt(_1793, 2))) {
    goto _2173;
  } else {
    goto _2174;
  }

_2173:
  _1760 = 0;
  _1761 = 0;
  _1857 = ((&((uint8_t*)(&_1763))[((int64_t)128)]));
  _1858 = _1793 * (_1793 * 4);
  _1859 = (_1793 * 8) * _1794;
  _1860 = _1771 * 8;
  _1861 = _1772 * 8;
  _1862__PHI_TEMPORARY = 0;   /* for PHI node */
  _1863__PHI_TEMPORARY = 0;   /* for PHI node */
  _1864__PHI_TEMPORARY = 0;   /* for PHI node */
  _1865__PHI_TEMPORARY = 0;   /* for PHI node */
  _1866__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _2175;

  do {     /* Syntactic loop '' to make GCC happy */
_2175:
  _1862 = _1862__PHI_TEMPORARY;
  _1863 = _1863__PHI_TEMPORARY;
  _1864 = _1864__PHI_TEMPORARY;
  _1865 = _1865__PHI_TEMPORARY;
  _1866 = _1866__PHI_TEMPORARY;
  _1867 = llvm_add_u64(_1862, 1);
  _1868 = _1864 + _1866;
  _1869 = _1865 + _1863;
  _1870 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1862)])));
  _1871 = _1858 - _1870;
  _1872 = ((double)(uint32_t)(((uint32_t)_1867)));
  _1873 = _1860 * _1872;
  _1874 = _1871 / _1873;
  _1875 = _1866 * _1874;
  _1876 = ((((_1859 * _1873) - ((_1861 * _1872) * _1871)) * _1866) / (_1873 * _1873)) + (_1874 * _1865);
  *(double*)(((&((double*)(&_1762))[((int64_t)_1862)]))) = _1869;
  *(double*)(((&((double*)(&_1763))[((int64_t)_1862)]))) = _1868;
  *(double*)(((&((double*)_1791)[((int64_t)_1862)]))) = _1876;
  *(double*)(((&((double*)_1857)[((int64_t)_1862)]))) = _1875;
  if ((_1867 == UINT64_C(16))) {
    goto _2176;
  } else {
    _1862__PHI_TEMPORARY = _1867;   /* for PHI node */
    _1863__PHI_TEMPORARY = _1869;   /* for PHI node */
    _1864__PHI_TEMPORARY = _1868;   /* for PHI node */
    _1865__PHI_TEMPORARY = _1876;   /* for PHI node */
    _1866__PHI_TEMPORARY = _1875;   /* for PHI node */
    goto _2175;
  }

  } while (1); /* end of syntactic loop '' */
_2176:
  fixderivative_levin((&_1761), (&_1760), (&_1763), (&_1762));
  _1877 = _1771 * 2;
  _1878 = 3.1415926535897931 / _1877;
  _1879 =  /*tail*/ sqrt(_1878);
  _1880 =  /*tail*/ sqrt(_1878);
  _1881 = _1760;
  _1882 = _1761;
  _1883 = _1879 * _1882;
  _1884 = -(_1771);
  _1885 =  /*tail*/ exp(_1884);
  _1886 =  /*tail*/ exp(_1884);
  _1887 = _1883 * _1885;
  _1888 = ((((llvm_select_f64((llvm_fcmp_ueq(_1878, 0)), 0, ((_1772 * -6.2831853071795862) / (((_1771 * 4) * _1877) * _1880)))) * _1882) + (_1881 * _1879)) * _1885) - ((_1883 * _1772) * _1886);
  _2157__PHI_TEMPORARY = _1888;   /* for PHI node */
  _2158__PHI_TEMPORARY = _1887;   /* for PHI node */
  goto _2164;

_2174:
  _1889 = _1793 - _1856;
  _1756 = 0;
  _1757 = 0;
  _1890 = ((&((uint8_t*)(&_1759))[((int64_t)128)]));
  _1891 = _1889 * 4;
  _1892 = _1794 * 4;
  _1893 = _1889 * _1891;
  _1894 = (_1891 * _1794) + (_1892 * _1889);
  _1895 = _1771 * 8;
  _1896 = _1772 * 8;
  _1897__PHI_TEMPORARY = 0;   /* for PHI node */
  _1898__PHI_TEMPORARY = 0;   /* for PHI node */
  _1899__PHI_TEMPORARY = 0;   /* for PHI node */
  _1900__PHI_TEMPORARY = 0;   /* for PHI node */
  _1901__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _2177;

  do {     /* Syntactic loop '' to make GCC happy */
_2177:
  _1897 = _1897__PHI_TEMPORARY;
  _1898 = _1898__PHI_TEMPORARY;
  _1899 = _1899__PHI_TEMPORARY;
  _1900 = _1900__PHI_TEMPORARY;
  _1901 = _1901__PHI_TEMPORARY;
  _1902 = llvm_add_u64(_1897, 1);
  _1903 = _1899 + _1901;
  _1904 = _1900 + _1898;
  _1905 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1897)])));
  _1906 = _1893 - _1905;
  _1907 = ((double)(uint32_t)(((uint32_t)_1902)));
  _1908 = _1895 * _1907;
  _1909 = _1906 / _1908;
  _1910 = _1901 * _1909;
  _1911 = ((((_1908 * _1894) - ((_1896 * _1907) * _1906)) * _1901) / (_1908 * _1908)) + (_1909 * _1900);
  *(double*)(((&((double*)(&_1758))[((int64_t)_1897)]))) = _1904;
  *(double*)(((&((double*)(&_1759))[((int64_t)_1897)]))) = _1903;
  *(double*)(((&((double*)_1789)[((int64_t)_1897)]))) = _1911;
  *(double*)(((&((double*)_1890)[((int64_t)_1897)]))) = _1910;
  if ((_1902 == UINT64_C(16))) {
    goto _2178;
  } else {
    _1897__PHI_TEMPORARY = _1902;   /* for PHI node */
    _1898__PHI_TEMPORARY = _1904;   /* for PHI node */
    _1899__PHI_TEMPORARY = _1903;   /* for PHI node */
    _1900__PHI_TEMPORARY = _1911;   /* for PHI node */
    _1901__PHI_TEMPORARY = _1910;   /* for PHI node */
    goto _2177;
  }

  } while (1); /* end of syntactic loop '' */
_2178:
  fixderivative_levin((&_1757), (&_1756), (&_1759), (&_1758));
  _1912 = _1771 * 2;
  _1913 = 3.1415926535897931 / _1912;
  _1914 =  /*tail*/ sqrt(_1913);
  _1915 =  /*tail*/ sqrt(_1913);
  _1916 = ((_1771 * 4) * _1912) * _1915;
  _1917 = _1756;
  _1918 = _1757;
  _1919 = _1889 + 1;
  _1752 = 0;
  _1753 = 0;
  _1920 = ((&((uint8_t*)(&_1755))[((int64_t)128)]));
  _1921 = _1919 * 4;
  _1922 = _1919 * _1921;
  _1923 = (_1921 * _1794) + (_1919 * _1892);
  _1924__PHI_TEMPORARY = 0;   /* for PHI node */
  _1925__PHI_TEMPORARY = 0;   /* for PHI node */
  _1926__PHI_TEMPORARY = 0;   /* for PHI node */
  _1927__PHI_TEMPORARY = 0;   /* for PHI node */
  _1928__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _2179;

  do {     /* Syntactic loop '' to make GCC happy */
_2179:
  _1924 = _1924__PHI_TEMPORARY;
  _1925 = _1925__PHI_TEMPORARY;
  _1926 = _1926__PHI_TEMPORARY;
  _1927 = _1927__PHI_TEMPORARY;
  _1928 = _1928__PHI_TEMPORARY;
  _1929 = llvm_add_u64(_1924, 1);
  _1930 = _1926 + _1928;
  _1931 = _1927 + _1925;
  _1932 = *(double*)(((&(&__const_OC_besselkx_levin_OC_powk_levin)->array[((int64_t)_1924)])));
  _1933 = _1922 - _1932;
  _1934 = ((double)(uint32_t)(((uint32_t)_1929)));
  _1935 = _1895 * _1934;
  _1936 = _1933 / _1935;
  _1937 = _1928 * _1936;
  _1938 = ((((_1935 * _1923) - ((_1896 * _1934) * _1933)) * _1928) / (_1935 * _1935)) + (_1936 * _1927);
  *(double*)(((&((double*)(&_1754))[((int64_t)_1924)]))) = _1931;
  *(double*)(((&((double*)(&_1755))[((int64_t)_1924)]))) = _1930;
  *(double*)(((&((double*)_1787)[((int64_t)_1924)]))) = _1938;
  *(double*)(((&((double*)_1920)[((int64_t)_1924)]))) = _1937;
  if ((_1929 == UINT64_C(16))) {
    goto _2180;
  } else {
    _1924__PHI_TEMPORARY = _1929;   /* for PHI node */
    _1925__PHI_TEMPORARY = _1931;   /* for PHI node */
    _1926__PHI_TEMPORARY = _1930;   /* for PHI node */
    _1927__PHI_TEMPORARY = _1938;   /* for PHI node */
    _1928__PHI_TEMPORARY = _1937;   /* for PHI node */
    goto _2179;
  }

  } while (1); /* end of syntactic loop '' */
_2180:
  _1939 = llvm_select_f64((llvm_fcmp_ueq(_1913, 0)), 0, ((_1772 * -6.2831853071795862) / _1916));
  _1940 = _1914 * _1918;
  _1941 = (_1939 * _1918) + (_1917 * _1914);
  fixderivative_levin((&_1753), (&_1752), (&_1755), (&_1754));
  _1942 =  /*tail*/ sqrt(_1913);
  _1943 = 2 / _1771;
  _1944 = _1793 + 0.5;
  if ((llvm_fcmp_ogt(_1944, _1919))) {
    goto _2181;
  } else {
    _1960__PHI_TEMPORARY = _1941;   /* for PHI node */
    _1961__PHI_TEMPORARY = _1940;   /* for PHI node */
    goto _2182;
  }

_2181:
  _1945 = _1772 * 2;
  _1946 = _1753;
  _1947 = _1752;
  _1948 = _1942 * _1946;
  _1949 = (_1947 * _1942) + (_1946 * _1939);
  _1950 = _1943 * _1794;
  _1951 = 1 / (_1771 * _1771);
  _1952__PHI_TEMPORARY = _1949;   /* for PHI node */
  _1953__PHI_TEMPORARY = _1948;   /* for PHI node */
  _1954__PHI_TEMPORARY = _1941;   /* for PHI node */
  _1955__PHI_TEMPORARY = _1940;   /* for PHI node */
  _1956__PHI_TEMPORARY = _1919;   /* for PHI node */
  goto _2183;

  do {     /* Syntactic loop '' to make GCC happy */
_2183:
  _1952 = _1952__PHI_TEMPORARY;
  _1953 = _1953__PHI_TEMPORARY;
  _1954 = _1954__PHI_TEMPORARY;
  _1955 = _1955__PHI_TEMPORARY;
  _1956 = _1956__PHI_TEMPORARY;
  _1957 = _1943 * _1956;
  _1958 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1957, _1953, _1955);
  _1959 = _1956 + 1;
  if ((llvm_fcmp_olt(_1959, _1944))) {
    _1952__PHI_TEMPORARY = (((_1957 * _1952) + _1954) + ((_1950 - ((_1945 * _1956) * _1951)) * _1953));   /* for PHI node */
    _1953__PHI_TEMPORARY = _1958;   /* for PHI node */
    _1954__PHI_TEMPORARY = _1952;   /* for PHI node */
    _1955__PHI_TEMPORARY = _1953;   /* for PHI node */
    _1956__PHI_TEMPORARY = _1959;   /* for PHI node */
    goto _2183;
  } else {
    _1960__PHI_TEMPORARY = _1952;   /* for PHI node */
    _1961__PHI_TEMPORARY = _1953;   /* for PHI node */
    goto _2182;
  }

  } while (1); /* end of syntactic loop '' */
_2182:
  _1960 = _1960__PHI_TEMPORARY;
  _1961 = _1961__PHI_TEMPORARY;
  _1962 = -(_1771);
  _1963 =  /*tail*/ exp(_1962);
  _1964 =  /*tail*/ exp(_1962);
  _1965 = _1961 * _1963;
  _1966 = (_1963 * _1960) - ((_1961 * _1772) * _1964);
  _2157__PHI_TEMPORARY = _1966;   /* for PHI node */
  _2158__PHI_TEMPORARY = _1965;   /* for PHI node */
  goto _2164;

_2172:
  _1967 = round(_1793);
  _1968 =  /*tail*/ llvm_OC_fabs_OC_f64((_1793 - _1967));
  if ((llvm_fcmp_olt(_1968, 1.0000000000000001E-5))) {
    goto _2184;
  } else {
    goto _2185;
  }

_2184:
  _1969 = _1793 - (llvm_select_f64((llvm_fcmp_ogt((_1793 - _1856), 0.5)), (_1856 + -1), _1856));
  *((double*)&_1743) = 1;
  *(double*)(((&((uint8_t*)(&_1743))[((int64_t)8)]))) = 0.16666666666666666;
  *(double*)(((&((uint8_t*)(&_1743))[((int64_t)16)]))) = 0.0083333333333333332;
  *(double*)(((&((uint8_t*)(&_1743))[((int64_t)24)]))) = 1.9841269841269841E-4;
  *(double*)(((&((uint8_t*)(&_1743))[((int64_t)32)]))) = 2.7557319223985893E-6;
  _1970 =  /*tail*/ log(_1771);
  _1971 = _1969 * _1969;
  _1972 = (_1794 * 2) * _1969;
  _1973__PHI_TEMPORARY = 0;   /* for PHI node */
  _1974__PHI_TEMPORARY = 0;   /* for PHI node */
  _1975__PHI_TEMPORARY = 1.9711021825948702;   /* for PHI node */
  goto _2186;

  do {     /* Syntactic loop '' to make GCC happy */
_2186:
  _1973 = _1973__PHI_TEMPORARY;
  _1974 = _1974__PHI_TEMPORARY;
  _1975 = _1975__PHI_TEMPORARY;
  _1976 = llvm_add_u64(_1973, 1);
  _1977 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_spcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _1973)))])));
  _1978 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1971, _1975, _1977);
  _1979 = (_1975 * _1972) + (_1974 * _1971);
  if ((_1976 == UINT64_C(3))) {
    _1980__PHI_TEMPORARY = 0;   /* for PHI node */
    _1981__PHI_TEMPORARY = 0;   /* for PHI node */
    _1982__PHI_TEMPORARY = 0.042197734555544306;   /* for PHI node */
    goto _2187;
  } else {
    _1973__PHI_TEMPORARY = _1976;   /* for PHI node */
    _1974__PHI_TEMPORARY = _1979;   /* for PHI node */
    _1975__PHI_TEMPORARY = _1978;   /* for PHI node */
    goto _2186;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2187:
  _1980 = _1980__PHI_TEMPORARY;
  _1981 = _1981__PHI_TEMPORARY;
  _1982 = _1982__PHI_TEMPORARY;
  _1983 = llvm_add_u64(_1980, 1);
  _1984 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_g1coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(2, _1980)))])));
  _1985 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1971, _1982, _1984);
  _1986 = (_1982 * _1972) + (_1981 * _1971);
  if ((_1983 == UINT64_C(2))) {
    _1987__PHI_TEMPORARY = 0;   /* for PHI node */
    _1988__PHI_TEMPORARY = 0;   /* for PHI node */
    _1989__PHI_TEMPORARY = 0.16653861138229145;   /* for PHI node */
    goto _2188;
  } else {
    _1980__PHI_TEMPORARY = _1983;   /* for PHI node */
    _1981__PHI_TEMPORARY = _1986;   /* for PHI node */
    _1982__PHI_TEMPORARY = _1985;   /* for PHI node */
    goto _2187;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2188:
  _1987 = _1987__PHI_TEMPORARY;
  _1988 = _1988__PHI_TEMPORARY;
  _1989 = _1989__PHI_TEMPORARY;
  _1990 = llvm_add_u64(_1987, 1);
  _1991 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_g2coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(2, _1987)))])));
  _1992 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1971, _1989, _1991);
  _1993 = (_1989 * _1972) + (_1988 * _1971);
  if ((_1990 == UINT64_C(2))) {
    goto _2189;
  } else {
    _1987__PHI_TEMPORARY = _1990;   /* for PHI node */
    _1988__PHI_TEMPORARY = _1993;   /* for PHI node */
    _1989__PHI_TEMPORARY = _1992;   /* for PHI node */
    goto _2188;
  }

  } while (1); /* end of syntactic loop '' */
_2189:
  _1994 = 0.69314718055994529 - _1970;
  _1995 = (-(_1772)) / _1771;
  _1996 = _1969 * _1994;
  _1997 = (_1994 * _1794) + (_1995 * _1969);
  _1998 = _1996 * _1996;
  _1999 = ((&((uint8_t*)(&_1743))[((int64_t)-8)]));
  _2000 = (_1996 * 2) * _1997;
  _2001__PHI_TEMPORARY = 0;   /* for PHI node */
  _2002__PHI_TEMPORARY = 0;   /* for PHI node */
  _2003__PHI_TEMPORARY = 2.7557319223985893E-6;   /* for PHI node */
  goto _2190;

  do {     /* Syntactic loop '' to make GCC happy */
_2190:
  _2001 = _2001__PHI_TEMPORARY;
  _2002 = _2002__PHI_TEMPORARY;
  _2003 = _2003__PHI_TEMPORARY;
  _2004 = llvm_add_u64(_2001, 1);
  _2005 = *(double*)(((&((double*)_1999)[((int64_t)(llvm_sub_u64(4, _2001)))])));
  _2006 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1998, _2003, _2005);
  _2007 = (_2000 * _2003) + (_2002 * _1998);
  if ((_2004 == UINT64_C(4))) {
    goto _2191;
  } else {
    _2001__PHI_TEMPORARY = _2004;   /* for PHI node */
    _2002__PHI_TEMPORARY = _2007;   /* for PHI node */
    _2003__PHI_TEMPORARY = _2006;   /* for PHI node */
    goto _2190;
  }

  } while (1); /* end of syntactic loop '' */
_2191:
  _2008 = _1771 * 0.5;
  _2009 =  /*tail*/ cosh(_1996);
  _2010 = _1992 * _2006;
  _2011 = _2007 * _1992;
  _2012 = _2010 * _1995;
  _2013 = _2009 * _1986;
  _2014 =  /*tail*/ pow(_2008, _1969);
  _2015 =  /*tail*/ pow(_2008, (_1969 + -1));
  _2016 =  /*tail*/ pow(_2008, _1969);
  _2017 = log(_2008);
  _2018__PHI_TEMPORARY = 0;   /* for PHI node */
  _2019__PHI_TEMPORARY = 0;   /* for PHI node */
  _2020__PHI_TEMPORARY = -0.23263776388631713;   /* for PHI node */
  goto _2192;

  do {     /* Syntactic loop '' to make GCC happy */
_2192:
  _2018 = _2018__PHI_TEMPORARY;
  _2019 = _2019__PHI_TEMPORARY;
  _2020 = _2020__PHI_TEMPORARY;
  _2021 = llvm_add_u64(_2018, 1);
  _2022 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_besselk_temme_series_OC_pqkcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _2018)))])));
  _2023 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1969, _2020, _2022);
  _2024 = (_2020 * _1794) + (_2019 * _1969);
  if ((_2021 == UINT64_C(3))) {
    goto _2193;
  } else {
    _2018__PHI_TEMPORARY = _2021;   /* for PHI node */
    _2019__PHI_TEMPORARY = _2024;   /* for PHI node */
    _2020__PHI_TEMPORARY = _2023;   /* for PHI node */
    goto _2192;
  }

  } while (1); /* end of syntactic loop '' */
_2193:
  _2025 = (((_2006 * _1993) + _2011) * _1994) + _2012;
  _2026 = _1772 * 0.5;
  _2027 = _2026 * _1969;
  _2028 = _1994 * _2010;
  _2029 = -(_1969);
  _2030__PHI_TEMPORARY = 0;   /* for PHI node */
  _2031__PHI_TEMPORARY = 0;   /* for PHI node */
  _2032__PHI_TEMPORARY = -0.23263776388631713;   /* for PHI node */
  goto _2194;

  do {     /* Syntactic loop '' to make GCC happy */
_2194:
  _2030 = _2030__PHI_TEMPORARY;
  _2031 = _2031__PHI_TEMPORARY;
  _2032 = _2032__PHI_TEMPORARY;
  _2033 = llvm_add_u64(_2030, 1);
  _2034 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_besselk_temme_series_OC_pqkcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _2030)))])));
  _2035 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2029, _2032, _2034);
  _2036 = (_2031 * _2029) - (_2032 * _1794);
  if ((_2033 == UINT64_C(3))) {
    goto _2195;
  } else {
    _2030__PHI_TEMPORARY = _2033;   /* for PHI node */
    _2031__PHI_TEMPORARY = _2036;   /* for PHI node */
    _2032__PHI_TEMPORARY = _2035;   /* for PHI node */
    goto _2194;
  }

  } while (1); /* end of syntactic loop '' */
_2195:
  _2037 =  /*tail*/ sinh(_1996);
  _2038 = _2014 * 2;
  _2039 = _2008 * _2008;
  _2040 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_1985, _2009, _2028);
  _2041 = ((_2017 * _1794) * _2016) + (_2027 * _2015);
  _2042 = _1978 * _2040;
  _2043 = (((_2025 + _2013) + ((_1985 * _1997) * _2037)) * _1978) + (_2040 * _1979);
  _2044 = _2023 / _2038;
  _2045 = ((_2024 * _2038) - ((_2041 * 2) * _2023)) / (_2038 * _2038);
  _2046 = (_2014 * _2035) * 0.5;
  _2047 = ((_2035 * _2041) + (_2036 * _2014)) * 0.5;
  _2048 = (_2029 - _1969) * _1794;
  _2049 = (_2008 * _2026) * 2;
  _2050__PHI_TEMPORARY = 0;   /* for PHI node */
  _2051__PHI_TEMPORARY = 0;   /* for PHI node */
  _2052__PHI_TEMPORARY = 0;   /* for PHI node */
  _2053__PHI_TEMPORARY = 0;   /* for PHI node */
  _2054__PHI_TEMPORARY = 0;   /* for PHI node */
  _2055__PHI_TEMPORARY = 0;   /* for PHI node */
  _2056__PHI_TEMPORARY = 1;   /* for PHI node */
  _2057__PHI_TEMPORARY = _2047;   /* for PHI node */
  _2058__PHI_TEMPORARY = _2046;   /* for PHI node */
  _2059__PHI_TEMPORARY = _2045;   /* for PHI node */
  _2060__PHI_TEMPORARY = _2044;   /* for PHI node */
  _2061__PHI_TEMPORARY = _2043;   /* for PHI node */
  _2062__PHI_TEMPORARY = _2042;   /* for PHI node */
  goto _2196;

  do {     /* Syntactic loop '' to make GCC happy */
_2196:
  _2050 = _2050__PHI_TEMPORARY;
  _2051 = _2051__PHI_TEMPORARY;
  _2052 = _2052__PHI_TEMPORARY;
  _2053 = _2053__PHI_TEMPORARY;
  _2054 = _2054__PHI_TEMPORARY;
  _2055 = _2055__PHI_TEMPORARY;
  _2056 = _2056__PHI_TEMPORARY;
  _2057 = _2057__PHI_TEMPORARY;
  _2058 = _2058__PHI_TEMPORARY;
  _2059 = _2059__PHI_TEMPORARY;
  _2060 = _2060__PHI_TEMPORARY;
  _2061 = _2061__PHI_TEMPORARY;
  _2062 = _2062__PHI_TEMPORARY;
  _2063 = _2056 * _2062;
  _2064 = (_2062 * _2055) + (_2061 * _2056);
  _1744 = _2064;
  _1745 = _2063;
  _2065 = ((double)(uint32_t)_2050);
  _2066 =  /*tail*/ llvm_OC_fmuladd_OC_f64((-(_2065)), _2062, _2060);
  _2067 = _2056 * _2066;
  _2068 = (_2066 * _2055) + ((_2059 - (_2061 * _2065)) * _2056);
  _1746 = _2068;
  _1747 = _2067;
  _2069 = _2054 + _2063;
  _2070 = _2064 + _2053;
  _2071 = _2052 + _2067;
  _2072 = _2068 + _2051;
  fixderivative_isconverged((&_1745), (&_1744), (&_1749), (&_1748));
  fixderivative_isconverged_OC_1((&_1747), (&_1746), (&_1751), (&_1750));
  _2073 = _1749;
  _2074 = _1751;
  if ((llvm_select_bool((llvm_fcmp_olt(_2073, 0)), (llvm_fcmp_olt(_2074, 0)), 0))) {
    goto _2197;
  } else {
    goto _2198;
  }

_2198:
  _2075 = llvm_add_u32(_2050, 1);
  _2076 = ((double)(uint32_t)_2075);
  _2077 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2076, _2062, _2060);
  _2078 = _2058 + _2077;
  _2079 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2029, _1969, (((double)(uint32_t)(llvm_mul_u32(_2075, _2075)))));
  _2080 = _2078 / _2079;
  _2081 = ((((_2059 + _2057) + (_2061 * _2076)) * _2079) - (_2048 * _2078)) / (_2079 * _2079);
  _2082 = _2076 - _1969;
  _2083 = _2060 / _2082;
  _2084 = ((_2060 * _1794) + (_2059 * _2082)) / (_2082 * _2082);
  _2085 = _1969 + _2076;
  _2086 = _2058 / _2085;
  _2087 = ((_2057 * _2085) - (_2058 * _1794)) / (_2085 * _2085);
  _2088 = _2039 / _2076;
  _2089 = _2088 * _2056;
  _2090 = (((_2049 * _2076) * _2056) / (_2076 * _2076)) + (_2055 * _2088);
  if ((_2075 == 500u)) {
    goto _2197;
  } else {
    _2050__PHI_TEMPORARY = _2075;   /* for PHI node */
    _2051__PHI_TEMPORARY = _2072;   /* for PHI node */
    _2052__PHI_TEMPORARY = _2071;   /* for PHI node */
    _2053__PHI_TEMPORARY = _2070;   /* for PHI node */
    _2054__PHI_TEMPORARY = _2069;   /* for PHI node */
    _2055__PHI_TEMPORARY = _2090;   /* for PHI node */
    _2056__PHI_TEMPORARY = _2089;   /* for PHI node */
    _2057__PHI_TEMPORARY = _2087;   /* for PHI node */
    _2058__PHI_TEMPORARY = _2086;   /* for PHI node */
    _2059__PHI_TEMPORARY = _2084;   /* for PHI node */
    _2060__PHI_TEMPORARY = _2083;   /* for PHI node */
    _2061__PHI_TEMPORARY = _2081;   /* for PHI node */
    _2062__PHI_TEMPORARY = _2080;   /* for PHI node */
    goto _2196;
  }

  } while (1); /* end of syntactic loop '' */
_2197:
  _2091 = _1969 + 1;
  _2092 = 2 / _1771;
  _2093 = _1793 + 0.5;
  if ((llvm_fcmp_ogt(_2093, _2091))) {
    goto _2199;
  } else {
    _2157__PHI_TEMPORARY = _2070;   /* for PHI node */
    _2158__PHI_TEMPORARY = _2069;   /* for PHI node */
    goto _2164;
  }

_2199:
  _2094 = _1772 * 2;
  _2095 = ((_2072 * _2008) - (_2071 * _2026)) / _2039;
  _2096 = _2071 / _2008;
  _2097 = _2092 * _1794;
  _2098 = 1 / (_1771 * _1771);
  _2099__PHI_TEMPORARY = _2095;   /* for PHI node */
  _2100__PHI_TEMPORARY = _2096;   /* for PHI node */
  _2101__PHI_TEMPORARY = _2070;   /* for PHI node */
  _2102__PHI_TEMPORARY = _2069;   /* for PHI node */
  _2103__PHI_TEMPORARY = _2091;   /* for PHI node */
  goto _2200;

  do {     /* Syntactic loop '' to make GCC happy */
_2200:
  _2099 = _2099__PHI_TEMPORARY;
  _2100 = _2100__PHI_TEMPORARY;
  _2101 = _2101__PHI_TEMPORARY;
  _2102 = _2102__PHI_TEMPORARY;
  _2103 = _2103__PHI_TEMPORARY;
  _2104 = _2092 * _2103;
  _2105 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2104, _2100, _2102);
  _2106 = _2103 + 1;
  if ((llvm_fcmp_olt(_2106, _2093))) {
    _2099__PHI_TEMPORARY = (((_2104 * _2099) + _2101) + ((_2097 - ((_2094 * _2103) * _2098)) * _2100));   /* for PHI node */
    _2100__PHI_TEMPORARY = _2105;   /* for PHI node */
    _2101__PHI_TEMPORARY = _2099;   /* for PHI node */
    _2102__PHI_TEMPORARY = _2100;   /* for PHI node */
    _2103__PHI_TEMPORARY = _2106;   /* for PHI node */
    goto _2200;
  } else {
    _2157__PHI_TEMPORARY = _2099;   /* for PHI node */
    _2158__PHI_TEMPORARY = _2100;   /* for PHI node */
    goto _2164;
  }

  } while (1); /* end of syntactic loop '' */
_2185:
  _2107 =  /*tail*/ fwddiffegamma(_1793, _1794);
  _2108 =  /*tail*/ sinpi((0.5 - _1793));
  _2109 = _1771 * _1771;
  _2110 = (_1772 * 2) * _1771;
  _1742 = 1;
  _2111 = _2109 * _1794;
  _2112__PHI_TEMPORARY = 1;   /* for PHI node */
  _2113__PHI_TEMPORARY = 0;   /* for PHI node */
  _2114__PHI_TEMPORARY = 0;   /* for PHI node */
  _2115__PHI_TEMPORARY = 0;   /* for PHI node */
  _2116__PHI_TEMPORARY = 0;   /* for PHI node */
  _2117__PHI_TEMPORARY = 0;   /* for PHI node */
  _2118__PHI_TEMPORARY = 0;   /* for PHI node */
  _2119__PHI_TEMPORARY = 0;   /* for PHI node */
  _2120__PHI_TEMPORARY = 1;   /* for PHI node */
  _2121__PHI_TEMPORARY = 4;   /* for PHI node */
  goto _2201;

  do {     /* Syntactic loop '' to make GCC happy */
_2201:
  _2112 = _2112__PHI_TEMPORARY;
  _2113 = _2113__PHI_TEMPORARY;
  _2114 = _2114__PHI_TEMPORARY;
  _2115 = _2115__PHI_TEMPORARY;
  _2116 = _2116__PHI_TEMPORARY;
  _2117 = _2117__PHI_TEMPORARY;
  _2118 = _2118__PHI_TEMPORARY;
  _2119 = _2119__PHI_TEMPORARY;
  _2120 = _2120__PHI_TEMPORARY;
  _2121 = _2121__PHI_TEMPORARY;
  _2122 = llvm_add_u32(_2114, 1);
  _2123 = _2112 + _2116;
  _2124 = _2115 + _2113;
  _2125 = _2118 + _2120;
  _2126 = _2119 + _2117;
  _2127 = ((double)(uint32_t)_2122);
  _2128 = (_2127 - _1793) * _2121;
  _2129 = _2109 / _2128;
  _2130 = _2111 * _2121;
  _2131 = _2112 * _2129;
  _2132 = ((((_2128 * _2110) + _2130) * _2112) / (_2128 * _2128)) + (_2129 * _2113);
  _1739 = _2132;
  _1740 = _2131;
  fixderivative_isconverged((&_1740), (&_1739), (&_1742), (&_1741));
  _2133 = _1742;
  if ((llvm_fcmp_olt(_2133, 0))) {
    goto _2202;
  } else {
    goto _2203;
  }

_2203:
  _2134 = (_1793 + _2127) * _2121;
  _2135 = _2109 / _2134;
  _2136 = _2120 * _2135;
  _2137 = ((((_2134 * _2110) - _2130) * _2120) / (_2134 * _2134)) + (_2135 * _2119);
  _2138 = _2121 + 4;
  if ((_2122 == 49u)) {
    goto _2202;
  } else {
    _2112__PHI_TEMPORARY = _2131;   /* for PHI node */
    _2113__PHI_TEMPORARY = _2132;   /* for PHI node */
    _2114__PHI_TEMPORARY = _2122;   /* for PHI node */
    _2115__PHI_TEMPORARY = _2124;   /* for PHI node */
    _2116__PHI_TEMPORARY = _2123;   /* for PHI node */
    _2117__PHI_TEMPORARY = _2126;   /* for PHI node */
    _2118__PHI_TEMPORARY = _2125;   /* for PHI node */
    _2119__PHI_TEMPORARY = _2137;   /* for PHI node */
    _2120__PHI_TEMPORARY = _2136;   /* for PHI node */
    _2121__PHI_TEMPORARY = _2138;   /* for PHI node */
    goto _2201;
  }

  } while (1); /* end of syntactic loop '' */
_2202:
  _2139 =  /*tail*/ sinpi((-(_1793)));
  _2140 = (_2107.field1);
  _2141 = (_2107.field0);
  _2142 = _2141 * _2139;
  _2143 = _1793 * _2142;
  _2144 = 3.1415926535897931 / _2143;
  _2145 = _1771 * 0.5;
  _2146 =  /*tail*/ pow(_2145, _1793);
  _2147 =  /*tail*/ pow(_2145, (_1793 + -1));
  _2148 =  /*tail*/ pow(_2145, _1793);
  _2149 = log(_2145);
  _2150 = ((_2149 * _1794) * _2148) + (((_1772 * 0.5) * _1793) * _2147);
  _2151 = _2146 * _2146;
  _2152 = _2151 * _2144;
  _2153 = _2146 * 2;
  _2154 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2141, _2123, (_2125 * _2152));
  _2155 = _2154 / _2153;
  _2156 = ((((((_2123 * _2140) + (_2124 * _2141)) + (_2152 * _2126)) + ((((_2144 * _2153) * _2150) - (((_2151 * 3.1415926535897931) * ((((_2139 * _2140) - (((_1794 * 3.1415926535897962) * _2108) * _2141)) * _1793) + (_2142 * _1794))) / (_2143 * _2143))) * _2125)) * _2153) - ((_2150 * 2) * _2154)) / (_2153 * _2153);
  _2157__PHI_TEMPORARY = _2156;   /* for PHI node */
  _2158__PHI_TEMPORARY = _2155;   /* for PHI node */
  goto _2164;

_2164:
  _2157 = _2157__PHI_TEMPORARY;
  _2158 = _2158__PHI_TEMPORARY;
  _2159 = (_2158 * _1786) + (_2157 * _1785);
  _2160__PHI_TEMPORARY = _2159;   /* for PHI node */
  goto _2161;

_2161:
  _2160 = _2160__PHI_TEMPORARY;
  return _2160;
}


static struct l_unnamed_1 fwddiffeUk_poly_Kn(double _2204, double _2205, double _2206, double _2207, double _2208, double _2209) {
  __PREFIXALIGN__(16) struct l_array_6_double _2210 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_5_double _2211 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_11_double _2212 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _2213;
  void* _2214;
  void* _2215;
  void* _2216;
  void* _2217;
  void* _2218;
  void* _2219;
  void* _2220;
  void* _2221;
  void* _2222;
  __PREFIXALIGN__(16) struct l_array_11_double _2223 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint64_t _2224;
  uint64_t _2224__PHI_TEMPORARY;
  double _2225;
  double _2225__PHI_TEMPORARY;
  double _2226;
  double _2226__PHI_TEMPORARY;
  uint64_t _2227;
  double _2228;
  double _2229;
  double _2230;
  uint64_t _2231;
  uint64_t _2231__PHI_TEMPORARY;
  double _2232;
  double _2232__PHI_TEMPORARY;
  double _2233;
  double _2233__PHI_TEMPORARY;
  uint64_t _2234;
  double _2235;
  double _2236;
  double _2237;
  uint64_t _2238;
  uint64_t _2238__PHI_TEMPORARY;
  double _2239;
  double _2239__PHI_TEMPORARY;
  double _2240;
  double _2240__PHI_TEMPORARY;
  uint64_t _2241;
  double _2242;
  double _2243;
  double _2244;
  uint64_t _2245;
  uint64_t _2245__PHI_TEMPORARY;
  double _2246;
  double _2246__PHI_TEMPORARY;
  double _2247;
  double _2247__PHI_TEMPORARY;
  uint64_t _2248;
  double _2249;
  double _2250;
  double _2251;
  uint64_t _2252;
  uint64_t _2252__PHI_TEMPORARY;
  double _2253;
  double _2253__PHI_TEMPORARY;
  double _2254;
  double _2254__PHI_TEMPORARY;
  uint64_t _2255;
  double _2256;
  double _2257;
  double _2258;
  void* _2259;
  uint64_t _2260;
  uint64_t _2260__PHI_TEMPORARY;
  double _2261;
  double _2261__PHI_TEMPORARY;
  double _2262;
  double _2262__PHI_TEMPORARY;
  uint64_t _2263;
  double _2264;
  double _2265;
  double _2266;
  void* _2267;
  uint64_t _2268;
  uint64_t _2268__PHI_TEMPORARY;
  double _2269;
  double _2269__PHI_TEMPORARY;
  double _2270;
  double _2270__PHI_TEMPORARY;
  uint64_t _2271;
  double _2272;
  double _2273;
  double _2274;
  uint64_t _2275;
  uint64_t _2275__PHI_TEMPORARY;
  double _2276;
  double _2276__PHI_TEMPORARY;
  double _2277;
  double _2277__PHI_TEMPORARY;
  uint64_t _2278;
  double _2279;
  double _2280;
  double _2281;
  uint64_t _2282;
  uint64_t _2282__PHI_TEMPORARY;
  double _2283;
  double _2283__PHI_TEMPORARY;
  double _2284;
  double _2284__PHI_TEMPORARY;
  uint64_t _2285;
  double _2286;
  double _2287;
  double _2288;
  double _2289;
  double _2290;
  double _2291;
  void* _2292;
  void* _2293;
  double _2294;
  uint64_t _2295;
  uint64_t _2295__PHI_TEMPORARY;
  double _2296;
  double _2296__PHI_TEMPORARY;
  double _2297;
  double _2297__PHI_TEMPORARY;
  uint64_t _2298;
  uint64_t _2299;
  double _2300;
  double _2301;
  double _2302;
  double _2303;
  struct l_unnamed_1 _2304;
  struct l_unnamed_1 _2305;

  _2213 = ((&((uint8_t*)(&_2212))[((int64_t)8)]));
  _2214 = ((&((uint8_t*)(&_2212))[((int64_t)16)]));
  _2215 = ((&((uint8_t*)(&_2212))[((int64_t)24)]));
  _2216 = ((&((uint8_t*)(&_2212))[((int64_t)32)]));
  _2217 = ((&((uint8_t*)(&_2212))[((int64_t)40)]));
  _2218 = ((&((uint8_t*)(&_2212))[((int64_t)48)]));
  _2219 = ((&((uint8_t*)(&_2212))[((int64_t)56)]));
  _2220 = ((&((uint8_t*)(&_2212))[((int64_t)64)]));
  _2221 = ((&((uint8_t*)(&_2212))[((int64_t)72)]));
  _2222 = ((&((uint8_t*)(&_2212))[((int64_t)80)]));
  *((double*)&_2210) = 0.22710800170898438;
  *(double*)(((&((uint8_t*)(&_2210))[((int64_t)8)]))) = -7.3687943594796321;
  *(double*)(((&((uint8_t*)(&_2210))[((int64_t)16)]))) = 42.534998745388457;
  *(double*)(((&((uint8_t*)(&_2210))[((int64_t)24)]))) = -91.81824154324002;
  *(double*)(((&((uint8_t*)(&_2210))[((int64_t)32)]))) = 84.636217674600729;
  *(double*)(((&((uint8_t*)(&_2210))[((int64_t)40)]))) = -28.212072558200244;
  *((double*)&_2211) = 0.112152099609375;
  *(double*)(((&((uint8_t*)(&_2211))[((int64_t)8)]))) = -2.3640869140624998;
  *(double*)(((&((uint8_t*)(&_2211))[((int64_t)16)]))) = 8.78912353515625;
  *(double*)(((&((uint8_t*)(&_2211))[((int64_t)24)]))) = -11.207002616222994;
  *(double*)(((&((uint8_t*)(&_2211))[((int64_t)32)]))) = 4.6695844234262474;
  _2224__PHI_TEMPORARY = 0;   /* for PHI node */
  _2225__PHI_TEMPORARY = 0;   /* for PHI node */
  _2226__PHI_TEMPORARY = 3284469.8530720379;   /* for PHI node */
  goto _2306;

  do {     /* Syntactic loop '' to make GCC happy */
_2306:
  _2224 = _2224__PHI_TEMPORARY;
  _2225 = _2225__PHI_TEMPORARY;
  _2226 = _2226__PHI_TEMPORARY;
  _2227 = llvm_add_u64(_2224, 1);
  _2228 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u10coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(10, _2224)))])));
  _2229 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2208, _2226, _2228);
  _2230 = (_2226 * _2209) + (_2225 * _2208);
  if ((_2227 == UINT64_C(10))) {
    _2231__PHI_TEMPORARY = 0;   /* for PHI node */
    _2232__PHI_TEMPORARY = 0;   /* for PHI node */
    _2233__PHI_TEMPORARY = -242919.18790055133;   /* for PHI node */
    goto _2307;
  } else {
    _2224__PHI_TEMPORARY = _2227;   /* for PHI node */
    _2225__PHI_TEMPORARY = _2230;   /* for PHI node */
    _2226__PHI_TEMPORARY = _2229;   /* for PHI node */
    goto _2306;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2307:
  _2231 = _2231__PHI_TEMPORARY;
  _2232 = _2232__PHI_TEMPORARY;
  _2233 = _2233__PHI_TEMPORARY;
  _2234 = llvm_add_u64(_2231, 1);
  _2235 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u9coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(9, _2231)))])));
  _2236 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2208, _2233, _2235);
  _2237 = (_2233 * _2209) + (_2232 * _2208);
  if ((_2234 == UINT64_C(9))) {
    _2238__PHI_TEMPORARY = 0;   /* for PHI node */
    _2239__PHI_TEMPORARY = 0;   /* for PHI node */
    _2240__PHI_TEMPORARY = 20204.291330966149;   /* for PHI node */
    goto _2308;
  } else {
    _2231__PHI_TEMPORARY = _2234;   /* for PHI node */
    _2232__PHI_TEMPORARY = _2237;   /* for PHI node */
    _2233__PHI_TEMPORARY = _2236;   /* for PHI node */
    goto _2307;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2308:
  _2238 = _2238__PHI_TEMPORARY;
  _2239 = _2239__PHI_TEMPORARY;
  _2240 = _2240__PHI_TEMPORARY;
  _2241 = llvm_add_u64(_2238, 1);
  _2242 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u8coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(8, _2238)))])));
  _2243 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2208, _2240, _2242);
  _2244 = (_2240 * _2209) + (_2239 * _2208);
  if ((_2241 == UINT64_C(8))) {
    _2245__PHI_TEMPORARY = 0;   /* for PHI node */
    _2246__PHI_TEMPORARY = 0;   /* for PHI node */
    _2247__PHI_TEMPORARY = -1919.4576623184071;   /* for PHI node */
    goto _2309;
  } else {
    _2238__PHI_TEMPORARY = _2241;   /* for PHI node */
    _2239__PHI_TEMPORARY = _2244;   /* for PHI node */
    _2240__PHI_TEMPORARY = _2243;   /* for PHI node */
    goto _2308;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2309:
  _2245 = _2245__PHI_TEMPORARY;
  _2246 = _2246__PHI_TEMPORARY;
  _2247 = _2247__PHI_TEMPORARY;
  _2248 = llvm_add_u64(_2245, 1);
  _2249 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u7coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(7, _2245)))])));
  _2250 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2208, _2247, _2249);
  _2251 = (_2247 * _2209) + (_2246 * _2208);
  if ((_2248 == UINT64_C(7))) {
    _2252__PHI_TEMPORARY = 0;   /* for PHI node */
    _2253__PHI_TEMPORARY = 0;   /* for PHI node */
    _2254__PHI_TEMPORARY = 212.57013003921713;   /* for PHI node */
    goto _2310;
  } else {
    _2245__PHI_TEMPORARY = _2248;   /* for PHI node */
    _2246__PHI_TEMPORARY = _2251;   /* for PHI node */
    _2247__PHI_TEMPORARY = _2250;   /* for PHI node */
    goto _2309;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2310:
  _2252 = _2252__PHI_TEMPORARY;
  _2253 = _2253__PHI_TEMPORARY;
  _2254 = _2254__PHI_TEMPORARY;
  _2255 = llvm_add_u64(_2252, 1);
  _2256 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u6coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(6, _2252)))])));
  _2257 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2208, _2254, _2256);
  _2258 = (_2254 * _2209) + (_2253 * _2208);
  if ((_2255 == UINT64_C(6))) {
    goto _2311;
  } else {
    _2252__PHI_TEMPORARY = _2255;   /* for PHI node */
    _2253__PHI_TEMPORARY = _2258;   /* for PHI node */
    _2254__PHI_TEMPORARY = _2257;   /* for PHI node */
    goto _2310;
  }

  } while (1); /* end of syntactic loop '' */
_2311:
  _2259 = ((&((uint8_t*)(&_2210))[((int64_t)-8)]));
  _2260__PHI_TEMPORARY = 0;   /* for PHI node */
  _2261__PHI_TEMPORARY = 0;   /* for PHI node */
  _2262__PHI_TEMPORARY = -28.212072558200244;   /* for PHI node */
  goto _2312;

  do {     /* Syntactic loop '' to make GCC happy */
_2312:
  _2260 = _2260__PHI_TEMPORARY;
  _2261 = _2261__PHI_TEMPORARY;
  _2262 = _2262__PHI_TEMPORARY;
  _2263 = llvm_add_u64(_2260, 1);
  _2264 = *(double*)(((&((double*)_2259)[((int64_t)(llvm_sub_u64(5, _2260)))])));
  _2265 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2208, _2262, _2264);
  _2266 = (_2262 * _2209) + (_2261 * _2208);
  if ((_2263 == UINT64_C(5))) {
    goto _2313;
  } else {
    _2260__PHI_TEMPORARY = _2263;   /* for PHI node */
    _2261__PHI_TEMPORARY = _2266;   /* for PHI node */
    _2262__PHI_TEMPORARY = _2265;   /* for PHI node */
    goto _2312;
  }

  } while (1); /* end of syntactic loop '' */
_2313:
  _2267 = ((&((uint8_t*)(&_2211))[((int64_t)-8)]));
  _2268__PHI_TEMPORARY = 0;   /* for PHI node */
  _2269__PHI_TEMPORARY = 0;   /* for PHI node */
  _2270__PHI_TEMPORARY = 4.6695844234262474;   /* for PHI node */
  goto _2314;

  do {     /* Syntactic loop '' to make GCC happy */
_2314:
  _2268 = _2268__PHI_TEMPORARY;
  _2269 = _2269__PHI_TEMPORARY;
  _2270 = _2270__PHI_TEMPORARY;
  _2271 = llvm_add_u64(_2268, 1);
  _2272 = *(double*)(((&((double*)_2267)[((int64_t)(llvm_sub_u64(4, _2268)))])));
  _2273 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2208, _2270, _2272);
  _2274 = (_2270 * _2209) + (_2269 * _2208);
  if ((_2271 == UINT64_C(4))) {
    _2275__PHI_TEMPORARY = 0;   /* for PHI node */
    _2276__PHI_TEMPORARY = 0;   /* for PHI node */
    _2277__PHI_TEMPORARY = -1.0258125964506173;   /* for PHI node */
    goto _2315;
  } else {
    _2268__PHI_TEMPORARY = _2271;   /* for PHI node */
    _2269__PHI_TEMPORARY = _2274;   /* for PHI node */
    _2270__PHI_TEMPORARY = _2273;   /* for PHI node */
    goto _2314;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2315:
  _2275 = _2275__PHI_TEMPORARY;
  _2276 = _2276__PHI_TEMPORARY;
  _2277 = _2277__PHI_TEMPORARY;
  _2278 = llvm_add_u64(_2275, 1);
  _2279 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u3coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _2275)))])));
  _2280 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2208, _2277, _2279);
  _2281 = (_2277 * _2209) + (_2276 * _2208);
  if ((_2278 == UINT64_C(3))) {
    _2282__PHI_TEMPORARY = 0;   /* for PHI node */
    _2283__PHI_TEMPORARY = 0;   /* for PHI node */
    _2284__PHI_TEMPORARY = 0.3342013888888889;   /* for PHI node */
    goto _2316;
  } else {
    _2275__PHI_TEMPORARY = _2278;   /* for PHI node */
    _2276__PHI_TEMPORARY = _2281;   /* for PHI node */
    _2277__PHI_TEMPORARY = _2280;   /* for PHI node */
    goto _2315;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2316:
  _2282 = _2282__PHI_TEMPORARY;
  _2283 = _2283__PHI_TEMPORARY;
  _2284 = _2284__PHI_TEMPORARY;
  _2285 = llvm_add_u64(_2282, 1);
  _2286 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u2coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(2, _2282)))])));
  _2287 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2208, _2284, _2286);
  _2288 = (_2284 * _2209) + (_2283 * _2208);
  if ((_2285 == UINT64_C(2))) {
    goto _2317;
  } else {
    _2282__PHI_TEMPORARY = _2285;   /* for PHI node */
    _2283__PHI_TEMPORARY = _2288;   /* for PHI node */
    _2284__PHI_TEMPORARY = _2287;   /* for PHI node */
    goto _2316;
  }

  } while (1); /* end of syntactic loop '' */
_2317:
  _2289 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2208, -0.20833333333333334, 0.125);
  *((double*)&_2212) = 0;
  *((double*)&_2223) = 1;
  *(double*)_2213 = (_2209 * -0.20833333333333334);
  *(double*)(((&((uint8_t*)(&_2223))[((int64_t)8)]))) = _2289;
  *(double*)_2214 = _2288;
  *(double*)(((&((uint8_t*)(&_2223))[((int64_t)16)]))) = _2287;
  *(double*)_2215 = _2281;
  *(double*)(((&((uint8_t*)(&_2223))[((int64_t)24)]))) = _2280;
  *(double*)_2216 = _2274;
  *(double*)(((&((uint8_t*)(&_2223))[((int64_t)32)]))) = _2273;
  *(double*)_2217 = _2266;
  *(double*)(((&((uint8_t*)(&_2223))[((int64_t)40)]))) = _2265;
  *(double*)_2218 = _2258;
  *(double*)(((&((uint8_t*)(&_2223))[((int64_t)48)]))) = _2257;
  *(double*)_2219 = _2251;
  *(double*)(((&((uint8_t*)(&_2223))[((int64_t)56)]))) = _2250;
  *(double*)_2220 = _2244;
  *(double*)(((&((uint8_t*)(&_2223))[((int64_t)64)]))) = _2243;
  *(double*)_2221 = _2237;
  *(double*)(((&((uint8_t*)(&_2223))[((int64_t)72)]))) = _2236;
  *(double*)_2222 = _2230;
  *(double*)(((&((uint8_t*)(&_2223))[((int64_t)80)]))) = _2229;
  _2290 = (-(_2204)) / _2206;
  _2291 = (_2207 * _2204) - (_2206 * _2205);
  _2292 = ((&((uint8_t*)(&_2212))[((int64_t)-8)]));
  _2293 = ((&((uint8_t*)(&_2223))[((int64_t)-8)]));
  _2294 = 1 / (_2206 * _2206);
  _2295__PHI_TEMPORARY = 0;   /* for PHI node */
  _2296__PHI_TEMPORARY = _2230;   /* for PHI node */
  _2297__PHI_TEMPORARY = _2229;   /* for PHI node */
  goto _2318;

  do {     /* Syntactic loop '' to make GCC happy */
_2318:
  _2295 = _2295__PHI_TEMPORARY;
  _2296 = _2296__PHI_TEMPORARY;
  _2297 = _2297__PHI_TEMPORARY;
  _2298 = llvm_add_u64(_2295, 1);
  _2299 = llvm_sub_u64(10, _2295);
  _2300 = *(double*)(((&((double*)_2292)[((int64_t)_2299)])));
  _2301 = *(double*)(((&((double*)_2293)[((int64_t)_2299)])));
  _2302 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2290, _2297, _2301);
  _2303 = (_2300 + (_2296 * _2290)) + ((_2291 * _2297) * _2294);
  if ((_2298 == UINT64_C(10))) {
    goto _2319;
  } else {
    _2295__PHI_TEMPORARY = _2298;   /* for PHI node */
    _2296__PHI_TEMPORARY = _2303;   /* for PHI node */
    _2297__PHI_TEMPORARY = _2302;   /* for PHI node */
    goto _2318;
  }

  } while (1); /* end of syntactic loop '' */
_2319:
  _2304 = llvm_ctor_unnamed_1(0, 0);
  _2304.field0 = _2302;
  _2305 = _2304;
  _2305.field1 = _2303;
  return _2305;
}


static void fixderivative_isconverged(void* _2320, void* _2321, void* _2322, void* _2323) {
   /*tail*/ disconverged(_2320, _2321, _2322, /*UNDEF*/((void*)/*NULL*/0));
}


static void fixderivative_levin(void* _2324, void* _2325, void* _2326, void* _2327) {
   /*tail*/ derivative_levin(_2324, _2325, _2326, _2327);
}


static void fixderivative_isconverged_OC_1(void* _2328, void* _2329, void* _2330, void* _2331) {
   /*tail*/ disconverged(_2328, _2329, _2330, /*UNDEF*/((void*)/*NULL*/0));
}


static struct l_unnamed_1 fwddiffegamma(double _2332, double _2333) {
  double _2334;
  double _2335;
  double _2336;
  double _2337;
  double _2338;
  double _2339;
  double _2340;
  double _2340__PHI_TEMPORARY;
  double _2341;
  double _2341__PHI_TEMPORARY;
  double _2342;
  double _2342__PHI_TEMPORARY;
  double _2343;
  double _2343__PHI_TEMPORARY;
  double _2344;
  double _2345;
  double _2346;
  uint64_t _2347;
  uint64_t _2347__PHI_TEMPORARY;
  double _2348;
  double _2348__PHI_TEMPORARY;
  double _2349;
  double _2349__PHI_TEMPORARY;
  uint64_t _2350;
  double _2351;
  double _2352;
  double _2353;
  double _2354;
  double _2355;
  double _2356;
  double _2357;
  double _2358;
  double _2359;
  double _2360;
  double _2361;
  double _2362;
  double _2363;
  double _2364;
  double _2365;
  double _2366;
  double _2367;
  double _2368;
  double _2369;
  double _2370;
  double _2370__PHI_TEMPORARY;
  double _2371;
  double _2371__PHI_TEMPORARY;
  double _2372;
  double _2372__PHI_TEMPORARY;
  double _2373;
  double _2373__PHI_TEMPORARY;
  double _2374;
  double _2374__PHI_TEMPORARY;
  double _2375;
  double _2375__PHI_TEMPORARY;
  double _2376;
  double _2377;
  double _2378;
  double _2379;
  double _2379__PHI_TEMPORARY;
  double _2380;
  double _2380__PHI_TEMPORARY;
  double _2381;
  double _2381__PHI_TEMPORARY;
  double _2382;
  double _2383;
  double _2384;
  double _2385;
  double _2385__PHI_TEMPORARY;
  double _2386;
  double _2386__PHI_TEMPORARY;
  double _2387;
  double _2387__PHI_TEMPORARY;
  double _2388;
  uint64_t _2389;
  uint64_t _2389__PHI_TEMPORARY;
  double _2390;
  double _2390__PHI_TEMPORARY;
  double _2391;
  double _2391__PHI_TEMPORARY;
  uint64_t _2392;
  double _2393;
  double _2394;
  double _2395;
  uint64_t _2396;
  uint64_t _2396__PHI_TEMPORARY;
  double _2397;
  double _2397__PHI_TEMPORARY;
  double _2398;
  double _2398__PHI_TEMPORARY;
  uint64_t _2399;
  double _2400;
  double _2401;
  double _2402;
  double _2403;
  double _2404;
  double _2405;
  double _2406;
  double _2407;
  double _2408;
  double _2409;
  double _2410;
  double _2411;
  double _2411__PHI_TEMPORARY;
  double _2412;
  double _2412__PHI_TEMPORARY;
  struct l_unnamed_1 _2413;
  struct l_unnamed_1 _2414;

  if ((llvm_fcmp_olt(_2332, 0))) {
    goto _2415;
  } else {
    _2340__PHI_TEMPORARY = 0;   /* for PHI node */
    _2342__PHI_TEMPORARY = _2333;   /* for PHI node */
    _2343__PHI_TEMPORARY = _2332;   /* for PHI node */
    goto _2416;
  }

_2415:
  _2334 =  /*tail*/ sinpi(_2332);
  _2335 =  /*tail*/ sinpi((_2332 + 0.5));
  if ((llvm_fcmp_oeq(_2334, 0))) {
    _2411__PHI_TEMPORARY = 0;   /* for PHI node */
    _2412__PHI_TEMPORARY = (*(double*)&FPConstant2);   /* for PHI node */
    goto _2417;
  } else {
    goto _2418;
  }

_2418:
  _2336 = -(_2332);
  _2337 = -(_2333);
  _2338 = _2334 * _2336;
  _2339 = (_2334 * _2337) - (((_2332 * 3.1415926535897962) * _2333) * _2335);
  _2340__PHI_TEMPORARY = _2339;   /* for PHI node */
  _2341__PHI_TEMPORARY = _2338;   /* for PHI node */
  _2342__PHI_TEMPORARY = _2337;   /* for PHI node */
  _2343__PHI_TEMPORARY = _2336;   /* for PHI node */
  goto _2416;

_2416:
  _2340 = _2340__PHI_TEMPORARY;
  _2341 = _2341__PHI_TEMPORARY;
  _2342 = _2342__PHI_TEMPORARY;
  _2343 = _2343__PHI_TEMPORARY;
  _2344 =  /*tail*/ llvm_OC_fabs_OC_f64(_2343);
  if ((llvm_fcmp_ueq(_2344, (*(double*)&FPConstant1)))) {
    _2411__PHI_TEMPORARY = _2342;   /* for PHI node */
    _2412__PHI_TEMPORARY = _2343;   /* for PHI node */
    goto _2417;
  } else {
    goto _2419;
  }

_2419:
  if ((llvm_fcmp_ogt(_2343, 11.5))) {
    goto _2420;
  } else {
    goto _2421;
  }

_2421:
  if ((llvm_fcmp_ult(_2343, 3))) {
    _2370__PHI_TEMPORARY = 0;   /* for PHI node */
    _2371__PHI_TEMPORARY = 1;   /* for PHI node */
    _2372__PHI_TEMPORARY = _2343;   /* for PHI node */
    goto _2422;
  } else {
    _2373__PHI_TEMPORARY = _2343;   /* for PHI node */
    _2374__PHI_TEMPORARY = 0;   /* for PHI node */
    _2375__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2423;
  }

_2420:
  _2345 = 1 / _2343;
  _2346 = 1 / (_2343 * _2343);
  _2347__PHI_TEMPORARY = 0;   /* for PHI node */
  _2348__PHI_TEMPORARY = 0;   /* for PHI node */
  _2349__PHI_TEMPORARY = 7.1473913781436109E-4;   /* for PHI node */
  goto _2424;

  do {     /* Syntactic loop '' to make GCC happy */
_2424:
  _2347 = _2347__PHI_TEMPORARY;
  _2348 = _2348__PHI_TEMPORARY;
  _2349 = _2349__PHI_TEMPORARY;
  _2350 = llvm_add_u64(_2347, 1);
  _2351 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_gamma_OC_coefs))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(9, _2347)))])));
  _2352 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2345, _2349, _2351);
  _2353 = (_2348 * _2345) - ((_2342 * _2349) * _2346);
  if ((_2350 == UINT64_C(9))) {
    goto _2425;
  } else {
    _2347__PHI_TEMPORARY = _2350;   /* for PHI node */
    _2348__PHI_TEMPORARY = _2353;   /* for PHI node */
    _2349__PHI_TEMPORARY = _2352;   /* for PHI node */
    goto _2424;
  }

  } while (1); /* end of syntactic loop '' */
_2425:
  _2354 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2343, 0.5, -0.25);
  _2355 =  /*tail*/ pow(_2343, _2354);
  _2356 =  /*tail*/ pow(_2343, (_2354 + -1));
  _2357 =  /*tail*/ pow(_2343, _2354);
  _2358 = log(_2343);
  _2359 = ((_2356 * _2354) + ((_2358 * 0.5) * _2357)) * _2342;
  _2360 = _2355 * 2.5066282746310002;
  _2361 =  /*tail*/ exp(_2343);
  _2362 =  /*tail*/ exp(_2343);
  _2363 = _2355 / _2361;
  _2364 = _2360 * _2363;
  _2365 = _2352 * _2364;
  _2366 = ((((((_2359 * _2361) - ((_2355 * _2342) * _2362)) * _2360) / (_2361 * _2361)) + ((_2363 * 2.5066282746310002) * _2359)) * _2352) + (_2364 * _2353);
  _2367 = _2341 * _2365;
  _2368 = llvm_select_f64((llvm_fcmp_olt(_2332, 0)), ((((_2366 * _2341) + (_2365 * _2340)) * -3.1415926535897931) / (_2367 * _2367)), _2366);
  _2369 = llvm_select_f64((llvm_fcmp_olt(_2332, 0)), (3.1415926535897931 / _2367), _2365);
  _2411__PHI_TEMPORARY = _2368;   /* for PHI node */
  _2412__PHI_TEMPORARY = _2369;   /* for PHI node */
  goto _2417;

_2422:
  _2370 = _2370__PHI_TEMPORARY;
  _2371 = _2371__PHI_TEMPORARY;
  _2372 = _2372__PHI_TEMPORARY;
  if ((llvm_fcmp_olt(_2372, 2))) {
    _2379__PHI_TEMPORARY = _2372;   /* for PHI node */
    _2380__PHI_TEMPORARY = _2370;   /* for PHI node */
    _2381__PHI_TEMPORARY = _2371;   /* for PHI node */
    goto _2426;
  } else {
    _2385__PHI_TEMPORARY = _2370;   /* for PHI node */
    _2386__PHI_TEMPORARY = _2371;   /* for PHI node */
    _2387__PHI_TEMPORARY = _2372;   /* for PHI node */
    goto _2427;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2423:
  _2373 = _2373__PHI_TEMPORARY;
  _2374 = _2374__PHI_TEMPORARY;
  _2375 = _2375__PHI_TEMPORARY;
  _2376 = _2373 + -1;
  _2377 = _2376 * _2375;
  _2378 = (_2375 * _2342) + (_2374 * _2376);
  if ((llvm_fcmp_ult(_2376, 3))) {
    _2370__PHI_TEMPORARY = _2378;   /* for PHI node */
    _2371__PHI_TEMPORARY = _2377;   /* for PHI node */
    _2372__PHI_TEMPORARY = _2376;   /* for PHI node */
    goto _2422;
  } else {
    _2373__PHI_TEMPORARY = _2376;   /* for PHI node */
    _2374__PHI_TEMPORARY = _2378;   /* for PHI node */
    _2375__PHI_TEMPORARY = _2377;   /* for PHI node */
    goto _2423;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2426:
  _2379 = _2379__PHI_TEMPORARY;
  _2380 = _2380__PHI_TEMPORARY;
  _2381 = _2381__PHI_TEMPORARY;
  _2382 = _2381 / _2379;
  _2383 = ((_2380 * _2379) - (_2381 * _2342)) / (_2379 * _2379);
  _2384 = _2379 + 1;
  if ((llvm_fcmp_olt(_2384, 2))) {
    _2379__PHI_TEMPORARY = _2384;   /* for PHI node */
    _2380__PHI_TEMPORARY = _2383;   /* for PHI node */
    _2381__PHI_TEMPORARY = _2382;   /* for PHI node */
    goto _2426;
  } else {
    _2385__PHI_TEMPORARY = _2383;   /* for PHI node */
    _2386__PHI_TEMPORARY = _2382;   /* for PHI node */
    _2387__PHI_TEMPORARY = _2384;   /* for PHI node */
    goto _2427;
  }

  } while (1); /* end of syntactic loop '' */
_2427:
  _2385 = _2385__PHI_TEMPORARY;
  _2386 = _2386__PHI_TEMPORARY;
  _2387 = _2387__PHI_TEMPORARY;
  _2388 = _2387 + -2;
  _2389__PHI_TEMPORARY = 0;   /* for PHI node */
  _2390__PHI_TEMPORARY = 0;   /* for PHI node */
  _2391__PHI_TEMPORARY = 4.2127604874716217E-5;   /* for PHI node */
  goto _2428;

  do {     /* Syntactic loop '' to make GCC happy */
_2428:
  _2389 = _2389__PHI_TEMPORARY;
  _2390 = _2390__PHI_TEMPORARY;
  _2391 = _2391__PHI_TEMPORARY;
  _2392 = llvm_add_u64(_2389, 1);
  _2393 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_gamma_OC_P))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(7, _2389)))])));
  _2394 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2388, _2391, _2393);
  _2395 = (_2391 * _2342) + (_2390 * _2388);
  if ((_2392 == UINT64_C(7))) {
    _2396__PHI_TEMPORARY = 0;   /* for PHI node */
    _2397__PHI_TEMPORARY = 0;   /* for PHI node */
    _2398__PHI_TEMPORARY = -1.3971485174761705E-5;   /* for PHI node */
    goto _2429;
  } else {
    _2389__PHI_TEMPORARY = _2392;   /* for PHI node */
    _2390__PHI_TEMPORARY = _2395;   /* for PHI node */
    _2391__PHI_TEMPORARY = _2394;   /* for PHI node */
    goto _2428;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2429:
  _2396 = _2396__PHI_TEMPORARY;
  _2397 = _2397__PHI_TEMPORARY;
  _2398 = _2398__PHI_TEMPORARY;
  _2399 = llvm_add_u64(_2396, 1);
  _2400 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_gamma_OC_Q))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(8, _2396)))])));
  _2401 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2388, _2398, _2400);
  _2402 = (_2398 * _2342) + (_2397 * _2388);
  if ((_2399 == UINT64_C(8))) {
    goto _2430;
  } else {
    _2396__PHI_TEMPORARY = _2399;   /* for PHI node */
    _2397__PHI_TEMPORARY = _2402;   /* for PHI node */
    _2398__PHI_TEMPORARY = _2401;   /* for PHI node */
    goto _2429;
  }

  } while (1); /* end of syntactic loop '' */
_2430:
  if ((llvm_fcmp_olt(_2332, 0))) {
    goto _2431;
  } else {
    goto _2432;
  }

_2431:
  _2403 = _2401 * 3.1415926535897931;
  _2404 = _2341 * _2386;
  _2405 = _2404 * _2394;
  _2406 = _2403 / _2405;
  _2407 = (((_2405 * 3.1415926535897931) * _2402) - (_2403 * ((_2394 * ((_2386 * _2340) + (_2385 * _2341))) + (_2395 * _2404)))) / (_2405 * _2405);
  _2411__PHI_TEMPORARY = _2407;   /* for PHI node */
  _2412__PHI_TEMPORARY = _2406;   /* for PHI node */
  goto _2417;

_2432:
  _2408 = _2386 * _2394;
  _2409 = _2408 / _2401;
  _2410 = ((_2401 * ((_2394 * _2385) + (_2395 * _2386))) - (_2402 * _2408)) / (_2401 * _2401);
  _2411__PHI_TEMPORARY = _2410;   /* for PHI node */
  _2412__PHI_TEMPORARY = _2409;   /* for PHI node */
  goto _2417;

_2417:
  _2411 = _2411__PHI_TEMPORARY;
  _2412 = _2412__PHI_TEMPORARY;
  _2413 = llvm_ctor_unnamed_1(0, 0);
  _2413.field0 = _2412;
  _2414 = _2413;
  _2414.field1 = _2411;
  return _2414;
}


static struct l_unnamed_1 fwddiffeUk_poly_Kn_OC_3(double _2433, double _2434, double _2435, double _2436, double _2437) {
  __PREFIXALIGN__(16) struct l_array_6_double _2438 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_5_double _2439 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) struct l_array_11_double _2440 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _2441;
  void* _2442;
  void* _2443;
  void* _2444;
  void* _2445;
  void* _2446;
  void* _2447;
  void* _2448;
  void* _2449;
  void* _2450;
  __PREFIXALIGN__(16) struct l_array_11_double _2451 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint64_t _2452;
  uint64_t _2452__PHI_TEMPORARY;
  double _2453;
  double _2453__PHI_TEMPORARY;
  double _2454;
  double _2454__PHI_TEMPORARY;
  uint64_t _2455;
  double _2456;
  double _2457;
  double _2458;
  uint64_t _2459;
  uint64_t _2459__PHI_TEMPORARY;
  double _2460;
  double _2460__PHI_TEMPORARY;
  double _2461;
  double _2461__PHI_TEMPORARY;
  uint64_t _2462;
  double _2463;
  double _2464;
  double _2465;
  uint64_t _2466;
  uint64_t _2466__PHI_TEMPORARY;
  double _2467;
  double _2467__PHI_TEMPORARY;
  double _2468;
  double _2468__PHI_TEMPORARY;
  uint64_t _2469;
  double _2470;
  double _2471;
  double _2472;
  uint64_t _2473;
  uint64_t _2473__PHI_TEMPORARY;
  double _2474;
  double _2474__PHI_TEMPORARY;
  double _2475;
  double _2475__PHI_TEMPORARY;
  uint64_t _2476;
  double _2477;
  double _2478;
  double _2479;
  uint64_t _2480;
  uint64_t _2480__PHI_TEMPORARY;
  double _2481;
  double _2481__PHI_TEMPORARY;
  double _2482;
  double _2482__PHI_TEMPORARY;
  uint64_t _2483;
  double _2484;
  double _2485;
  double _2486;
  void* _2487;
  uint64_t _2488;
  uint64_t _2488__PHI_TEMPORARY;
  double _2489;
  double _2489__PHI_TEMPORARY;
  double _2490;
  double _2490__PHI_TEMPORARY;
  uint64_t _2491;
  double _2492;
  double _2493;
  double _2494;
  void* _2495;
  uint64_t _2496;
  uint64_t _2496__PHI_TEMPORARY;
  double _2497;
  double _2497__PHI_TEMPORARY;
  double _2498;
  double _2498__PHI_TEMPORARY;
  uint64_t _2499;
  double _2500;
  double _2501;
  double _2502;
  uint64_t _2503;
  uint64_t _2503__PHI_TEMPORARY;
  double _2504;
  double _2504__PHI_TEMPORARY;
  double _2505;
  double _2505__PHI_TEMPORARY;
  uint64_t _2506;
  double _2507;
  double _2508;
  double _2509;
  uint64_t _2510;
  uint64_t _2510__PHI_TEMPORARY;
  double _2511;
  double _2511__PHI_TEMPORARY;
  double _2512;
  double _2512__PHI_TEMPORARY;
  uint64_t _2513;
  double _2514;
  double _2515;
  double _2516;
  double _2517;
  double _2518;
  double _2519;
  void* _2520;
  void* _2521;
  double _2522;
  uint64_t _2523;
  uint64_t _2523__PHI_TEMPORARY;
  double _2524;
  double _2524__PHI_TEMPORARY;
  double _2525;
  double _2525__PHI_TEMPORARY;
  uint64_t _2526;
  uint64_t _2527;
  double _2528;
  double _2529;
  double _2530;
  double _2531;
  struct l_unnamed_1 _2532;
  struct l_unnamed_1 _2533;

  _2441 = ((&((uint8_t*)(&_2440))[((int64_t)8)]));
  _2442 = ((&((uint8_t*)(&_2440))[((int64_t)16)]));
  _2443 = ((&((uint8_t*)(&_2440))[((int64_t)24)]));
  _2444 = ((&((uint8_t*)(&_2440))[((int64_t)32)]));
  _2445 = ((&((uint8_t*)(&_2440))[((int64_t)40)]));
  _2446 = ((&((uint8_t*)(&_2440))[((int64_t)48)]));
  _2447 = ((&((uint8_t*)(&_2440))[((int64_t)56)]));
  _2448 = ((&((uint8_t*)(&_2440))[((int64_t)64)]));
  _2449 = ((&((uint8_t*)(&_2440))[((int64_t)72)]));
  _2450 = ((&((uint8_t*)(&_2440))[((int64_t)80)]));
  *((double*)&_2438) = 0.22710800170898438;
  *(double*)(((&((uint8_t*)(&_2438))[((int64_t)8)]))) = -7.3687943594796321;
  *(double*)(((&((uint8_t*)(&_2438))[((int64_t)16)]))) = 42.534998745388457;
  *(double*)(((&((uint8_t*)(&_2438))[((int64_t)24)]))) = -91.81824154324002;
  *(double*)(((&((uint8_t*)(&_2438))[((int64_t)32)]))) = 84.636217674600729;
  *(double*)(((&((uint8_t*)(&_2438))[((int64_t)40)]))) = -28.212072558200244;
  *((double*)&_2439) = 0.112152099609375;
  *(double*)(((&((uint8_t*)(&_2439))[((int64_t)8)]))) = -2.3640869140624998;
  *(double*)(((&((uint8_t*)(&_2439))[((int64_t)16)]))) = 8.78912353515625;
  *(double*)(((&((uint8_t*)(&_2439))[((int64_t)24)]))) = -11.207002616222994;
  *(double*)(((&((uint8_t*)(&_2439))[((int64_t)32)]))) = 4.6695844234262474;
  _2452__PHI_TEMPORARY = 0;   /* for PHI node */
  _2453__PHI_TEMPORARY = 0;   /* for PHI node */
  _2454__PHI_TEMPORARY = 3284469.8530720379;   /* for PHI node */
  goto _2534;

  do {     /* Syntactic loop '' to make GCC happy */
_2534:
  _2452 = _2452__PHI_TEMPORARY;
  _2453 = _2453__PHI_TEMPORARY;
  _2454 = _2454__PHI_TEMPORARY;
  _2455 = llvm_add_u64(_2452, 1);
  _2456 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u10coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(10, _2452)))])));
  _2457 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2436, _2454, _2456);
  _2458 = (_2454 * _2437) + (_2453 * _2436);
  if ((_2455 == UINT64_C(10))) {
    _2459__PHI_TEMPORARY = 0;   /* for PHI node */
    _2460__PHI_TEMPORARY = 0;   /* for PHI node */
    _2461__PHI_TEMPORARY = -242919.18790055133;   /* for PHI node */
    goto _2535;
  } else {
    _2452__PHI_TEMPORARY = _2455;   /* for PHI node */
    _2453__PHI_TEMPORARY = _2458;   /* for PHI node */
    _2454__PHI_TEMPORARY = _2457;   /* for PHI node */
    goto _2534;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2535:
  _2459 = _2459__PHI_TEMPORARY;
  _2460 = _2460__PHI_TEMPORARY;
  _2461 = _2461__PHI_TEMPORARY;
  _2462 = llvm_add_u64(_2459, 1);
  _2463 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u9coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(9, _2459)))])));
  _2464 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2436, _2461, _2463);
  _2465 = (_2461 * _2437) + (_2460 * _2436);
  if ((_2462 == UINT64_C(9))) {
    _2466__PHI_TEMPORARY = 0;   /* for PHI node */
    _2467__PHI_TEMPORARY = 0;   /* for PHI node */
    _2468__PHI_TEMPORARY = 20204.291330966149;   /* for PHI node */
    goto _2536;
  } else {
    _2459__PHI_TEMPORARY = _2462;   /* for PHI node */
    _2460__PHI_TEMPORARY = _2465;   /* for PHI node */
    _2461__PHI_TEMPORARY = _2464;   /* for PHI node */
    goto _2535;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2536:
  _2466 = _2466__PHI_TEMPORARY;
  _2467 = _2467__PHI_TEMPORARY;
  _2468 = _2468__PHI_TEMPORARY;
  _2469 = llvm_add_u64(_2466, 1);
  _2470 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u8coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(8, _2466)))])));
  _2471 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2436, _2468, _2470);
  _2472 = (_2468 * _2437) + (_2467 * _2436);
  if ((_2469 == UINT64_C(8))) {
    _2473__PHI_TEMPORARY = 0;   /* for PHI node */
    _2474__PHI_TEMPORARY = 0;   /* for PHI node */
    _2475__PHI_TEMPORARY = -1919.4576623184071;   /* for PHI node */
    goto _2537;
  } else {
    _2466__PHI_TEMPORARY = _2469;   /* for PHI node */
    _2467__PHI_TEMPORARY = _2472;   /* for PHI node */
    _2468__PHI_TEMPORARY = _2471;   /* for PHI node */
    goto _2536;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2537:
  _2473 = _2473__PHI_TEMPORARY;
  _2474 = _2474__PHI_TEMPORARY;
  _2475 = _2475__PHI_TEMPORARY;
  _2476 = llvm_add_u64(_2473, 1);
  _2477 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u7coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(7, _2473)))])));
  _2478 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2436, _2475, _2477);
  _2479 = (_2475 * _2437) + (_2474 * _2436);
  if ((_2476 == UINT64_C(7))) {
    _2480__PHI_TEMPORARY = 0;   /* for PHI node */
    _2481__PHI_TEMPORARY = 0;   /* for PHI node */
    _2482__PHI_TEMPORARY = 212.57013003921713;   /* for PHI node */
    goto _2538;
  } else {
    _2473__PHI_TEMPORARY = _2476;   /* for PHI node */
    _2474__PHI_TEMPORARY = _2479;   /* for PHI node */
    _2475__PHI_TEMPORARY = _2478;   /* for PHI node */
    goto _2537;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2538:
  _2480 = _2480__PHI_TEMPORARY;
  _2481 = _2481__PHI_TEMPORARY;
  _2482 = _2482__PHI_TEMPORARY;
  _2483 = llvm_add_u64(_2480, 1);
  _2484 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u6coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(6, _2480)))])));
  _2485 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2436, _2482, _2484);
  _2486 = (_2482 * _2437) + (_2481 * _2436);
  if ((_2483 == UINT64_C(6))) {
    goto _2539;
  } else {
    _2480__PHI_TEMPORARY = _2483;   /* for PHI node */
    _2481__PHI_TEMPORARY = _2486;   /* for PHI node */
    _2482__PHI_TEMPORARY = _2485;   /* for PHI node */
    goto _2538;
  }

  } while (1); /* end of syntactic loop '' */
_2539:
  _2487 = ((&((uint8_t*)(&_2438))[((int64_t)-8)]));
  _2488__PHI_TEMPORARY = 0;   /* for PHI node */
  _2489__PHI_TEMPORARY = 0;   /* for PHI node */
  _2490__PHI_TEMPORARY = -28.212072558200244;   /* for PHI node */
  goto _2540;

  do {     /* Syntactic loop '' to make GCC happy */
_2540:
  _2488 = _2488__PHI_TEMPORARY;
  _2489 = _2489__PHI_TEMPORARY;
  _2490 = _2490__PHI_TEMPORARY;
  _2491 = llvm_add_u64(_2488, 1);
  _2492 = *(double*)(((&((double*)_2487)[((int64_t)(llvm_sub_u64(5, _2488)))])));
  _2493 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2436, _2490, _2492);
  _2494 = (_2490 * _2437) + (_2489 * _2436);
  if ((_2491 == UINT64_C(5))) {
    goto _2541;
  } else {
    _2488__PHI_TEMPORARY = _2491;   /* for PHI node */
    _2489__PHI_TEMPORARY = _2494;   /* for PHI node */
    _2490__PHI_TEMPORARY = _2493;   /* for PHI node */
    goto _2540;
  }

  } while (1); /* end of syntactic loop '' */
_2541:
  _2495 = ((&((uint8_t*)(&_2439))[((int64_t)-8)]));
  _2496__PHI_TEMPORARY = 0;   /* for PHI node */
  _2497__PHI_TEMPORARY = 0;   /* for PHI node */
  _2498__PHI_TEMPORARY = 4.6695844234262474;   /* for PHI node */
  goto _2542;

  do {     /* Syntactic loop '' to make GCC happy */
_2542:
  _2496 = _2496__PHI_TEMPORARY;
  _2497 = _2497__PHI_TEMPORARY;
  _2498 = _2498__PHI_TEMPORARY;
  _2499 = llvm_add_u64(_2496, 1);
  _2500 = *(double*)(((&((double*)_2495)[((int64_t)(llvm_sub_u64(4, _2496)))])));
  _2501 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2436, _2498, _2500);
  _2502 = (_2498 * _2437) + (_2497 * _2436);
  if ((_2499 == UINT64_C(4))) {
    _2503__PHI_TEMPORARY = 0;   /* for PHI node */
    _2504__PHI_TEMPORARY = 0;   /* for PHI node */
    _2505__PHI_TEMPORARY = -1.0258125964506173;   /* for PHI node */
    goto _2543;
  } else {
    _2496__PHI_TEMPORARY = _2499;   /* for PHI node */
    _2497__PHI_TEMPORARY = _2502;   /* for PHI node */
    _2498__PHI_TEMPORARY = _2501;   /* for PHI node */
    goto _2542;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2543:
  _2503 = _2503__PHI_TEMPORARY;
  _2504 = _2504__PHI_TEMPORARY;
  _2505 = _2505__PHI_TEMPORARY;
  _2506 = llvm_add_u64(_2503, 1);
  _2507 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u3coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _2503)))])));
  _2508 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2436, _2505, _2507);
  _2509 = (_2505 * _2437) + (_2504 * _2436);
  if ((_2506 == UINT64_C(3))) {
    _2510__PHI_TEMPORARY = 0;   /* for PHI node */
    _2511__PHI_TEMPORARY = 0;   /* for PHI node */
    _2512__PHI_TEMPORARY = 0.3342013888888889;   /* for PHI node */
    goto _2544;
  } else {
    _2503__PHI_TEMPORARY = _2506;   /* for PHI node */
    _2504__PHI_TEMPORARY = _2509;   /* for PHI node */
    _2505__PHI_TEMPORARY = _2508;   /* for PHI node */
    goto _2543;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2544:
  _2510 = _2510__PHI_TEMPORARY;
  _2511 = _2511__PHI_TEMPORARY;
  _2512 = _2512__PHI_TEMPORARY;
  _2513 = llvm_add_u64(_2510, 1);
  _2514 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_Uk_poly_Kn_OC_u2coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(2, _2510)))])));
  _2515 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2436, _2512, _2514);
  _2516 = (_2512 * _2437) + (_2511 * _2436);
  if ((_2513 == UINT64_C(2))) {
    goto _2545;
  } else {
    _2510__PHI_TEMPORARY = _2513;   /* for PHI node */
    _2511__PHI_TEMPORARY = _2516;   /* for PHI node */
    _2512__PHI_TEMPORARY = _2515;   /* for PHI node */
    goto _2544;
  }

  } while (1); /* end of syntactic loop '' */
_2545:
  _2517 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2436, -0.20833333333333334, 0.125);
  *((double*)&_2440) = 0;
  *((double*)&_2451) = 1;
  *(double*)_2441 = (_2437 * -0.20833333333333334);
  *(double*)(((&((uint8_t*)(&_2451))[((int64_t)8)]))) = _2517;
  *(double*)_2442 = _2516;
  *(double*)(((&((uint8_t*)(&_2451))[((int64_t)16)]))) = _2515;
  *(double*)_2443 = _2509;
  *(double*)(((&((uint8_t*)(&_2451))[((int64_t)24)]))) = _2508;
  *(double*)_2444 = _2502;
  *(double*)(((&((uint8_t*)(&_2451))[((int64_t)32)]))) = _2501;
  *(double*)_2445 = _2494;
  *(double*)(((&((uint8_t*)(&_2451))[((int64_t)40)]))) = _2493;
  *(double*)_2446 = _2486;
  *(double*)(((&((uint8_t*)(&_2451))[((int64_t)48)]))) = _2485;
  *(double*)_2447 = _2479;
  *(double*)(((&((uint8_t*)(&_2451))[((int64_t)56)]))) = _2478;
  *(double*)_2448 = _2472;
  *(double*)(((&((uint8_t*)(&_2451))[((int64_t)64)]))) = _2471;
  *(double*)_2449 = _2465;
  *(double*)(((&((uint8_t*)(&_2451))[((int64_t)72)]))) = _2464;
  *(double*)_2450 = _2458;
  *(double*)(((&((uint8_t*)(&_2451))[((int64_t)80)]))) = _2457;
  _2518 = (-(_2433)) / _2435;
  _2519 = _2434 * _2435;
  _2520 = ((&((uint8_t*)(&_2440))[((int64_t)-8)]));
  _2521 = ((&((uint8_t*)(&_2451))[((int64_t)-8)]));
  _2522 = 1 / (_2435 * _2435);
  _2523__PHI_TEMPORARY = 0;   /* for PHI node */
  _2524__PHI_TEMPORARY = _2458;   /* for PHI node */
  _2525__PHI_TEMPORARY = _2457;   /* for PHI node */
  goto _2546;

  do {     /* Syntactic loop '' to make GCC happy */
_2546:
  _2523 = _2523__PHI_TEMPORARY;
  _2524 = _2524__PHI_TEMPORARY;
  _2525 = _2525__PHI_TEMPORARY;
  _2526 = llvm_add_u64(_2523, 1);
  _2527 = llvm_sub_u64(10, _2523);
  _2528 = *(double*)(((&((double*)_2520)[((int64_t)_2527)])));
  _2529 = *(double*)(((&((double*)_2521)[((int64_t)_2527)])));
  _2530 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2518, _2525, _2529);
  _2531 = ((_2524 * _2518) - ((_2519 * _2525) * _2522)) + _2528;
  if ((_2526 == UINT64_C(10))) {
    goto _2547;
  } else {
    _2523__PHI_TEMPORARY = _2526;   /* for PHI node */
    _2524__PHI_TEMPORARY = _2531;   /* for PHI node */
    _2525__PHI_TEMPORARY = _2530;   /* for PHI node */
    goto _2546;
  }

  } while (1); /* end of syntactic loop '' */
_2547:
  _2532 = llvm_ctor_unnamed_1(0, 0);
  _2532.field0 = _2530;
  _2533 = _2532;
  _2533.field1 = _2531;
  return _2533;
}


static struct l_unnamed_2 fwddiffebesselk_temme_series_OC_4(double _2548, double _2549, double _2550) {
  __PREFIXALIGN__(16) struct l_array_5_double _2551 __POSTFIXALIGN__(16);    /* Address-exposed local */
  double _2552;    /* Address-exposed local */
  double _2553;    /* Address-exposed local */
  double _2554;    /* Address-exposed local */
  double _2555;    /* Address-exposed local */
  double _2556;    /* Address-exposed local */
  double _2557;    /* Address-exposed local */
  double _2558;    /* Address-exposed local */
  double _2559;    /* Address-exposed local */
  double _2560;
  double _2561;
  double _2562;
  uint64_t _2563;
  uint64_t _2563__PHI_TEMPORARY;
  double _2564;
  double _2564__PHI_TEMPORARY;
  uint64_t _2565;
  double _2566;
  double _2567;
  double _2568;
  uint64_t _2569;
  uint64_t _2569__PHI_TEMPORARY;
  double _2570;
  double _2570__PHI_TEMPORARY;
  uint64_t _2571;
  double _2572;
  double _2573;
  uint64_t _2574;
  uint64_t _2574__PHI_TEMPORARY;
  double _2575;
  double _2575__PHI_TEMPORARY;
  uint64_t _2576;
  double _2577;
  double _2578;
  double _2579;
  double _2580;
  double _2581;
  double _2582;
  double _2583;
  void* _2584;
  double _2585;
  uint64_t _2586;
  uint64_t _2586__PHI_TEMPORARY;
  double _2587;
  double _2587__PHI_TEMPORARY;
  double _2588;
  double _2588__PHI_TEMPORARY;
  uint64_t _2589;
  double _2590;
  double _2591;
  double _2592;
  double _2593;
  double _2594;
  double _2595;
  double _2596;
  double _2597;
  double _2598;
  double _2599;
  double _2600;
  uint64_t _2601;
  uint64_t _2601__PHI_TEMPORARY;
  double _2602;
  double _2602__PHI_TEMPORARY;
  uint64_t _2603;
  double _2604;
  double _2605;
  double _2606;
  double _2607;
  double _2608;
  double _2609;
  uint64_t _2610;
  uint64_t _2610__PHI_TEMPORARY;
  double _2611;
  double _2611__PHI_TEMPORARY;
  uint64_t _2612;
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
  uint32_t _2623;
  uint32_t _2623__PHI_TEMPORARY;
  double _2624;
  double _2624__PHI_TEMPORARY;
  double _2625;
  double _2625__PHI_TEMPORARY;
  double _2626;
  double _2626__PHI_TEMPORARY;
  double _2627;
  double _2627__PHI_TEMPORARY;
  double _2628;
  double _2628__PHI_TEMPORARY;
  double _2629;
  double _2629__PHI_TEMPORARY;
  double _2630;
  double _2630__PHI_TEMPORARY;
  double _2631;
  double _2631__PHI_TEMPORARY;
  double _2632;
  double _2632__PHI_TEMPORARY;
  double _2633;
  double _2633__PHI_TEMPORARY;
  double _2634;
  double _2634__PHI_TEMPORARY;
  double _2635;
  double _2635__PHI_TEMPORARY;
  double _2636;
  double _2637;
  double _2638;
  double _2639;
  double _2640;
  double _2641;
  double _2642;
  double _2643;
  double _2644;
  double _2645;
  double _2646;
  double _2647;
  uint32_t _2648;
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
  double _2661;
  double _2662;
  struct l_unnamed_1 _2663;
  struct l_unnamed_1 _2664;
  struct l_unnamed_1 _2665;
  struct l_unnamed_1 _2666;
  struct l_unnamed_2 _2667;
  struct l_unnamed_2 _2668;

  _2560 = _2549 * 0.5;
  *((double*)&_2551) = 1;
  *(double*)(((&((uint8_t*)(&_2551))[((int64_t)8)]))) = 0.16666666666666666;
  *(double*)(((&((uint8_t*)(&_2551))[((int64_t)16)]))) = 0.0083333333333333332;
  *(double*)(((&((uint8_t*)(&_2551))[((int64_t)24)]))) = 1.9841269841269841E-4;
  *(double*)(((&((uint8_t*)(&_2551))[((int64_t)32)]))) = 2.7557319223985893E-6;
  _2561 =  /*tail*/ log(_2549);
  _2562 = _2548 * _2548;
  _2563__PHI_TEMPORARY = 0;   /* for PHI node */
  _2564__PHI_TEMPORARY = 1.9711021825948702;   /* for PHI node */
  goto _2669;

  do {     /* Syntactic loop '' to make GCC happy */
_2669:
  _2563 = _2563__PHI_TEMPORARY;
  _2564 = _2564__PHI_TEMPORARY;
  _2565 = llvm_add_u64(_2563, 1);
  _2566 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_spcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _2563)))])));
  _2567 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2562, _2564, _2566);
  if ((_2565 == UINT64_C(3))) {
    goto _2670;
  } else {
    _2563__PHI_TEMPORARY = _2565;   /* for PHI node */
    _2564__PHI_TEMPORARY = _2567;   /* for PHI node */
    goto _2669;
  }

  } while (1); /* end of syntactic loop '' */
_2670:
  _2568 = _2550 * 0.5;
  _2569__PHI_TEMPORARY = 0;   /* for PHI node */
  _2570__PHI_TEMPORARY = 0.042197734555544306;   /* for PHI node */
  goto _2671;

  do {     /* Syntactic loop '' to make GCC happy */
_2671:
  _2569 = _2569__PHI_TEMPORARY;
  _2570 = _2570__PHI_TEMPORARY;
  _2571 = llvm_add_u64(_2569, 1);
  _2572 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_g1coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(2, _2569)))])));
  _2573 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2562, _2570, _2572);
  if ((_2571 == UINT64_C(2))) {
    _2574__PHI_TEMPORARY = 0;   /* for PHI node */
    _2575__PHI_TEMPORARY = 0.16653861138229145;   /* for PHI node */
    goto _2672;
  } else {
    _2569__PHI_TEMPORARY = _2571;   /* for PHI node */
    _2570__PHI_TEMPORARY = _2573;   /* for PHI node */
    goto _2671;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '' to make GCC happy */
_2672:
  _2574 = _2574__PHI_TEMPORARY;
  _2575 = _2575__PHI_TEMPORARY;
  _2576 = llvm_add_u64(_2574, 1);
  _2577 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_f0_local_expansion_OC_g2coef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(2, _2574)))])));
  _2578 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2562, _2575, _2577);
  if ((_2576 == UINT64_C(2))) {
    goto _2673;
  } else {
    _2574__PHI_TEMPORARY = _2576;   /* for PHI node */
    _2575__PHI_TEMPORARY = _2578;   /* for PHI node */
    goto _2672;
  }

  } while (1); /* end of syntactic loop '' */
_2673:
  _2579 = 0.69314718055994529 - _2561;
  _2580 = (-(_2550)) / _2549;
  _2581 = _2579 * _2548;
  _2582 = _2580 * _2548;
  _2583 = _2581 * _2581;
  _2584 = ((&((uint8_t*)(&_2551))[((int64_t)-8)]));
  _2585 = (_2582 * 2) * _2581;
  _2586__PHI_TEMPORARY = 0;   /* for PHI node */
  _2587__PHI_TEMPORARY = 0;   /* for PHI node */
  _2588__PHI_TEMPORARY = 2.7557319223985893E-6;   /* for PHI node */
  goto _2674;

  do {     /* Syntactic loop '' to make GCC happy */
_2674:
  _2586 = _2586__PHI_TEMPORARY;
  _2587 = _2587__PHI_TEMPORARY;
  _2588 = _2588__PHI_TEMPORARY;
  _2589 = llvm_add_u64(_2586, 1);
  _2590 = *(double*)(((&((double*)_2584)[((int64_t)(llvm_sub_u64(4, _2586)))])));
  _2591 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2583, _2588, _2590);
  _2592 = (_2585 * _2588) + (_2587 * _2583);
  if ((_2589 == UINT64_C(4))) {
    goto _2675;
  } else {
    _2586__PHI_TEMPORARY = _2589;   /* for PHI node */
    _2587__PHI_TEMPORARY = _2592;   /* for PHI node */
    _2588__PHI_TEMPORARY = _2591;   /* for PHI node */
    goto _2674;
  }

  } while (1); /* end of syntactic loop '' */
_2675:
  _2593 = _2560 * _2560;
  _2594 =  /*tail*/ sinh(_2581);
  _2595 = _2578 * _2591;
  _2596 = (_2595 * _2580) + ((_2578 * _2579) * _2592);
  _2597 = (_2573 * _2582) * _2594;
  _2598 =  /*tail*/ pow(_2560, _2548);
  _2599 =  /*tail*/ pow(_2560, (_2548 + -1));
  _2600 = _2568 * _2548;
  _2601__PHI_TEMPORARY = 0;   /* for PHI node */
  _2602__PHI_TEMPORARY = -0.23263776388631713;   /* for PHI node */
  goto _2676;

  do {     /* Syntactic loop '' to make GCC happy */
_2676:
  _2601 = _2601__PHI_TEMPORARY;
  _2602 = _2602__PHI_TEMPORARY;
  _2603 = llvm_add_u64(_2601, 1);
  _2604 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_besselk_temme_series_OC_pqkcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _2601)))])));
  _2605 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2548, _2602, _2604);
  if ((_2603 == UINT64_C(3))) {
    goto _2677;
  } else {
    _2601__PHI_TEMPORARY = _2603;   /* for PHI node */
    _2602__PHI_TEMPORARY = _2605;   /* for PHI node */
    goto _2676;
  }

  } while (1); /* end of syntactic loop '' */
_2677:
  _2606 =  /*tail*/ cosh(_2581);
  _2607 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2573, _2606, (_2579 * _2595));
  _2608 = _2600 * _2599;
  _2609 = -(_2548);
  _2610__PHI_TEMPORARY = 0;   /* for PHI node */
  _2611__PHI_TEMPORARY = -0.23263776388631713;   /* for PHI node */
  goto _2678;

  do {     /* Syntactic loop '' to make GCC happy */
_2678:
  _2610 = _2610__PHI_TEMPORARY;
  _2611 = _2611__PHI_TEMPORARY;
  _2612 = llvm_add_u64(_2610, 1);
  _2613 = *(double*)(((&((double*)(((&((uint8_t*)(&__const_OC_besselk_temme_series_OC_pqkcoef))[((int64_t)-8)]))))[((int64_t)(llvm_sub_u64(3, _2610)))])));
  _2614 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2609, _2611, _2613);
  if ((_2612 == UINT64_C(3))) {
    goto _2679;
  } else {
    _2610__PHI_TEMPORARY = _2612;   /* for PHI node */
    _2611__PHI_TEMPORARY = _2614;   /* for PHI node */
    goto _2678;
  }

  } while (1); /* end of syntactic loop '' */
_2679:
  _2615 = _2598 * 2;
  _2616 = _2567 * _2607;
  _2617 = (_2596 + _2597) * _2567;
  _2618 = _2605 / _2615;
  _2619 = ((_2608 * -2) * _2605) / (_2615 * _2615);
  _2620 = (_2598 * _2614) * 0.5;
  _2621 = (_2608 * 0.5) * _2614;
  _2622 = (_2560 * _2568) * 2;
  _2623__PHI_TEMPORARY = 0;   /* for PHI node */
  _2624__PHI_TEMPORARY = 0;   /* for PHI node */
  _2625__PHI_TEMPORARY = 0;   /* for PHI node */
  _2626__PHI_TEMPORARY = 0;   /* for PHI node */
  _2627__PHI_TEMPORARY = 0;   /* for PHI node */
  _2628__PHI_TEMPORARY = 0;   /* for PHI node */
  _2629__PHI_TEMPORARY = 1;   /* for PHI node */
  _2630__PHI_TEMPORARY = _2621;   /* for PHI node */
  _2631__PHI_TEMPORARY = _2620;   /* for PHI node */
  _2632__PHI_TEMPORARY = _2619;   /* for PHI node */
  _2633__PHI_TEMPORARY = _2618;   /* for PHI node */
  _2634__PHI_TEMPORARY = _2617;   /* for PHI node */
  _2635__PHI_TEMPORARY = _2616;   /* for PHI node */
  goto _2680;

  do {     /* Syntactic loop '' to make GCC happy */
_2680:
  _2623 = _2623__PHI_TEMPORARY;
  _2624 = _2624__PHI_TEMPORARY;
  _2625 = _2625__PHI_TEMPORARY;
  _2626 = _2626__PHI_TEMPORARY;
  _2627 = _2627__PHI_TEMPORARY;
  _2628 = _2628__PHI_TEMPORARY;
  _2629 = _2629__PHI_TEMPORARY;
  _2630 = _2630__PHI_TEMPORARY;
  _2631 = _2631__PHI_TEMPORARY;
  _2632 = _2632__PHI_TEMPORARY;
  _2633 = _2633__PHI_TEMPORARY;
  _2634 = _2634__PHI_TEMPORARY;
  _2635 = _2635__PHI_TEMPORARY;
  _2636 = _2629 * _2635;
  _2637 = (_2635 * _2628) + (_2634 * _2629);
  _2552 = _2637;
  _2553 = _2636;
  _2638 = ((double)(uint32_t)_2623);
  _2639 =  /*tail*/ llvm_OC_fmuladd_OC_f64((-(_2638)), _2635, _2633);
  _2640 = _2629 * _2639;
  _2641 = (_2639 * _2628) + ((_2632 - (_2634 * _2638)) * _2629);
  _2554 = _2641;
  _2555 = _2640;
  _2642 = _2627 + _2636;
  _2643 = _2637 + _2626;
  _2644 = _2625 + _2640;
  _2645 = _2641 + _2624;
  fixderivative_isconverged((&_2553), (&_2552), (&_2557), (&_2556));
  fixderivative_isconverged_OC_1((&_2555), (&_2554), (&_2559), (&_2558));
  _2646 = _2557;
  _2647 = _2559;
  if ((llvm_select_bool((llvm_fcmp_olt(_2646, 0)), (llvm_fcmp_olt(_2647, 0)), 0))) {
    goto _2681;
  } else {
    goto _2682;
  }

_2682:
  _2648 = llvm_add_u32(_2623, 1);
  _2649 = ((double)(uint32_t)_2648);
  _2650 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2649, _2635, _2633);
  _2651 =  /*tail*/ llvm_OC_fmuladd_OC_f64(_2609, _2548, (((double)(uint32_t)(llvm_mul_u32(_2648, _2648)))));
  _2652 = (_2631 + _2650) / _2651;
  _2653 = (((_2632 + _2630) + (_2634 * _2649)) * _2651) / (_2651 * _2651);
  _2654 = _2649 - _2548;
  _2655 = _2633 / _2654;
  _2656 = (_2632 * _2654) / (_2654 * _2654);
  _2657 = _2649 + _2548;
  _2658 = _2631 / _2657;
  _2659 = (_2630 * _2657) / (_2657 * _2657);
  _2660 = _2593 / _2649;
  _2661 = _2660 * _2629;
  _2662 = (((_2622 * _2649) * _2629) / (_2649 * _2649)) + (_2628 * _2660);
  if ((_2648 == 500u)) {
    goto _2681;
  } else {
    _2623__PHI_TEMPORARY = _2648;   /* for PHI node */
    _2624__PHI_TEMPORARY = _2645;   /* for PHI node */
    _2625__PHI_TEMPORARY = _2644;   /* for PHI node */
    _2626__PHI_TEMPORARY = _2643;   /* for PHI node */
    _2627__PHI_TEMPORARY = _2642;   /* for PHI node */
    _2628__PHI_TEMPORARY = _2662;   /* for PHI node */
    _2629__PHI_TEMPORARY = _2661;   /* for PHI node */
    _2630__PHI_TEMPORARY = _2659;   /* for PHI node */
    _2631__PHI_TEMPORARY = _2658;   /* for PHI node */
    _2632__PHI_TEMPORARY = _2656;   /* for PHI node */
    _2633__PHI_TEMPORARY = _2655;   /* for PHI node */
    _2634__PHI_TEMPORARY = _2653;   /* for PHI node */
    _2635__PHI_TEMPORARY = _2652;   /* for PHI node */
    goto _2680;
  }

  } while (1); /* end of syntactic loop '' */
_2681:
  _2663 = llvm_ctor_unnamed_1(0, 0);
  _2663.field0 = _2643;
  _2664 = llvm_ctor_unnamed_1(0, 0);
  _2664.field0 = _2642;
  _2665 = _2663;
  _2665.field1 = (((_2645 * _2560) - (_2644 * _2568)) / _2593);
  _2666 = _2664;
  _2666.field1 = (_2644 / _2560);
  _2667 = llvm_ctor_unnamed_2(llvm_ctor_unnamed_1(0, 0), llvm_ctor_unnamed_1(0, 0));
  _2667.field0 = _2666;
  _2668 = _2667;
  _2668.field1 = _2665;
  return _2668;
}

