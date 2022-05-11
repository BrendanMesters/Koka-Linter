// Koka generated module: "internal/struct", koka version: 2.4.0, platform: 64-bit
#include "internal_struct.h"
 
// runtime tag for the `:scope` effect

kk_std_core_hnd__htag kk_internal_struct__tag_scope;
 
// handler for the `:scope` effect

kk_box_t kk_internal_struct__handle_scope(int32_t cfc, kk_internal_struct__hnd_scope hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (cfc : int32, hnd : .hnd-scope<e,b>, ret : (res : a) -> e b, action : () -> <scope|e> a) -> e b */ 
  kk_std_core_hnd__htag _x2836 = kk_std_core_hnd__htag_dup(kk_internal_struct__tag_scope); /*std/core/hnd/htag<internal/struct/.hnd-scope>*/
  return kk_std_core_hnd__hhandle(_x2836, cfc, kk_internal_struct__hnd_scope_box(hnd, _ctx), ret, action, _ctx);
}

kk_string_t kk_internal_struct_show(kk_internal_struct__patern pat, kk_context_t* _ctx) { /* (pat : patern) -> total string */ 
  if (kk_internal_struct__is_Ident(pat)) {
    struct kk_internal_struct_Ident* _con2843 = kk_internal_struct__as_Ident(pat);
    kk_string_t name = _con2843->name;
    if (kk_likely(kk_internal_struct__patern_is_unique(pat))) {
      kk_internal_struct__patern_free(pat, _ctx);
    }
    else {
      kk_string_dup(name);
      kk_internal_struct__patern_decref(pat, _ctx);
    }
    kk_string_t _x2844;
    kk_define_string_literal(, _s2845, 10, "Pattern: \'")
    _x2844 = kk_string_dup(_s2845); /*string*/
    kk_string_t _x2846;
    kk_string_t _x2847;
    kk_define_string_literal(, _s2848, 1, "\'")
    _x2847 = kk_string_dup(_s2848); /*string*/
    _x2846 = kk_std_core__lp__plus__plus__1_rp_(name, _x2847, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x2844, _x2846, _ctx);
  }
  if (kk_internal_struct__is_NullPat(pat)) {
    kk_define_string_literal(, _s2849, 7, "NULLPat")
    return kk_string_dup(_s2849);
  }
  {
    struct kk_internal_struct_Patpair* _con2850 = kk_internal_struct__as_Patpair(pat);
    kk_internal_struct__patern p1 = _con2850->p1;
    kk_internal_struct__patern p2 = _con2850->p2;
    if (kk_likely(kk_internal_struct__patern_is_unique(pat))) {
      kk_internal_struct__patern_free(pat, _ctx);
    }
    else {
      kk_internal_struct__patern_dup(p1);
      kk_internal_struct__patern_dup(p2);
      kk_internal_struct__patern_decref(pat, _ctx);
    }
    kk_string_t _x2851;
    kk_define_string_literal(, _s2852, 11, "Patpair: ({")
    _x2851 = kk_string_dup(_s2852); /*string*/
    kk_string_t _x2853;
    kk_string_t _x2854 = kk_internal_struct_show(p1, _ctx); /*string*/
    kk_string_t _x2855;
    kk_string_t _x2856;
    kk_define_string_literal(, _s2857, 4, "}, {")
    _x2856 = kk_string_dup(_s2857); /*string*/
    kk_string_t _x2858;
    kk_string_t _x2859 = kk_internal_struct_show(p2, _ctx); /*string*/
    kk_string_t _x2860;
    kk_define_string_literal(, _s2861, 2, "})")
    _x2860 = kk_string_dup(_s2861); /*string*/
    _x2858 = kk_std_core__lp__plus__plus__1_rp_(_x2859, _x2860, _ctx); /*string*/
    _x2855 = kk_std_core__lp__plus__plus__1_rp_(_x2856, _x2858, _ctx); /*string*/
    _x2853 = kk_std_core__lp__plus__plus__1_rp_(_x2854, _x2855, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x2851, _x2853, _ctx);
  }
}

