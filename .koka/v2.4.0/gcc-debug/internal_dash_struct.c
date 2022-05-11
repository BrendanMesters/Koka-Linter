// Koka generated module: "internal-struct", koka version: 2.4.0, platform: 64-bit
#include "internal_dash_struct.h"
 
// runtime tag for the `:scope` effect

kk_std_core_hnd__htag kk_internal_dash_struct__tag_scope;
 
// handler for the `:scope` effect

kk_box_t kk_internal_dash_struct__handle_scope(int32_t cfc, kk_internal_dash_struct__hnd_scope hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (cfc : int32, hnd : .hnd-scope<e,b>, ret : (res : a) -> e b, action : () -> <scope|e> a) -> e b */ 
  kk_std_core_hnd__htag _x1898 = kk_std_core_hnd__htag_dup(kk_internal_dash_struct__tag_scope); /*std/core/hnd/htag<internal-struct/.hnd-scope>*/
  return kk_std_core_hnd__hhandle(_x1898, cfc, kk_internal_dash_struct__hnd_scope_box(hnd, _ctx), ret, action, _ctx);
}
 
// monadic lift

kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1350_op(kk_std_core_types__ctail _acc, kk_language_dash_constructs__expression _y_1278, kk_context_t* _ctx) { /* (ctail<language-constructs/expression>, language-constructs/expression) -> <scope,console,div,exn> language-constructs/expression */ 
  kk_box_t _x1905 = kk_ctail_resolve(_acc,(kk_language_dash_constructs__expression_box(_y_1278, _ctx))); /*-1*/
  return kk_language_dash_constructs__expression_unbox(_x1905, _ctx);
}
 
// monadic lift

kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1351_op(kk_std_core_types__ctail _acc0, kk_language_dash_constructs__expression _y_1283, kk_context_t* _ctx) { /* (ctail<language-constructs/expression>, language-constructs/expression) -> <exn,console,div,scope> language-constructs/expression */ 
  kk_box_t _x1906 = kk_ctail_resolve(_acc0,(kk_language_dash_constructs__expression_box(_y_1283, _ctx))); /*-1*/
  return kk_language_dash_constructs__expression_unbox(_x1906, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_internal_dash_struct__mlift1352_op_fun1911__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct__mlift1352_op_fun1911(kk_function_t _fself, kk_box_t _b_1461, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_mlift1352_op_fun1911(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__mlift1352_op_fun1911, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct__mlift1352_op_fun1911(kk_function_t _fself, kk_box_t _b_1461, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x1912;
  kk_language_dash_constructs__expression _x1913 = kk_language_dash_constructs__expression_unbox(_b_1461, _ctx); /*language-constructs/expression*/
  _x1912 = kk_language_dash_constructs_show_1(_x1913, _ctx); /*string*/
  return kk_string_box(_x1912);
}


// lift anonymous function
struct kk_internal_dash_struct__mlift1352_op_fun1915__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct__mlift1352_op_fun1915(kk_function_t _fself, kk_box_t _b_1470, kk_box_t _b_1471, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_mlift1352_op_fun1915(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__mlift1352_op_fun1915, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct__mlift1352_op_fun1915(kk_function_t _fself, kk_box_t _b_1470, kk_box_t _b_1471, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x1916 = kk_string_unbox(_b_1470); /*string*/
  kk_std_core_types__optional _x1917 = kk_std_core_types__optional_unbox(_b_1471, _ctx); /*optional<exception-info>*/
  return kk_std_core_throw(_x1916, _x1917, _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct__mlift1352_op_fun1919__t {
  struct kk_function_s _base;
  kk_std_core_types__ctail _acc1;
};
static kk_box_t kk_internal_dash_struct__mlift1352_op_fun1919(kk_function_t _fself, kk_box_t _b_1479, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_mlift1352_op_fun1919(kk_std_core_types__ctail _acc1, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__mlift1352_op_fun1919__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct__mlift1352_op_fun1919__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct__mlift1352_op_fun1919, kk_context());
  _self->_acc1 = _acc1;
  return &_self->_base;
}

static kk_box_t kk_internal_dash_struct__mlift1352_op_fun1919(kk_function_t _fself, kk_box_t _b_1479, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__mlift1352_op_fun1919__t* _self = kk_function_as(struct kk_internal_dash_struct__mlift1352_op_fun1919__t*, _fself);
  kk_std_core_types__ctail _acc1 = _self->_acc1; /* ctail<language-constructs/expression> */
  kk_drop_match(_self, {kk_std_core_types__ctail_dup(_acc1);}, {}, _ctx)
  kk_language_dash_constructs__expression _y_1481_12830 = kk_language_dash_constructs__expression_unbox(_b_1479, _ctx); /*language-constructs/expression*/;
  kk_language_dash_constructs__expression _x1920 = kk_internal_dash_struct__mlift1351_op(_acc1, _y_1481_12830, _ctx); /*language-constructs/expression*/
  return kk_language_dash_constructs__expression_box(_x1920, _ctx);
}

kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1352_op(kk_std_core_types__ctail _acc1, kk_language_dash_constructs__expression otherwise, kk_language_dash_constructs__expression thus, kk_language_dash_constructs__expression _y_1280, kk_context_t* _ctx) { /* (ctail<language-constructs/expression>, otherwise : language-constructs/expression, thus : language-constructs/expression, language-constructs/expression) -> <div,exn,scope,console> language-constructs/expression */ 
  if (kk_language_dash_constructs__is_ETrue(_y_1280)) {
    kk_language_dash_constructs__expression_drop(otherwise, _ctx);
    return kk_internal_dash_struct__ctail_linter(thus, _acc1, _ctx);
  }
  if (kk_language_dash_constructs__is_EFalse(_y_1280)) {
    kk_language_dash_constructs__expression_drop(thus, _ctx);
    return kk_internal_dash_struct__ctail_linter(otherwise, _acc1, _ctx);
  }
  {
    kk_language_dash_constructs__expression_drop(thus, _ctx);
    kk_language_dash_constructs__expression_drop(otherwise, _ctx);
    kk_string_t _x10_1334;
    kk_string_t _x1907;
    kk_define_string_literal(, _s1908, 70, "Conditional part of if statement not of type boolean, instead it was: ")
    _x1907 = kk_string_dup(_s1908); /*string*/
    kk_string_t _x1909;
    kk_box_t _x1910 = kk_std_core_hnd__open_none1(kk_internal_dash_struct__new_mlift1352_op_fun1911(_ctx), kk_language_dash_constructs__expression_box(_y_1280, _ctx), _ctx); /*1001*/
    _x1909 = kk_string_unbox(_x1910); /*string*/
    _x10_1334 = kk_std_core__lp__plus__plus__1_rp_(_x1907, _x1909, _ctx); /*string*/
    kk_ssize_t _b_1472_1466 = (KK_IZ(0)); /*std/core/hnd/ev-index*/;
    kk_language_dash_constructs__expression x_1364;
    kk_box_t _x1914 = kk_std_core_hnd__open_at2(_b_1472_1466, kk_internal_dash_struct__new_mlift1352_op_fun1915(_ctx), kk_string_box(_x10_1334), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*1002*/
    x_1364 = kk_language_dash_constructs__expression_unbox(_x1914, _ctx); /*language-constructs/expression*/
    if (kk_yielding(kk_context())) {
      kk_language_dash_constructs__expression_drop(x_1364, _ctx);
      kk_box_t _x1918 = kk_std_core_hnd_yield_extend(kk_internal_dash_struct__new_mlift1352_op_fun1919(_acc1, _ctx), _ctx); /*1001*/
      return kk_language_dash_constructs__expression_unbox(_x1918, _ctx);
    }
    {
      return kk_internal_dash_struct__mlift1351_op(_acc1, x_1364, _ctx);
    }
  }
}
 
// monadic lift

kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1353_op(kk_std_core_types__ctail _acc2, kk_language_dash_constructs__expression e2, kk_language_dash_constructs__expression _ctail_1268, kk_context_t* _ctx) { /* (ctail<language-constructs/expression>, e2 : language-constructs/expression, language-constructs/expression) -> <div,exn,scope,console> language-constructs/expression */ 
  kk_language_dash_constructs__expression _ctail_1269 = kk_language_dash_constructs__expression_hole(); /*language-constructs/expression*/;
  kk_language_dash_constructs__expression _ctail_1270 = kk_language_dash_constructs__new_MLpair(kk_reuse_null, _ctail_1268, _ctail_1269, _ctx); /*language-constructs/expression*/;
  kk_box_t* _b_1490_1487 = (kk_box_t*)((&kk_language_dash_constructs__as_MLpair(_ctail_1270)->e2)); /*cfield<language-constructs/expression>*/;
  kk_std_core_types__ctail _x1921 = kk_ctail_link(_acc2,(kk_language_dash_constructs__expression_box(_ctail_1270, _ctx)),_b_1490_1487); /*ctail<0>*/
  return kk_internal_dash_struct__ctail_linter(e2, _x1921, _ctx);
}
 
// monadic lift

kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1354_op(kk_std_core_types__ctail _acc3, kk_language_dash_constructs__expression _y_1287, kk_context_t* _ctx) { /* (ctail<language-constructs/expression>, language-constructs/expression) -> <exn,console,div,scope> language-constructs/expression */ 
  kk_box_t _x1922 = kk_ctail_resolve(_acc3,(kk_language_dash_constructs__expression_box(_y_1287, _ctx))); /*-1*/
  return kk_language_dash_constructs__expression_unbox(_x1922, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_internal_dash_struct__mlift1355_op_fun1927__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct__mlift1355_op_fun1927(kk_function_t _fself, kk_box_t _b_1500, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_mlift1355_op_fun1927(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__mlift1355_op_fun1927, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct__mlift1355_op_fun1927(kk_function_t _fself, kk_box_t _b_1500, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x1928;
  kk_language_dash_constructs__expression _x1929 = kk_language_dash_constructs__expression_unbox(_b_1500, _ctx); /*language-constructs/expression*/
  _x1928 = kk_language_dash_constructs_show_1(_x1929, _ctx); /*string*/
  return kk_string_box(_x1928);
}


// lift anonymous function
struct kk_internal_dash_struct__mlift1355_op_fun1931__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct__mlift1355_op_fun1931(kk_function_t _fself, kk_box_t _b_1509, kk_box_t _b_1510, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_mlift1355_op_fun1931(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__mlift1355_op_fun1931, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct__mlift1355_op_fun1931(kk_function_t _fself, kk_box_t _b_1509, kk_box_t _b_1510, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x1932 = kk_string_unbox(_b_1509); /*string*/
  kk_std_core_types__optional _x1933 = kk_std_core_types__optional_unbox(_b_1510, _ctx); /*optional<exception-info>*/
  return kk_std_core_throw(_x1932, _x1933, _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct__mlift1355_op_fun1935__t {
  struct kk_function_s _base;
  kk_function_t _accm;
};
static kk_box_t kk_internal_dash_struct__mlift1355_op_fun1935(kk_function_t _fself, kk_box_t _b_1518, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_mlift1355_op_fun1935(kk_function_t _accm, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__mlift1355_op_fun1935__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct__mlift1355_op_fun1935__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct__mlift1355_op_fun1935, kk_context());
  _self->_accm = _accm;
  return &_self->_base;
}

static kk_box_t kk_internal_dash_struct__mlift1355_op_fun1935(kk_function_t _fself, kk_box_t _b_1518, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__mlift1355_op_fun1935__t* _self = kk_function_as(struct kk_internal_dash_struct__mlift1355_op_fun1935__t*, _fself);
  kk_function_t _accm = _self->_accm; /* (language-constructs/expression) -> language-constructs/expression */
  kk_drop_match(_self, {kk_function_dup(_accm);}, {}, _ctx)
  kk_language_dash_constructs__expression _x1936;
  kk_language_dash_constructs__expression _x1937 = kk_language_dash_constructs__expression_unbox(_b_1518, _ctx); /*language-constructs/expression*/
  _x1936 = kk_function_call(kk_language_dash_constructs__expression, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), _accm, (_accm, _x1937, _ctx)); /*language-constructs/expression*/
  return kk_language_dash_constructs__expression_box(_x1936, _ctx);
}

kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1355_op(kk_function_t _accm, kk_language_dash_constructs__expression otherwise0, kk_language_dash_constructs__expression thus0, kk_language_dash_constructs__expression _y_1293, kk_context_t* _ctx) { /* ((language-constructs/expression) -> language-constructs/expression, otherwise : language-constructs/expression, thus : language-constructs/expression, language-constructs/expression) -> <div,exn,scope,console> language-constructs/expression */ 
  if (kk_language_dash_constructs__is_ETrue(_y_1293)) {
    kk_language_dash_constructs__expression_drop(otherwise0, _ctx);
    return kk_internal_dash_struct__ctailm_linter(thus0, _accm, _ctx);
  }
  if (kk_language_dash_constructs__is_EFalse(_y_1293)) {
    kk_language_dash_constructs__expression_drop(thus0, _ctx);
    return kk_internal_dash_struct__ctailm_linter(otherwise0, _accm, _ctx);
  }
  {
    kk_language_dash_constructs__expression_drop(thus0, _ctx);
    kk_language_dash_constructs__expression_drop(otherwise0, _ctx);
    kk_string_t _x10_1341;
    kk_string_t _x1923;
    kk_define_string_literal(, _s1924, 70, "Conditional part of if statement not of type boolean, instead it was: ")
    _x1923 = kk_string_dup(_s1924); /*string*/
    kk_string_t _x1925;
    kk_box_t _x1926 = kk_std_core_hnd__open_none1(kk_internal_dash_struct__new_mlift1355_op_fun1927(_ctx), kk_language_dash_constructs__expression_box(_y_1293, _ctx), _ctx); /*1001*/
    _x1925 = kk_string_unbox(_x1926); /*string*/
    _x10_1341 = kk_std_core__lp__plus__plus__1_rp_(_x1923, _x1925, _ctx); /*string*/
    kk_ssize_t _b_1511_1505 = (KK_IZ(0)); /*std/core/hnd/ev-index*/;
    kk_language_dash_constructs__expression x0_1366;
    kk_box_t _x1930 = kk_std_core_hnd__open_at2(_b_1511_1505, kk_internal_dash_struct__new_mlift1355_op_fun1931(_ctx), kk_string_box(_x10_1341), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*1002*/
    x0_1366 = kk_language_dash_constructs__expression_unbox(_x1930, _ctx); /*language-constructs/expression*/
    if (kk_yielding(kk_context())) {
      kk_language_dash_constructs__expression_drop(x0_1366, _ctx);
      kk_box_t _x1934 = kk_std_core_hnd_yield_extend(kk_internal_dash_struct__new_mlift1355_op_fun1935(_accm, _ctx), _ctx); /*1001*/
      return kk_language_dash_constructs__expression_unbox(_x1934, _ctx);
    }
    {
      return kk_function_call(kk_language_dash_constructs__expression, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), _accm, (_accm, x0_1366, _ctx));
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_internal_dash_struct__mlift1356_op_fun1938__t {
  struct kk_function_s _base;
  kk_function_t _accm0;
  kk_language_dash_constructs__expression _ctail_1274;
};
static kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1356_op_fun1938(kk_function_t _fself, kk_language_dash_constructs__expression _ctail_1273, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_mlift1356_op_fun1938(kk_function_t _accm0, kk_language_dash_constructs__expression _ctail_1274, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__mlift1356_op_fun1938__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct__mlift1356_op_fun1938__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct__mlift1356_op_fun1938, kk_context());
  _self->_accm0 = _accm0;
  _self->_ctail_1274 = _ctail_1274;
  return &_self->_base;
}

static kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1356_op_fun1938(kk_function_t _fself, kk_language_dash_constructs__expression _ctail_1273, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__mlift1356_op_fun1938__t* _self = kk_function_as(struct kk_internal_dash_struct__mlift1356_op_fun1938__t*, _fself);
  kk_function_t _accm0 = _self->_accm0; /* (language-constructs/expression) -> language-constructs/expression */
  kk_language_dash_constructs__expression _ctail_1274 = _self->_ctail_1274; /* language-constructs/expression */
  kk_drop_match(_self, {kk_function_dup(_accm0);kk_language_dash_constructs__expression_dup(_ctail_1274);}, {}, _ctx)
  kk_language_dash_constructs__expression _x1939 = kk_language_dash_constructs__new_MLpair(kk_reuse_null, _ctail_1274, _ctail_1273, _ctx); /*language-constructs/expression*/
  return kk_function_call(kk_language_dash_constructs__expression, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), _accm0, (_accm0, _x1939, _ctx));
}

kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1356_op(kk_function_t _accm0, kk_language_dash_constructs__expression e20, kk_language_dash_constructs__expression _ctail_1274, kk_context_t* _ctx) { /* ((language-constructs/expression) -> language-constructs/expression, e2 : language-constructs/expression, language-constructs/expression) -> <div,exn,scope,console> language-constructs/expression */ 
  return kk_internal_dash_struct__ctailm_linter(e20, kk_internal_dash_struct__new_mlift1356_op_fun1938(_accm0, _ctail_1274, _ctx), _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct__ctail_linter_fun1942__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct__ctail_linter_fun1942(kk_function_t _fself, kk_box_t _b_1531, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctail_linter_fun1942(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__ctail_linter_fun1942, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct__ctail_linter_fun1942(kk_function_t _fself, kk_box_t _b_1531, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_1371;
  kk_ssize_t _x1943 = (KK_IZ(0)); /*ssize_t*/
  ev_1371 = kk_evv_at(_x1943,kk_context()); /*std/core/hnd/ev<internal-struct/.hnd-scope>*/
  {
    struct kk_std_core_hnd_Ev* _con1944 = kk_std_core_hnd__as_Ev(ev_1371);
    kk_std_core_hnd__marker m0 = _con1944->marker;
    kk_box_t _box_x1520 = _con1944->hnd;
    kk_internal_dash_struct__hnd_scope h = kk_internal_dash_struct__hnd_scope_unbox(_box_x1520, NULL);
    kk_internal_dash_struct__hnd_scope_dup(h);
    kk_std_core_hnd__clause1 _match_1872;
    kk_std_core_hnd__clause1 _brw_1873 = kk_internal_dash_struct__select_get(h, _ctx); /*std/core/hnd/clause1<string,language-constructs/expression,internal-struct/.hnd-scope,161,162>*/;
    kk_internal_dash_struct__hnd_scope_drop(h, _ctx);
    _match_1872 = _brw_1873; /*std/core/hnd/clause1<string,language-constructs/expression,internal-struct/.hnd-scope,161,162>*/
    {
      kk_function_t _fun_unbox_x1524 = _match_1872.clause;
      return kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1524, (_fun_unbox_x1524, m0, ev_1371, _b_1531, _ctx));
    }
  }
}


// lift anonymous function
struct kk_internal_dash_struct__ctail_linter_fun1947__t {
  struct kk_function_s _base;
  kk_std_core_types__ctail _acc4;
};
static kk_box_t kk_internal_dash_struct__ctail_linter_fun1947(kk_function_t _fself, kk_box_t _b_1537, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctail_linter_fun1947(kk_std_core_types__ctail _acc4, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctail_linter_fun1947__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct__ctail_linter_fun1947__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct__ctail_linter_fun1947, kk_context());
  _self->_acc4 = _acc4;
  return &_self->_base;
}

static kk_box_t kk_internal_dash_struct__ctail_linter_fun1947(kk_function_t _fself, kk_box_t _b_1537, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctail_linter_fun1947__t* _self = kk_function_as(struct kk_internal_dash_struct__ctail_linter_fun1947__t*, _fself);
  kk_std_core_types__ctail _acc4 = _self->_acc4; /* ctail<language-constructs/expression> */
  kk_drop_match(_self, {kk_std_core_types__ctail_dup(_acc4);}, {}, _ctx)
  kk_language_dash_constructs__expression _y_1645_12780 = kk_language_dash_constructs__expression_unbox(_b_1537, _ctx); /*language-constructs/expression*/;
  kk_language_dash_constructs__expression _x1948 = kk_internal_dash_struct__mlift1350_op(_acc4, _y_1645_12780, _ctx); /*language-constructs/expression*/
  return kk_language_dash_constructs__expression_box(_x1948, _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct__ctail_linter_fun1954__t {
  struct kk_function_s _base;
  kk_language_dash_constructs__expression otherwise1;
  kk_language_dash_constructs__expression thus1;
  kk_std_core_types__ctail _acc4;
};
static kk_box_t kk_internal_dash_struct__ctail_linter_fun1954(kk_function_t _fself, kk_box_t _b_1547, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctail_linter_fun1954(kk_language_dash_constructs__expression otherwise1, kk_language_dash_constructs__expression thus1, kk_std_core_types__ctail _acc4, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctail_linter_fun1954__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct__ctail_linter_fun1954__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct__ctail_linter_fun1954, kk_context());
  _self->otherwise1 = otherwise1;
  _self->thus1 = thus1;
  _self->_acc4 = _acc4;
  return &_self->_base;
}

static kk_box_t kk_internal_dash_struct__ctail_linter_fun1954(kk_function_t _fself, kk_box_t _b_1547, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctail_linter_fun1954__t* _self = kk_function_as(struct kk_internal_dash_struct__ctail_linter_fun1954__t*, _fself);
  kk_language_dash_constructs__expression otherwise1 = _self->otherwise1; /* language-constructs/expression */
  kk_language_dash_constructs__expression thus1 = _self->thus1; /* language-constructs/expression */
  kk_std_core_types__ctail _acc4 = _self->_acc4; /* ctail<language-constructs/expression> */
  kk_drop_match(_self, {kk_language_dash_constructs__expression_dup(otherwise1);kk_language_dash_constructs__expression_dup(thus1);kk_std_core_types__ctail_dup(_acc4);}, {}, _ctx)
  kk_language_dash_constructs__expression _y_1646_12800 = kk_language_dash_constructs__expression_unbox(_b_1547, _ctx); /*language-constructs/expression*/;
  kk_language_dash_constructs__expression _x1955 = kk_internal_dash_struct__mlift1352_op(_acc4, otherwise1, thus1, _y_1646_12800, _ctx); /*language-constructs/expression*/
  return kk_language_dash_constructs__expression_box(_x1955, _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct__ctail_linter_fun1960__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct__ctail_linter_fun1960(kk_function_t _fself, kk_box_t _b_1550, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctail_linter_fun1960(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__ctail_linter_fun1960, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct__ctail_linter_fun1960(kk_function_t _fself, kk_box_t _b_1550, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x1961;
  kk_language_dash_constructs__expression _x1962 = kk_language_dash_constructs__expression_unbox(_b_1550, _ctx); /*language-constructs/expression*/
  _x1961 = kk_language_dash_constructs_show_1(_x1962, _ctx); /*string*/
  return kk_string_box(_x1961);
}


// lift anonymous function
struct kk_internal_dash_struct__ctail_linter_fun1964__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct__ctail_linter_fun1964(kk_function_t _fself, kk_box_t _b_1559, kk_box_t _b_1560, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctail_linter_fun1964(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__ctail_linter_fun1964, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct__ctail_linter_fun1964(kk_function_t _fself, kk_box_t _b_1559, kk_box_t _b_1560, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x1965 = kk_string_unbox(_b_1559); /*string*/
  kk_std_core_types__optional _x1966 = kk_std_core_types__optional_unbox(_b_1560, _ctx); /*optional<exception-info>*/
  return kk_std_core_throw(_x1965, _x1966, _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct__ctail_linter_fun1968__t {
  struct kk_function_s _base;
  kk_std_core_types__ctail _acc4;
};
static kk_box_t kk_internal_dash_struct__ctail_linter_fun1968(kk_function_t _fself, kk_box_t _b_1568, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctail_linter_fun1968(kk_std_core_types__ctail _acc4, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctail_linter_fun1968__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct__ctail_linter_fun1968__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct__ctail_linter_fun1968, kk_context());
  _self->_acc4 = _acc4;
  return &_self->_base;
}

static kk_box_t kk_internal_dash_struct__ctail_linter_fun1968(kk_function_t _fself, kk_box_t _b_1568, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctail_linter_fun1968__t* _self = kk_function_as(struct kk_internal_dash_struct__ctail_linter_fun1968__t*, _fself);
  kk_std_core_types__ctail _acc4 = _self->_acc4; /* ctail<language-constructs/expression> */
  kk_drop_match(_self, {kk_std_core_types__ctail_dup(_acc4);}, {}, _ctx)
  kk_language_dash_constructs__expression _y_1647_12831 = kk_language_dash_constructs__expression_unbox(_b_1568, _ctx); /*language-constructs/expression*/;
  kk_language_dash_constructs__expression _x1969 = kk_internal_dash_struct__mlift1351_op(_acc4, _y_1647_12831, _ctx); /*language-constructs/expression*/
  return kk_language_dash_constructs__expression_box(_x1969, _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct__ctail_linter_fun1972__t {
  struct kk_function_s _base;
  kk_language_dash_constructs__expression e21;
  kk_std_core_types__ctail _acc4;
};
static kk_box_t kk_internal_dash_struct__ctail_linter_fun1972(kk_function_t _fself, kk_box_t _b_1572, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctail_linter_fun1972(kk_language_dash_constructs__expression e21, kk_std_core_types__ctail _acc4, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctail_linter_fun1972__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct__ctail_linter_fun1972__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct__ctail_linter_fun1972, kk_context());
  _self->e21 = e21;
  _self->_acc4 = _acc4;
  return &_self->_base;
}

static kk_box_t kk_internal_dash_struct__ctail_linter_fun1972(kk_function_t _fself, kk_box_t _b_1572, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctail_linter_fun1972__t* _self = kk_function_as(struct kk_internal_dash_struct__ctail_linter_fun1972__t*, _fself);
  kk_language_dash_constructs__expression e21 = _self->e21; /* language-constructs/expression */
  kk_std_core_types__ctail _acc4 = _self->_acc4; /* ctail<language-constructs/expression> */
  kk_drop_match(_self, {kk_language_dash_constructs__expression_dup(e21);kk_std_core_types__ctail_dup(_acc4);}, {}, _ctx)
  kk_language_dash_constructs__expression _ctail_1648_12680 = kk_language_dash_constructs__expression_unbox(_b_1572, _ctx); /*language-constructs/expression*/;
  kk_language_dash_constructs__expression _x1973 = kk_internal_dash_struct__mlift1353_op(_acc4, e21, _ctail_1648_12680, _ctx); /*language-constructs/expression*/
  return kk_language_dash_constructs__expression_box(_x1973, _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct__ctail_linter_fun1985__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct__ctail_linter_fun1985(kk_function_t _fself, kk_box_t _b_1585, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctail_linter_fun1985(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__ctail_linter_fun1985, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct__ctail_linter_fun1985(kk_function_t _fself, kk_box_t _b_1585, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x1986;
  kk_language_dash_constructs__expression _x1987 = kk_language_dash_constructs__expression_unbox(_b_1585, _ctx); /*language-constructs/expression*/
  _x1986 = kk_language_dash_constructs_show_1(_x1987, _ctx); /*string*/
  return kk_string_box(_x1986);
}


// lift anonymous function
struct kk_internal_dash_struct__ctail_linter_fun1989__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct__ctail_linter_fun1989(kk_function_t _fself, kk_box_t _b_1594, kk_box_t _b_1595, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctail_linter_fun1989(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__ctail_linter_fun1989, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct__ctail_linter_fun1989(kk_function_t _fself, kk_box_t _b_1594, kk_box_t _b_1595, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x1990 = kk_string_unbox(_b_1594); /*string*/
  kk_std_core_types__optional _x1991 = kk_std_core_types__optional_unbox(_b_1595, _ctx); /*optional<exception-info>*/
  return kk_std_core_throw(_x1990, _x1991, _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct__ctail_linter_fun1993__t {
  struct kk_function_s _base;
  kk_std_core_types__ctail _acc4;
};
static kk_box_t kk_internal_dash_struct__ctail_linter_fun1993(kk_function_t _fself, kk_box_t _b_1603, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctail_linter_fun1993(kk_std_core_types__ctail _acc4, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctail_linter_fun1993__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct__ctail_linter_fun1993__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct__ctail_linter_fun1993, kk_context());
  _self->_acc4 = _acc4;
  return &_self->_base;
}

static kk_box_t kk_internal_dash_struct__ctail_linter_fun1993(kk_function_t _fself, kk_box_t _b_1603, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctail_linter_fun1993__t* _self = kk_function_as(struct kk_internal_dash_struct__ctail_linter_fun1993__t*, _fself);
  kk_std_core_types__ctail _acc4 = _self->_acc4; /* ctail<language-constructs/expression> */
  kk_drop_match(_self, {kk_std_core_types__ctail_dup(_acc4);}, {}, _ctx)
  kk_language_dash_constructs__expression _y_1649_12870 = kk_language_dash_constructs__expression_unbox(_b_1603, _ctx); /*language-constructs/expression*/;
  kk_language_dash_constructs__expression _x1994 = kk_internal_dash_struct__mlift1354_op(_acc4, _y_1649_12870, _ctx); /*language-constructs/expression*/
  return kk_language_dash_constructs__expression_box(_x1994, _ctx);
}

kk_language_dash_constructs__expression kk_internal_dash_struct__ctail_linter(kk_language_dash_constructs__expression inp, kk_std_core_types__ctail _acc4, kk_context_t* _ctx) { /* (inp : language-constructs/expression, ctail<language-constructs/expression>) -> <pure,console,scope> language-constructs/expression */ 
  kk__tailcall: ;
  if (kk_language_dash_constructs__is_Variable(inp)) {
    struct kk_language_dash_constructs_Variable* _con1940 = kk_language_dash_constructs__as_Variable(inp);
    kk_string_t name = _con1940->name;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(inp))) {
      kk_language_dash_constructs__expression_free(inp, _ctx);
    }
    else {
      kk_string_dup(name);
      kk_language_dash_constructs__expression_decref(inp, _ctx);
    }
    kk_ssize_t _b_1532_1528 = (KK_IZ(1)); /*std/core/hnd/ev-index*/;
    kk_language_dash_constructs__expression x1_1368;
    kk_box_t _x1941 = kk_std_core_hnd__open_at1(_b_1532_1528, kk_internal_dash_struct__new_ctail_linter_fun1942(_ctx), kk_string_box(name), _ctx); /*1001*/
    x1_1368 = kk_language_dash_constructs__expression_unbox(_x1941, _ctx); /*language-constructs/expression*/
    kk_box_t _x1946;
    if (kk_yielding(kk_context())) {
      kk_language_dash_constructs__expression_drop(x1_1368, _ctx);
      _x1946 = kk_std_core_hnd_yield_extend(kk_internal_dash_struct__new_ctail_linter_fun1947(_acc4, _ctx), _ctx); /*1001*/
    }
    else {
      _x1946 = kk_ctail_resolve(_acc4,(kk_language_dash_constructs__expression_box(x1_1368, _ctx))); /*1001*/
    }
    return kk_language_dash_constructs__expression_unbox(_x1946, _ctx);
  }
  if (kk_language_dash_constructs__is_Lambda(inp)) {
    struct kk_language_dash_constructs_Lambda* _con1949 = kk_language_dash_constructs__as_Lambda(inp);
    kk_language_dash_constructs__patern arg = _con1949->arg;
    kk_language_dash_constructs__expression body = _con1949->body;
    kk_reuse_t _ru_1879 = kk_reuse_null; /*reuse*/;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(inp))) {
      _ru_1879 = (kk_language_dash_constructs__expression_reuse(inp));
    }
    else {
      kk_language_dash_constructs__patern_dup(arg);
      kk_language_dash_constructs__expression_dup(body);
      kk_language_dash_constructs__expression_decref(inp, _ctx);
    }
    kk_language_dash_constructs__expression _ctail_1266 = kk_language_dash_constructs__expression_hole(); /*language-constructs/expression*/;
    kk_language_dash_constructs__expression _ctail_1267;
    if (kk_likely(_ru_1879!=NULL)) {
      struct kk_language_dash_constructs_Lambda* _con1950 = (struct kk_language_dash_constructs_Lambda*)_ru_1879;
      _con1950->body = _ctail_1266;
      _ctail_1267 = kk_language_dash_constructs__base_Lambda(_con1950); /*language-constructs/expression*/
    }
    else {
      _ctail_1267 = kk_language_dash_constructs__new_Lambda(kk_reuse_null, arg, _ctail_1266, _ctx); /*language-constructs/expression*/
    }
    kk_box_t* _b_1617_1545 = (kk_box_t*)((&kk_language_dash_constructs__as_Lambda(_ctail_1267)->body)); /*cfield<language-constructs/expression>*/;
    { // tailcall
      kk_std_core_types__ctail _x1951 = kk_ctail_link(_acc4,(kk_language_dash_constructs__expression_box(_ctail_1267, _ctx)),_b_1617_1545); /*ctail<0>*/
      inp = body;
      _acc4 = _x1951;
      goto kk__tailcall;
    }
  }
  if (kk_language_dash_constructs__is_If(inp)) {
    struct kk_language_dash_constructs_If* _con1952 = kk_language_dash_constructs__as_If(inp);
    kk_language_dash_constructs__expression cond = _con1952->cond;
    kk_language_dash_constructs__expression thus1 = _con1952->thus;
    kk_language_dash_constructs__expression otherwise1 = _con1952->otherwise;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(inp))) {
      kk_language_dash_constructs__expression_free(inp, _ctx);
    }
    else {
      kk_language_dash_constructs__expression_dup(cond);
      kk_language_dash_constructs__expression_dup(otherwise1);
      kk_language_dash_constructs__expression_dup(thus1);
      kk_language_dash_constructs__expression_decref(inp, _ctx);
    }
    kk_language_dash_constructs__expression x3_1374 = kk_internal_dash_struct_linter(cond, _ctx); /*language-constructs/expression*/;
    if (kk_yielding(kk_context())) {
      kk_language_dash_constructs__expression_drop(x3_1374, _ctx);
      kk_box_t _x1953 = kk_std_core_hnd_yield_extend(kk_internal_dash_struct__new_ctail_linter_fun1954(otherwise1, thus1, _acc4, _ctx), _ctx); /*1001*/
      return kk_language_dash_constructs__expression_unbox(_x1953, _ctx);
    }
    if (kk_language_dash_constructs__is_ETrue(x3_1374)) {
      kk_language_dash_constructs__expression_drop(otherwise1, _ctx);
      { // tailcall
        inp = thus1;
        goto kk__tailcall;
      }
    }
    if (kk_language_dash_constructs__is_EFalse(x3_1374)) {
      kk_language_dash_constructs__expression_drop(thus1, _ctx);
      { // tailcall
        inp = otherwise1;
        goto kk__tailcall;
      }
    }
    {
      kk_language_dash_constructs__expression_drop(thus1, _ctx);
      kk_language_dash_constructs__expression_drop(otherwise1, _ctx);
      kk_string_t _x10_13340;
      kk_string_t _x1956;
      kk_define_string_literal(, _s1957, 70, "Conditional part of if statement not of type boolean, instead it was: ")
      _x1956 = kk_string_dup(_s1957); /*string*/
      kk_string_t _x1958;
      kk_box_t _x1959 = kk_std_core_hnd__open_none1(kk_internal_dash_struct__new_ctail_linter_fun1960(_ctx), kk_language_dash_constructs__expression_box(x3_1374, _ctx), _ctx); /*1001*/
      _x1958 = kk_string_unbox(_x1959); /*string*/
      _x10_13340 = kk_std_core__lp__plus__plus__1_rp_(_x1956, _x1958, _ctx); /*string*/
      kk_ssize_t _b_1561_1555 = (KK_IZ(0)); /*std/core/hnd/ev-index*/;
      kk_language_dash_constructs__expression x4_1377;
      kk_box_t _x1963 = kk_std_core_hnd__open_at2(_b_1561_1555, kk_internal_dash_struct__new_ctail_linter_fun1964(_ctx), kk_string_box(_x10_13340), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*1002*/
      x4_1377 = kk_language_dash_constructs__expression_unbox(_x1963, _ctx); /*language-constructs/expression*/
      kk_box_t _x1967;
      if (kk_yielding(kk_context())) {
        kk_language_dash_constructs__expression_drop(x4_1377, _ctx);
        _x1967 = kk_std_core_hnd_yield_extend(kk_internal_dash_struct__new_ctail_linter_fun1968(_acc4, _ctx), _ctx); /*1001*/
      }
      else {
        _x1967 = kk_ctail_resolve(_acc4,(kk_language_dash_constructs__expression_box(x4_1377, _ctx))); /*1001*/
      }
      return kk_language_dash_constructs__expression_unbox(_x1967, _ctx);
    }
  }
  if (kk_language_dash_constructs__is_MLpair(inp)) {
    struct kk_language_dash_constructs_MLpair* _con1970 = kk_language_dash_constructs__as_MLpair(inp);
    kk_language_dash_constructs__expression e1 = _con1970->e1;
    kk_language_dash_constructs__expression e21 = _con1970->e2;
    kk_reuse_t _ru_1881 = kk_reuse_null; /*reuse*/;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(inp))) {
      _ru_1881 = (kk_language_dash_constructs__expression_reuse(inp));
    }
    else {
      kk_language_dash_constructs__expression_dup(e1);
      kk_language_dash_constructs__expression_dup(e21);
      kk_language_dash_constructs__expression_decref(inp, _ctx);
    }
    kk_language_dash_constructs__expression x5_1380 = kk_internal_dash_struct_linter(e1, _ctx); /*language-constructs/expression*/;
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_1881,kk_context());
      kk_language_dash_constructs__expression_drop(x5_1380, _ctx);
      kk_box_t _x1971 = kk_std_core_hnd_yield_extend(kk_internal_dash_struct__new_ctail_linter_fun1972(e21, _acc4, _ctx), _ctx); /*1001*/
      return kk_language_dash_constructs__expression_unbox(_x1971, _ctx);
    }
    {
      kk_language_dash_constructs__expression _ctail_12690 = kk_language_dash_constructs__expression_hole(); /*language-constructs/expression*/;
      kk_language_dash_constructs__expression _ctail_12700;
      if (kk_likely(_ru_1881!=NULL)) {
        struct kk_language_dash_constructs_MLpair* _con1974 = (struct kk_language_dash_constructs_MLpair*)_ru_1881;
        _con1974->e1 = x5_1380;
        _con1974->e2 = _ctail_12690;
        _ctail_12700 = kk_language_dash_constructs__base_MLpair(_con1974); /*language-constructs/expression*/
      }
      else {
        _ctail_12700 = kk_language_dash_constructs__new_MLpair(kk_reuse_null, x5_1380, _ctail_12690, _ctx); /*language-constructs/expression*/
      }
      kk_box_t* _b_1628_1578 = (kk_box_t*)((&kk_language_dash_constructs__as_MLpair(_ctail_12700)->e2)); /*cfield<language-constructs/expression>*/;
      { // tailcall
        kk_std_core_types__ctail _x1975 = kk_ctail_link(_acc4,(kk_language_dash_constructs__expression_box(_ctail_12700, _ctx)),_b_1628_1578); /*ctail<0>*/
        inp = e21;
        _acc4 = _x1975;
        goto kk__tailcall;
      }
    }
  }
  if (kk_language_dash_constructs__is_Apply(inp)) {
    struct kk_language_dash_constructs_Apply* _con1976 = kk_language_dash_constructs__as_Apply(inp);
    kk_language_dash_constructs__expression func = _con1976->e1;
    kk_language_dash_constructs__expression args = _con1976->e2;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(inp))) {
      kk_language_dash_constructs__expression_drop(args, _ctx);
      kk_language_dash_constructs__expression_free(inp, _ctx);
    }
    else {
      kk_language_dash_constructs__expression_dup(func);
      kk_language_dash_constructs__expression_decref(inp, _ctx);
    }
    if (kk_language_dash_constructs__is_Lambda(func)) {
      struct kk_language_dash_constructs_Lambda* _con1977 = kk_language_dash_constructs__as_Lambda(func);
      kk_language_dash_constructs__patern _pat70 = _con1977->arg;
      kk_language_dash_constructs__expression _pat80 = _con1977->body;
      if (kk_likely(kk_language_dash_constructs__expression_is_unique(func))) {
        kk_language_dash_constructs__expression_drop(_pat80, _ctx);
        kk_language_dash_constructs__patern_drop(_pat70, _ctx);
        kk_language_dash_constructs__expression_free(func, _ctx);
      }
      else {
        kk_language_dash_constructs__expression_decref(func, _ctx);
      }
      kk_box_t _x1978 = kk_ctail_resolve(_acc4,(kk_language_dash_constructs__expression_box(kk_language_dash_constructs__new_EFalse(_ctx), _ctx))); /*-1*/
      return kk_language_dash_constructs__expression_unbox(_x1978, _ctx);
    }
    if (kk_language_dash_constructs__is_Variable(func)) {
      struct kk_language_dash_constructs_Variable* _con1979 = kk_language_dash_constructs__as_Variable(func);
      kk_string_t _pat100 = _con1979->name;
      if (kk_likely(kk_language_dash_constructs__expression_is_unique(func))) {
        kk_string_drop(_pat100, _ctx);
        kk_language_dash_constructs__expression_free(func, _ctx);
      }
      else {
        kk_language_dash_constructs__expression_decref(func, _ctx);
      }
      kk_box_t _x1980 = kk_ctail_resolve(_acc4,(kk_language_dash_constructs__expression_box(kk_language_dash_constructs__new_EFalse(_ctx), _ctx))); /*-1*/
      return kk_language_dash_constructs__expression_unbox(_x1980, _ctx);
    }
    {
      kk_string_t _x12_1337;
      kk_string_t _x1981;
      kk_define_string_literal(, _s1982, 48, "Apply can only be called on a function, not on: ")
      _x1981 = kk_string_dup(_s1982); /*string*/
      kk_string_t _x1983;
      kk_box_t _x1984 = kk_std_core_hnd__open_none1(kk_internal_dash_struct__new_ctail_linter_fun1985(_ctx), kk_language_dash_constructs__expression_box(func, _ctx), _ctx); /*1001*/
      _x1983 = kk_string_unbox(_x1984); /*string*/
      _x12_1337 = kk_std_core__lp__plus__plus__1_rp_(_x1981, _x1983, _ctx); /*string*/
      kk_ssize_t _b_1596_1590 = (KK_IZ(0)); /*std/core/hnd/ev-index*/;
      kk_language_dash_constructs__expression x6_1383;
      kk_box_t _x1988 = kk_std_core_hnd__open_at2(_b_1596_1590, kk_internal_dash_struct__new_ctail_linter_fun1989(_ctx), kk_string_box(_x12_1337), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*1002*/
      x6_1383 = kk_language_dash_constructs__expression_unbox(_x1988, _ctx); /*language-constructs/expression*/
      kk_box_t _x1992;
      if (kk_yielding(kk_context())) {
        kk_language_dash_constructs__expression_drop(x6_1383, _ctx);
        _x1992 = kk_std_core_hnd_yield_extend(kk_internal_dash_struct__new_ctail_linter_fun1993(_acc4, _ctx), _ctx); /*1001*/
      }
      else {
        _x1992 = kk_ctail_resolve(_acc4,(kk_language_dash_constructs__expression_box(x6_1383, _ctx))); /*1001*/
      }
      return kk_language_dash_constructs__expression_unbox(_x1992, _ctx);
    }
  }
  if (kk_language_dash_constructs__is_Let(inp)) {
    struct kk_language_dash_constructs_Let* _con1995 = kk_language_dash_constructs__as_Let(inp);
    kk_language_dash_constructs__patern arg0 = _con1995->arg;
    kk_language_dash_constructs__expression arg__val = _con1995->arg__val;
    kk_language_dash_constructs__expression body0 = _con1995->body;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(inp))) {
      kk_language_dash_constructs__expression_drop(body0, _ctx);
      kk_language_dash_constructs__expression_drop(arg__val, _ctx);
      kk_language_dash_constructs__patern_drop(arg0, _ctx);
      kk_language_dash_constructs__expression_free(inp, _ctx);
    }
    else {
      kk_language_dash_constructs__expression_decref(inp, _ctx);
    }
    kk_box_t _x1996 = kk_ctail_resolve(_acc4,(kk_language_dash_constructs__expression_box(kk_language_dash_constructs__new_EFalse(_ctx), _ctx))); /*-1*/
    return kk_language_dash_constructs__expression_unbox(_x1996, _ctx);
  }
  if (kk_language_dash_constructs__is_Letrec(inp)) {
    struct kk_language_dash_constructs_Letrec* _con1997 = kk_language_dash_constructs__as_Letrec(inp);
    kk_language_dash_constructs__patern arg1 = _con1997->arg;
    kk_language_dash_constructs__expression arg__val0 = _con1997->arg__val;
    kk_language_dash_constructs__expression body1 = _con1997->body;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(inp))) {
      kk_language_dash_constructs__expression_drop(body1, _ctx);
      kk_language_dash_constructs__expression_drop(arg__val0, _ctx);
      kk_language_dash_constructs__patern_drop(arg1, _ctx);
      kk_language_dash_constructs__expression_free(inp, _ctx);
    }
    else {
      kk_language_dash_constructs__expression_decref(inp, _ctx);
    }
    kk_box_t _x1998 = kk_ctail_resolve(_acc4,(kk_language_dash_constructs__expression_box(kk_language_dash_constructs__new_EFalse(_ctx), _ctx))); /*-1*/
    return kk_language_dash_constructs__expression_unbox(_x1998, _ctx);
  }
  {
    kk_box_t _x1999 = kk_ctail_resolve(_acc4,(kk_language_dash_constructs__expression_box(inp, _ctx))); /*-1*/
    return kk_language_dash_constructs__expression_unbox(_x1999, _ctx);
  }
}


// lift anonymous function
struct kk_internal_dash_struct__ctailm_linter_fun2002__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2002(kk_function_t _fself, kk_box_t _b_1661, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctailm_linter_fun2002(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__ctailm_linter_fun2002, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2002(kk_function_t _fself, kk_box_t _b_1661, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev0_1388;
  kk_ssize_t _x2003 = (KK_IZ(0)); /*ssize_t*/
  ev0_1388 = kk_evv_at(_x2003,kk_context()); /*std/core/hnd/ev<internal-struct/.hnd-scope>*/
  {
    struct kk_std_core_hnd_Ev* _con2004 = kk_std_core_hnd__as_Ev(ev0_1388);
    kk_std_core_hnd__marker m00 = _con2004->marker;
    kk_box_t _box_x1650 = _con2004->hnd;
    kk_internal_dash_struct__hnd_scope h0 = kk_internal_dash_struct__hnd_scope_unbox(_box_x1650, NULL);
    kk_internal_dash_struct__hnd_scope_dup(h0);
    kk_std_core_hnd__clause1 _match_1865;
    kk_std_core_hnd__clause1 _brw_1866 = kk_internal_dash_struct__select_get(h0, _ctx); /*std/core/hnd/clause1<string,language-constructs/expression,internal-struct/.hnd-scope,161,162>*/;
    kk_internal_dash_struct__hnd_scope_drop(h0, _ctx);
    _match_1865 = _brw_1866; /*std/core/hnd/clause1<string,language-constructs/expression,internal-struct/.hnd-scope,161,162>*/
    {
      kk_function_t _fun_unbox_x1654 = _match_1865.clause;
      return kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1654, (_fun_unbox_x1654, m00, ev0_1388, _b_1661, _ctx));
    }
  }
}


// lift anonymous function
struct kk_internal_dash_struct__ctailm_linter_fun2007__t {
  struct kk_function_s _base;
  kk_function_t _accm1;
};
static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2007(kk_function_t _fself, kk_box_t _b_1667, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctailm_linter_fun2007(kk_function_t _accm1, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctailm_linter_fun2007__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct__ctailm_linter_fun2007__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct__ctailm_linter_fun2007, kk_context());
  _self->_accm1 = _accm1;
  return &_self->_base;
}

static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2007(kk_function_t _fself, kk_box_t _b_1667, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctailm_linter_fun2007__t* _self = kk_function_as(struct kk_internal_dash_struct__ctailm_linter_fun2007__t*, _fself);
  kk_function_t _accm1 = _self->_accm1; /* (language-constructs/expression) -> language-constructs/expression */
  kk_drop_match(_self, {kk_function_dup(_accm1);}, {}, _ctx)
  kk_language_dash_constructs__expression _x2008;
  kk_language_dash_constructs__expression _x2009 = kk_language_dash_constructs__expression_unbox(_b_1667, _ctx); /*language-constructs/expression*/
  _x2008 = kk_function_call(kk_language_dash_constructs__expression, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), _accm1, (_accm1, _x2009, _ctx)); /*language-constructs/expression*/
  return kk_language_dash_constructs__expression_box(_x2008, _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct__ctailm_linter_fun2012__t {
  struct kk_function_s _base;
  kk_function_t _accm1;
  kk_language_dash_constructs__patern arg2;
};
static kk_language_dash_constructs__expression kk_internal_dash_struct__ctailm_linter_fun2012(kk_function_t _fself, kk_language_dash_constructs__expression _ctail_1272, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctailm_linter_fun2012(kk_function_t _accm1, kk_language_dash_constructs__patern arg2, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctailm_linter_fun2012__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct__ctailm_linter_fun2012__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct__ctailm_linter_fun2012, kk_context());
  _self->_accm1 = _accm1;
  _self->arg2 = arg2;
  return &_self->_base;
}

static kk_language_dash_constructs__expression kk_internal_dash_struct__ctailm_linter_fun2012(kk_function_t _fself, kk_language_dash_constructs__expression _ctail_1272, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctailm_linter_fun2012__t* _self = kk_function_as(struct kk_internal_dash_struct__ctailm_linter_fun2012__t*, _fself);
  kk_function_t _accm1 = _self->_accm1; /* (language-constructs/expression) -> language-constructs/expression */
  kk_language_dash_constructs__patern arg2 = _self->arg2; /* language-constructs/patern */
  kk_drop_match(_self, {kk_function_dup(_accm1);kk_language_dash_constructs__patern_dup(arg2);}, {}, _ctx)
  kk_language_dash_constructs__expression _x2013 = kk_language_dash_constructs__new_Lambda(kk_reuse_null, arg2, _ctail_1272, _ctx); /*language-constructs/expression*/
  return kk_function_call(kk_language_dash_constructs__expression, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), _accm1, (_accm1, _x2013, _ctx));
}


// lift anonymous function
struct kk_internal_dash_struct__ctailm_linter_fun2016__t {
  struct kk_function_s _base;
  kk_function_t _accm1;
  kk_language_dash_constructs__expression otherwise2;
  kk_language_dash_constructs__expression thus2;
};
static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2016(kk_function_t _fself, kk_box_t _b_1669, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctailm_linter_fun2016(kk_function_t _accm1, kk_language_dash_constructs__expression otherwise2, kk_language_dash_constructs__expression thus2, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctailm_linter_fun2016__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct__ctailm_linter_fun2016__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct__ctailm_linter_fun2016, kk_context());
  _self->_accm1 = _accm1;
  _self->otherwise2 = otherwise2;
  _self->thus2 = thus2;
  return &_self->_base;
}

static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2016(kk_function_t _fself, kk_box_t _b_1669, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctailm_linter_fun2016__t* _self = kk_function_as(struct kk_internal_dash_struct__ctailm_linter_fun2016__t*, _fself);
  kk_function_t _accm1 = _self->_accm1; /* (language-constructs/expression) -> language-constructs/expression */
  kk_language_dash_constructs__expression otherwise2 = _self->otherwise2; /* language-constructs/expression */
  kk_language_dash_constructs__expression thus2 = _self->thus2; /* language-constructs/expression */
  kk_drop_match(_self, {kk_function_dup(_accm1);kk_language_dash_constructs__expression_dup(otherwise2);kk_language_dash_constructs__expression_dup(thus2);}, {}, _ctx)
  kk_language_dash_constructs__expression _y_1719_12930 = kk_language_dash_constructs__expression_unbox(_b_1669, _ctx); /*language-constructs/expression*/;
  kk_language_dash_constructs__expression _x2017 = kk_internal_dash_struct__mlift1355_op(_accm1, otherwise2, thus2, _y_1719_12930, _ctx); /*language-constructs/expression*/
  return kk_language_dash_constructs__expression_box(_x2017, _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct__ctailm_linter_fun2022__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2022(kk_function_t _fself, kk_box_t _b_1672, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctailm_linter_fun2022(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__ctailm_linter_fun2022, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2022(kk_function_t _fself, kk_box_t _b_1672, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x2023;
  kk_language_dash_constructs__expression _x2024 = kk_language_dash_constructs__expression_unbox(_b_1672, _ctx); /*language-constructs/expression*/
  _x2023 = kk_language_dash_constructs_show_1(_x2024, _ctx); /*string*/
  return kk_string_box(_x2023);
}


// lift anonymous function
struct kk_internal_dash_struct__ctailm_linter_fun2026__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2026(kk_function_t _fself, kk_box_t _b_1681, kk_box_t _b_1682, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctailm_linter_fun2026(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__ctailm_linter_fun2026, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2026(kk_function_t _fself, kk_box_t _b_1681, kk_box_t _b_1682, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x2027 = kk_string_unbox(_b_1681); /*string*/
  kk_std_core_types__optional _x2028 = kk_std_core_types__optional_unbox(_b_1682, _ctx); /*optional<exception-info>*/
  return kk_std_core_throw(_x2027, _x2028, _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct__ctailm_linter_fun2030__t {
  struct kk_function_s _base;
  kk_function_t _accm1;
};
static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2030(kk_function_t _fself, kk_box_t _b_1690, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctailm_linter_fun2030(kk_function_t _accm1, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctailm_linter_fun2030__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct__ctailm_linter_fun2030__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct__ctailm_linter_fun2030, kk_context());
  _self->_accm1 = _accm1;
  return &_self->_base;
}

static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2030(kk_function_t _fself, kk_box_t _b_1690, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctailm_linter_fun2030__t* _self = kk_function_as(struct kk_internal_dash_struct__ctailm_linter_fun2030__t*, _fself);
  kk_function_t _accm1 = _self->_accm1; /* (language-constructs/expression) -> language-constructs/expression */
  kk_drop_match(_self, {kk_function_dup(_accm1);}, {}, _ctx)
  kk_language_dash_constructs__expression _x2031;
  kk_language_dash_constructs__expression _x2032 = kk_language_dash_constructs__expression_unbox(_b_1690, _ctx); /*language-constructs/expression*/
  _x2031 = kk_function_call(kk_language_dash_constructs__expression, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), _accm1, (_accm1, _x2032, _ctx)); /*language-constructs/expression*/
  return kk_language_dash_constructs__expression_box(_x2031, _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct__ctailm_linter_fun2035__t {
  struct kk_function_s _base;
  kk_function_t _accm1;
  kk_language_dash_constructs__expression e22;
};
static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2035(kk_function_t _fself, kk_box_t _b_1692, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctailm_linter_fun2035(kk_function_t _accm1, kk_language_dash_constructs__expression e22, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctailm_linter_fun2035__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct__ctailm_linter_fun2035__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct__ctailm_linter_fun2035, kk_context());
  _self->_accm1 = _accm1;
  _self->e22 = e22;
  return &_self->_base;
}

static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2035(kk_function_t _fself, kk_box_t _b_1692, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctailm_linter_fun2035__t* _self = kk_function_as(struct kk_internal_dash_struct__ctailm_linter_fun2035__t*, _fself);
  kk_function_t _accm1 = _self->_accm1; /* (language-constructs/expression) -> language-constructs/expression */
  kk_language_dash_constructs__expression e22 = _self->e22; /* language-constructs/expression */
  kk_drop_match(_self, {kk_function_dup(_accm1);kk_language_dash_constructs__expression_dup(e22);}, {}, _ctx)
  kk_language_dash_constructs__expression _ctail_1720_12740 = kk_language_dash_constructs__expression_unbox(_b_1692, _ctx); /*language-constructs/expression*/;
  kk_language_dash_constructs__expression _x2036 = kk_internal_dash_struct__mlift1356_op(_accm1, e22, _ctail_1720_12740, _ctx); /*language-constructs/expression*/
  return kk_language_dash_constructs__expression_box(_x2036, _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct__ctailm_linter_fun2038__t {
  struct kk_function_s _base;
  kk_function_t _accm1;
  kk_language_dash_constructs__expression x11_1396;
};
static kk_language_dash_constructs__expression kk_internal_dash_struct__ctailm_linter_fun2038(kk_function_t _fself, kk_language_dash_constructs__expression _ctail_12730, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctailm_linter_fun2038(kk_function_t _accm1, kk_language_dash_constructs__expression x11_1396, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctailm_linter_fun2038__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct__ctailm_linter_fun2038__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct__ctailm_linter_fun2038, kk_context());
  _self->_accm1 = _accm1;
  _self->x11_1396 = x11_1396;
  return &_self->_base;
}

static kk_language_dash_constructs__expression kk_internal_dash_struct__ctailm_linter_fun2038(kk_function_t _fself, kk_language_dash_constructs__expression _ctail_12730, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctailm_linter_fun2038__t* _self = kk_function_as(struct kk_internal_dash_struct__ctailm_linter_fun2038__t*, _fself);
  kk_function_t _accm1 = _self->_accm1; /* (language-constructs/expression) -> language-constructs/expression */
  kk_language_dash_constructs__expression x11_1396 = _self->x11_1396; /* language-constructs/expression */
  kk_drop_match(_self, {kk_function_dup(_accm1);kk_language_dash_constructs__expression_dup(x11_1396);}, {}, _ctx)
  kk_language_dash_constructs__expression _x2039 = kk_language_dash_constructs__new_MLpair(kk_reuse_null, x11_1396, _ctail_12730, _ctx); /*language-constructs/expression*/
  return kk_function_call(kk_language_dash_constructs__expression, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), _accm1, (_accm1, _x2039, _ctx));
}


// lift anonymous function
struct kk_internal_dash_struct__ctailm_linter_fun2047__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2047(kk_function_t _fself, kk_box_t _b_1695, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctailm_linter_fun2047(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__ctailm_linter_fun2047, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2047(kk_function_t _fself, kk_box_t _b_1695, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x2048;
  kk_language_dash_constructs__expression _x2049 = kk_language_dash_constructs__expression_unbox(_b_1695, _ctx); /*language-constructs/expression*/
  _x2048 = kk_language_dash_constructs_show_1(_x2049, _ctx); /*string*/
  return kk_string_box(_x2048);
}


// lift anonymous function
struct kk_internal_dash_struct__ctailm_linter_fun2051__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2051(kk_function_t _fself, kk_box_t _b_1704, kk_box_t _b_1705, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctailm_linter_fun2051(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__ctailm_linter_fun2051, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2051(kk_function_t _fself, kk_box_t _b_1704, kk_box_t _b_1705, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x2052 = kk_string_unbox(_b_1704); /*string*/
  kk_std_core_types__optional _x2053 = kk_std_core_types__optional_unbox(_b_1705, _ctx); /*optional<exception-info>*/
  return kk_std_core_throw(_x2052, _x2053, _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct__ctailm_linter_fun2055__t {
  struct kk_function_s _base;
  kk_function_t _accm1;
};
static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2055(kk_function_t _fself, kk_box_t _b_1713, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_ctailm_linter_fun2055(kk_function_t _accm1, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctailm_linter_fun2055__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct__ctailm_linter_fun2055__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct__ctailm_linter_fun2055, kk_context());
  _self->_accm1 = _accm1;
  return &_self->_base;
}

static kk_box_t kk_internal_dash_struct__ctailm_linter_fun2055(kk_function_t _fself, kk_box_t _b_1713, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__ctailm_linter_fun2055__t* _self = kk_function_as(struct kk_internal_dash_struct__ctailm_linter_fun2055__t*, _fself);
  kk_function_t _accm1 = _self->_accm1; /* (language-constructs/expression) -> language-constructs/expression */
  kk_drop_match(_self, {kk_function_dup(_accm1);}, {}, _ctx)
  kk_language_dash_constructs__expression _x2056;
  kk_language_dash_constructs__expression _x2057 = kk_language_dash_constructs__expression_unbox(_b_1713, _ctx); /*language-constructs/expression*/
  _x2056 = kk_function_call(kk_language_dash_constructs__expression, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), _accm1, (_accm1, _x2057, _ctx)); /*language-constructs/expression*/
  return kk_language_dash_constructs__expression_box(_x2056, _ctx);
}

kk_language_dash_constructs__expression kk_internal_dash_struct__ctailm_linter(kk_language_dash_constructs__expression inp0, kk_function_t _accm1, kk_context_t* _ctx) { /* (inp : language-constructs/expression, (language-constructs/expression) -> language-constructs/expression) -> <pure,console,scope> language-constructs/expression */ 
  kk__tailcall: ;
  if (kk_language_dash_constructs__is_Variable(inp0)) {
    struct kk_language_dash_constructs_Variable* _con2000 = kk_language_dash_constructs__as_Variable(inp0);
    kk_string_t name1 = _con2000->name;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(inp0))) {
      kk_language_dash_constructs__expression_free(inp0, _ctx);
    }
    else {
      kk_string_dup(name1);
      kk_language_dash_constructs__expression_decref(inp0, _ctx);
    }
    kk_ssize_t _b_1662_1658 = (KK_IZ(1)); /*std/core/hnd/ev-index*/;
    kk_language_dash_constructs__expression x7_1386;
    kk_box_t _x2001 = kk_std_core_hnd__open_at1(_b_1662_1658, kk_internal_dash_struct__new_ctailm_linter_fun2002(_ctx), kk_string_box(name1), _ctx); /*1001*/
    x7_1386 = kk_language_dash_constructs__expression_unbox(_x2001, _ctx); /*language-constructs/expression*/
    if (kk_yielding(kk_context())) {
      kk_language_dash_constructs__expression_drop(x7_1386, _ctx);
      kk_box_t _x2006 = kk_std_core_hnd_yield_extend(kk_internal_dash_struct__new_ctailm_linter_fun2007(_accm1, _ctx), _ctx); /*1001*/
      return kk_language_dash_constructs__expression_unbox(_x2006, _ctx);
    }
    {
      return kk_function_call(kk_language_dash_constructs__expression, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), _accm1, (_accm1, x7_1386, _ctx));
    }
  }
  if (kk_language_dash_constructs__is_Lambda(inp0)) {
    struct kk_language_dash_constructs_Lambda* _con2010 = kk_language_dash_constructs__as_Lambda(inp0);
    kk_language_dash_constructs__patern arg2 = _con2010->arg;
    kk_language_dash_constructs__expression body2 = _con2010->body;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(inp0))) {
      kk_language_dash_constructs__expression_free(inp0, _ctx);
    }
    else {
      kk_language_dash_constructs__patern_dup(arg2);
      kk_language_dash_constructs__expression_dup(body2);
      kk_language_dash_constructs__expression_decref(inp0, _ctx);
    }
    { // tailcall
      kk_function_t _x2011 = kk_internal_dash_struct__new_ctailm_linter_fun2012(_accm1, arg2, _ctx); /*(language-constructs/expression) -> language-constructs/expression*/
      inp0 = body2;
      _accm1 = _x2011;
      goto kk__tailcall;
    }
  }
  if (kk_language_dash_constructs__is_If(inp0)) {
    struct kk_language_dash_constructs_If* _con2014 = kk_language_dash_constructs__as_If(inp0);
    kk_language_dash_constructs__expression cond0 = _con2014->cond;
    kk_language_dash_constructs__expression thus2 = _con2014->thus;
    kk_language_dash_constructs__expression otherwise2 = _con2014->otherwise;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(inp0))) {
      kk_language_dash_constructs__expression_free(inp0, _ctx);
    }
    else {
      kk_language_dash_constructs__expression_dup(cond0);
      kk_language_dash_constructs__expression_dup(otherwise2);
      kk_language_dash_constructs__expression_dup(thus2);
      kk_language_dash_constructs__expression_decref(inp0, _ctx);
    }
    kk_language_dash_constructs__expression x9_1391 = kk_internal_dash_struct_linter(cond0, _ctx); /*language-constructs/expression*/;
    if (kk_yielding(kk_context())) {
      kk_language_dash_constructs__expression_drop(x9_1391, _ctx);
      kk_box_t _x2015 = kk_std_core_hnd_yield_extend(kk_internal_dash_struct__new_ctailm_linter_fun2016(_accm1, otherwise2, thus2, _ctx), _ctx); /*1001*/
      return kk_language_dash_constructs__expression_unbox(_x2015, _ctx);
    }
    if (kk_language_dash_constructs__is_ETrue(x9_1391)) {
      kk_language_dash_constructs__expression_drop(otherwise2, _ctx);
      { // tailcall
        inp0 = thus2;
        goto kk__tailcall;
      }
    }
    if (kk_language_dash_constructs__is_EFalse(x9_1391)) {
      kk_language_dash_constructs__expression_drop(thus2, _ctx);
      { // tailcall
        inp0 = otherwise2;
        goto kk__tailcall;
      }
    }
    {
      kk_language_dash_constructs__expression_drop(thus2, _ctx);
      kk_language_dash_constructs__expression_drop(otherwise2, _ctx);
      kk_string_t _x10_13410;
      kk_string_t _x2018;
      kk_define_string_literal(, _s2019, 70, "Conditional part of if statement not of type boolean, instead it was: ")
      _x2018 = kk_string_dup(_s2019); /*string*/
      kk_string_t _x2020;
      kk_box_t _x2021 = kk_std_core_hnd__open_none1(kk_internal_dash_struct__new_ctailm_linter_fun2022(_ctx), kk_language_dash_constructs__expression_box(x9_1391, _ctx), _ctx); /*1001*/
      _x2020 = kk_string_unbox(_x2021); /*string*/
      _x10_13410 = kk_std_core__lp__plus__plus__1_rp_(_x2018, _x2020, _ctx); /*string*/
      kk_ssize_t _b_1683_1677 = (KK_IZ(0)); /*std/core/hnd/ev-index*/;
      kk_language_dash_constructs__expression x10_1394;
      kk_box_t _x2025 = kk_std_core_hnd__open_at2(_b_1683_1677, kk_internal_dash_struct__new_ctailm_linter_fun2026(_ctx), kk_string_box(_x10_13410), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*1002*/
      x10_1394 = kk_language_dash_constructs__expression_unbox(_x2025, _ctx); /*language-constructs/expression*/
      if (kk_yielding(kk_context())) {
        kk_language_dash_constructs__expression_drop(x10_1394, _ctx);
        kk_box_t _x2029 = kk_std_core_hnd_yield_extend(kk_internal_dash_struct__new_ctailm_linter_fun2030(_accm1, _ctx), _ctx); /*1001*/
        return kk_language_dash_constructs__expression_unbox(_x2029, _ctx);
      }
      {
        return kk_function_call(kk_language_dash_constructs__expression, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), _accm1, (_accm1, x10_1394, _ctx));
      }
    }
  }
  if (kk_language_dash_constructs__is_MLpair(inp0)) {
    struct kk_language_dash_constructs_MLpair* _con2033 = kk_language_dash_constructs__as_MLpair(inp0);
    kk_language_dash_constructs__expression e10 = _con2033->e1;
    kk_language_dash_constructs__expression e22 = _con2033->e2;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(inp0))) {
      kk_language_dash_constructs__expression_free(inp0, _ctx);
    }
    else {
      kk_language_dash_constructs__expression_dup(e10);
      kk_language_dash_constructs__expression_dup(e22);
      kk_language_dash_constructs__expression_decref(inp0, _ctx);
    }
    kk_language_dash_constructs__expression x11_1396 = kk_internal_dash_struct_linter(e10, _ctx); /*language-constructs/expression*/;
    if (kk_yielding(kk_context())) {
      kk_language_dash_constructs__expression_drop(x11_1396, _ctx);
      kk_box_t _x2034 = kk_std_core_hnd_yield_extend(kk_internal_dash_struct__new_ctailm_linter_fun2035(_accm1, e22, _ctx), _ctx); /*1001*/
      return kk_language_dash_constructs__expression_unbox(_x2034, _ctx);
    }
    { // tailcall
      kk_function_t _x2037 = kk_internal_dash_struct__new_ctailm_linter_fun2038(_accm1, x11_1396, _ctx); /*(language-constructs/expression) -> language-constructs/expression*/
      inp0 = e22;
      _accm1 = _x2037;
      goto kk__tailcall;
    }
  }
  if (kk_language_dash_constructs__is_Apply(inp0)) {
    struct kk_language_dash_constructs_Apply* _con2040 = kk_language_dash_constructs__as_Apply(inp0);
    kk_language_dash_constructs__expression func0 = _con2040->e1;
    kk_language_dash_constructs__expression args0 = _con2040->e2;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(inp0))) {
      kk_language_dash_constructs__expression_drop(args0, _ctx);
      kk_language_dash_constructs__expression_free(inp0, _ctx);
    }
    else {
      kk_language_dash_constructs__expression_dup(func0);
      kk_language_dash_constructs__expression_decref(inp0, _ctx);
    }
    if (kk_language_dash_constructs__is_Lambda(func0)) {
      struct kk_language_dash_constructs_Lambda* _con2041 = kk_language_dash_constructs__as_Lambda(func0);
      kk_language_dash_constructs__patern _pat71 = _con2041->arg;
      kk_language_dash_constructs__expression _pat81 = _con2041->body;
      if (kk_likely(kk_language_dash_constructs__expression_is_unique(func0))) {
        kk_language_dash_constructs__expression_drop(_pat81, _ctx);
        kk_language_dash_constructs__patern_drop(_pat71, _ctx);
        kk_language_dash_constructs__expression_free(func0, _ctx);
      }
      else {
        kk_language_dash_constructs__expression_decref(func0, _ctx);
      }
      return kk_function_call(kk_language_dash_constructs__expression, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), _accm1, (_accm1, kk_language_dash_constructs__new_EFalse(_ctx), _ctx));
    }
    if (kk_language_dash_constructs__is_Variable(func0)) {
      struct kk_language_dash_constructs_Variable* _con2042 = kk_language_dash_constructs__as_Variable(func0);
      kk_string_t _pat101 = _con2042->name;
      if (kk_likely(kk_language_dash_constructs__expression_is_unique(func0))) {
        kk_string_drop(_pat101, _ctx);
        kk_language_dash_constructs__expression_free(func0, _ctx);
      }
      else {
        kk_language_dash_constructs__expression_decref(func0, _ctx);
      }
      return kk_function_call(kk_language_dash_constructs__expression, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), _accm1, (_accm1, kk_language_dash_constructs__new_EFalse(_ctx), _ctx));
    }
    {
      kk_string_t _x12_1344;
      kk_string_t _x2043;
      kk_define_string_literal(, _s2044, 48, "Apply can only be called on a function, not on: ")
      _x2043 = kk_string_dup(_s2044); /*string*/
      kk_string_t _x2045;
      kk_box_t _x2046 = kk_std_core_hnd__open_none1(kk_internal_dash_struct__new_ctailm_linter_fun2047(_ctx), kk_language_dash_constructs__expression_box(func0, _ctx), _ctx); /*1001*/
      _x2045 = kk_string_unbox(_x2046); /*string*/
      _x12_1344 = kk_std_core__lp__plus__plus__1_rp_(_x2043, _x2045, _ctx); /*string*/
      kk_ssize_t _b_1706_1700 = (KK_IZ(0)); /*std/core/hnd/ev-index*/;
      kk_language_dash_constructs__expression x12_1399;
      kk_box_t _x2050 = kk_std_core_hnd__open_at2(_b_1706_1700, kk_internal_dash_struct__new_ctailm_linter_fun2051(_ctx), kk_string_box(_x12_1344), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*1002*/
      x12_1399 = kk_language_dash_constructs__expression_unbox(_x2050, _ctx); /*language-constructs/expression*/
      if (kk_yielding(kk_context())) {
        kk_language_dash_constructs__expression_drop(x12_1399, _ctx);
        kk_box_t _x2054 = kk_std_core_hnd_yield_extend(kk_internal_dash_struct__new_ctailm_linter_fun2055(_accm1, _ctx), _ctx); /*1001*/
        return kk_language_dash_constructs__expression_unbox(_x2054, _ctx);
      }
      {
        return kk_function_call(kk_language_dash_constructs__expression, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), _accm1, (_accm1, x12_1399, _ctx));
      }
    }
  }
  if (kk_language_dash_constructs__is_Let(inp0)) {
    struct kk_language_dash_constructs_Let* _con2058 = kk_language_dash_constructs__as_Let(inp0);
    kk_language_dash_constructs__patern arg00 = _con2058->arg;
    kk_language_dash_constructs__expression arg__val1 = _con2058->arg__val;
    kk_language_dash_constructs__expression body00 = _con2058->body;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(inp0))) {
      kk_language_dash_constructs__expression_drop(body00, _ctx);
      kk_language_dash_constructs__expression_drop(arg__val1, _ctx);
      kk_language_dash_constructs__patern_drop(arg00, _ctx);
      kk_language_dash_constructs__expression_free(inp0, _ctx);
    }
    else {
      kk_language_dash_constructs__expression_decref(inp0, _ctx);
    }
    return kk_function_call(kk_language_dash_constructs__expression, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), _accm1, (_accm1, kk_language_dash_constructs__new_EFalse(_ctx), _ctx));
  }
  if (kk_language_dash_constructs__is_Letrec(inp0)) {
    struct kk_language_dash_constructs_Letrec* _con2059 = kk_language_dash_constructs__as_Letrec(inp0);
    kk_language_dash_constructs__patern arg10 = _con2059->arg;
    kk_language_dash_constructs__expression arg__val00 = _con2059->arg__val;
    kk_language_dash_constructs__expression body10 = _con2059->body;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(inp0))) {
      kk_language_dash_constructs__expression_drop(body10, _ctx);
      kk_language_dash_constructs__expression_drop(arg__val00, _ctx);
      kk_language_dash_constructs__patern_drop(arg10, _ctx);
      kk_language_dash_constructs__expression_free(inp0, _ctx);
    }
    else {
      kk_language_dash_constructs__expression_decref(inp0, _ctx);
    }
    return kk_function_call(kk_language_dash_constructs__expression, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), _accm1, (_accm1, kk_language_dash_constructs__new_EFalse(_ctx), _ctx));
  }
  {
    return kk_function_call(kk_language_dash_constructs__expression, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), _accm1, (_accm1, inp0, _ctx));
  }
}


// lift anonymous function
struct kk_internal_dash_struct_linter_fun2061__t {
  struct kk_function_s _base;
};
static kk_language_dash_constructs__expression kk_internal_dash_struct_linter_fun2061(kk_function_t _fself, kk_language_dash_constructs__expression _ctail_1271, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct_new_linter_fun2061(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct_linter_fun2061, _ctx)
  return kk_function_dup(_fself);
}

static kk_language_dash_constructs__expression kk_internal_dash_struct_linter_fun2061(kk_function_t _fself, kk_language_dash_constructs__expression _ctail_1271, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _ctail_1271;
}

kk_language_dash_constructs__expression kk_internal_dash_struct_linter(kk_language_dash_constructs__expression inp1, kk_context_t* _ctx) { /* (inp : language-constructs/expression) -> <pure,console,scope> language-constructs/expression */ 
  bool _match_1859 = kk_std_core_hnd__evv_is_affine(_ctx); /*bool*/;
  if (_match_1859) {
    kk_std_core_types__ctail _x2060 = kk_ctail_nil(); /*ctail<0>*/
    return kk_internal_dash_struct__ctail_linter(inp1, _x2060, _ctx);
  }
  {
    return kk_internal_dash_struct__ctailm_linter(inp1, kk_internal_dash_struct_new_linter_fun2061(_ctx), _ctx);
  }
}
 
// monadic lift

kk_unit_t kk_internal_dash_struct__mlift1357_scope__handeler(kk_language_dash_constructs__expression elem, kk_string_t name, kk_ref_t scopeState, kk_std_core__list _y_1307, kk_context_t* _ctx) { /* forall<h,e> (elem : language-constructs/expression, name : string, scopeState : local-var<h,list<(string, language-constructs/expression)>>, list<(string, language-constructs/expression)>) -> <local<h>,exn|e> () */ 
  kk_unit_t _brw_1856 = kk_Unit;
  kk_box_t _x2066;
  kk_std_core__list _x2067;
  kk_box_t _x2068;
  kk_std_core_types__tuple2_ _x2069 = kk_std_core_types__new_dash__lp__comma__rp_(kk_string_box(name), kk_language_dash_constructs__expression_box(elem, _ctx), _ctx); /*(1004, 1005)*/
  _x2068 = kk_std_core_types__tuple2__box(_x2069, _ctx); /*1009*/
  _x2067 = kk_std_core__new_Cons(kk_reuse_null, _x2068, _y_1307, _ctx); /*list<1009>*/
  _x2066 = kk_std_core__list_box(_x2067, _ctx); /*1000*/
  kk_ref_set_borrow(scopeState,_x2066,kk_context());
  kk_ref_drop(scopeState, _ctx);
  _brw_1856; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_internal_dash_struct__mlift1358_scope__handeler_fun2071__t {
  struct kk_function_s _base;
  kk_string_t name0;
};
static kk_std_core_types__maybe kk_internal_dash_struct__mlift1358_scope__handeler_fun2071(kk_function_t _fself, kk_box_t _b_1751, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_mlift1358_scope__handeler_fun2071(kk_string_t name0, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__mlift1358_scope__handeler_fun2071__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct__mlift1358_scope__handeler_fun2071__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct__mlift1358_scope__handeler_fun2071, kk_context());
  _self->name0 = name0;
  return &_self->_base;
}

static kk_std_core_types__maybe kk_internal_dash_struct__mlift1358_scope__handeler_fun2071(kk_function_t _fself, kk_box_t _b_1751, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__mlift1358_scope__handeler_fun2071__t* _self = kk_function_as(struct kk_internal_dash_struct__mlift1358_scope__handeler_fun2071__t*, _fself);
  kk_string_t name0 = _self->name0; /* string */
  kk_drop_match(_self, {kk_string_dup(name0);}, {}, _ctx)
  kk_std_core_types__tuple2_ elem0_1769 = kk_std_core_types__tuple2__unbox(_b_1751, _ctx); /*(string, language-constructs/expression)*/;
  kk_unit_t __ = kk_Unit;
  bool _match_1855;
  kk_string_t _x2072;
  {
    kk_box_t _box_x1743 = elem0_1769.fst;
    kk_box_t _box_x1744 = elem0_1769.snd;
    kk_string_t _x = kk_string_unbox(_box_x1743);
    kk_string_dup(_x);
    _x2072 = _x; /*string*/
  }
  _match_1855 = kk_string_is_eq(_x2072,name0,kk_context()); /*bool*/
  if (_match_1855) {
    kk_std_core_types__maybe _x2075;
    kk_box_t _x2076;
    kk_language_dash_constructs__expression _x2077;
    {
      kk_box_t _box_x1745 = elem0_1769.fst;
      kk_box_t _box_x1746 = elem0_1769.snd;
      kk_language_dash_constructs__expression _x0 = kk_language_dash_constructs__expression_unbox(_box_x1746, NULL);
      kk_language_dash_constructs__expression_dup(_x0);
      kk_std_core_types__tuple2__drop(elem0_1769, _ctx);
      _x2077 = _x0; /*language-constructs/expression*/
    }
    _x2076 = kk_language_dash_constructs__expression_box(_x2077, _ctx); /*1034*/
    _x2075 = kk_std_core_types__new_Just(_x2076, _ctx); /*maybe<1034>*/
    return _x2075;
  }
  else {
    kk_std_core_types__tuple2__drop(elem0_1769, _ctx);
  }
  return kk_std_core_types__new_Nothing(_ctx);
}


// lift anonymous function
struct kk_internal_dash_struct__mlift1358_scope__handeler_fun2088__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct__mlift1358_scope__handeler_fun2088(kk_function_t _fself, kk_box_t _b_1759, kk_box_t _b_1760, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_mlift1358_scope__handeler_fun2088(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__mlift1358_scope__handeler_fun2088, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct__mlift1358_scope__handeler_fun2088(kk_function_t _fself, kk_box_t _b_1759, kk_box_t _b_1760, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _b_1767_1753 = kk_string_unbox(_b_1759); /*string*/;
  kk_std_core_types__optional _b_1768_1754 = kk_std_core_types__optional_unbox(_b_1760, _ctx); /*optional<exception-info>*/;
  return kk_std_core_throw(_b_1767_1753, _b_1768_1754, _ctx);
}

kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1358_scope__handeler(kk_string_t name0, kk_std_core__list _y_1309, kk_context_t* _ctx) { /* forall<h,e> (name0 : string, list<(string, language-constructs/expression)>) -> <local<h>,exn|e> language-constructs/expression */ 
  kk_std_core_types__maybe _match_1854;
  kk_function_t _x2070;
  kk_string_dup(name0);
  _x2070 = kk_internal_dash_struct__new_mlift1358_scope__handeler_fun2071(name0, _ctx); /*(1001) -> (forall<a> maybe<a>)*/
  _match_1854 = kk_std_core_find_maybe(_y_1309, _x2070, _ctx); /*maybe<1002>*/
  if (kk_std_core_types__is_Just(_match_1854)) {
    kk_box_t _box_x1752 = _match_1854._cons.Just.value;
    kk_language_dash_constructs__expression v = kk_language_dash_constructs__expression_unbox(_box_x1752, NULL);
    kk_string_drop(name0, _ctx);
    return v;
  }
  {
    kk_string_t _x1_1347;
    kk_string_t _x2081;
    kk_define_string_literal(, _s2082, 10, "Variable \'")
    _x2081 = kk_string_dup(_s2082); /*string*/
    kk_string_t _x2083;
    kk_string_t _x2084;
    kk_define_string_literal(, _s2085, 15, "\' not in scope.")
    _x2084 = kk_string_dup(_s2085); /*string*/
    _x2083 = kk_std_core__lp__plus__plus__1_rp_(name0, _x2084, _ctx); /*string*/
    _x1_1347 = kk_std_core__lp__plus__plus__1_rp_(_x2081, _x2083, _ctx); /*string*/
    kk_ssize_t _b_1763_1755;
    kk_std_core_hnd__htag _x2086 = kk_std_core_hnd__htag_dup(kk_std_core__tag_exn); /*std/core/hnd/htag<.hnd-exn>*/
    _b_1763_1755 = kk_std_core_hnd__evv_index(_x2086, _ctx); /*std/core/hnd/ev-index*/
    kk_box_t _x2087 = kk_std_core_hnd__open_at2(_b_1763_1755, kk_internal_dash_struct__new_mlift1358_scope__handeler_fun2088(_ctx), kk_string_box(_x1_1347), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*1002*/
    return kk_language_dash_constructs__expression_unbox(_x2087, _ctx);
  }
}


// lift anonymous function
struct kk_internal_dash_struct_scope__handeler_fun2092__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_internal_dash_struct_scope__handeler_fun2092(kk_function_t _fself, kk_std_core_hnd__marker _b_1795, kk_std_core_hnd__ev _b_1796, kk_box_t _b_1797, kk_box_t _b_1798, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct_new_scope__handeler_fun2092(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_internal_dash_struct_scope__handeler_fun2092__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct_scope__handeler_fun2092__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct_scope__handeler_fun2092, kk_context());
  _self->loc = loc;
  return &_self->_base;
}



// lift anonymous function
struct kk_internal_dash_struct_scope__handeler_fun2093__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_internal_dash_struct_scope__handeler_fun2093(kk_function_t _fself, kk_box_t _b_1792, kk_box_t _b_1793, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct_new_scope__handeler_fun2093(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_internal_dash_struct_scope__handeler_fun2093__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct_scope__handeler_fun2093__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct_scope__handeler_fun2093, kk_context());
  _self->loc = loc;
  return &_self->_base;
}



// lift anonymous function
struct kk_internal_dash_struct_scope__handeler_fun2096__t {
  struct kk_function_s _base;
  kk_box_t _b_1792;
  kk_box_t _b_1793;
  kk_ref_t loc;
};
static kk_unit_t kk_internal_dash_struct_scope__handeler_fun2096(kk_function_t _fself, kk_std_core__list _y_1307, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct_new_scope__handeler_fun2096(kk_box_t _b_1792, kk_box_t _b_1793, kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_internal_dash_struct_scope__handeler_fun2096__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct_scope__handeler_fun2096__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct_scope__handeler_fun2096, kk_context());
  _self->_b_1792 = _b_1792;
  _self->_b_1793 = _b_1793;
  _self->loc = loc;
  return &_self->_base;
}

static kk_unit_t kk_internal_dash_struct_scope__handeler_fun2096(kk_function_t _fself, kk_std_core__list _y_1307, kk_context_t* _ctx) {
  struct kk_internal_dash_struct_scope__handeler_fun2096__t* _self = kk_function_as(struct kk_internal_dash_struct_scope__handeler_fun2096__t*, _fself);
  kk_box_t _b_1792 = _self->_b_1792; /* 1000 */
  kk_box_t _b_1793 = _self->_b_1793; /* 1001 */
  kk_ref_t loc = _self->loc; /* local-var<1143,list<(string, language-constructs/expression)>> */
  kk_drop_match(_self, {kk_box_dup(_b_1792);kk_box_dup(_b_1793);kk_ref_dup(loc);}, {}, _ctx)
  kk_unit_t _brw_1853 = kk_Unit;
  kk_box_t _x2097;
  kk_std_core__list _x2098;
  kk_box_t _x2099;
  kk_std_core_types__tuple2_ _x2100 = kk_std_core_types__new_dash__lp__comma__rp_(_b_1792, _b_1793, _ctx); /*(1004, 1005)*/
  _x2099 = kk_std_core_types__tuple2__box(_x2100, _ctx); /*1009*/
  _x2098 = kk_std_core__new_Cons(kk_reuse_null, _x2099, _y_1307, _ctx); /*list<1009>*/
  _x2097 = kk_std_core__list_box(_x2098, _ctx); /*1000*/
  kk_ref_set_borrow(loc,_x2097,kk_context());
  kk_ref_drop(loc, _ctx);
  return _brw_1853;
}


// lift anonymous function
struct kk_internal_dash_struct_scope__handeler_fun2103__t {
  struct kk_function_s _base;
  kk_function_t next_1409;
};
static kk_box_t kk_internal_dash_struct_scope__handeler_fun2103(kk_function_t _fself, kk_box_t _b_1787, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct_new_scope__handeler_fun2103(kk_function_t next_1409, kk_context_t* _ctx) {
  struct kk_internal_dash_struct_scope__handeler_fun2103__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct_scope__handeler_fun2103__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct_scope__handeler_fun2103, kk_context());
  _self->next_1409 = next_1409;
  return &_self->_base;
}

static kk_box_t kk_internal_dash_struct_scope__handeler_fun2103(kk_function_t _fself, kk_box_t _b_1787, kk_context_t* _ctx) {
  struct kk_internal_dash_struct_scope__handeler_fun2103__t* _self = kk_function_as(struct kk_internal_dash_struct_scope__handeler_fun2103__t*, _fself);
  kk_function_t next_1409 = _self->next_1409; /* (list<(string, language-constructs/expression)>) -> <local<1143>,exn|1151> () */
  kk_drop_match(_self, {kk_function_dup(next_1409);}, {}, _ctx)
  kk_unit_t _x2104 = kk_Unit;
  kk_std_core__list _x2105 = kk_std_core__list_unbox(_b_1787, _ctx); /*list<(string, language-constructs/expression)>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core__list, kk_context_t*), next_1409, (next_1409, _x2105, _ctx));
  return kk_unit_box(_x2104);
}
static kk_box_t kk_internal_dash_struct_scope__handeler_fun2093(kk_function_t _fself, kk_box_t _b_1792, kk_box_t _b_1793, kk_context_t* _ctx) {
  struct kk_internal_dash_struct_scope__handeler_fun2093__t* _self = kk_function_as(struct kk_internal_dash_struct_scope__handeler_fun2093__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<1143,list<(string, language-constructs/expression)>> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_std_core__list x_1408;
  kk_box_t _x2094;
  kk_ref_t _x2095 = kk_ref_dup(loc); /*local-var<1143,list<(string, language-constructs/expression)>>*/
  _x2094 = kk_ref_get(_x2095,kk_context()); /*1000*/
  x_1408 = kk_std_core__list_unbox(_x2094, _ctx); /*list<(string, language-constructs/expression)>*/
  kk_function_t next_1409 = kk_internal_dash_struct_new_scope__handeler_fun2096(_b_1792, _b_1793, loc, _ctx); /*(list<(string, language-constructs/expression)>) -> <local<1143>,exn|1151> ()*/;
  kk_unit_t _x2101 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_1408, _ctx);
    kk_box_t _x2102 = kk_std_core_hnd_yield_extend(kk_internal_dash_struct_new_scope__handeler_fun2103(next_1409, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x2102);
  }
  else {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core__list, kk_context_t*), next_1409, (next_1409, x_1408, _ctx));
  }
  return kk_unit_box(_x2101);
}
static kk_box_t kk_internal_dash_struct_scope__handeler_fun2092(kk_function_t _fself, kk_std_core_hnd__marker _b_1795, kk_std_core_hnd__ev _b_1796, kk_box_t _b_1797, kk_box_t _b_1798, kk_context_t* _ctx) {
  struct kk_internal_dash_struct_scope__handeler_fun2092__t* _self = kk_function_as(struct kk_internal_dash_struct_scope__handeler_fun2092__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<1143,list<(string, language-constructs/expression)>> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  return kk_std_core_hnd_under2(_b_1796, kk_internal_dash_struct_new_scope__handeler_fun2093(loc, _ctx), _b_1797, _b_1798, _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct_scope__handeler_fun2108__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_internal_dash_struct_scope__handeler_fun2108(kk_function_t _fself, kk_box_t _b_1804, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct_new_scope__handeler_fun2108(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_internal_dash_struct_scope__handeler_fun2108__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct_scope__handeler_fun2108__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct_scope__handeler_fun2108, kk_context());
  _self->loc = loc;
  return &_self->_base;
}



// lift anonymous function
struct kk_internal_dash_struct_scope__handeler_fun2112__t {
  struct kk_function_s _base;
  kk_box_t _b_1804;
};
static kk_box_t kk_internal_dash_struct_scope__handeler_fun2112(kk_function_t _fself, kk_box_t _b_1802, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct_new_scope__handeler_fun2112(kk_box_t _b_1804, kk_context_t* _ctx) {
  struct kk_internal_dash_struct_scope__handeler_fun2112__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct_scope__handeler_fun2112__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct_scope__handeler_fun2112, kk_context());
  _self->_b_1804 = _b_1804;
  return &_self->_base;
}

static kk_box_t kk_internal_dash_struct_scope__handeler_fun2112(kk_function_t _fself, kk_box_t _b_1802, kk_context_t* _ctx) {
  struct kk_internal_dash_struct_scope__handeler_fun2112__t* _self = kk_function_as(struct kk_internal_dash_struct_scope__handeler_fun2112__t*, _fself);
  kk_box_t _b_1804 = _self->_b_1804; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_1804);}, {}, _ctx)
  kk_language_dash_constructs__expression _x2113;
  kk_string_t _x2114 = kk_string_unbox(_b_1804); /*string*/
  kk_std_core__list _x2115 = kk_std_core__list_unbox(_b_1802, _ctx); /*list<(string, language-constructs/expression)>*/
  _x2113 = kk_internal_dash_struct__mlift1358_scope__handeler(_x2114, _x2115, _ctx); /*language-constructs/expression*/
  return kk_language_dash_constructs__expression_box(_x2113, _ctx);
}
static kk_box_t kk_internal_dash_struct_scope__handeler_fun2108(kk_function_t _fself, kk_box_t _b_1804, kk_context_t* _ctx) {
  struct kk_internal_dash_struct_scope__handeler_fun2108__t* _self = kk_function_as(struct kk_internal_dash_struct_scope__handeler_fun2108__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<1143,list<(string, language-constructs/expression)>> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_std_core__list x0_1414;
  kk_box_t _x2109 = kk_ref_get(loc,kk_context()); /*1000*/
  x0_1414 = kk_std_core__list_unbox(_x2109, _ctx); /*list<(string, language-constructs/expression)>*/
  kk_language_dash_constructs__expression _x2110;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x0_1414, _ctx);
    kk_box_t _x2111 = kk_std_core_hnd_yield_extend(kk_internal_dash_struct_new_scope__handeler_fun2112(_b_1804, _ctx), _ctx); /*1001*/
    _x2110 = kk_language_dash_constructs__expression_unbox(_x2111, _ctx); /*language-constructs/expression*/
  }
  else {
    kk_string_t _x2116 = kk_string_unbox(_b_1804); /*string*/
    _x2110 = kk_internal_dash_struct__mlift1358_scope__handeler(_x2116, x0_1414, _ctx); /*language-constructs/expression*/
  }
  return kk_language_dash_constructs__expression_box(_x2110, _ctx);
}


// lift anonymous function
struct kk_internal_dash_struct_scope__handeler_fun2117__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct_scope__handeler_fun2117(kk_function_t _fself, kk_box_t _x10, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct_new_scope__handeler_fun2117(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct_scope__handeler_fun2117, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct_scope__handeler_fun2117(kk_function_t _fself, kk_box_t _x10, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _x10;
}

kk_box_t kk_internal_dash_struct_scope__handeler(kk_function_t fun__to__exec, kk_context_t* _ctx) { /* forall<a,e> (fun_to_exec : () -> <scope,exn|e> a) -> <exn|e> a */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core__list_box(kk_std_core__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<1143,list<(string, language-constructs/expression)>>*/;
  kk_box_t res;
  kk_internal_dash_struct__hnd_scope _x2089;
  kk_std_core_hnd__clause2 _x2090;
  kk_function_t _x2091;
  kk_ref_dup(loc);
  _x2091 = kk_internal_dash_struct_new_scope__handeler_fun2092(loc, _ctx); /*(std/core/hnd/marker<1025,1026>, std/core/hnd/ev<1024>, 1021, 1022) -> 1025 1002*/
  _x2090 = kk_std_core_hnd__new_Clause2(_x2091, _ctx); /*std/core/hnd/clause2<1021,1022,1023,1024,1025,1026>*/
  kk_std_core_hnd__clause1 _x2106;
  kk_function_t _x2107;
  kk_ref_dup(loc);
  _x2107 = kk_internal_dash_struct_new_scope__handeler_fun2108(loc, _ctx); /*(1002) -> 1000 1003*/
  _x2106 = kk_std_core_hnd_clause_tail1(_x2107, _ctx); /*std/core/hnd/clause1<1002,1003,1004,1000,1001>*/
  _x2089 = kk_internal_dash_struct__new_Hnd_scope(kk_reuse_null, _x2090, _x2106, _ctx); /*internal-struct/.hnd-scope<13,14>*/
  res = kk_internal_dash_struct__handle_scope((KK_I32(1)), _x2089, kk_internal_dash_struct_new_scope__handeler_fun2117(_ctx), fun__to__exec, _ctx); /*1150*/
  return kk_std_core_hnd_prompt_local_var(loc, res, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_internal_dash_struct__mlift1359_main_fun2119__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct__mlift1359_main_fun2119(kk_function_t _fself, kk_box_t _b_1823, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_mlift1359_main_fun2119(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__mlift1359_main_fun2119, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct__mlift1359_main_fun2119(kk_function_t _fself, kk_box_t _b_1823, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_language_dash_constructs__expression exp_1826 = kk_language_dash_constructs__expression_unbox(_b_1823, _ctx); /*language-constructs/expression*/;
  kk_string_t s_1265 = kk_language_dash_constructs_show_1(exp_1826, _ctx); /*string*/;
  kk_unit_t _x2120 = kk_Unit;
  kk_std_core_printsln(s_1265, _ctx);
  return kk_unit_box(_x2120);
}

kk_unit_t kk_internal_dash_struct__mlift1359_main(kk_language_dash_constructs__expression v, kk_context_t* _ctx) { /* forall<h> (v : language-constructs/expression) -> <pure,console,scope> () */ 
  kk_box_t _x2118 = kk_std_core_hnd__open_none1(kk_internal_dash_struct__new_mlift1359_main_fun2119(_ctx), kk_language_dash_constructs__expression_box(v, _ctx), _ctx); /*1001*/
  kk_unit_unbox(_x2118); return kk_Unit;
}


// lift anonymous function
struct kk_internal_dash_struct_main_fun2122__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct_main_fun2122(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct_new_main_fun2122(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct_main_fun2122, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_internal_dash_struct_main_fun2135__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_internal_dash_struct_main_fun2135(kk_function_t _fself, kk_language_dash_constructs__expression v, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct_new_main_fun2135(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct_main_fun2135, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_internal_dash_struct_main_fun2137__t {
  struct kk_function_s _base;
};
static kk_box_t kk_internal_dash_struct_main_fun2137(kk_function_t _fself, kk_box_t _b_1833, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct_new_main_fun2137(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct_main_fun2137, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_internal_dash_struct_main_fun2137(kk_function_t _fself, kk_box_t _b_1833, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t s_1265;
  kk_language_dash_constructs__expression _x2138 = kk_language_dash_constructs__expression_unbox(_b_1833, _ctx); /*language-constructs/expression*/
  s_1265 = kk_language_dash_constructs_show_1(_x2138, _ctx); /*string*/
  kk_unit_t _x2139 = kk_Unit;
  kk_std_core_printsln(s_1265, _ctx);
  return kk_unit_box(_x2139);
}
static kk_unit_t kk_internal_dash_struct_main_fun2135(kk_function_t _fself, kk_language_dash_constructs__expression v, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x2136 = kk_std_core_hnd__open_none1(kk_internal_dash_struct_new_main_fun2137(_ctx), kk_language_dash_constructs__expression_box(v, _ctx), _ctx); /*1001*/
  return kk_unit_unbox(_x2136);
}


// lift anonymous function
struct kk_internal_dash_struct_main_fun2142__t {
  struct kk_function_s _base;
  kk_function_t next_1422;
};
static kk_box_t kk_internal_dash_struct_main_fun2142(kk_function_t _fself, kk_box_t _b_1838, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct_new_main_fun2142(kk_function_t next_1422, kk_context_t* _ctx) {
  struct kk_internal_dash_struct_main_fun2142__t* _self = kk_function_alloc_as(struct kk_internal_dash_struct_main_fun2142__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_internal_dash_struct_main_fun2142, kk_context());
  _self->next_1422 = next_1422;
  return &_self->_base;
}

static kk_box_t kk_internal_dash_struct_main_fun2142(kk_function_t _fself, kk_box_t _b_1838, kk_context_t* _ctx) {
  struct kk_internal_dash_struct_main_fun2142__t* _self = kk_function_as(struct kk_internal_dash_struct_main_fun2142__t*, _fself);
  kk_function_t next_1422 = _self->next_1422; /* (language-constructs/expression) -> <pure,console,internal-struct/scope> () */
  kk_drop_match(_self, {kk_function_dup(next_1422);}, {}, _ctx)
  kk_unit_t _x2143 = kk_Unit;
  kk_language_dash_constructs__expression _x2144 = kk_language_dash_constructs__expression_unbox(_b_1838, _ctx); /*language-constructs/expression*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), next_1422, (next_1422, _x2144, _ctx));
  return kk_unit_box(_x2143);
}
static kk_box_t kk_internal_dash_struct_main_fun2122(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_language_dash_constructs__expression x_1421;
  kk_language_dash_constructs__expression _x2123;
  kk_language_dash_constructs__patern _x2124;
  kk_language_dash_constructs__patern _x2125;
  kk_string_t _x2126;
  kk_define_string_literal(, _s2127, 8, "variable")
  _x2126 = kk_string_dup(_s2127); /*string*/
  _x2125 = kk_language_dash_constructs__new_Ident(kk_reuse_null, _x2126, _ctx); /*language-constructs/patern*/
  kk_language_dash_constructs__patern _x2128;
  kk_language_dash_constructs__patern _x2129;
  kk_string_t _x2130;
  kk_define_string_literal(, _s2131, 18, "not a variable ;-)")
  _x2130 = kk_string_dup(_s2131); /*string*/
  _x2129 = kk_language_dash_constructs__new_Ident(kk_reuse_null, _x2130, _ctx); /*language-constructs/patern*/
  _x2128 = kk_language_dash_constructs__new_Patpair(kk_reuse_null, kk_language_dash_constructs__new_NullPat(_ctx), _x2129, _ctx); /*language-constructs/patern*/
  _x2124 = kk_language_dash_constructs__new_Patpair(kk_reuse_null, _x2125, _x2128, _ctx); /*language-constructs/patern*/
  kk_language_dash_constructs__expression _x2132;
  kk_language_dash_constructs__expression _x2133 = kk_language_dash_constructs__new_Num(kk_reuse_null, kk_integer_from_small(420), _ctx); /*language-constructs/expression*/
  kk_language_dash_constructs__expression _x2134 = kk_language_dash_constructs__new_Num(kk_reuse_null, kk_integer_from_small(69), _ctx); /*language-constructs/expression*/
  _x2132 = kk_language_dash_constructs__new_MLpair(kk_reuse_null, _x2133, _x2134, _ctx); /*language-constructs/expression*/
  _x2123 = kk_language_dash_constructs__new_Lambda(kk_reuse_null, _x2124, _x2132, _ctx); /*language-constructs/expression*/
  x_1421 = kk_internal_dash_struct_linter(_x2123, _ctx); /*language-constructs/expression*/
  kk_function_t next_1422 = kk_internal_dash_struct_new_main_fun2135(_ctx); /*(language-constructs/expression) -> <pure,console,internal-struct/scope> ()*/;
  kk_unit_t _x2140 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_language_dash_constructs__expression_drop(x_1421, _ctx);
    kk_box_t _x2141 = kk_std_core_hnd_yield_extend(kk_internal_dash_struct_new_main_fun2142(next_1422, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x2141);
  }
  else {
    kk_function_call(kk_unit_t, (kk_function_t, kk_language_dash_constructs__expression, kk_context_t*), next_1422, (next_1422, x_1421, _ctx));
  }
  return kk_unit_box(_x2140);
}

kk_unit_t kk_internal_dash_struct_main(kk_context_t* _ctx) { /* () -> <pure,console> () */ 
  kk_ref_t loc = kk_ref_alloc((kk_language_dash_constructs__expression_box(kk_language_dash_constructs__new_EFalse(_ctx), _ctx)),kk_context()); /*local-var<1242,language-constructs/expression>*/;
  kk_ref_t loc0 = kk_ref_alloc((kk_std_core__list_box(kk_std_core__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<1242,list<(string, language-constructs/expression)>>*/;
  kk_unit_t res0 = kk_Unit;
  kk_box_t _x2121 = kk_internal_dash_struct_scope__handeler(kk_internal_dash_struct_new_main_fun2122(_ctx), _ctx); /*1150*/
  kk_unit_unbox(_x2121);
  kk_unit_t res = kk_Unit;
  kk_box_t _x2145 = kk_std_core_hnd_prompt_local_var(loc0, kk_unit_box(res0), _ctx); /*1001*/
  kk_unit_unbox(_x2145);
  kk_box_t _x2146 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*1001*/
  kk_unit_unbox(_x2146); return kk_Unit;
}


// lift anonymous function
struct kk_internal_dash_struct__hmain_fun2147__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_internal_dash_struct__hmain_fun2147(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_internal_dash_struct__new_hmain_fun2147(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_internal_dash_struct__hmain_fun2147, _ctx)
  return kk_function_dup(_fself);
}

static kk_unit_t kk_internal_dash_struct__hmain_fun2147(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_internal_dash_struct_main(_ctx);
}

kk_unit_t kk_internal_dash_struct__hmain(kk_context_t* _ctx) { /* () -> <console,div> () */ 
  kk_std_core__default_exn(kk_internal_dash_struct__new_hmain_fun2147(_ctx), _ctx); return kk_Unit;
}

// main exit
static void _kk_main_exit(void) {
  kk_context_t* _ctx = kk_get_context();
  kk_internal_dash_struct__done(_ctx);
}

// main entry
int main(int argc, char** argv) {
  kk_assert(sizeof(size_t)==8 && sizeof(void*)==8);
  kk_context_t* _ctx = kk_main_start(argc, argv);
  kk_internal_dash_struct__init(_ctx);
  atexit(&_kk_main_exit);
  kk_internal_dash_struct__hmain(_ctx);
  kk_internal_dash_struct__done(_ctx);
  kk_main_end(_ctx);
  return 0;
}

// initialization
void kk_internal_dash_struct__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core__init(_ctx);
  kk_language_dash_constructs__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x1896;
    kk_define_string_literal(, _s1897, 21, "scope.internal-struct")
    _x1896 = kk_string_dup(_s1897); /*string*/
    kk_internal_dash_struct__tag_scope = kk_std_core_hnd__new_Htag(_x1896, _ctx); /*std/core/hnd/htag<internal-struct/.hnd-scope>*/
  }
}

// termination
void kk_internal_dash_struct__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_internal_dash_struct__tag_scope, _ctx);
  kk_language_dash_constructs__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
