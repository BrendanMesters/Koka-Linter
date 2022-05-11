#pragma once
#ifndef kk_internal_struct_H
#define kk_internal_struct_H
// Koka generated module: "internal/struct", koka version: 2.4.0, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core.h"

// type declarations

// type internal/struct/patern
struct kk_internal_struct__patern_s {
  kk_block_t _block;
};
typedef kk_datatype_t kk_internal_struct__patern;
struct kk_internal_struct_Ident {
  struct kk_internal_struct__patern_s _base;
  kk_string_t name;
};
struct kk_internal_struct_Patpair {
  struct kk_internal_struct__patern_s _base;
  kk_internal_struct__patern p1;
  kk_internal_struct__patern p2;
};
static inline kk_internal_struct__patern kk_internal_struct__new_NullPat(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(2));
}
static inline kk_internal_struct__patern kk_internal_struct__base_Ident(struct kk_internal_struct_Ident* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_internal_struct__patern kk_internal_struct__new_Ident(kk_reuse_t _at, kk_string_t name, kk_context_t* _ctx) {
  struct kk_internal_struct_Ident* _con = kk_block_alloc_at_as(struct kk_internal_struct_Ident, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->name = name;
  return kk_internal_struct__base_Ident(_con);
}
static inline struct kk_internal_struct_Ident* kk_internal_struct__as_Ident(kk_internal_struct__patern x) {
  return kk_datatype_as_assert(struct kk_internal_struct_Ident*, x, (kk_tag_t)(1) /* _tag */);
}
static inline kk_internal_struct__patern kk_internal_struct__base_Patpair(struct kk_internal_struct_Patpair* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_internal_struct__patern kk_internal_struct__new_Patpair(kk_reuse_t _at, kk_internal_struct__patern p1, kk_internal_struct__patern p2, kk_context_t* _ctx) {
  struct kk_internal_struct_Patpair* _con = kk_block_alloc_at_as(struct kk_internal_struct_Patpair, _at, 2 /* scan count */, (kk_tag_t)(3), _ctx);
  _con->p1 = p1;
  _con->p2 = p2;
  return kk_internal_struct__base_Patpair(_con);
}
static inline struct kk_internal_struct_Patpair* kk_internal_struct__as_Patpair(kk_internal_struct__patern x) {
  return kk_datatype_as_assert(struct kk_internal_struct_Patpair*, x, (kk_tag_t)(3) /* _tag */);
}
static inline bool kk_internal_struct__is_NullPat(kk_internal_struct__patern x) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(2)));
}
static inline bool kk_internal_struct__is_Ident(kk_internal_struct__patern x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(1)));
}
static inline bool kk_internal_struct__is_Patpair(kk_internal_struct__patern x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(3)));
}
static inline kk_internal_struct__patern kk_internal_struct__patern_dup(kk_internal_struct__patern _x) {
  return kk_datatype_dup(_x);
}
static inline void kk_internal_struct__patern_drop(kk_internal_struct__patern _x, kk_context_t* _ctx) {
  kk_datatype_drop(_x, _ctx);
}
static inline kk_internal_struct__patern kk_internal_struct__patern_hole() {
  return kk_datatype_from_tag((kk_tag_t)0);
}
static inline bool kk_internal_struct__patern_is_unique(kk_internal_struct__patern _x) {
  return kk_datatype_is_unique(_x);
}
static inline void kk_internal_struct__patern_free(kk_internal_struct__patern _x, kk_context_t* _ctx) {
  kk_datatype_free(_x, _ctx);
}
static inline void kk_internal_struct__patern_decref(kk_internal_struct__patern _x, kk_context_t* _ctx) {
  kk_datatype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_internal_struct__patern_dropn_reuse(kk_internal_struct__patern _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_datatype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_internal_struct__patern_dropn(kk_internal_struct__patern _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_datatype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_internal_struct__patern_reuse(kk_internal_struct__patern _x) {
  return kk_datatype_reuse(_x);
}
static inline kk_box_t kk_internal_struct__patern_box(kk_internal_struct__patern _x, kk_context_t* _ctx) {
  return kk_datatype_box(_x);
}
static inline kk_internal_struct__patern kk_internal_struct__patern_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_datatype_unbox(_x);
}

// type internal/struct/expression
struct kk_internal_struct__expression_s {
  kk_block_t _block;
};
typedef kk_datatype_t kk_internal_struct__expression;
struct kk_internal_struct_Num {
  struct kk_internal_struct__expression_s _base;
  kk_integer_t n;
};
struct kk_internal_struct_Variable {
  struct kk_internal_struct__expression_s _base;
  kk_string_t name;
};
struct kk_internal_struct_Lambda {
  struct kk_internal_struct__expression_s _base;
  kk_internal_struct__patern arg;
  kk_internal_struct__expression body;
};
struct kk_internal_struct_If {
  struct kk_internal_struct__expression_s _base;
  kk_internal_struct__expression cond;
  kk_internal_struct__expression thus;
  kk_internal_struct__expression otherwise;
};
struct kk_internal_struct_MLpair {
  struct kk_internal_struct__expression_s _base;
  kk_internal_struct__expression e1;
  kk_internal_struct__expression e2;
};
struct kk_internal_struct_Apply {
  struct kk_internal_struct__expression_s _base;
  kk_internal_struct__expression e1;
  kk_internal_struct__expression e2;
};
struct kk_internal_struct_Let {
  struct kk_internal_struct__expression_s _base;
  kk_internal_struct__patern arg;
  kk_internal_struct__expression arg__val;
  kk_internal_struct__expression body;
};
struct kk_internal_struct_Letrec {
  struct kk_internal_struct__expression_s _base;
  kk_internal_struct__patern arg;
  kk_internal_struct__expression arg__val;
  kk_internal_struct__expression body;
};
static inline kk_internal_struct__expression kk_internal_struct__new_EFalse(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(2));
}
static inline kk_internal_struct__expression kk_internal_struct__new_ETrue(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(3));
}
static inline kk_internal_struct__expression kk_internal_struct__base_Num(struct kk_internal_struct_Num* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_internal_struct__expression kk_internal_struct__new_Num(kk_reuse_t _at, kk_integer_t n, kk_context_t* _ctx) {
  struct kk_internal_struct_Num* _con = kk_block_alloc_at_as(struct kk_internal_struct_Num, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->n = n;
  return kk_internal_struct__base_Num(_con);
}
static inline struct kk_internal_struct_Num* kk_internal_struct__as_Num(kk_internal_struct__expression x) {
  return kk_datatype_as_assert(struct kk_internal_struct_Num*, x, (kk_tag_t)(1) /* _tag */);
}
static inline kk_internal_struct__expression kk_internal_struct__base_Variable(struct kk_internal_struct_Variable* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_internal_struct__expression kk_internal_struct__new_Variable(kk_reuse_t _at, kk_string_t name, kk_context_t* _ctx) {
  struct kk_internal_struct_Variable* _con = kk_block_alloc_at_as(struct kk_internal_struct_Variable, _at, 1 /* scan count */, (kk_tag_t)(4), _ctx);
  _con->name = name;
  return kk_internal_struct__base_Variable(_con);
}
static inline struct kk_internal_struct_Variable* kk_internal_struct__as_Variable(kk_internal_struct__expression x) {
  return kk_datatype_as_assert(struct kk_internal_struct_Variable*, x, (kk_tag_t)(4) /* _tag */);
}
static inline kk_internal_struct__expression kk_internal_struct__base_Lambda(struct kk_internal_struct_Lambda* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_internal_struct__expression kk_internal_struct__new_Lambda(kk_reuse_t _at, kk_internal_struct__patern arg, kk_internal_struct__expression body, kk_context_t* _ctx) {
  struct kk_internal_struct_Lambda* _con = kk_block_alloc_at_as(struct kk_internal_struct_Lambda, _at, 2 /* scan count */, (kk_tag_t)(5), _ctx);
  _con->arg = arg;
  _con->body = body;
  return kk_internal_struct__base_Lambda(_con);
}
static inline struct kk_internal_struct_Lambda* kk_internal_struct__as_Lambda(kk_internal_struct__expression x) {
  return kk_datatype_as_assert(struct kk_internal_struct_Lambda*, x, (kk_tag_t)(5) /* _tag */);
}
static inline kk_internal_struct__expression kk_internal_struct__base_MLpair(struct kk_internal_struct_MLpair* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_internal_struct__expression kk_internal_struct__new_MLpair(kk_reuse_t _at, kk_internal_struct__expression e1, kk_internal_struct__expression e2, kk_context_t* _ctx) {
  struct kk_internal_struct_MLpair* _con = kk_block_alloc_at_as(struct kk_internal_struct_MLpair, _at, 2 /* scan count */, (kk_tag_t)(7), _ctx);
  _con->e1 = e1;
  _con->e2 = e2;
  return kk_internal_struct__base_MLpair(_con);
}
static inline struct kk_internal_struct_MLpair* kk_internal_struct__as_MLpair(kk_internal_struct__expression x) {
  return kk_datatype_as_assert(struct kk_internal_struct_MLpair*, x, (kk_tag_t)(7) /* _tag */);
}
static inline kk_internal_struct__expression kk_internal_struct__base_Apply(struct kk_internal_struct_Apply* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_internal_struct__expression kk_internal_struct__new_Apply(kk_reuse_t _at, kk_internal_struct__expression e1, kk_internal_struct__expression e2, kk_context_t* _ctx) {
  struct kk_internal_struct_Apply* _con = kk_block_alloc_at_as(struct kk_internal_struct_Apply, _at, 2 /* scan count */, (kk_tag_t)(8), _ctx);
  _con->e1 = e1;
  _con->e2 = e2;
  return kk_internal_struct__base_Apply(_con);
}
static inline struct kk_internal_struct_Apply* kk_internal_struct__as_Apply(kk_internal_struct__expression x) {
  return kk_datatype_as_assert(struct kk_internal_struct_Apply*, x, (kk_tag_t)(8) /* _tag */);
}
static inline kk_internal_struct__expression kk_internal_struct__base_If(struct kk_internal_struct_If* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_internal_struct__expression kk_internal_struct__new_If(kk_reuse_t _at, kk_internal_struct__expression cond, kk_internal_struct__expression thus, kk_internal_struct__expression otherwise, kk_context_t* _ctx) {
  struct kk_internal_struct_If* _con = kk_block_alloc_at_as(struct kk_internal_struct_If, _at, 3 /* scan count */, (kk_tag_t)(6), _ctx);
  _con->cond = cond;
  _con->thus = thus;
  _con->otherwise = otherwise;
  return kk_internal_struct__base_If(_con);
}
static inline struct kk_internal_struct_If* kk_internal_struct__as_If(kk_internal_struct__expression x) {
  return kk_datatype_as_assert(struct kk_internal_struct_If*, x, (kk_tag_t)(6) /* _tag */);
}
static inline kk_internal_struct__expression kk_internal_struct__base_Let(struct kk_internal_struct_Let* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_internal_struct__expression kk_internal_struct__new_Let(kk_reuse_t _at, kk_internal_struct__patern arg, kk_internal_struct__expression arg__val, kk_internal_struct__expression body, kk_context_t* _ctx) {
  struct kk_internal_struct_Let* _con = kk_block_alloc_at_as(struct kk_internal_struct_Let, _at, 3 /* scan count */, (kk_tag_t)(9), _ctx);
  _con->arg = arg;
  _con->arg__val = arg__val;
  _con->body = body;
  return kk_internal_struct__base_Let(_con);
}
static inline struct kk_internal_struct_Let* kk_internal_struct__as_Let(kk_internal_struct__expression x) {
  return kk_datatype_as_assert(struct kk_internal_struct_Let*, x, (kk_tag_t)(9) /* _tag */);
}
static inline kk_internal_struct__expression kk_internal_struct__base_Letrec(struct kk_internal_struct_Letrec* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_internal_struct__expression kk_internal_struct__new_Letrec(kk_reuse_t _at, kk_internal_struct__patern arg, kk_internal_struct__expression arg__val, kk_internal_struct__expression body, kk_context_t* _ctx) {
  struct kk_internal_struct_Letrec* _con = kk_block_alloc_at_as(struct kk_internal_struct_Letrec, _at, 3 /* scan count */, (kk_tag_t)(10), _ctx);
  _con->arg = arg;
  _con->arg__val = arg__val;
  _con->body = body;
  return kk_internal_struct__base_Letrec(_con);
}
static inline struct kk_internal_struct_Letrec* kk_internal_struct__as_Letrec(kk_internal_struct__expression x) {
  return kk_datatype_as_assert(struct kk_internal_struct_Letrec*, x, (kk_tag_t)(10) /* _tag */);
}
static inline bool kk_internal_struct__is_EFalse(kk_internal_struct__expression x) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(2)));
}
static inline bool kk_internal_struct__is_ETrue(kk_internal_struct__expression x) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(3)));
}
static inline bool kk_internal_struct__is_Num(kk_internal_struct__expression x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(1)));
}
static inline bool kk_internal_struct__is_Variable(kk_internal_struct__expression x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(4)));
}
static inline bool kk_internal_struct__is_Lambda(kk_internal_struct__expression x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(5)));
}
static inline bool kk_internal_struct__is_MLpair(kk_internal_struct__expression x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(7)));
}
static inline bool kk_internal_struct__is_Apply(kk_internal_struct__expression x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(8)));
}
static inline bool kk_internal_struct__is_If(kk_internal_struct__expression x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(6)));
}
static inline bool kk_internal_struct__is_Let(kk_internal_struct__expression x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(9)));
}
static inline bool kk_internal_struct__is_Letrec(kk_internal_struct__expression x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(10)));
}
static inline kk_internal_struct__expression kk_internal_struct__expression_dup(kk_internal_struct__expression _x) {
  return kk_datatype_dup(_x);
}
static inline void kk_internal_struct__expression_drop(kk_internal_struct__expression _x, kk_context_t* _ctx) {
  kk_datatype_drop(_x, _ctx);
}
static inline kk_internal_struct__expression kk_internal_struct__expression_hole() {
  return kk_datatype_from_tag((kk_tag_t)0);
}
static inline bool kk_internal_struct__expression_is_unique(kk_internal_struct__expression _x) {
  return kk_datatype_is_unique(_x);
}
static inline void kk_internal_struct__expression_free(kk_internal_struct__expression _x, kk_context_t* _ctx) {
  kk_datatype_free(_x, _ctx);
}
static inline void kk_internal_struct__expression_decref(kk_internal_struct__expression _x, kk_context_t* _ctx) {
  kk_datatype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_internal_struct__expression_dropn_reuse(kk_internal_struct__expression _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_datatype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_internal_struct__expression_dropn(kk_internal_struct__expression _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_datatype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_internal_struct__expression_reuse(kk_internal_struct__expression _x) {
  return kk_datatype_reuse(_x);
}
static inline kk_box_t kk_internal_struct__expression_box(kk_internal_struct__expression _x, kk_context_t* _ctx) {
  return kk_datatype_box(_x);
}
static inline kk_internal_struct__expression kk_internal_struct__expression_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_datatype_unbox(_x);
}

// type internal/struct/.hnd-scope
struct kk_internal_struct__hnd_scope_s {
  kk_block_t _block;
};
typedef struct kk_internal_struct__hnd_scope_s* kk_internal_struct__hnd_scope;
struct kk_internal_struct__Hnd_scope {
  struct kk_internal_struct__hnd_scope_s _base;
  kk_std_core_hnd__clause2 fun_add;
  kk_std_core_hnd__clause1 fun_get;
};
static inline kk_internal_struct__hnd_scope kk_internal_struct__base_Hnd_scope(struct kk_internal_struct__Hnd_scope* _x) {
  return &_x->_base;
}
static inline kk_internal_struct__hnd_scope kk_internal_struct__new_Hnd_scope(kk_reuse_t _at, kk_std_core_hnd__clause2 fun_add, kk_std_core_hnd__clause1 fun_get, kk_context_t* _ctx) {
  struct kk_internal_struct__Hnd_scope* _con = kk_block_alloc_at_as(struct kk_internal_struct__Hnd_scope, _at, 2 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->fun_add = fun_add;
  _con->fun_get = fun_get;
  return kk_internal_struct__base_Hnd_scope(_con);
}
static inline struct kk_internal_struct__Hnd_scope* kk_internal_struct__as_Hnd_scope(kk_internal_struct__hnd_scope x) {
  return kk_basetype_as_assert(struct kk_internal_struct__Hnd_scope*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_internal_struct__is_Hnd_scope(kk_internal_struct__hnd_scope x) {
  return (true);
}
static inline kk_internal_struct__hnd_scope kk_internal_struct__hnd_scope_dup(kk_internal_struct__hnd_scope _x) {
  return kk_basetype_dup_as(kk_internal_struct__hnd_scope, _x);
}
static inline void kk_internal_struct__hnd_scope_drop(kk_internal_struct__hnd_scope _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_internal_struct__hnd_scope kk_internal_struct__hnd_scope_hole() {
  return (kk_internal_struct__hnd_scope)(1);
}
static inline bool kk_internal_struct__hnd_scope_is_unique(kk_internal_struct__hnd_scope _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_internal_struct__hnd_scope_free(kk_internal_struct__hnd_scope _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_internal_struct__hnd_scope_decref(kk_internal_struct__hnd_scope _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_internal_struct__hnd_scope_dropn_reuse(kk_internal_struct__hnd_scope _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_internal_struct__hnd_scope_dropn(kk_internal_struct__hnd_scope _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_internal_struct__hnd_scope_reuse(kk_internal_struct__hnd_scope _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_internal_struct__hnd_scope_box(kk_internal_struct__hnd_scope _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_internal_struct__hnd_scope kk_internal_struct__hnd_scope_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_internal_struct__hnd_scope, _x);
}

// value type internal/struct/result
struct kk_internal_struct_Value {
  kk_internal_struct__expression exp;
};
struct kk_internal_struct_ResultError {
  kk_string_t s;
};
struct kk_internal_struct_result_s {
  kk_value_tag_t _tag;
  union {
    struct kk_internal_struct_Value Value;
    struct kk_internal_struct_ResultError ResultError;
  } _cons;
};
typedef struct kk_internal_struct_result_s kk_internal_struct__result;
static inline kk_internal_struct__result kk_internal_struct__new_Value(kk_internal_struct__expression exp, kk_context_t* _ctx) {
  kk_internal_struct__result _con;
  _con._tag = kk_value_tag(1);
  _con._cons.Value.exp = exp;
  return _con;
}
static inline kk_internal_struct__result kk_internal_struct__new_ResultError(kk_string_t s, kk_context_t* _ctx) {
  kk_internal_struct__result _con;
  _con._tag = kk_value_tag(2);
  _con._cons.ResultError.s = s;
  return _con;
}
static inline bool kk_internal_struct__is_Value(kk_internal_struct__result x) {
  return (kk_value_tag_eq(x._tag, kk_value_tag(1)));
}
static inline bool kk_internal_struct__is_ResultError(kk_internal_struct__result x) {
  return (kk_value_tag_eq(x._tag, kk_value_tag(2)));
}
static inline kk_ssize_t kk_internal_struct__result_scan_count(kk_internal_struct__result _x) {
  if (kk_internal_struct__is_Value(_x)) return 2;
  else return 2;
}
static inline kk_internal_struct__result kk_internal_struct__result_dup(kk_internal_struct__result _x) {
  if (kk_internal_struct__is_Value(_x)) {
    kk_internal_struct__expression_dup(_x._cons.Value.exp);
  }
  else {
    kk_string_dup(_x._cons.ResultError.s);
  }
  return _x;
}
static inline void kk_internal_struct__result_drop(kk_internal_struct__result _x, kk_context_t* _ctx) {
  if (kk_internal_struct__is_Value(_x)) {
    kk_internal_struct__expression_drop(_x._cons.Value.exp, _ctx);
  }
  else {
    kk_string_drop(_x._cons.ResultError.s, _ctx);
  }
}
static inline kk_box_t kk_internal_struct__result_box(kk_internal_struct__result _x, kk_context_t* _ctx) {
  kk_box_t _box;
  kk_valuetype_box(kk_internal_struct__result, _box, _x, kk_internal_struct__result_scan_count(_x), _ctx);
  return _box;
}
static inline kk_internal_struct__result kk_internal_struct__result_unbox(kk_box_t _x, kk_context_t* _ctx) {
  kk_boxed_value_t _p;
  kk_internal_struct__result _unbox;
  kk_valuetype_unbox_(kk_internal_struct__result, _p, _unbox, _x, _ctx);
  if (_ctx!=NULL && _p!=NULL) {
    if (kk_basetype_is_unique(_p)) { kk_basetype_free(_p,_ctx); } else {
      kk_internal_struct__result_dup(_unbox);
      kk_basetype_decref(_p, _ctx);
    }
  }
  return _unbox;
}

// type internal/struct/scope
struct kk_internal_struct__scope_s {
  kk_block_t _block;
};
typedef struct kk_internal_struct__scope_s* kk_internal_struct__scope;
struct kk_internal_struct_Scope {
  struct kk_internal_struct__scope_s _base;
  kk_internal_struct__hnd_scope _field1;
};
static inline kk_internal_struct__scope kk_internal_struct__base_Scope(struct kk_internal_struct_Scope* _x) {
  return &_x->_base;
}
static inline kk_internal_struct__scope kk_internal_struct__new_Scope(kk_reuse_t _at, kk_internal_struct__hnd_scope _field1, kk_context_t* _ctx) {
  struct kk_internal_struct_Scope* _con = kk_block_alloc_at_as(struct kk_internal_struct_Scope, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_internal_struct__base_Scope(_con);
}
static inline struct kk_internal_struct_Scope* kk_internal_struct__as_Scope(kk_internal_struct__scope x) {
  return kk_basetype_as_assert(struct kk_internal_struct_Scope*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_internal_struct__is_Scope(kk_internal_struct__scope x) {
  return (true);
}
static inline kk_internal_struct__scope kk_internal_struct__scope_dup(kk_internal_struct__scope _x) {
  return kk_basetype_dup_as(kk_internal_struct__scope, _x);
}
static inline void kk_internal_struct__scope_drop(kk_internal_struct__scope _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline kk_internal_struct__scope kk_internal_struct__scope_hole() {
  return (kk_internal_struct__scope)(1);
}
static inline bool kk_internal_struct__scope_is_unique(kk_internal_struct__scope _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_internal_struct__scope_free(kk_internal_struct__scope _x, kk_context_t* _ctx) {
  kk_basetype_free(_x, _ctx);
}
static inline void kk_internal_struct__scope_decref(kk_internal_struct__scope _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_internal_struct__scope_dropn_reuse(kk_internal_struct__scope _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_internal_struct__scope_dropn(kk_internal_struct__scope _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_internal_struct__scope_reuse(kk_internal_struct__scope _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_box_t kk_internal_struct__scope_box(kk_internal_struct__scope _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_internal_struct__scope kk_internal_struct__scope_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_internal_struct__scope, _x);
}

// value declarations
 
// Automatically generated. Tests for the `Ident` constructor of the `:patern` type.

static inline bool kk_internal_struct_is_ident(kk_internal_struct__patern patern, kk_context_t* _ctx) { /* (patern : patern) -> bool */ 
  if (kk_internal_struct__is_Ident(patern)) {
    struct kk_internal_struct_Ident* _con2824 = kk_internal_struct__as_Ident(patern);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `NullPat` constructor of the `:patern` type.

static inline bool kk_internal_struct_is_nullPat(kk_internal_struct__patern patern, kk_context_t* _ctx) { /* (patern : patern) -> bool */ 
  if (kk_internal_struct__is_NullPat(patern)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Patpair` constructor of the `:patern` type.

static inline bool kk_internal_struct_is_patpair(kk_internal_struct__patern patern, kk_context_t* _ctx) { /* (patern : patern) -> bool */ 
  if (kk_internal_struct__is_Patpair(patern)) {
    struct kk_internal_struct_Patpair* _con2825 = kk_internal_struct__as_Patpair(patern);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Num` constructor of the `:expression` type.

static inline bool kk_internal_struct_is_num(kk_internal_struct__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_internal_struct__is_Num(expression)) {
    struct kk_internal_struct_Num* _con2826 = kk_internal_struct__as_Num(expression);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `EFalse` constructor of the `:expression` type.

static inline bool kk_internal_struct_is_efalse(kk_internal_struct__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_internal_struct__is_EFalse(expression)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ETrue` constructor of the `:expression` type.

static inline bool kk_internal_struct_is_etrue(kk_internal_struct__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_internal_struct__is_ETrue(expression)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Variable` constructor of the `:expression` type.

static inline bool kk_internal_struct_is_variable(kk_internal_struct__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_internal_struct__is_Variable(expression)) {
    struct kk_internal_struct_Variable* _con2827 = kk_internal_struct__as_Variable(expression);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Lambda` constructor of the `:expression` type.

static inline bool kk_internal_struct_is_lambda(kk_internal_struct__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_internal_struct__is_Lambda(expression)) {
    struct kk_internal_struct_Lambda* _con2828 = kk_internal_struct__as_Lambda(expression);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `If` constructor of the `:expression` type.

static inline bool kk_internal_struct_is_if(kk_internal_struct__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_internal_struct__is_If(expression)) {
    struct kk_internal_struct_If* _con2829 = kk_internal_struct__as_If(expression);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `MLpair` constructor of the `:expression` type.

static inline bool kk_internal_struct_is_mlpair(kk_internal_struct__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_internal_struct__is_MLpair(expression)) {
    struct kk_internal_struct_MLpair* _con2830 = kk_internal_struct__as_MLpair(expression);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Apply` constructor of the `:expression` type.

static inline bool kk_internal_struct_is_apply(kk_internal_struct__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_internal_struct__is_Apply(expression)) {
    struct kk_internal_struct_Apply* _con2831 = kk_internal_struct__as_Apply(expression);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Let` constructor of the `:expression` type.

static inline bool kk_internal_struct_is_let(kk_internal_struct__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_internal_struct__is_Let(expression)) {
    struct kk_internal_struct_Let* _con2832 = kk_internal_struct__as_Let(expression);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Letrec` constructor of the `:expression` type.

static inline bool kk_internal_struct_is_letrec(kk_internal_struct__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_internal_struct__is_Letrec(expression)) {
    struct kk_internal_struct_Letrec* _con2833 = kk_internal_struct__as_Letrec(expression);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Value` constructor of the `:result` type.

static inline bool kk_internal_struct_is_value(kk_internal_struct__result result, kk_context_t* _ctx) { /* (result : result) -> bool */ 
  if (kk_internal_struct__is_Value(result)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ResultError` constructor of the `:result` type.

static inline bool kk_internal_struct_is_resultError(kk_internal_struct__result result, kk_context_t* _ctx) { /* (result : result) -> bool */ 
  if (kk_internal_struct__is_ResultError(result)) {
    return true;
  }
  {
    return false;
  }
}

extern kk_std_core_hnd__htag kk_internal_struct__tag_scope;

kk_box_t kk_internal_struct__handle_scope(int32_t cfc, kk_internal_struct__hnd_scope hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-scope<e,b>, ret : (res : a) -> e b, action : () -> <scope|e> a) -> e b */ 
 
// select `get` operation out of the `:scope` effect handler

static inline kk_std_core_hnd__clause1 kk_internal_struct__select_get(kk_internal_struct__hnd_scope hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-scope<e,a>) -> std/core/hnd/clause1<string,maybe<expression>,.hnd-scope,e,a> */ 
  {
    struct kk_internal_struct__Hnd_scope* _con2837 = kk_internal_struct__as_Hnd_scope(hnd);
    kk_std_core_hnd__clause1 fun_get = _con2837->fun_get;
    return kk_std_core_hnd__clause1_dup(fun_get);
  }
}
 
// select `add` operation out of the `:scope` effect handler

static inline kk_std_core_hnd__clause2 kk_internal_struct__select_add(kk_internal_struct__hnd_scope hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-scope<e,a>) -> std/core/hnd/clause2<string,expression,(),.hnd-scope,e,a> */ 
  {
    struct kk_internal_struct__Hnd_scope* _con2838 = kk_internal_struct__as_Hnd_scope(hnd);
    kk_std_core_hnd__clause2 fun_add = _con2838->fun_add;
    return kk_std_core_hnd__clause2_dup(fun_add);
  }
}
 
// call `get` operation of the `:scope` effect

static inline kk_std_core_types__maybe kk_internal_struct_get(kk_string_t name, kk_context_t* _ctx) { /* (name : string) -> scope maybe<expression> */ 
  kk_std_core_hnd__ev ev_2544;
  kk_ssize_t _x2839 = (KK_IZ(0)); /*ssize_t*/
  ev_2544 = kk_evv_at(_x2839,kk_context()); /*std/core/hnd/ev<internal/struct/.hnd-scope>*/
  kk_box_t _x2840;
  {
    struct kk_std_core_hnd_Ev* _con2841 = kk_std_core_hnd__as_Ev(ev_2544);
    kk_std_core_hnd__marker m0 = _con2841->marker;
    kk_box_t _box_x2612 = _con2841->hnd;
    kk_internal_struct__hnd_scope h = kk_internal_struct__hnd_scope_unbox(_box_x2612, NULL);
    kk_internal_struct__hnd_scope_dup(h);
    kk_std_core_hnd__clause1 _match_2805;
    kk_std_core_hnd__clause1 _brw_2806 = kk_internal_struct__select_get(h, _ctx); /*std/core/hnd/clause1<string,maybe<internal/struct/expression>,internal/struct/.hnd-scope,308,309>*/;
    kk_internal_struct__hnd_scope_drop(h, _ctx);
    _match_2805 = _brw_2806; /*std/core/hnd/clause1<string,maybe<internal/struct/expression>,internal/struct/.hnd-scope,308,309>*/
    {
      kk_function_t _fun_unbox_x2616 = _match_2805.clause;
      _x2840 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x2616, (_fun_unbox_x2616, m0, ev_2544, kk_string_box(name), _ctx)); /*1010*/
    }
  }
  return kk_std_core_types__maybe_unbox(_x2840, _ctx);
}

kk_string_t kk_internal_struct_show(kk_internal_struct__patern pat, kk_context_t* _ctx); /* (pat : patern) -> total string */ 

kk_string_t kk_internal_struct_show_1(kk_internal_struct__expression exp, kk_context_t* _ctx); /* (exp : expression) -> total string */ 

kk_internal_struct__result kk_internal_struct__mlift2535_linter(kk_string_t name, kk_std_core_types__maybe _y_2503, kk_context_t* _ctx); /* (name : string, maybe<expression>) -> <scope,console,div,exn> result */ 

kk_internal_struct__result kk_internal_struct__mlift2536_linter(kk_internal_struct__patern arg, kk_internal_struct__result _y_2506, kk_context_t* _ctx); /* (arg : patern, result) -> <div,exn,scope,console> result */ 

kk_internal_struct__result kk_internal_struct__mlift2537_linter(kk_internal_struct__expression otherwise, kk_internal_struct__expression thus, kk_internal_struct__result _y_2507, kk_context_t* _ctx); /* (otherwise : expression, thus : expression, result) -> <div,exn,scope,console> result */ 

kk_internal_struct__result kk_internal_struct__mlift2538_linter(kk_internal_struct__expression nv1, kk_internal_struct__result _y_2512, kk_context_t* _ctx); /* (nv1 : expression, result) -> <div,exn,scope,console> result */ 

kk_internal_struct__result kk_internal_struct__mlift2539_linter(kk_internal_struct__expression e2, kk_internal_struct__result _y_2511, kk_context_t* _ctx); /* (e2 : expression, result) -> <div,exn,scope,console> result */ 

kk_internal_struct__result kk_internal_struct_linter(kk_internal_struct__expression inp, kk_context_t* _ctx); /* (inp : expression) -> <pure,console,scope> result */ 

static inline kk_unit_t kk_internal_struct_printexpr(kk_internal_struct__expression exp, kk_context_t* _ctx) { /* (exp : expression) -> console () */ 
  kk_string_t s_2486 = kk_internal_struct_show_1(exp, _ctx); /*string*/;
  kk_std_core_printsln(s_2486, _ctx); return kk_Unit;
}
 
// call `add` operation of the `:scope` effect

static inline kk_unit_t kk_internal_struct_add(kk_string_t name, kk_internal_struct__expression value, kk_context_t* _ctx) { /* (name : string, value : expression) -> scope () */ 
  kk_std_core_hnd__ev evx_2567;
  kk_ssize_t _x3034 = (KK_IZ(0)); /*ssize_t*/
  evx_2567 = kk_evv_at(_x3034,kk_context()); /*std/core/hnd/ev<internal/struct/.hnd-scope>*/
  kk_box_t _x3035;
  {
    struct kk_std_core_hnd_Ev* _con3036 = kk_std_core_hnd__as_Ev(evx_2567);
    kk_std_core_hnd__marker m0 = _con3036->marker;
    kk_box_t _box_x2672 = _con3036->hnd;
    kk_internal_struct__hnd_scope h = kk_internal_struct__hnd_scope_unbox(_box_x2672, NULL);
    kk_internal_struct__hnd_scope_dup(h);
    kk_std_core_hnd__clause2 _match_2795;
    kk_std_core_hnd__clause2 _brw_2796 = kk_internal_struct__select_add(h, _ctx); /*std/core/hnd/clause2<string,internal/struct/expression,(),internal/struct/.hnd-scope,325,326>*/;
    kk_internal_struct__hnd_scope_drop(h, _ctx);
    _match_2795 = _brw_2796; /*std/core/hnd/clause2<string,internal/struct/expression,(),internal/struct/.hnd-scope,325,326>*/
    {
      kk_function_t _fun_unbox_x2677 = _match_2795.clause;
      _x3035 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x2677, (_fun_unbox_x2677, m0, evx_2567, kk_string_box(name), kk_internal_struct__expression_box(value, _ctx), _ctx)); /*1016*/
    }
  }
  kk_unit_unbox(_x3035); return kk_Unit;
}

kk_unit_t kk_internal_struct__mlift2540_scope__handeler(kk_internal_struct__expression elem, kk_string_t name, kk_ref_t scopeState, kk_std_core__list _y_2516, kk_context_t* _ctx); /* forall<h,e> (elem : expression, name : string, scopeState : local-var<h,list<(string, expression)>>, list<(string, expression)>) -> <local<h>|e> () */ 

kk_std_core_types__maybe kk_internal_struct__mlift2541_scope__handeler(kk_string_t name0, kk_std_core__list _y_2518, kk_context_t* _ctx); /* forall<h,e> (name0 : string, list<(string, expression)>) -> <local<h>|e> maybe<expression> */ 

kk_box_t kk_internal_struct_scope__handeler(kk_function_t fun__to__exec, kk_context_t* _ctx); /* forall<a,e> (fun_to_exec : () -> <scope|e> a) -> e a */ 

kk_unit_t kk_internal_struct__mlift2542_main(kk_internal_struct__result _y_2523, kk_context_t* _ctx); /* forall<h> (result) -> <pure,console,scope> () */ 

kk_unit_t kk_internal_struct_main(kk_context_t* _ctx); /* () -> <pure,console> () */ 

kk_unit_t kk_internal_struct__hmain(kk_context_t* _ctx); /* () -> <console,div> () */ 

void kk_internal_struct__init(kk_context_t* _ctx);


void kk_internal_struct__done(kk_context_t* _ctx);

#endif // header