kk_string_t kk_internal_struct_show_1(kk_internal_struct__expression exp, kk_context_t* _ctx) { /* (exp : expression) -> total string */ 
  if (kk_internal_struct__is_Num(exp)) {
    struct kk_internal_struct_Num* _con2862 = kk_internal_struct__as_Num(exp);
    kk_integer_t n = _con2862->n;
    if (kk_likely(kk_internal_struct__expression_is_unique(exp))) {
      kk_internal_struct__expression_free(exp, _ctx);
    }
    else {
      kk_integer_dup(n);
      kk_internal_struct__expression_decref(exp, _ctx);
    }
    kk_string_t _x2863;
    kk_define_string_literal(, _s2864, 11, "Value: num ")
    _x2863 = kk_string_dup(_s2864); /*string*/
    kk_string_t _x2865 = kk_std_core_show(n, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x2863, _x2865, _ctx);
  }
  if (kk_internal_struct__is_EFalse(exp)) {
    kk_define_string_literal(, _s2866, 12, "Value: false")
    return kk_string_dup(_s2866);
  }
  if (kk_internal_struct__is_ETrue(exp)) {
    kk_define_string_literal(, _s2867, 11, "Value: true")
    return kk_string_dup(_s2867);
  }
  if (kk_internal_struct__is_Variable(exp)) {
    struct kk_internal_struct_Variable* _con2868 = kk_internal_struct__as_Variable(exp);
    kk_string_t name = _con2868->name;
    if (kk_likely(kk_internal_struct__expression_is_unique(exp))) {
      kk_internal_struct__expression_free(exp, _ctx);
    }
    else {
      kk_string_dup(name);
      kk_internal_struct__expression_decref(exp, _ctx);
    }
    kk_string_t _x2869;
    kk_define_string_literal(, _s2870, 11, "Variable: \"")
    _x2869 = kk_string_dup(_s2870); /*string*/
    kk_string_t _x2871;
    kk_string_t _x2872;
    kk_define_string_literal(, _s2873, 1, "\"")
    _x2872 = kk_string_dup(_s2873); /*string*/
    _x2871 = kk_std_core__lp__plus__plus__1_rp_(name, _x2872, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x2869, _x2871, _ctx);
  }
  if (kk_internal_struct__is_Lambda(exp)) {
    struct kk_internal_struct_Lambda* _con2874 = kk_internal_struct__as_Lambda(exp);
    kk_internal_struct__patern arg = _con2874->arg;
    kk_internal_struct__expression body = _con2874->body;
    if (kk_likely(kk_internal_struct__expression_is_unique(exp))) {
      kk_internal_struct__expression_free(exp, _ctx);
    }
    else {
      kk_internal_struct__patern_dup(arg);
      kk_internal_struct__expression_dup(body);
      kk_internal_struct__expression_decref(exp, _ctx);
    }
    kk_string_t _x2875;
    kk_define_string_literal(, _s2876, 32, "Function: with variable names: [")
    _x2875 = kk_string_dup(_s2876); /*string*/
    kk_string_t _x2877;
    kk_string_t _x2878 = kk_internal_struct_show(arg, _ctx); /*string*/
    kk_string_t _x2879;
    kk_string_t _x2880;
    kk_define_string_literal(, _s2881, 1, "]")
    _x2880 = kk_string_dup(_s2881); /*string*/
    kk_string_t _x2882;
    kk_string_t _x2883;
    kk_define_string_literal(, _s2884, 14, " and body of: ")
    _x2883 = kk_string_dup(_s2884); /*string*/
    kk_string_t _x2885 = kk_internal_struct_show_1(body, _ctx); /*string*/
    _x2882 = kk_std_core__lp__plus__plus__1_rp_(_x2883, _x2885, _ctx); /*string*/
    _x2879 = kk_std_core__lp__plus__plus__1_rp_(_x2880, _x2882, _ctx); /*string*/
    _x2877 = kk_std_core__lp__plus__plus__1_rp_(_x2878, _x2879, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x2875, _x2877, _ctx);
  }
  if (kk_internal_struct__is_If(exp)) {
    struct kk_internal_struct_If* _con2886 = kk_internal_struct__as_If(exp);
    kk_internal_struct__expression cond = _con2886->cond;
    kk_internal_struct__expression thus = _con2886->thus;
    kk_internal_struct__expression otherwise = _con2886->otherwise;
    if (kk_likely(kk_internal_struct__expression_is_unique(exp))) {
      kk_internal_struct__expression_free(exp, _ctx);
    }
    else {
      kk_internal_struct__expression_dup(cond);
      kk_internal_struct__expression_dup(otherwise);
      kk_internal_struct__expression_dup(thus);
      kk_internal_struct__expression_decref(exp, _ctx);
    }
    kk_string_t _x2887;
    kk_define_string_literal(, _s2888, 18, "If statement: if {")
    _x2887 = kk_string_dup(_s2888); /*string*/
    kk_string_t _x2889;
    kk_string_t _x2890 = kk_internal_struct_show_1(cond, _ctx); /*string*/
    kk_string_t _x2891;
    kk_string_t _x2892;
    kk_define_string_literal(, _s2893, 8, "} then {")
    _x2892 = kk_string_dup(_s2893); /*string*/
    kk_string_t _x2894;
    kk_string_t _x2895 = kk_internal_struct_show_1(thus, _ctx); /*string*/
    kk_string_t _x2896;
    kk_string_t _x2897;
    kk_define_string_literal(, _s2898, 8, "} else {")
    _x2897 = kk_string_dup(_s2898); /*string*/
    kk_string_t _x2899;
    kk_string_t _x2900 = kk_internal_struct_show_1(otherwise, _ctx); /*string*/
    kk_string_t _x2901;
    kk_define_string_literal(, _s2902, 1, "}")
    _x2901 = kk_string_dup(_s2902); /*string*/
    _x2899 = kk_std_core__lp__plus__plus__1_rp_(_x2900, _x2901, _ctx); /*string*/
    _x2896 = kk_std_core__lp__plus__plus__1_rp_(_x2897, _x2899, _ctx); /*string*/
    _x2894 = kk_std_core__lp__plus__plus__1_rp_(_x2895, _x2896, _ctx); /*string*/
    _x2891 = kk_std_core__lp__plus__plus__1_rp_(_x2892, _x2894, _ctx); /*string*/
    _x2889 = kk_std_core__lp__plus__plus__1_rp_(_x2890, _x2891, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x2887, _x2889, _ctx);
  }
  if (kk_internal_struct__is_MLpair(exp)) {
    struct kk_internal_struct_MLpair* _con2903 = kk_internal_struct__as_MLpair(exp);
    kk_internal_struct__expression e1 = _con2903->e1;
    kk_internal_struct__expression e2 = _con2903->e2;
    if (kk_likely(kk_internal_struct__expression_is_unique(exp))) {
      kk_internal_struct__expression_free(exp, _ctx);
    }
    else {
      kk_internal_struct__expression_dup(e1);
      kk_internal_struct__expression_dup(e2);
      kk_internal_struct__expression_decref(exp, _ctx);
    }
    kk_string_t _x2904;
    kk_define_string_literal(, _s2905, 21, "Expression pair of: {")
    _x2904 = kk_string_dup(_s2905); /*string*/
    kk_string_t _x2906;
    kk_string_t _x2907 = kk_internal_struct_show_1(e1, _ctx); /*string*/
    kk_string_t _x2908;
    kk_string_t _x2909;
    kk_define_string_literal(, _s2910, 7, "} and {")
    _x2909 = kk_string_dup(_s2910); /*string*/
    kk_string_t _x2911;
    kk_string_t _x2912 = kk_internal_struct_show_1(e2, _ctx); /*string*/
    kk_string_t _x2913;
    kk_define_string_literal(, _s2914, 1, "}")
    _x2913 = kk_string_dup(_s2914); /*string*/
    _x2911 = kk_std_core__lp__plus__plus__1_rp_(_x2912, _x2913, _ctx); /*string*/
    _x2908 = kk_std_core__lp__plus__plus__1_rp_(_x2909, _x2911, _ctx); /*string*/
    _x2906 = kk_std_core__lp__plus__plus__1_rp_(_x2907, _x2908, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x2904, _x2906, _ctx);
  }
  if (kk_internal_struct__is_Apply(exp)) {
    struct kk_internal_struct_Apply* _con2915 = kk_internal_struct__as_Apply(exp);
    kk_internal_struct__expression e10 = _con2915->e1;
    kk_internal_struct__expression e20 = _con2915->e2;
    if (kk_likely(kk_internal_struct__expression_is_unique(exp))) {
      kk_internal_struct__expression_free(exp, _ctx);
    }
    else {
      kk_internal_struct__expression_dup(e10);
      kk_internal_struct__expression_dup(e20);
      kk_internal_struct__expression_decref(exp, _ctx);
    }
    kk_string_t _x2916;
    kk_define_string_literal(, _s2917, 17, "Application of: {")
    _x2916 = kk_string_dup(_s2917); /*string*/
    kk_string_t _x2918;
    kk_string_t _x2919 = kk_internal_struct_show_1(e10, _ctx); /*string*/
    kk_string_t _x2920;
    kk_string_t _x2921;
    kk_define_string_literal(, _s2922, 15, "} onto values {")
    _x2921 = kk_string_dup(_s2922); /*string*/
    kk_string_t _x2923;
    kk_string_t _x2924 = kk_internal_struct_show_1(e20, _ctx); /*string*/
    kk_string_t _x2925;
    kk_define_string_literal(, _s2926, 1, "}")
    _x2925 = kk_string_dup(_s2926); /*string*/
    _x2923 = kk_std_core__lp__plus__plus__1_rp_(_x2924, _x2925, _ctx); /*string*/
    _x2920 = kk_std_core__lp__plus__plus__1_rp_(_x2921, _x2923, _ctx); /*string*/
    _x2918 = kk_std_core__lp__plus__plus__1_rp_(_x2919, _x2920, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x2916, _x2918, _ctx);
  }
  if (kk_internal_struct__is_Let(exp)) {
    struct kk_internal_struct_Let* _con2927 = kk_internal_struct__as_Let(exp);
    kk_internal_struct__patern arg0 = _con2927->arg;
    kk_internal_struct__expression arg__val = _con2927->arg__val;
    kk_internal_struct__expression body0 = _con2927->body;
    if (kk_likely(kk_internal_struct__expression_is_unique(exp))) {
      kk_internal_struct__expression_free(exp, _ctx);
    }
    else {
      kk_internal_struct__patern_dup(arg0);
      kk_internal_struct__expression_dup(arg__val);
      kk_internal_struct__expression_dup(body0);
      kk_internal_struct__expression_decref(exp, _ctx);
    }
    kk_string_t _x2928;
    kk_define_string_literal(, _s2929, 21, "Let expression: let \'")
    _x2928 = kk_string_dup(_s2929); /*string*/
    kk_string_t _x2930;
    kk_string_t _x2931 = kk_internal_struct_show(arg0, _ctx); /*string*/
    kk_string_t _x2932;
    kk_string_t _x2933;
    kk_define_string_literal(, _s2934, 6, "\' be {")
    _x2933 = kk_string_dup(_s2934); /*string*/
    kk_string_t _x2935;
    kk_string_t _x2936 = kk_internal_struct_show_1(arg__val, _ctx); /*string*/
    kk_string_t _x2937;
    kk_string_t _x2938;
    kk_define_string_literal(, _s2939, 6, "} in {")
    _x2938 = kk_string_dup(_s2939); /*string*/
    kk_string_t _x2940;
    kk_string_t _x2941 = kk_internal_struct_show_1(body0, _ctx); /*string*/
    kk_string_t _x2942;
    kk_define_string_literal(, _s2943, 1, "}")
    _x2942 = kk_string_dup(_s2943); /*string*/
    _x2940 = kk_std_core__lp__plus__plus__1_rp_(_x2941, _x2942, _ctx); /*string*/
    _x2937 = kk_std_core__lp__plus__plus__1_rp_(_x2938, _x2940, _ctx); /*string*/
    _x2935 = kk_std_core__lp__plus__plus__1_rp_(_x2936, _x2937, _ctx); /*string*/
    _x2932 = kk_std_core__lp__plus__plus__1_rp_(_x2933, _x2935, _ctx); /*string*/
    _x2930 = kk_std_core__lp__plus__plus__1_rp_(_x2931, _x2932, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x2928, _x2930, _ctx);
  }
  {
    struct kk_internal_struct_Letrec* _con2944 = kk_internal_struct__as_Letrec(exp);
    kk_internal_struct__patern arg1 = _con2944->arg;
    kk_internal_struct__expression arg__val0 = _con2944->arg__val;
    kk_internal_struct__expression body1 = _con2944->body;
    if (kk_likely(kk_internal_struct__expression_is_unique(exp))) {
      kk_internal_struct__expression_free(exp, _ctx);
    }
    else {
      kk_internal_struct__patern_dup(arg1);
      kk_internal_struct__expression_dup(arg__val0);
      kk_internal_struct__expression_dup(body1);
      kk_internal_struct__expression_decref(exp, _ctx);
    }
    kk_string_t _x2945;
    kk_define_string_literal(, _s2946, 27, "LetRec expression: letRec \'")
    _x2945 = kk_string_dup(_s2946); /*string*/
    kk_string_t _x2947;
    kk_string_t _x2948 = kk_internal_struct_show(arg1, _ctx); /*string*/
    kk_string_t _x2949;
    kk_string_t _x2950;
    kk_define_string_literal(, _s2951, 6, "\' be {")
    _x2950 = kk_string_dup(_s2951); /*string*/
    kk_string_t _x2952;
    kk_string_t _x2953 = kk_internal_struct_show_1(arg__val0, _ctx); /*string*/
    kk_string_t _x2954;
    kk_string_t _x2955;
    kk_define_string_literal(, _s2956, 6, "} in {")
    _x2955 = kk_string_dup(_s2956); /*string*/
    kk_string_t _x2957;
    kk_string_t _x2958 = kk_internal_struct_show_1(body1, _ctx); /*string*/
    kk_string_t _x2959;
    kk_define_string_literal(, _s2960, 1, "}")
    _x2959 = kk_string_dup(_s2960); /*string*/
    _x2957 = kk_std_core__lp__plus__plus__1_rp_(_x2958, _x2959, _ctx); /*string*/
    _x2954 = kk_std_core__lp__plus__plus__1_rp_(_x2955, _x2957, _ctx); /*string*/
    _x2952 = kk_std_core__lp__plus__plus__1_rp_(_x2953, _x2954, _ctx); /*string*/
    _x2949 = kk_std_core__lp__plus__plus__1_rp_(_x2950, _x2952, _ctx); /*string*/
    _x2947 = kk_std_core__lp__plus__plus__1_rp_(_x2948, _x2949, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x2945, _x2947, _ctx);
  }
  {
    kk_internal_struct__expression_drop(exp, _ctx);
    kk_define_string_literal(, _s2961, 163, "Not a valid expression, note this should never be reached and is just here to catch possibly otherwise very obscure bugs that might be introduced in the future :-D")
    return kk_string_dup(_s2961);
  }
}
 
// monadic lift

kk_internal_struct__result kk_internal_struct__mlift2535_linter(kk_string_t name, kk_std_core_types__maybe _y_2503, kk_context_t* _ctx) { /* (name : string, maybe<expression>) -> <scope,console,div,exn> result */ 
  if (kk_std_core_types__is_Nothing(_y_2503)) {
    kk_string_t _x2962;
    kk_string_t _x2963;
    kk_define_string_literal(, _s2964, 10, "Variable \'")
    _x2963 = kk_string_dup(_s2964); /*string*/
    kk_string_t _x2965;
    kk_string_t _x2966;
    kk_define_string_literal(, _s2967, 14, "\' not in scope")
    _x2966 = kk_string_dup(_s2967); /*string*/
    _x2965 = kk_std_core__lp__plus__plus__1_rp_(name, _x2966, _ctx); /*string*/
    _x2962 = kk_std_core__lp__plus__plus__1_rp_(_x2963, _x2965, _ctx); /*string*/
    return kk_internal_struct__new_ResultError(_x2962, _ctx);
  }
  {
    kk_box_t _box_x2620 = _y_2503._cons.Just.value;
    kk_internal_struct__expression newval = kk_internal_struct__expression_unbox(_box_x2620, NULL);
    kk_string_drop(name, _ctx);
    return kk_internal_struct_linter(newval, _ctx);
  }
}
 
// monadic lift

