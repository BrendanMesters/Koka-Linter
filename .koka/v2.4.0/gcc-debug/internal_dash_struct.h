#pragma once
#ifndef kk_internal_dash_struct_H
#define kk_internal_dash_struct_H
// Koka generated module: "internal-struct", koka version: 2.4.0, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core.h"
#include "language_dash_constructs.h"

// type declarations

// type internal-struct/.hnd-scope
struct kk_internal_dash_struct__hnd_scope_s {
  kk_block_t _block;
};
typedef struct kk_internal_dash_struct__hnd_scope_s* kk_internal_dash_struct__hnd_scope;
struct kk_internal_dash_struct__Hnd_scope {
  struct kk_internal_dash_struct__hnd_scope_s _base;
  kk_std_core_hnd__clause2 fun_add;
  kk_std_core_hnd__clause1 fun_get;
};
static inline kk_internal_dash_struct__hnd_scope kk_internal_dash_struct__base_Hnd_scope(struct kk_internal_dash_struct__Hnd_scope* _x) {
  return &_x->_base;
}
static inline kk_internal_dash_struct__hnd_scope kk_internal_dash_struct__new_Hnd_scope(kk_reuse_t _at, kk_std_core_hnd__clause2 fun_add, kk_std_core_hnd__clause1 fun_get, kk_context_t* _ctx) {
  struct kk_internal_dash_struct__Hnd_scope* _con = kk_block_alloc_at_as(struct kk_internal_dash_struct__Hnd_scope, _at, 2 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->fun_add = fun_add;
  _con->fun_get = fun_get;
  return kk_internal_dash_struct__base_Hnd_scope(_con);
}
static inline struct kk_internal_dash_struct__Hnd_scope* kk_internal_dash_struct__as_Hnd_scope(kk_internal_dash_struct__hnd_scope x) {
  return kk_basetype_as_assert(struct kk_internal_dash_struct__Hnd_scope*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_internal_dash_struct__is_Hnd_scope(kk_internal_dash_struct__hnd_scope x) {
  return (true);
}
static inline kk_internal_dash_struct__hnd_scope kk_internal_dash_struct__hnd_scope_dup(kk_internal_dash_struct__hnd_scope _x) {
  return kk_basetype_dup_as(kk_internal_dash_struct__hnd_scope, _x);
}
static inline void kk_internal_dash_struct__hnd_scope_drop(kk_internal_dash_struct__hnd_scope _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_internal_dash_struct__hnd_scope kk_internal_dash_struct__hnd_scope_hole() {
  return (kk_internal_dash_struct__hnd_scope)(1);
}
static inline bool kk_internal_dash_struct__hnd_scope_is_unique(kk_internal_dash_struct__hnd_scope _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_internal_dash_struct__hnd_scope_free(kk_internal_dash_struct__hnd_scope _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_internal_dash_struct__hnd_scope_decref(kk_internal_dash_struct__hnd_scope _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_internal_dash_struct__hnd_scope_dropn_reuse(kk_internal_dash_struct__hnd_scope _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_internal_dash_struct__hnd_scope_dropn(kk_internal_dash_struct__hnd_scope _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_internal_dash_struct__hnd_scope_reuse(kk_internal_dash_struct__hnd_scope _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_internal_dash_struct__hnd_scope_box(kk_internal_dash_struct__hnd_scope _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_internal_dash_struct__hnd_scope kk_internal_dash_struct__hnd_scope_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_internal_dash_struct__hnd_scope, _x);
}

// value type internal-struct/result
struct kk_internal_dash_struct_Value {
  kk_language_dash_constructs__expression exp;
};
struct kk_internal_dash_struct_ResultError {
  kk_string_t s;
};
struct kk_internal_dash_struct_result_s {
  kk_value_tag_t _tag;
  union {
    struct kk_internal_dash_struct_Value Value;
    struct kk_internal_dash_struct_ResultError ResultError;
  } _cons;
};
typedef struct kk_internal_dash_struct_result_s kk_internal_dash_struct__result;
static inline kk_internal_dash_struct__result kk_internal_dash_struct__new_Value(kk_language_dash_constructs__expression exp, kk_context_t* _ctx) {
  kk_internal_dash_struct__result _con;
  _con._tag = kk_value_tag(1);
  _con._cons.Value.exp = exp;
  return _con;
}
static inline kk_internal_dash_struct__result kk_internal_dash_struct__new_ResultError(kk_string_t s, kk_context_t* _ctx) {
  kk_internal_dash_struct__result _con;
  _con._tag = kk_value_tag(2);
  _con._cons.ResultError.s = s;
  return _con;
}
static inline bool kk_internal_dash_struct__is_Value(kk_internal_dash_struct__result x) {
  return (kk_value_tag_eq(x._tag, kk_value_tag(1)));
}
static inline bool kk_internal_dash_struct__is_ResultError(kk_internal_dash_struct__result x) {
  return (kk_value_tag_eq(x._tag, kk_value_tag(2)));
}
static inline kk_ssize_t kk_internal_dash_struct__result_scan_count(kk_internal_dash_struct__result _x) {
  if (kk_internal_dash_struct__is_Value(_x)) return 2;
  else return 2;
}
static inline kk_internal_dash_struct__result kk_internal_dash_struct__result_dup(kk_internal_dash_struct__result _x) {
  if (kk_internal_dash_struct__is_Value(_x)) {
    kk_language_dash_constructs__expression_dup(_x._cons.Value.exp);
  }
  else {
    kk_string_dup(_x._cons.ResultError.s);
  }
  return _x;
}
static inline void kk_internal_dash_struct__result_drop(kk_internal_dash_struct__result _x, kk_context_t* _ctx) {
  if (kk_internal_dash_struct__is_Value(_x)) {
    kk_language_dash_constructs__expression_drop(_x._cons.Value.exp, _ctx);
  }
  else {
    kk_string_drop(_x._cons.ResultError.s, _ctx);
  }
}
static inline kk_box_t kk_internal_dash_struct__result_box(kk_internal_dash_struct__result _x, kk_context_t* _ctx) {
  kk_box_t _box;
  kk_valuetype_box(kk_internal_dash_struct__result, _box, _x, kk_internal_dash_struct__result_scan_count(_x), _ctx);
  return _box;
}
static inline kk_internal_dash_struct__result kk_internal_dash_struct__result_unbox(kk_box_t _x, kk_context_t* _ctx) {
  kk_boxed_value_t _p;
  kk_internal_dash_struct__result _unbox;
  kk_valuetype_unbox_(kk_internal_dash_struct__result, _p, _unbox, _x, _ctx);
  if (_ctx!=NULL && _p!=NULL) {
    if (kk_basetype_is_unique(_p)) { kk_basetype_free(_p,_ctx); } else {
      kk_internal_dash_struct__result_dup(_unbox);
      kk_basetype_decref(_p, _ctx);
    }
  }
  return _unbox;
}

// type internal-struct/scope
struct kk_internal_dash_struct__scope_s {
  kk_block_t _block;
};
typedef struct kk_internal_dash_struct__scope_s* kk_internal_dash_struct__scope;
struct kk_internal_dash_struct_Scope {
  struct kk_internal_dash_struct__scope_s _base;
  kk_internal_dash_struct__hnd_scope _field1;
};
static inline kk_internal_dash_struct__scope kk_internal_dash_struct__base_Scope(struct kk_internal_dash_struct_Scope* _x) {
  return &_x->_base;
}
static inline kk_internal_dash_struct__scope kk_internal_dash_struct__new_Scope(kk_reuse_t _at, kk_internal_dash_struct__hnd_scope _field1, kk_context_t* _ctx) {
  struct kk_internal_dash_struct_Scope* _con = kk_block_alloc_at_as(struct kk_internal_dash_struct_Scope, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_internal_dash_struct__base_Scope(_con);
}
static inline struct kk_internal_dash_struct_Scope* kk_internal_dash_struct__as_Scope(kk_internal_dash_struct__scope x) {
  return kk_basetype_as_assert(struct kk_internal_dash_struct_Scope*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_internal_dash_struct__is_Scope(kk_internal_dash_struct__scope x) {
  return (true);
}
static inline kk_internal_dash_struct__scope kk_internal_dash_struct__scope_dup(kk_internal_dash_struct__scope _x) {
  return kk_basetype_dup_as(kk_internal_dash_struct__scope, _x);
}
static inline void kk_internal_dash_struct__scope_drop(kk_internal_dash_struct__scope _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_internal_dash_struct__scope kk_internal_dash_struct__scope_hole() {
  return (kk_internal_dash_struct__scope)(1);
}
static inline bool kk_internal_dash_struct__scope_is_unique(kk_internal_dash_struct__scope _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_internal_dash_struct__scope_free(kk_internal_dash_struct__scope _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_internal_dash_struct__scope_decref(kk_internal_dash_struct__scope _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_internal_dash_struct__scope_dropn_reuse(kk_internal_dash_struct__scope _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_internal_dash_struct__scope_dropn(kk_internal_dash_struct__scope _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_internal_dash_struct__scope_reuse(kk_internal_dash_struct__scope _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_internal_dash_struct__scope_box(kk_internal_dash_struct__scope _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_internal_dash_struct__scope kk_internal_dash_struct__scope_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_internal_dash_struct__scope, _x);
}

// value declarations
 
// Automatically generated. Tests for the `Value` constructor of the `:result` type.

static inline bool kk_internal_dash_struct_is_value(kk_internal_dash_struct__result result, kk_context_t* _ctx) { /* (result : result) -> bool */ 
  if (kk_internal_dash_struct__is_Value(result)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ResultError` constructor of the `:result` type.

static inline bool kk_internal_dash_struct_is_resultError(kk_internal_dash_struct__result result, kk_context_t* _ctx) { /* (result : result) -> bool */ 
  if (kk_internal_dash_struct__is_ResultError(result)) {
    return true;
  }
  {
    return false;
  }
}

extern kk_std_core_hnd__htag kk_internal_dash_struct__tag_scope;

kk_box_t kk_internal_dash_struct__handle_scope(int32_t cfc, kk_internal_dash_struct__hnd_scope hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-scope<e,b>, ret : (res : a) -> e b, action : () -> <scope|e> a) -> e b */ 
 
// select `get` operation out of the `:scope` effect handler

static inline kk_std_core_hnd__clause1 kk_internal_dash_struct__select_get(kk_internal_dash_struct__hnd_scope hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-scope<e,a>) -> std/core/hnd/clause1<string,language-constructs/expression,.hnd-scope,e,a> */ 
  {
    struct kk_internal_dash_struct__Hnd_scope* _con1899 = kk_internal_dash_struct__as_Hnd_scope(hnd);
    kk_std_core_hnd__clause1 fun_get = _con1899->fun_get;
    return kk_std_core_hnd__clause1_dup(fun_get);
  }
}
 
// select `add` operation out of the `:scope` effect handler

static inline kk_std_core_hnd__clause2 kk_internal_dash_struct__select_add(kk_internal_dash_struct__hnd_scope hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-scope<e,a>) -> std/core/hnd/clause2<string,language-constructs/expression,(),.hnd-scope,e,a> */ 
  {
    struct kk_internal_dash_struct__Hnd_scope* _con1900 = kk_internal_dash_struct__as_Hnd_scope(hnd);
    kk_std_core_hnd__clause2 fun_add = _con1900->fun_add;
    return kk_std_core_hnd__clause2_dup(fun_add);
  }
}

static inline kk_unit_t kk_internal_dash_struct_printexpr(kk_language_dash_constructs__expression exp, kk_context_t* _ctx) { /* (exp : language-constructs/expression) -> console () */ 
  kk_string_t s_1260 = kk_language_dash_constructs_show_1(exp, _ctx); /*string*/;
  kk_std_core_printsln(s_1260, _ctx); return kk_Unit;
}
 
// call `get` operation of the `:scope` effect

static inline kk_language_dash_constructs__expression kk_internal_dash_struct_get(kk_string_t name, kk_context_t* _ctx) { /* (name : string) -> scope language-constructs/expression */ 
  kk_std_core_hnd__ev ev_1361;
  kk_ssize_t _x1901 = (KK_IZ(0)); /*ssize_t*/
  ev_1361 = kk_evv_at(_x1901,kk_context()); /*std/core/hnd/ev<internal-struct/.hnd-scope>*/
  kk_box_t _x1902;
  {
    struct kk_std_core_hnd_Ev* _con1903 = kk_std_core_hnd__as_Ev(ev_1361);
    kk_std_core_hnd__marker m0 = _con1903->marker;
    kk_box_t _box_x1443 = _con1903->hnd;
    kk_internal_dash_struct__hnd_scope h = kk_internal_dash_struct__hnd_scope_unbox(_box_x1443, NULL);
    kk_internal_dash_struct__hnd_scope_dup(h);
    kk_std_core_hnd__clause1 _match_1876;
    kk_std_core_hnd__clause1 _brw_1877 = kk_internal_dash_struct__select_get(h, _ctx); /*std/core/hnd/clause1<string,language-constructs/expression,internal-struct/.hnd-scope,161,162>*/;
    kk_internal_dash_struct__hnd_scope_drop(h, _ctx);
    _match_1876 = _brw_1877; /*std/core/hnd/clause1<string,language-constructs/expression,internal-struct/.hnd-scope,161,162>*/
    {
      kk_function_t _fun_unbox_x1447 = _match_1876.clause;
      _x1902 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1447, (_fun_unbox_x1447, m0, ev_1361, kk_string_box(name), _ctx)); /*1010*/
    }
  }
  return kk_language_dash_constructs__expression_unbox(_x1902, _ctx);
}

kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1350_op(kk_std_core_types__ctail _acc, kk_language_dash_constructs__expression _y_1278, kk_context_t* _ctx); /* (ctail<language-constructs/expression>, language-constructs/expression) -> <scope,console,div,exn> language-constructs/expression */ 

kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1351_op(kk_std_core_types__ctail _acc0, kk_language_dash_constructs__expression _y_1283, kk_context_t* _ctx); /* (ctail<language-constructs/expression>, language-constructs/expression) -> <exn,console,div,scope> language-constructs/expression */ 

kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1352_op(kk_std_core_types__ctail _acc1, kk_language_dash_constructs__expression otherwise, kk_language_dash_constructs__expression thus, kk_language_dash_constructs__expression _y_1280, kk_context_t* _ctx); /* (ctail<language-constructs/expression>, otherwise : language-constructs/expression, thus : language-constructs/expression, language-constructs/expression) -> <div,exn,scope,console> language-constructs/expression */ 

kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1353_op(kk_std_core_types__ctail _acc2, kk_language_dash_constructs__expression e2, kk_language_dash_constructs__expression _ctail_1268, kk_context_t* _ctx); /* (ctail<language-constructs/expression>, e2 : language-constructs/expression, language-constructs/expression) -> <div,exn,scope,console> language-constructs/expression */ 

kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1354_op(kk_std_core_types__ctail _acc3, kk_language_dash_constructs__expression _y_1287, kk_context_t* _ctx); /* (ctail<language-constructs/expression>, language-constructs/expression) -> <exn,console,div,scope> language-constructs/expression */ 

kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1355_op(kk_function_t _accm, kk_language_dash_constructs__expression otherwise0, kk_language_dash_constructs__expression thus0, kk_language_dash_constructs__expression _y_1293, kk_context_t* _ctx); /* ((language-constructs/expression) -> language-constructs/expression, otherwise : language-constructs/expression, thus : language-constructs/expression, language-constructs/expression) -> <div,exn,scope,console> language-constructs/expression */ 

kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1356_op(kk_function_t _accm0, kk_language_dash_constructs__expression e20, kk_language_dash_constructs__expression _ctail_1274, kk_context_t* _ctx); /* ((language-constructs/expression) -> language-constructs/expression, e2 : language-constructs/expression, language-constructs/expression) -> <div,exn,scope,console> language-constructs/expression */ 

kk_language_dash_constructs__expression kk_internal_dash_struct__ctail_linter(kk_language_dash_constructs__expression inp, kk_std_core_types__ctail _acc4, kk_context_t* _ctx); /* (inp : language-constructs/expression, ctail<language-constructs/expression>) -> <pure,console,scope> language-constructs/expression */ 

kk_language_dash_constructs__expression kk_internal_dash_struct__ctailm_linter(kk_language_dash_constructs__expression inp0, kk_function_t _accm1, kk_context_t* _ctx); /* (inp : language-constructs/expression, (language-constructs/expression) -> language-constructs/expression) -> <pure,console,scope> language-constructs/expression */ 

kk_language_dash_constructs__expression kk_internal_dash_struct_linter(kk_language_dash_constructs__expression inp1, kk_context_t* _ctx); /* (inp : language-constructs/expression) -> <pure,console,scope> language-constructs/expression */ 
 
// call `add` operation of the `:scope` effect

static inline kk_unit_t kk_internal_dash_struct_add(kk_string_t name, kk_language_dash_constructs__expression value, kk_context_t* _ctx) { /* (name : string, value : language-constructs/expression) -> scope () */ 
  kk_std_core_hnd__ev evx_1401;
  kk_ssize_t _x2062 = (KK_IZ(0)); /*ssize_t*/
  evx_1401 = kk_evv_at(_x2062,kk_context()); /*std/core/hnd/ev<internal-struct/.hnd-scope>*/
  kk_box_t _x2063;
  {
    struct kk_std_core_hnd_Ev* _con2064 = kk_std_core_hnd__as_Ev(evx_1401);
    kk_std_core_hnd__marker m0 = _con2064->marker;
    kk_box_t _box_x1721 = _con2064->hnd;
    kk_internal_dash_struct__hnd_scope h = kk_internal_dash_struct__hnd_scope_unbox(_box_x1721, NULL);
    kk_internal_dash_struct__hnd_scope_dup(h);
    kk_std_core_hnd__clause2 _match_1857;
    kk_std_core_hnd__clause2 _brw_1858 = kk_internal_dash_struct__select_add(h, _ctx); /*std/core/hnd/clause2<string,language-constructs/expression,(),internal-struct/.hnd-scope,178,179>*/;
    kk_internal_dash_struct__hnd_scope_drop(h, _ctx);
    _match_1857 = _brw_1858; /*std/core/hnd/clause2<string,language-constructs/expression,(),internal-struct/.hnd-scope,178,179>*/
    {
      kk_function_t _fun_unbox_x1726 = _match_1857.clause;
      _x2063 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x1726, (_fun_unbox_x1726, m0, evx_1401, kk_string_box(name), kk_language_dash_constructs__expression_box(value, _ctx), _ctx)); /*1016*/
    }
  }
  kk_unit_unbox(_x2063); return kk_Unit;
}

kk_unit_t kk_internal_dash_struct__mlift1357_scope__handeler(kk_language_dash_constructs__expression elem, kk_string_t name, kk_ref_t scopeState, kk_std_core__list _y_1307, kk_context_t* _ctx); /* forall<h,e> (elem : language-constructs/expression, name : string, scopeState : local-var<h,list<(string, language-constructs/expression)>>, list<(string, language-constructs/expression)>) -> <local<h>,exn|e> () */ 

kk_language_dash_constructs__expression kk_internal_dash_struct__mlift1358_scope__handeler(kk_string_t name0, kk_std_core__list _y_1309, kk_context_t* _ctx); /* forall<h,e> (name0 : string, list<(string, language-constructs/expression)>) -> <local<h>,exn|e> language-constructs/expression */ 

kk_box_t kk_internal_dash_struct_scope__handeler(kk_function_t fun__to__exec, kk_context_t* _ctx); /* forall<a,e> (fun_to_exec : () -> <scope,exn|e> a) -> <exn|e> a */ 

kk_unit_t kk_internal_dash_struct__mlift1359_main(kk_language_dash_constructs__expression v, kk_context_t* _ctx); /* forall<h> (v : language-constructs/expression) -> <pure,console,scope> () */ 

kk_unit_t kk_internal_dash_struct_main(kk_context_t* _ctx); /* () -> <pure,console> () */ 

kk_unit_t kk_internal_dash_struct__hmain(kk_context_t* _ctx); /* () -> <console,div> () */ 

void kk_internal_dash_struct__init(kk_context_t* _ctx);


void kk_internal_dash_struct__done(kk_context_t* _ctx);

#endif // header