kk_internal_struct__result kk_internal_struct__mlift2536_linter(kk_internal_struct__patern arg, kk_internal_struct__result _y_2506, kk_context_t* _ctx) { /* (arg : patern, result) -> <div,exn,scope,console> result */ 
  if (kk_internal_struct__is_ResultError(_y_2506)) {
    kk_string_t s = _y_2506._cons.ResultError.s;
    kk_internal_struct__patern_drop(arg, _ctx);
    return kk_internal_struct__new_ResultError(s, _ctx);
  }
  {
    kk_internal_struct__expression bd = _y_2506._cons.Value.exp;
    kk_internal_struct__expression _x2969 = kk_internal_struct__new_Lambda(kk_reuse_null, arg, bd, _ctx); /*internal/struct/expression*/
    return kk_internal_struct__new_Value(_x2969, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_internal_struct__mlift2537_linter_fun2971__t {
  struct kk_function_s _base;
};
static kk_string_t kk_internal_struct__mlift2537_linter_fun2971(kk_function_t _fself, kk_internal_struct__expression _x12970, kk_context_t* _ctx);
static kk_function_t kk_internal_struct__new_mlift2537_linter_fun2971(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_struct__mlift2537_linter_fun2971, _ctx)
  return kk_function_dup(_fself);
}

static kk_string_t kk_internal_struct__mlift2537_linter_fun2971(kk_function_t _fself, kk_internal_struct__expression _x12970, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_internal_struct_show_1(_x12970, _ctx);
}


// lift anonymous function
struct kk_internal_struct__mlift2537_linter_fun2977__t {
  struct kk_function_s _base;
  kk_function_t _b_2624_2621;
};
static kk_box_t kk_internal_struct__mlift2537_linter_fun2977(kk_function_t _fself, kk_box_t _b_2623, kk_context_t* _ctx);
static kk_function_t kk_internal_struct__new_mlift2537_linter_fun2977(kk_function_t _b_2624_2621, kk_context_t* _ctx) {
  struct kk_internal_struct__mlift2537_linter_fun2977__t* _self = kk_function_alloc_as(struct kk_internal_struct__mlift2537_linter_fun2977__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_struct__mlift2537_linter_fun2977, kk_context());
  _self->_b_2624_2621 = _b_2624_2621;
  return &_self->_base;
}

static kk_box_t kk_internal_struct__mlift2537_linter_fun2977(kk_function_t _fself, kk_box_t _b_2623, kk_context_t* _ctx) {
  struct kk_internal_struct__mlift2537_linter_fun2977__t* _self = kk_function_as(struct kk_internal_struct__mlift2537_linter_fun2977__t*, _fself);
  kk_function_t _b_2624_2621 = _self->_b_2624_2621; /* (exp : internal/struct/expression) -> total string */
  kk_drop_match(_self, {kk_function_dup(_b_2624_2621);}, {}, _ctx)
  kk_string_t _x2978;
  kk_internal_struct__expression _x2979 = kk_internal_struct__expression_unbox(_b_2623, _ctx); /*internal/struct/expression*/
  _x2978 = kk_function_call(kk_string_t, (kk_function_t, kk_internal_struct__expression, kk_context_t*), _b_2624_2621, (_b_2624_2621, _x2979, _ctx)); /*string*/
  return kk_string_box(_x2978);
}

kk_internal_struct__result kk_internal_struct__mlift2537_linter(kk_internal_struct__expression otherwise, kk_internal_struct__expression thus, kk_internal_struct__result _y_2507, kk_context_t* _ctx) { /* (otherwise : expression, thus : expression, result) -> <div,exn,scope,console> result */ 
  if (kk_internal_struct__is_ResultError(_y_2507)) {
    kk_string_t s0 = _y_2507._cons.ResultError.s;
    kk_internal_struct__expression_drop(thus, _ctx);
    kk_internal_struct__expression_drop(otherwise, _ctx);
    return kk_internal_struct__new_ResultError(s0, _ctx);
  }
  {
    kk_internal_struct__expression _pat8 = _y_2507._cons.Value.exp;
    if (kk_internal_struct__is_ETrue(_pat8)) {
      kk_internal_struct__expression_drop(otherwise, _ctx);
      kk_internal_struct__result_drop(_y_2507, _ctx);
      return kk_internal_struct_linter(thus, _ctx);
    }
  }
  {
    kk_internal_struct__expression _pat10 = _y_2507._cons.Value.exp;
    if (kk_internal_struct__is_EFalse(_pat10)) {
      kk_internal_struct__expression_drop(thus, _ctx);
      kk_internal_struct__result_drop(_y_2507, _ctx);
      return kk_internal_struct_linter(otherwise, _ctx);
    }
  }
  {
    kk_internal_struct__expression errval = _y_2507._cons.Value.exp;
    kk_internal_struct__expression_drop(thus, _ctx);
    kk_internal_struct__expression_drop(otherwise, _ctx);
    kk_function_t _b_2624_2621 = kk_internal_struct__new_mlift2537_linter_fun2971(_ctx); /*(exp : internal/struct/expression) -> total string*/;
    kk_internal_struct__expression _b_2625_2622 = errval; /*internal/struct/expression*/;
    kk_string_t _x2972;
    kk_string_t _x2973;
    kk_define_string_literal(, _s2974, 70, "Conditional part of if statement not of type boolean, instead it was: ")
    _x2973 = kk_string_dup(_s2974); /*string*/
    kk_string_t _x2975;
    kk_box_t _x2976 = kk_std_core_hnd__open_none1(kk_internal_struct__new_mlift2537_linter_fun2977(_b_2624_2621, _ctx), kk_internal_struct__expression_box(_b_2625_2622, _ctx), _ctx); /*1001*/
    _x2975 = kk_string_unbox(_x2976); /*string*/
    _x2972 = kk_std_core__lp__plus__plus__1_rp_(_x2973, _x2975, _ctx); /*string*/
    return kk_internal_struct__new_ResultError(_x2972, _ctx);
  }
}
 
// monadic lift

kk_internal_struct__result kk_internal_struct__mlift2538_linter(kk_internal_struct__expression nv1, kk_internal_struct__result _y_2512, kk_context_t* _ctx) { /* (nv1 : expression, result) -> <div,exn,scope,console> result */ 
  if (kk_internal_struct__is_ResultError(_y_2512)) {
    kk_string_t s2 = _y_2512._cons.ResultError.s;
    kk_internal_struct__expression_drop(nv1, _ctx);
    return kk_internal_struct__new_ResultError(s2, _ctx);
  }
  {
    kk_internal_struct__expression nv2 = _y_2512._cons.Value.exp;
    kk_internal_struct__expression _x2980 = kk_internal_struct__new_MLpair(kk_reuse_null, nv1, nv2, _ctx); /*internal/struct/expression*/
    return kk_internal_struct__new_Value(_x2980, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_internal_struct__mlift2539_linter_fun2982__t {
  struct kk_function_s _base;
  kk_internal_struct__expression nv10;
};
static kk_box_t kk_internal_struct__mlift2539_linter_fun2982(kk_function_t _fself, kk_box_t _b_2627, kk_context_t* _ctx);
static kk_function_t kk_internal_struct__new_mlift2539_linter_fun2982(kk_internal_struct__expression nv10, kk_context_t* _ctx) {
  struct kk_internal_struct__mlift2539_linter_fun2982__t* _self = kk_function_alloc_as(struct kk_internal_struct__mlift2539_linter_fun2982__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_struct__mlift2539_linter_fun2982, kk_context());
  _self->nv10 = nv10;
  return &_self->_base;
}

static kk_box_t kk_internal_struct__mlift2539_linter_fun2982(kk_function_t _fself, kk_box_t _b_2627, kk_context_t* _ctx) {
  struct kk_internal_struct__mlift2539_linter_fun2982__t* _self = kk_function_as(struct kk_internal_struct__mlift2539_linter_fun2982__t*, _fself);
  kk_internal_struct__expression nv10 = _self->nv10; /* internal/struct/expression */
  kk_drop_match(_self, {kk_internal_struct__expression_dup(nv10);}, {}, _ctx)
  kk_internal_struct__result _y_2629_25120 = kk_internal_struct__result_unbox(_b_2627, _ctx); /*internal/struct/result*/;
  kk_internal_struct__result _x2983 = kk_internal_struct__mlift2538_linter(nv10, _y_2629_25120, _ctx); /*internal/struct/result*/
  return kk_internal_struct__result_box(_x2983, _ctx);
}

kk_internal_struct__result kk_internal_struct__mlift2539_linter(kk_internal_struct__expression e2, kk_internal_struct__result _y_2511, kk_context_t* _ctx) { /* (e2 : expression, result) -> <div,exn,scope,console> result */ 
  if (kk_internal_struct__is_ResultError(_y_2511)) {
    kk_string_t s1 = _y_2511._cons.ResultError.s;
    kk_internal_struct__expression_drop(e2, _ctx);
    return kk_internal_struct__new_ResultError(s1, _ctx);
  }
  {
    kk_internal_struct__expression nv10 = _y_2511._cons.Value.exp;
    kk_internal_struct__result x_2547 = kk_internal_struct_linter(e2, _ctx); /*internal/struct/result*/;
    if (kk_yielding(kk_context())) {
      kk_internal_struct__result_drop(x_2547, _ctx);
      kk_box_t _x2981 = kk_std_core_hnd_yield_extend(kk_internal_struct__new_mlift2539_linter_fun2982(nv10, _ctx), _ctx); /*1001*/
      return kk_internal_struct__result_unbox(_x2981, _ctx);
    }
    {
      return kk_internal_struct__mlift2538_linter(nv10, x_2547, _ctx);
    }
  }
}


// lift anonymous function
struct kk_internal_struct_linter_fun2986__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_struct_linter_fun2986(kk_function_t _fself, kk_box_t _b_2641, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_linter_fun2986(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_struct_linter_fun2986, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_struct_linter_fun2986(kk_function_t _fself, kk_box_t _b_2641, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_2552;
  kk_ssize_t _x2987 = (KK_IZ(0)); /*ssize_t*/
  ev_2552 = kk_evv_at(_x2987,kk_context()); /*std/core/hnd/ev<internal/struct/.hnd-scope>*/
  {
    struct kk_std_core_hnd_Ev* _con2988 = kk_std_core_hnd__as_Ev(ev_2552);
    kk_std_core_hnd__marker m0 = _con2988->marker;
    kk_box_t _box_x2630 = _con2988->hnd;
    kk_internal_struct__hnd_scope h = kk_internal_struct__hnd_scope_unbox(_box_x2630, NULL);
    kk_internal_struct__hnd_scope_dup(h);
    kk_std_core_hnd__clause1 _match_2802;
    kk_std_core_hnd__clause1 _brw_2803 = kk_internal_struct__select_get(h, _ctx); /*std/core/hnd/clause1<string,maybe<internal/struct/expression>,internal/struct/.hnd-scope,308,309>*/;
    kk_internal_struct__hnd_scope_drop(h, _ctx);
    _match_2802 = _brw_2803; /*std/core/hnd/clause1<string,maybe<internal/struct/expression>,internal/struct/.hnd-scope,308,309>*/
    {
      kk_function_t _fun_unbox_x2634 = _match_2802.clause;
      return kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x2634, (_fun_unbox_x2634, m0, ev_2552, _b_2641, _ctx));
    }
  }
}


// lift anonymous function
struct kk_internal_struct_linter_fun2993__t {
  struct kk_function_s _base;
  kk_string_t name0;
};
static kk_box_t kk_internal_struct_linter_fun2993(kk_function_t _fself, kk_box_t _b_2647, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_linter_fun2993(kk_string_t name0, kk_context_t* _ctx) {
  struct kk_internal_struct_linter_fun2993__t* _self = kk_function_alloc_as(struct kk_internal_struct_linter_fun2993__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_struct_linter_fun2993, kk_context());
  _self->name0 = name0;
  return &_self->_base;
}

static kk_box_t kk_internal_struct_linter_fun2993(kk_function_t _fself, kk_box_t _b_2647, kk_context_t* _ctx) {
  struct kk_internal_struct_linter_fun2993__t* _self = kk_function_as(struct kk_internal_struct_linter_fun2993__t*, _fself);
  kk_string_t name0 = _self->name0; /* string */
  kk_drop_match(_self, {kk_string_dup(name0);}, {}, _ctx)
  kk_std_core_types__maybe _y_2667_25030 = kk_std_core_types__maybe_unbox(_b_2647, _ctx); /*maybe<internal/struct/expression>*/;
  kk_internal_struct__result _x2994 = kk_internal_struct__mlift2535_linter(name0, _y_2667_25030, _ctx); /*internal/struct/result*/
  return kk_internal_struct__result_box(_x2994, _ctx);
}


// lift anonymous function
struct kk_internal_struct_linter_fun3004__t {
  struct kk_function_s _base;
  kk_internal_struct__patern arg0;
};
static kk_box_t kk_internal_struct_linter_fun3004(kk_function_t _fself, kk_box_t _b_2650, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_linter_fun3004(kk_internal_struct__patern arg0, kk_context_t* _ctx) {
  struct kk_internal_struct_linter_fun3004__t* _self = kk_function_alloc_as(struct kk_internal_struct_linter_fun3004__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_struct_linter_fun3004, kk_context());
  _self->arg0 = arg0;
  return &_self->_base;
}

static kk_box_t kk_internal_struct_linter_fun3004(kk_function_t _fself, kk_box_t _b_2650, kk_context_t* _ctx) {
  struct kk_internal_struct_linter_fun3004__t* _self = kk_function_as(struct kk_internal_struct_linter_fun3004__t*, _fself);
  kk_internal_struct__patern arg0 = _self->arg0; /* internal/struct/patern */
  kk_drop_match(_self, {kk_internal_struct__patern_dup(arg0);}, {}, _ctx)
  kk_internal_struct__result _y_2668_25060 = kk_internal_struct__result_unbox(_b_2650, _ctx); /*internal/struct/result*/;
  kk_internal_struct__result _x3005 = kk_internal_struct__mlift2536_linter(arg0, _y_2668_25060, _ctx); /*internal/struct/result*/
  return kk_internal_struct__result_box(_x3005, _ctx);
}


// lift anonymous function
struct kk_internal_struct_linter_fun3010__t {
  struct kk_function_s _base;
  kk_internal_struct__expression otherwise0;
  kk_internal_struct__expression thus0;
};
static kk_box_t kk_internal_struct_linter_fun3010(kk_function_t _fself, kk_box_t _b_2652, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_linter_fun3010(kk_internal_struct__expression otherwise0, kk_internal_struct__expression thus0, kk_context_t* _ctx) {
  struct kk_internal_struct_linter_fun3010__t* _self = kk_function_alloc_as(struct kk_internal_struct_linter_fun3010__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_struct_linter_fun3010, kk_context());
  _self->otherwise0 = otherwise0;
  _self->thus0 = thus0;
  return &_self->_base;
}

static kk_box_t kk_internal_struct_linter_fun3010(kk_function_t _fself, kk_box_t _b_2652, kk_context_t* _ctx) {
  struct kk_internal_struct_linter_fun3010__t* _self = kk_function_as(struct kk_internal_struct_linter_fun3010__t*, _fself);
  kk_internal_struct__expression otherwise0 = _self->otherwise0; /* internal/struct/expression */
  kk_internal_struct__expression thus0 = _self->thus0; /* internal/struct/expression */
  kk_drop_match(_self, {kk_internal_struct__expression_dup(otherwise0);kk_internal_struct__expression_dup(thus0);}, {}, _ctx)
  kk_internal_struct__result _y_2669_25070 = kk_internal_struct__result_unbox(_b_2652, _ctx); /*internal/struct/result*/;
  kk_internal_struct__result _x3011 = kk_internal_struct__mlift2537_linter(otherwise0, thus0, _y_2669_25070, _ctx); /*internal/struct/result*/
  return kk_internal_struct__result_box(_x3011, _ctx);
}


// lift anonymous function
struct kk_internal_struct_linter_fun3013__t {
  struct kk_function_s _base;
};
static kk_string_t kk_internal_struct_linter_fun3013(kk_function_t _fself, kk_internal_struct__expression _x13012, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_linter_fun3013(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_struct_linter_fun3013, _ctx)
  return kk_function_dup(_fself);
}

static kk_string_t kk_internal_struct_linter_fun3013(kk_function_t _fself, kk_internal_struct__expression _x13012, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_internal_struct_show_1(_x13012, _ctx);
}


// lift anonymous function
struct kk_internal_struct_linter_fun3019__t {
  struct kk_function_s _base;
  kk_function_t _b_2663_2653;
};
static kk_box_t kk_internal_struct_linter_fun3019(kk_function_t _fself, kk_box_t _b_2655, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_linter_fun3019(kk_function_t _b_2663_2653, kk_context_t* _ctx) {
  struct kk_internal_struct_linter_fun3019__t* _self = kk_function_alloc_as(struct kk_internal_struct_linter_fun3019__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_struct_linter_fun3019, kk_context());
  _self->_b_2663_2653 = _b_2663_2653;
  return &_self->_base;
}

static kk_box_t kk_internal_struct_linter_fun3019(kk_function_t _fself, kk_box_t _b_2655, kk_context_t* _ctx) {
  struct kk_internal_struct_linter_fun3019__t* _self = kk_function_as(struct kk_internal_struct_linter_fun3019__t*, _fself);
  kk_function_t _b_2663_2653 = _self->_b_2663_2653; /* (exp : internal/struct/expression) -> total string */
  kk_drop_match(_self, {kk_function_dup(_b_2663_2653);}, {}, _ctx)
  kk_string_t _x3020;
  kk_internal_struct__expression _x3021 = kk_internal_struct__expression_unbox(_b_2655, _ctx); /*internal/struct/expression*/
  _x3020 = kk_function_call(kk_string_t, (kk_function_t, kk_internal_struct__expression, kk_context_t*), _b_2663_2653, (_b_2663_2653, _x3021, _ctx)); /*string*/
  return kk_string_box(_x3020);
}


// lift anonymous function
struct kk_internal_struct_linter_fun3024__t {
  struct kk_function_s _base;
  kk_internal_struct__expression e20;
};
static kk_box_t kk_internal_struct_linter_fun3024(kk_function_t _fself, kk_box_t _b_2657, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_linter_fun3024(kk_internal_struct__expression e20, kk_context_t* _ctx) {
  struct kk_internal_struct_linter_fun3024__t* _self = kk_function_alloc_as(struct kk_internal_struct_linter_fun3024__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_struct_linter_fun3024, kk_context());
  _self->e20 = e20;
  return &_self->_base;
}

static kk_box_t kk_internal_struct_linter_fun3024(kk_function_t _fself, kk_box_t _b_2657, kk_context_t* _ctx) {
  struct kk_internal_struct_linter_fun3024__t* _self = kk_function_as(struct kk_internal_struct_linter_fun3024__t*, _fself);
  kk_internal_struct__expression e20 = _self->e20; /* internal/struct/expression */
  kk_drop_match(_self, {kk_internal_struct__expression_dup(e20);}, {}, _ctx)
  kk_internal_struct__result _y_2670_25110 = kk_internal_struct__result_unbox(_b_2657, _ctx); /*internal/struct/result*/;
  kk_internal_struct__result _x3025 = kk_internal_struct__mlift2539_linter(e20, _y_2670_25110, _ctx); /*internal/struct/result*/
  return kk_internal_struct__result_box(_x3025, _ctx);
}


// lift anonymous function
struct kk_internal_struct_linter_fun3027__t {
  struct kk_function_s _base;
  kk_internal_struct__expression nv11;
};
static kk_box_t kk_internal_struct_linter_fun3027(kk_function_t _fself, kk_box_t _b_2659, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_linter_fun3027(kk_internal_struct__expression nv11, kk_context_t* _ctx) {
  struct kk_internal_struct_linter_fun3027__t* _self = kk_function_alloc_as(struct kk_internal_struct_linter_fun3027__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_struct_linter_fun3027, kk_context());
  _self->nv11 = nv11;
  return &_self->_base;
}

static kk_box_t kk_internal_struct_linter_fun3027(kk_function_t _fself, kk_box_t _b_2659, kk_context_t* _ctx) {
  struct kk_internal_struct_linter_fun3027__t* _self = kk_function_as(struct kk_internal_struct_linter_fun3027__t*, _fself);
  kk_internal_struct__expression nv11 = _self->nv11; /* internal/struct/expression */
  kk_drop_match(_self, {kk_internal_struct__expression_dup(nv11);}, {}, _ctx)
  kk_internal_struct__result _y_2671_25121 = kk_internal_struct__result_unbox(_b_2659, _ctx); /*internal/struct/result*/;
  kk_internal_struct__result _x3028 = kk_internal_struct__mlift2538_linter(nv11, _y_2671_25121, _ctx); /*internal/struct/result*/
  return kk_internal_struct__result_box(_x3028, _ctx);
}

kk_internal_struct__result kk_internal_struct_linter(kk_internal_struct__expression inp, kk_context_t* _ctx) { /* (inp : expression) -> <pure,console,scope> result */ 
  kk__tailcall: ;
  if (kk_internal_struct__is_Variable(inp)) {
    struct kk_internal_struct_Variable* _con2984 = kk_internal_struct__as_Variable(inp);
    kk_string_t name0 = _con2984->name;
    if (kk_likely(kk_internal_struct__expression_is_unique(inp))) {
      kk_internal_struct__expression_free(inp, _ctx);
    }
    else {
      kk_string_dup(name0);
      kk_internal_struct__expression_decref(inp, _ctx);
    }
    kk_ssize_t _b_2642_2638 = (KK_IZ(1)); /*std/core/hnd/ev-index*/;
    kk_std_core_types__maybe x0_2549;
    kk_box_t _x2985;
    kk_box_t _x2990;
    kk_string_t _x2991 = kk_string_dup(name0); /*string*/
    _x2990 = kk_string_box(_x2991); /*1000*/
    _x2985 = kk_std_core_hnd__open_at1(_b_2642_2638, kk_internal_struct_new_linter_fun2986(_ctx), _x2990, _ctx); /*1001*/
    x0_2549 = kk_std_core_types__maybe_unbox(_x2985, _ctx); /*maybe<internal/struct/expression>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x0_2549, _ctx);
      kk_box_t _x2992 = kk_std_core_hnd_yield_extend(kk_internal_struct_new_linter_fun2993(name0, _ctx), _ctx); /*1001*/
      return kk_internal_struct__result_unbox(_x2992, _ctx);
    }
    if (kk_std_core_types__is_Nothing(x0_2549)) {
      kk_string_t _x2995;
      kk_string_t _x2996;
      kk_define_string_literal(, _s2997, 10, "Variable \'")
      _x2996 = kk_string_dup(_s2997); /*string*/
      kk_string_t _x2998;
      kk_string_t _x2999;
      kk_define_string_literal(, _s3000, 14, "\' not in scope")
      _x2999 = kk_string_dup(_s3000); /*string*/
      _x2998 = kk_std_core__lp__plus__plus__1_rp_(name0, _x2999, _ctx); /*string*/
      _x2995 = kk_std_core__lp__plus__plus__1_rp_(_x2996, _x2998, _ctx); /*string*/
      return kk_internal_struct__new_ResultError(_x2995, _ctx);
    }
    {
      kk_box_t _box_x2648 = x0_2549._cons.Just.value;
      kk_internal_struct__expression newval0 = kk_internal_struct__expression_unbox(_box_x2648, NULL);
      kk_string_drop(name0, _ctx);
      { // tailcall
        inp = newval0;
        goto kk__tailcall;
      }
    }
  }
  if (kk_internal_struct__is_Lambda(inp)) {
    struct kk_internal_struct_Lambda* _con3002 = kk_internal_struct__as_Lambda(inp);
    kk_internal_struct__patern arg0 = _con3002->arg;
    kk_internal_struct__expression body = _con3002->body;
    kk_reuse_t _ru_2818 = kk_reuse_null; /*reuse*/;
    if (kk_likely(kk_internal_struct__expression_is_unique(inp))) {
      _ru_2818 = (kk_internal_struct__expression_reuse(inp));
    }
    else {
      kk_internal_struct__patern_dup(arg0);
      kk_internal_struct__expression_dup(body);
      kk_internal_struct__expression_decref(inp, _ctx);
    }
    kk_internal_struct__result x2_2555 = kk_internal_struct_linter(body, _ctx); /*internal/struct/result*/;
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_2818,kk_context());
      kk_internal_struct__result_drop(x2_2555, _ctx);
      kk_box_t _x3003 = kk_std_core_hnd_yield_extend(kk_internal_struct_new_linter_fun3004(arg0, _ctx), _ctx); /*1001*/
      return kk_internal_struct__result_unbox(_x3003, _ctx);
    }
    if (kk_internal_struct__is_ResultError(x2_2555)) {
      kk_string_t s3 = x2_2555._cons.ResultError.s;
      kk_reuse_drop(_ru_2818,kk_context());
      kk_internal_struct__patern_drop(arg0, _ctx);
      return kk_internal_struct__new_ResultError(s3, _ctx);
    }
    {
      kk_internal_struct__expression bd0 = x2_2555._cons.Value.exp;
      kk_internal_struct__expression _x3006;
      if (kk_likely(_ru_2818!=NULL)) {
        struct kk_internal_struct_Lambda* _con3007 = (struct kk_internal_struct_Lambda*)_ru_2818;
        _con3007->body = bd0;
        _x3006 = kk_internal_struct__base_Lambda(_con3007); /*internal/struct/expression*/
      }
      else {
        _x3006 = kk_internal_struct__new_Lambda(kk_reuse_null, arg0, bd0, _ctx); /*internal/struct/expression*/
      }
      return kk_internal_struct__new_Value(_x3006, _ctx);
    }
  }
  if (kk_internal_struct__is_If(inp)) {
    struct kk_internal_struct_If* _con3008 = kk_internal_struct__as_If(inp);
    kk_internal_struct__expression cond = _con3008->cond;
    kk_internal_struct__expression thus0 = _con3008->thus;
    kk_internal_struct__expression otherwise0 = _con3008->otherwise;
    if (kk_likely(kk_internal_struct__expression_is_unique(inp))) {
      kk_internal_struct__expression_free(inp, _ctx);
    }
    else {
      kk_internal_struct__expression_dup(cond);
      kk_internal_struct__expression_dup(otherwise0);
      kk_internal_struct__expression_dup(thus0);
      kk_internal_struct__expression_decref(inp, _ctx);
    }
    kk_internal_struct__result x3_2558 = kk_internal_struct_linter(cond, _ctx); /*internal/struct/result*/;
    if (kk_yielding(kk_context())) {
      kk_internal_struct__result_drop(x3_2558, _ctx);
      kk_box_t _x3009 = kk_std_core_hnd_yield_extend(kk_internal_struct_new_linter_fun3010(otherwise0, thus0, _ctx), _ctx); /*1001*/
      return kk_internal_struct__result_unbox(_x3009, _ctx);
    }
    if (kk_internal_struct__is_ResultError(x3_2558)) {
      kk_string_t s00 = x3_2558._cons.ResultError.s;
      kk_internal_struct__expression_drop(thus0, _ctx);
      kk_internal_struct__expression_drop(otherwise0, _ctx);
      return kk_internal_struct__new_ResultError(s00, _ctx);
    }
    {
      kk_internal_struct__expression _pat80 = x3_2558._cons.Value.exp;
      if (kk_internal_struct__is_ETrue(_pat80)) {
        kk_internal_struct__result_drop(x3_2558, _ctx);
        kk_internal_struct__expression_drop(otherwise0, _ctx);
        { // tailcall
          inp = thus0;
          goto kk__tailcall;
        }
      }
    }
    {
      kk_internal_struct__expression _pat100 = x3_2558._cons.Value.exp;
      if (kk_internal_struct__is_EFalse(_pat100)) {
        kk_internal_struct__result_drop(x3_2558, _ctx);
        kk_internal_struct__expression_drop(thus0, _ctx);
        { // tailcall
          inp = otherwise0;
          goto kk__tailcall;
        }
      }
    }
    {
      kk_internal_struct__expression errval0 = x3_2558._cons.Value.exp;
      kk_internal_struct__expression_drop(thus0, _ctx);
      kk_internal_struct__expression_drop(otherwise0, _ctx);
      kk_function_t _b_2663_2653 = kk_internal_struct_new_linter_fun3013(_ctx); /*(exp : internal/struct/expression) -> total string*/;
      kk_internal_struct__expression _b_2664_2654 = errval0; /*internal/struct/expression*/;
      kk_string_t _x3014;
      kk_string_t _x3015;
      kk_define_string_literal(, _s3016, 70, "Conditional part of if statement not of type boolean, instead it was: ")
      _x3015 = kk_string_dup(_s3016); /*string*/
      kk_string_t _x3017;
      kk_box_t _x3018 = kk_std_core_hnd__open_none1(kk_internal_struct_new_linter_fun3019(_b_2663_2653, _ctx), kk_internal_struct__expression_box(_b_2664_2654, _ctx), _ctx); /*1001*/
      _x3017 = kk_string_unbox(_x3018); /*string*/
      _x3014 = kk_std_core__lp__plus__plus__1_rp_(_x3015, _x3017, _ctx); /*string*/
      return kk_internal_struct__new_ResultError(_x3014, _ctx);
    }
  }
  if (kk_internal_struct__is_MLpair(inp)) {
    struct kk_internal_struct_MLpair* _con3022 = kk_internal_struct__as_MLpair(inp);
    kk_internal_struct__expression e1 = _con3022->e1;
    kk_internal_struct__expression e20 = _con3022->e2;
    kk_reuse_t _ru_2820 = kk_reuse_null; /*reuse*/;
    if (kk_likely(kk_internal_struct__expression_is_unique(inp))) {
      _ru_2820 = (kk_internal_struct__expression_reuse(inp));
    }
    else {
      kk_internal_struct__expression_dup(e1);
      kk_internal_struct__expression_dup(e20);
      kk_internal_struct__expression_decref(inp, _ctx);
    }
    kk_internal_struct__result x4_2561 = kk_internal_struct_linter(e1, _ctx); /*internal/struct/result*/;
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_2820,kk_context());
      kk_internal_struct__result_drop(x4_2561, _ctx);
      kk_box_t _x3023 = kk_std_core_hnd_yield_extend(kk_internal_struct_new_linter_fun3024(e20, _ctx), _ctx); /*1001*/
      return kk_internal_struct__result_unbox(_x3023, _ctx);
    }
    if (kk_internal_struct__is_ResultError(x4_2561)) {
      kk_string_t s10 = x4_2561._cons.ResultError.s;
      kk_reuse_drop(_ru_2820,kk_context());
      kk_internal_struct__expression_drop(e20, _ctx);
      return kk_internal_struct__new_ResultError(s10, _ctx);
    }
    {
      kk_internal_struct__expression nv11 = x4_2561._cons.Value.exp;
      kk_internal_struct__result x5_2564 = kk_internal_struct_linter(e20, _ctx); /*internal/struct/result*/;
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_2820,kk_context());
        kk_internal_struct__result_drop(x5_2564, _ctx);
        kk_box_t _x3026 = kk_std_core_hnd_yield_extend(kk_internal_struct_new_linter_fun3027(nv11, _ctx), _ctx); /*1001*/
        return kk_internal_struct__result_unbox(_x3026, _ctx);
      }
      if (kk_internal_struct__is_ResultError(x5_2564)) {
        kk_string_t s20 = x5_2564._cons.ResultError.s;
        kk_reuse_drop(_ru_2820,kk_context());
        kk_internal_struct__expression_drop(nv11, _ctx);
        return kk_internal_struct__new_ResultError(s20, _ctx);
      }
      {
        kk_internal_struct__expression nv20 = x5_2564._cons.Value.exp;
        kk_internal_struct__expression _x3029;
        if (kk_likely(_ru_2820!=NULL)) {
          struct kk_internal_struct_MLpair* _con3030 = (struct kk_internal_struct_MLpair*)_ru_2820;
          _con3030->e1 = nv11;
          _con3030->e2 = nv20;
          _x3029 = kk_internal_struct__base_MLpair(_con3030); /*internal/struct/expression*/
        }
        else {
          _x3029 = kk_internal_struct__new_MLpair(kk_reuse_null, nv11, nv20, _ctx); /*internal/struct/expression*/
        }
        return kk_internal_struct__new_Value(_x3029, _ctx);
      }
    }
  }
  if (kk_internal_struct__is_Apply(inp)) {
    struct kk_internal_struct_Apply* _con3031 = kk_internal_struct__as_Apply(inp);
    kk_internal_struct__expression e10 = _con3031->e1;
    kk_internal_struct__expression e200 = _con3031->e2;
    if (kk_likely(kk_internal_struct__expression_is_unique(inp))) {
      kk_internal_struct__expression_drop(e200, _ctx);
      kk_internal_struct__expression_drop(e10, _ctx);
      kk_internal_struct__expression_free(inp, _ctx);
    }
    else {
      kk_internal_struct__expression_decref(inp, _ctx);
    }
    return kk_internal_struct__new_Value(kk_internal_struct__new_EFalse(_ctx), _ctx);
  }
  if (kk_internal_struct__is_Let(inp)) {
    struct kk_internal_struct_Let* _con3032 = kk_internal_struct__as_Let(inp);
    kk_internal_struct__patern arg00 = _con3032->arg;
    kk_internal_struct__expression arg__val = _con3032->arg__val;
    kk_internal_struct__expression body0 = _con3032->body;
    if (kk_likely(kk_internal_struct__expression_is_unique(inp))) {
      kk_internal_struct__expression_drop(body0, _ctx);
      kk_internal_struct__expression_drop(arg__val, _ctx);
      kk_internal_struct__patern_drop(arg00, _ctx);
      kk_internal_struct__expression_free(inp, _ctx);
    }
    else {
      kk_internal_struct__expression_decref(inp, _ctx);
    }
    return kk_internal_struct__new_Value(kk_internal_struct__new_EFalse(_ctx), _ctx);
  }
  if (kk_internal_struct__is_Letrec(inp)) {
    struct kk_internal_struct_Letrec* _con3033 = kk_internal_struct__as_Letrec(inp);
    kk_internal_struct__patern arg1 = _con3033->arg;
    kk_internal_struct__expression arg__val0 = _con3033->arg__val;
    kk_internal_struct__expression body1 = _con3033->body;
    if (kk_likely(kk_internal_struct__expression_is_unique(inp))) {
      kk_internal_struct__expression_drop(body1, _ctx);
      kk_internal_struct__expression_drop(arg__val0, _ctx);
      kk_internal_struct__patern_drop(arg1, _ctx);
      kk_internal_struct__expression_free(inp, _ctx);
    }
    else {
      kk_internal_struct__expression_decref(inp, _ctx);
    }
    return kk_internal_struct__new_Value(kk_internal_struct__new_EFalse(_ctx), _ctx);
  }
  {
    return kk_internal_struct__new_Value(inp, _ctx);
  }
}
 
// monadic lift

kk_unit_t kk_internal_struct__mlift2540_scope__handeler(kk_internal_struct__expression elem, kk_string_t name, kk_ref_t scopeState, kk_std_core__list _y_2516, kk_context_t* _ctx) { /* forall<h,e> (elem : expression, name : string, scopeState : local-var<h,list<(string, expression)>>, list<(string, expression)>) -> <local<h>|e> () */ 
  kk_unit_t _brw_2794 = kk_Unit;
  kk_box_t _x3038;
  kk_std_core__list _x3039;
  kk_box_t _x3040;
  kk_std_core_types__tuple2_ _x3041 = kk_std_core_types__new_dash__lp__comma__rp_(kk_string_box(name), kk_internal_struct__expression_box(elem, _ctx), _ctx); /*(1004, 1005)*/
  _x3040 = kk_std_core_types__tuple2__box(_x3041, _ctx); /*1009*/
  _x3039 = kk_std_core__new_Cons(kk_reuse_null, _x3040, _y_2516, _ctx); /*list<1009>*/
  _x3038 = kk_std_core__list_box(_x3039, _ctx); /*1000*/
  kk_ref_set_borrow(scopeState,_x3038,kk_context());
  kk_ref_drop(scopeState, _ctx);
  _brw_2794; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_internal_struct__mlift2541_scope__handeler_fun3042__t {
  struct kk_function_s _base;
  kk_string_t name0;
};
static kk_std_core_types__maybe kk_internal_struct__mlift2541_scope__handeler_fun3042(kk_function_t _fself, kk_box_t _b_2701, kk_context_t* _ctx);
static kk_function_t kk_internal_struct__new_mlift2541_scope__handeler_fun3042(kk_string_t name0, kk_context_t* _ctx) {
  struct kk_internal_struct__mlift2541_scope__handeler_fun3042__t* _self = kk_function_alloc_as(struct kk_internal_struct__mlift2541_scope__handeler_fun3042__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_struct__mlift2541_scope__handeler_fun3042, kk_context());
  _self->name0 = name0;
  return &_self->_base;
}

static kk_std_core_types__maybe kk_internal_struct__mlift2541_scope__handeler_fun3042(kk_function_t _fself, kk_box_t _b_2701, kk_context_t* _ctx) {
  struct kk_internal_struct__mlift2541_scope__handeler_fun3042__t* _self = kk_function_as(struct kk_internal_struct__mlift2541_scope__handeler_fun3042__t*, _fself);
  kk_string_t name0 = _self->name0; /* string */
  kk_drop_match(_self, {kk_string_dup(name0);}, {}, _ctx)
  bool _match_2791;
  kk_string_t _x3043;
  kk_std_core_types__tuple2_ _match_2793;
  kk_box_t _x3044 = kk_box_dup(_b_2701); /*1001*/
  _match_2793 = kk_std_core_types__tuple2__unbox(_x3044, _ctx); /*(string, internal/struct/expression)*/
  {
    kk_box_t _box_x2694 = _match_2793.fst;
    kk_box_t _box_x2695 = _match_2793.snd;
    kk_string_t _x = kk_string_unbox(_box_x2694);
    kk_string_dup(_x);
    kk_std_core_types__tuple2__drop(_match_2793, _ctx);
    _x3043 = _x; /*string*/
  }
  _match_2791 = kk_string_is_eq(_x3043,name0,kk_context()); /*bool*/
  if (_match_2791) {
    kk_box_t _x3047;
    kk_internal_struct__expression _x3048;
    kk_std_core_types__tuple2_ _match_2792 = kk_std_core_types__tuple2__unbox(_b_2701, _ctx); /*(string, internal/struct/expression)*/;
    {
      kk_box_t _box_x2696 = _match_2792.fst;
      kk_box_t _box_x2697 = _match_2792.snd;
      kk_internal_struct__expression _x0 = kk_internal_struct__expression_unbox(_box_x2697, NULL);
      kk_internal_struct__expression_dup(_x0);
      kk_std_core_types__tuple2__drop(_match_2792, _ctx);
      _x3048 = _x0; /*internal/struct/expression*/
    }
    _x3047 = kk_internal_struct__expression_box(_x3048, _ctx); /*1034*/
    return kk_std_core_types__new_Just(_x3047, _ctx);
  }
  {
    kk_box_drop(_b_2701, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_std_core_types__maybe kk_internal_struct__mlift2541_scope__handeler(kk_string_t name0, kk_std_core__list _y_2518, kk_context_t* _ctx) { /* forall<h,e> (name0 : string, list<(string, expression)>) -> <local<h>|e> maybe<expression> */ 
  return kk_std_core_find_maybe(_y_2518, kk_internal_struct__new_mlift2541_scope__handeler_fun3042(name0, _ctx), _ctx);
}


// lift anonymous function
struct kk_internal_struct_scope__handeler_fun3054__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_internal_struct_scope__handeler_fun3054(kk_function_t _fself, kk_std_core_hnd__marker _b_2725, kk_std_core_hnd__ev _b_2726, kk_box_t _b_2727, kk_box_t _b_2728, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_scope__handeler_fun3054(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_internal_struct_scope__handeler_fun3054__t* _self = kk_function_alloc_as(struct kk_internal_struct_scope__handeler_fun3054__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_struct_scope__handeler_fun3054, kk_context());
  _self->loc = loc;
  return &_self->_base;
}



// lift anonymous function
struct kk_internal_struct_scope__handeler_fun3057__t {
  struct kk_function_s _base;
  kk_box_t _b_2727;
  kk_box_t _b_2728;
  kk_ref_t loc;
};
static kk_unit_t kk_internal_struct_scope__handeler_fun3057(kk_function_t _fself, kk_std_core__list _y_2516, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_scope__handeler_fun3057(kk_box_t _b_2727, kk_box_t _b_2728, kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_internal_struct_scope__handeler_fun3057__t* _self = kk_function_alloc_as(struct kk_internal_struct_scope__handeler_fun3057__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_struct_scope__handeler_fun3057, kk_context());
  _self->_b_2727 = _b_2727;
  _self->_b_2728 = _b_2728;
  _self->loc = loc;
  return &_self->_base;
}

static kk_unit_t kk_internal_struct_scope__handeler_fun3057(kk_function_t _fself, kk_std_core__list _y_2516, kk_context_t* _ctx) {
  struct kk_internal_struct_scope__handeler_fun3057__t* _self = kk_function_as(struct kk_internal_struct_scope__handeler_fun3057__t*, _fself);
  kk_box_t _b_2727 = _self->_b_2727; /* 1021 */
  kk_box_t _b_2728 = _self->_b_2728; /* 1022 */
  kk_ref_t loc = _self->loc; /* local-var<2322,list<(string, internal/struct/expression)>> */
  kk_drop_match(_self, {kk_box_dup(_b_2727);kk_box_dup(_b_2728);kk_ref_dup(loc);}, {}, _ctx)
  kk_unit_t _brw_2790 = kk_Unit;
  kk_box_t _x3058;
  kk_std_core__list _x3059;
  kk_box_t _x3060;
  kk_std_core_types__tuple2_ _x3061 = kk_std_core_types__new_dash__lp__comma__rp_(_b_2727, _b_2728, _ctx); /*(1004, 1005)*/
  _x3060 = kk_std_core_types__tuple2__box(_x3061, _ctx); /*1009*/
  _x3059 = kk_std_core__new_Cons(kk_reuse_null, _x3060, _y_2516, _ctx); /*list<1009>*/
  _x3058 = kk_std_core__list_box(_x3059, _ctx); /*1000*/
  kk_ref_set_borrow(loc,_x3058,kk_context());
  kk_ref_drop(loc, _ctx);
  return _brw_2790;
}


// lift anonymous function
struct kk_internal_struct_scope__handeler_fun3064__t {
  struct kk_function_s _base;
  kk_function_t next_2575;
};
static kk_box_t kk_internal_struct_scope__handeler_fun3064(kk_function_t _fself, kk_box_t _b_2723, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_scope__handeler_fun3064(kk_function_t next_2575, kk_context_t* _ctx) {
  struct kk_internal_struct_scope__handeler_fun3064__t* _self = kk_function_alloc_as(struct kk_internal_struct_scope__handeler_fun3064__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_struct_scope__handeler_fun3064, kk_context());
  _self->next_2575 = next_2575;
  return &_self->_base;
}

static kk_box_t kk_internal_struct_scope__handeler_fun3064(kk_function_t _fself, kk_box_t _b_2723, kk_context_t* _ctx) {
  struct kk_internal_struct_scope__handeler_fun3064__t* _self = kk_function_as(struct kk_internal_struct_scope__handeler_fun3064__t*, _fself);
  kk_function_t next_2575 = _self->next_2575; /* (list<(string, internal/struct/expression)>) -> <local<2322>|2329> () */
  kk_drop_match(_self, {kk_function_dup(next_2575);}, {}, _ctx)
  kk_unit_t _x3065 = kk_Unit;
  kk_std_core__list _x3066 = kk_std_core__list_unbox(_b_2723, _ctx); /*list<(string, internal/struct/expression)>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core__list, kk_context_t*), next_2575, (next_2575, _x3066, _ctx));
  return kk_unit_box(_x3065);
}
static kk_box_t kk_internal_struct_scope__handeler_fun3054(kk_function_t _fself, kk_std_core_hnd__marker _b_2725, kk_std_core_hnd__ev _b_2726, kk_box_t _b_2727, kk_box_t _b_2728, kk_context_t* _ctx) {
  struct kk_internal_struct_scope__handeler_fun3054__t* _self = kk_function_as(struct kk_internal_struct_scope__handeler_fun3054__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<2322,list<(string, internal/struct/expression)>> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_std_core_hnd__ev_dropn(_b_2726, (KK_I32(3)), _ctx);
  kk_std_core__list x_2574;
  kk_box_t _x3055;
  kk_ref_t _x3056 = kk_ref_dup(loc); /*local-var<2322,list<(string, internal/struct/expression)>>*/
  _x3055 = kk_ref_get(_x3056,kk_context()); /*1000*/
  x_2574 = kk_std_core__list_unbox(_x3055, _ctx); /*list<(string, internal/struct/expression)>*/
  kk_function_t next_2575 = kk_internal_struct_new_scope__handeler_fun3057(_b_2727, _b_2728, loc, _ctx); /*(list<(string, internal/struct/expression)>) -> <local<2322>|2329> ()*/;
  kk_unit_t _x3062 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_2574, _ctx);
    kk_box_t _x3063 = kk_std_core_hnd_yield_extend(kk_internal_struct_new_scope__handeler_fun3064(next_2575, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x3063);
  }
  else {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core__list, kk_context_t*), next_2575, (next_2575, x_2574, _ctx));
  }
  return kk_unit_box(_x3062);
}


// lift anonymous function
struct kk_internal_struct_scope__handeler_fun3069__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_internal_struct_scope__handeler_fun3069(kk_function_t _fself, kk_std_core_hnd__marker _b_2746, kk_std_core_hnd__ev _b_2747, kk_box_t _b_2748, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_scope__handeler_fun3069(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_internal_struct_scope__handeler_fun3069__t* _self = kk_function_alloc_as(struct kk_internal_struct_scope__handeler_fun3069__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_struct_scope__handeler_fun3069, kk_context());
  _self->loc = loc;
  return &_self->_base;
}



// lift anonymous function
struct kk_internal_struct_scope__handeler_fun3071__t {
  struct kk_function_s _base;
  kk_box_t _b_2748;
};
static kk_std_core_types__maybe kk_internal_struct_scope__handeler_fun3071(kk_function_t _fself, kk_std_core__list _y_2518, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_scope__handeler_fun3071(kk_box_t _b_2748, kk_context_t* _ctx) {
  struct kk_internal_struct_scope__handeler_fun3071__t* _self = kk_function_alloc_as(struct kk_internal_struct_scope__handeler_fun3071__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_struct_scope__handeler_fun3071, kk_context());
  _self->_b_2748 = _b_2748;
  return &_self->_base;
}



// lift anonymous function
struct kk_internal_struct_scope__handeler_fun3072__t {
  struct kk_function_s _base;
  kk_box_t _b_2748;
};
static kk_std_core_types__maybe kk_internal_struct_scope__handeler_fun3072(kk_function_t _fself, kk_box_t _b_2738, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_scope__handeler_fun3072(kk_box_t _b_2748, kk_context_t* _ctx) {
  struct kk_internal_struct_scope__handeler_fun3072__t* _self = kk_function_alloc_as(struct kk_internal_struct_scope__handeler_fun3072__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_struct_scope__handeler_fun3072, kk_context());
  _self->_b_2748 = _b_2748;
  return &_self->_base;
}

static kk_std_core_types__maybe kk_internal_struct_scope__handeler_fun3072(kk_function_t _fself, kk_box_t _b_2738, kk_context_t* _ctx) {
  struct kk_internal_struct_scope__handeler_fun3072__t* _self = kk_function_as(struct kk_internal_struct_scope__handeler_fun3072__t*, _fself);
  kk_box_t _b_2748 = _self->_b_2748; /* 1015 */
  kk_drop_match(_self, {kk_box_dup(_b_2748);}, {}, _ctx)
  bool _match_2786;
  kk_string_t _x3073;
  kk_std_core_types__tuple2_ _match_2788;
  kk_box_t _x3074 = kk_box_dup(_b_2738); /*1001*/
  _match_2788 = kk_std_core_types__tuple2__unbox(_x3074, _ctx); /*(string, internal/struct/expression)*/
  {
    kk_box_t _box_x2731 = _match_2788.fst;
    kk_box_t _box_x2732 = _match_2788.snd;
    kk_string_t _x = kk_string_unbox(_box_x2731);
    kk_string_dup(_x);
    kk_std_core_types__tuple2__drop(_match_2788, _ctx);
    _x3073 = _x; /*string*/
  }
  kk_string_t _x3077 = kk_string_unbox(_b_2748); /*string*/
  _match_2786 = kk_string_is_eq(_x3073,_x3077,kk_context()); /*bool*/
  if (_match_2786) {
    kk_box_t _x3078;
    kk_internal_struct__expression _x3079;
    kk_std_core_types__tuple2_ _match_2787 = kk_std_core_types__tuple2__unbox(_b_2738, _ctx); /*(string, internal/struct/expression)*/;
    {
      kk_box_t _box_x2733 = _match_2787.fst;
      kk_box_t _box_x2734 = _match_2787.snd;
      kk_internal_struct__expression _x0 = kk_internal_struct__expression_unbox(_box_x2734, NULL);
      kk_internal_struct__expression_dup(_x0);
      kk_std_core_types__tuple2__drop(_match_2787, _ctx);
      _x3079 = _x0; /*internal/struct/expression*/
    }
    _x3078 = kk_internal_struct__expression_box(_x3079, _ctx); /*1034*/
    return kk_std_core_types__new_Just(_x3078, _ctx);
  }
  {
    kk_box_drop(_b_2738, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
static kk_std_core_types__maybe kk_internal_struct_scope__handeler_fun3071(kk_function_t _fself, kk_std_core__list _y_2518, kk_context_t* _ctx) {
  struct kk_internal_struct_scope__handeler_fun3071__t* _self = kk_function_as(struct kk_internal_struct_scope__handeler_fun3071__t*, _fself);
  kk_box_t _b_2748 = _self->_b_2748; /* 1015 */
  kk_drop_match(_self, {kk_box_dup(_b_2748);}, {}, _ctx)
  return kk_std_core_find_maybe(_y_2518, kk_internal_struct_new_scope__handeler_fun3072(_b_2748, _ctx), _ctx);
}


// lift anonymous function
struct kk_internal_struct_scope__handeler_fun3084__t {
  struct kk_function_s _base;
  kk_function_t next0_2582;
};
static kk_box_t kk_internal_struct_scope__handeler_fun3084(kk_function_t _fself, kk_box_t _b_2744, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_scope__handeler_fun3084(kk_function_t next0_2582, kk_context_t* _ctx) {
  struct kk_internal_struct_scope__handeler_fun3084__t* _self = kk_function_alloc_as(struct kk_internal_struct_scope__handeler_fun3084__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_struct_scope__handeler_fun3084, kk_context());
  _self->next0_2582 = next0_2582;
  return &_self->_base;
}

static kk_box_t kk_internal_struct_scope__handeler_fun3084(kk_function_t _fself, kk_box_t _b_2744, kk_context_t* _ctx) {
  struct kk_internal_struct_scope__handeler_fun3084__t* _self = kk_function_as(struct kk_internal_struct_scope__handeler_fun3084__t*, _fself);
  kk_function_t next0_2582 = _self->next0_2582; /* (list<(string, internal/struct/expression)>) -> <local<2322>|2329> maybe<internal/struct/expression> */
  kk_drop_match(_self, {kk_function_dup(next0_2582);}, {}, _ctx)
  kk_std_core_types__maybe _x3085;
  kk_std_core__list _x3086 = kk_std_core__list_unbox(_b_2744, _ctx); /*list<(string, internal/struct/expression)>*/
  _x3085 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_std_core__list, kk_context_t*), next0_2582, (next0_2582, _x3086, _ctx)); /*maybe<internal/struct/expression>*/
  return kk_std_core_types__maybe_box(_x3085, _ctx);
}
static kk_box_t kk_internal_struct_scope__handeler_fun3069(kk_function_t _fself, kk_std_core_hnd__marker _b_2746, kk_std_core_hnd__ev _b_2747, kk_box_t _b_2748, kk_context_t* _ctx) {
  struct kk_internal_struct_scope__handeler_fun3069__t* _self = kk_function_as(struct kk_internal_struct_scope__handeler_fun3069__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<2322,list<(string, internal/struct/expression)>> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_std_core_hnd__ev_dropn(_b_2747, (KK_I32(3)), _ctx);
  kk_std_core__list x3_2581;
  kk_box_t _x3070 = kk_ref_get(loc,kk_context()); /*1000*/
  x3_2581 = kk_std_core__list_unbox(_x3070, _ctx); /*list<(string, internal/struct/expression)>*/
  kk_function_t next0_2582 = kk_internal_struct_new_scope__handeler_fun3071(_b_2748, _ctx); /*(list<(string, internal/struct/expression)>) -> <local<2322>|2329> maybe<internal/struct/expression>*/;
  kk_std_core_types__maybe _x3082;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x3_2581, _ctx);
    kk_box_t _x3083 = kk_std_core_hnd_yield_extend(kk_internal_struct_new_scope__handeler_fun3084(next0_2582, _ctx), _ctx); /*1001*/
    _x3082 = kk_std_core_types__maybe_unbox(_x3083, _ctx); /*maybe<internal/struct/expression>*/
  }
  else {
    _x3082 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_std_core__list, kk_context_t*), next0_2582, (next0_2582, x3_2581, _ctx)); /*maybe<internal/struct/expression>*/
  }
  return kk_std_core_types__maybe_box(_x3082, _ctx);
}


// lift anonymous function
struct kk_internal_struct_scope__handeler_fun3087__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_struct_scope__handeler_fun3087(kk_function_t _fself, kk_box_t _x1, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_scope__handeler_fun3087(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_struct_scope__handeler_fun3087, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_struct_scope__handeler_fun3087(kk_function_t _fself, kk_box_t _x1, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _x1;
}

kk_box_t kk_internal_struct_scope__handeler(kk_function_t fun__to__exec, kk_context_t* _ctx) { /* forall<a,e> (fun_to_exec : () -> <scope|e> a) -> e a */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core__list_box(kk_std_core__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<2322,list<(string, internal/struct/expression)>>*/;
  kk_box_t res;
  kk_internal_struct__hnd_scope _x3051;
  kk_std_core_hnd__clause2 _x3052;
  kk_function_t _x3053;
  kk_ref_dup(loc);
  _x3053 = kk_internal_struct_new_scope__handeler_fun3054(loc, _ctx); /*(std/core/hnd/marker<1025,1026>, std/core/hnd/ev<1024>, 1021, 1022) -> 1025 1023*/
  _x3052 = kk_std_core_hnd__new_Clause2(_x3053, _ctx); /*std/core/hnd/clause2<1021,1022,1023,1024,1025,1026>*/
  kk_std_core_hnd__clause1 _x3067;
  kk_function_t _x3068;
  kk_ref_dup(loc);
  _x3068 = kk_internal_struct_new_scope__handeler_fun3069(loc, _ctx); /*(std/core/hnd/marker<1018,1019>, std/core/hnd/ev<1017>, 1015) -> 1018 1016*/
  _x3067 = kk_std_core_hnd__new_Clause1(_x3068, _ctx); /*std/core/hnd/clause1<1015,1016,1017,1018,1019>*/
  _x3051 = kk_internal_struct__new_Hnd_scope(kk_reuse_null, _x3052, _x3067, _ctx); /*internal/struct/.hnd-scope<18,19>*/
  res = kk_internal_struct__handle_scope((KK_I32(1)), _x3051, kk_internal_struct_new_scope__handeler_fun3087(_ctx), fun__to__exec, _ctx); /*2328*/
  return kk_std_core_hnd_prompt_local_var(loc, res, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_internal_struct__mlift2542_main_fun3089__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_struct__mlift2542_main_fun3089(kk_function_t _fself, kk_box_t _b_2762, kk_context_t* _ctx);
static kk_function_t kk_internal_struct__new_mlift2542_main_fun3089(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_struct__mlift2542_main_fun3089, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_struct__mlift2542_main_fun3089(kk_function_t _fself, kk_box_t _b_2762, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_internal_struct__expression exp_2765 = kk_internal_struct__expression_unbox(_b_2762, _ctx); /*internal/struct/expression*/;
  kk_string_t s_2491 = kk_internal_struct_show_1(exp_2765, _ctx); /*string*/;
  kk_unit_t _x3090 = kk_Unit;
  kk_std_core_printsln(s_2491, _ctx);
  return kk_unit_box(_x3090);
}

kk_unit_t kk_internal_struct__mlift2542_main(kk_internal_struct__result _y_2523, kk_context_t* _ctx) { /* forall<h> (result) -> <pure,console,scope> () */ 
  if (kk_internal_struct__is_Value(_y_2523)) {
    kk_internal_struct__expression v = _y_2523._cons.Value.exp;
    kk_box_t _x3088 = kk_std_core_hnd__open_none1(kk_internal_struct__new_mlift2542_main_fun3089(_ctx), kk_internal_struct__expression_box(v, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x3088); return kk_Unit;
  }
  {
    kk_string_t s0 = _y_2523._cons.ResultError.s;
    kk_string_t _x3091;
    kk_string_t _x3092;
    kk_define_string_literal(, _s3093, 7, "Error \"")
    _x3092 = kk_string_dup(_s3093); /*string*/
    kk_string_t _x3094;
    kk_string_t _x3095;
    kk_define_string_literal(, _s3096, 1, "\"")
    _x3095 = kk_string_dup(_s3096); /*string*/
    _x3094 = kk_std_core__lp__plus__plus__1_rp_(s0, _x3095, _ctx); /*string*/
    _x3091 = kk_std_core__lp__plus__plus__1_rp_(_x3092, _x3094, _ctx); /*string*/
    kk_std_core_printsln(_x3091, _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_internal_struct_main_fun3098__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_struct_main_fun3098(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_main_fun3098(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_struct_main_fun3098, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_internal_struct_main_fun3113__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_struct_main_fun3113(kk_function_t _fself, kk_box_t _b_2771, kk_context_t* _ctx);
static kk_function_t kk_internal_struct_new_main_fun3113(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_struct_main_fun3113, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_struct_main_fun3113(kk_function_t _fself, kk_box_t _b_2771, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x3114 = kk_Unit;
  kk_internal_struct__result _x3115 = kk_internal_struct__result_unbox(_b_2771, _ctx); /*internal/struct/result*/
  kk_internal_struct__mlift2542_main(_x3115, _ctx);
  return kk_unit_box(_x3114);
}
static kk_box_t kk_internal_struct_main_fun3098(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_internal_struct__result x_2590;
  kk_internal_struct__expression _x3099;
  kk_internal_struct__patern _x3100;
  kk_internal_struct__patern _x3101;
  kk_string_t _x3102;
  kk_define_string_literal(, _s3103, 8, "variable")
  _x3102 = kk_string_dup(_s3103); /*string*/
  _x3101 = kk_internal_struct__new_Ident(kk_reuse_null, _x3102, _ctx); /*internal/struct/patern*/
  kk_internal_struct__patern _x3104;
  kk_internal_struct__patern _x3105;
  kk_string_t _x3106;
  kk_define_string_literal(, _s3107, 18, "not a variable ;-)")
  _x3106 = kk_string_dup(_s3107); /*string*/
  _x3105 = kk_internal_struct__new_Ident(kk_reuse_null, _x3106, _ctx); /*internal/struct/patern*/
  _x3104 = kk_internal_struct__new_Patpair(kk_reuse_null, kk_internal_struct__new_NullPat(_ctx), _x3105, _ctx); /*internal/struct/patern*/
  _x3100 = kk_internal_struct__new_Patpair(kk_reuse_null, _x3101, _x3104, _ctx); /*internal/struct/patern*/
  kk_internal_struct__expression _x3108;
  kk_internal_struct__expression _x3109 = kk_internal_struct__new_Num(kk_reuse_null, kk_integer_from_small(420), _ctx); /*internal/struct/expression*/
  kk_internal_struct__expression _x3110 = kk_internal_struct__new_Num(kk_reuse_null, kk_integer_from_small(69), _ctx); /*internal/struct/expression*/
  _x3108 = kk_internal_struct__new_MLpair(kk_reuse_null, _x3109, _x3110, _ctx); /*internal/struct/expression*/
  _x3099 = kk_internal_struct__new_Lambda(kk_reuse_null, _x3100, _x3108, _ctx); /*internal/struct/expression*/
  x_2590 = kk_internal_struct_linter(_x3099, _ctx); /*internal/struct/result*/
  kk_unit_t _x3111 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_internal_struct__result_drop(x_2590, _ctx);
    kk_box_t _x3112 = kk_std_core_hnd_yield_extend(kk_internal_struct_new_main_fun3113(_ctx), _ctx); /*1001*/
    kk_unit_unbox(_x3112);
  }
  else {
    kk_internal_struct__mlift2542_main(x_2590, _ctx);
  }
  return kk_unit_box(_x3111);
}

kk_unit_t kk_internal_struct_main(kk_context_t* _ctx) { /* () -> <pure,console> () */ 
  kk_ref_t loc = kk_ref_alloc((kk_internal_struct__expression_box(kk_internal_struct__new_EFalse(_ctx), _ctx)),kk_context()); /*local-var<2466,internal/struct/expression>*/;
  kk_ref_t loc0 = kk_ref_alloc((kk_std_core__list_box(kk_std_core__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<2466,list<(string, internal/struct/expression)>>*/;
  kk_unit_t res0 = kk_Unit;
  kk_box_t _x3097 = kk_internal_struct_scope__handeler(kk_internal_struct_new_main_fun3098(_ctx), _ctx); /*2328*/
  kk_unit_unbox(_x3097);
  kk_unit_t res = kk_Unit;
  kk_box_t _x3116 = kk_std_core_hnd_prompt_local_var(loc0, kk_unit_box(res0), _ctx); /*1001*/
  kk_unit_unbox(_x3116);
  kk_box_t _x3117 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*1001*/
  kk_unit_unbox(_x3117); return kk_Unit;
}


// lift anonymous function
struct kk_internal_struct__hmain_fun3118__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_internal_struct__hmain_fun3118(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_internal_struct__new_hmain_fun3118(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_struct__hmain_fun3118, _ctx)
  return kk_function_dup(_fself);
}

static kk_unit_t kk_internal_struct__hmain_fun3118(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_internal_struct_main(_ctx);
}

kk_unit_t kk_internal_struct__hmain(kk_context_t* _ctx) { /* () -> <console,div> () */ 
  kk_std_core__default_exn(kk_internal_struct__new_hmain_fun3118(_ctx), _ctx); return kk_Unit;
}

// main exit
static void _kk_main_exit(void) {
  kk_context_t* _ctx = kk_get_context();
  kk_internal_struct__done(_ctx);
}

// main entry
int main(int argc, char** argv) {
  kk_assert(sizeof(size_t)==8 && sizeof(void*)==8);
  kk_context_t* _ctx = kk_main_start(argc, argv);
  kk_internal_struct__init(_ctx);
  atexit(&_kk_main_exit);
  kk_internal_struct__hmain(_ctx);
  kk_internal_struct__done(_ctx);
  kk_main_end(_ctx);
  return 0;
}

// initialization
void kk_internal_struct__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x2834;
    kk_define_string_literal(, _s2835, 21, "scope.internal_struct")
    _x2834 = kk_string_dup(_s2835); /*string*/
    kk_internal_struct__tag_scope = kk_std_core_hnd__new_Htag(_x2834, _ctx); /*std/core/hnd/htag<internal/struct/.hnd-scope>*/
  }
}

// termination
void kk_internal_struct__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_internal_struct__tag_scope, _ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
