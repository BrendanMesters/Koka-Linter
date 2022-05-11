#pragma once
#ifndef kk_language_dash_constructs_H
#define kk_language_dash_constructs_H
// Koka generated module: "language-constructs", koka version: 2.4.0, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core.h"

// type declarations

// type language-constructs/patern
struct kk_language_dash_constructs__patern_s {
  kk_block_t _block;
};
typedef kk_datatype_t kk_language_dash_constructs__patern;
struct kk_language_dash_constructs_Ident {
  struct kk_language_dash_constructs__patern_s _base;
  kk_string_t name;
};
struct kk_language_dash_constructs_Patpair {
  struct kk_language_dash_constructs__patern_s _base;
  kk_language_dash_constructs__patern p1;
  kk_language_dash_constructs__patern p2;
};
static inline kk_language_dash_constructs__patern kk_language_dash_constructs__new_NullPat(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(2));
}
static inline kk_language_dash_constructs__patern kk_language_dash_constructs__base_Ident(struct kk_language_dash_constructs_Ident* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_language_dash_constructs__patern kk_language_dash_constructs__new_Ident(kk_reuse_t _at, kk_string_t name, kk_context_t* _ctx) {
  struct kk_language_dash_constructs_Ident* _con = kk_block_alloc_at_as(struct kk_language_dash_constructs_Ident, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->name = name;
  return kk_language_dash_constructs__base_Ident(_con);
}
static inline struct kk_language_dash_constructs_Ident* kk_language_dash_constructs__as_Ident(kk_language_dash_constructs__patern x) {
  return kk_datatype_as_assert(struct kk_language_dash_constructs_Ident*, x, (kk_tag_t)(1) /* _tag */);
}
static inline kk_language_dash_constructs__patern kk_language_dash_constructs__base_Patpair(struct kk_language_dash_constructs_Patpair* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_language_dash_constructs__patern kk_language_dash_constructs__new_Patpair(kk_reuse_t _at, kk_language_dash_constructs__patern p1, kk_language_dash_constructs__patern p2, kk_context_t* _ctx) {
  struct kk_language_dash_constructs_Patpair* _con = kk_block_alloc_at_as(struct kk_language_dash_constructs_Patpair, _at, 2 /* scan count */, (kk_tag_t)(3), _ctx);
  _con->p1 = p1;
  _con->p2 = p2;
  return kk_language_dash_constructs__base_Patpair(_con);
}
static inline struct kk_language_dash_constructs_Patpair* kk_language_dash_constructs__as_Patpair(kk_language_dash_constructs__patern x) {
  return kk_datatype_as_assert(struct kk_language_dash_constructs_Patpair*, x, (kk_tag_t)(3) /* _tag */);
}
static inline bool kk_language_dash_constructs__is_NullPat(kk_language_dash_constructs__patern x) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(2)));
}
static inline bool kk_language_dash_constructs__is_Ident(kk_language_dash_constructs__patern x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(1)));
}
static inline bool kk_language_dash_constructs__is_Patpair(kk_language_dash_constructs__patern x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(3)));
}
static inline kk_language_dash_constructs__patern kk_language_dash_constructs__patern_dup(kk_language_dash_constructs__patern _x) {
  return kk_datatype_dup(_x);
}
static inline void kk_language_dash_constructs__patern_drop(kk_language_dash_constructs__patern _x, kk_context_t* _ctx) {
  kk_datatype_drop(_x, _ctx);
}
static inline kk_language_dash_constructs__patern kk_language_dash_constructs__patern_hole() {
  return kk_datatype_from_tag((kk_tag_t)0);
}
static inline bool kk_language_dash_constructs__patern_is_unique(kk_language_dash_constructs__patern _x) {
  return kk_datatype_is_unique(_x);
}
static inline void kk_language_dash_constructs__patern_free(kk_language_dash_constructs__patern _x, kk_context_t* _ctx) {
  kk_datatype_free(_x, _ctx);
}
static inline void kk_language_dash_constructs__patern_decref(kk_language_dash_constructs__patern _x, kk_context_t* _ctx) {
  kk_datatype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_language_dash_constructs__patern_dropn_reuse(kk_language_dash_constructs__patern _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_datatype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_language_dash_constructs__patern_dropn(kk_language_dash_constructs__patern _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_datatype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_language_dash_constructs__patern_reuse(kk_language_dash_constructs__patern _x) {
  return kk_datatype_reuse(_x);
}
static inline kk_box_t kk_language_dash_constructs__patern_box(kk_language_dash_constructs__patern _x, kk_context_t* _ctx) {
  return kk_datatype_box(_x);
}
static inline kk_language_dash_constructs__patern kk_language_dash_constructs__patern_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_datatype_unbox(_x);
}

// type language-constructs/expression
struct kk_language_dash_constructs__expression_s {
  kk_block_t _block;
};
typedef kk_datatype_t kk_language_dash_constructs__expression;
struct kk_language_dash_constructs_Num {
  struct kk_language_dash_constructs__expression_s _base;
  kk_integer_t n;
};
struct kk_language_dash_constructs_Variable {
  struct kk_language_dash_constructs__expression_s _base;
  kk_string_t name;
};
struct kk_language_dash_constructs_Lambda {
  struct kk_language_dash_constructs__expression_s _base;
  kk_language_dash_constructs__patern arg;
  kk_language_dash_constructs__expression body;
};
struct kk_language_dash_constructs_If {
  struct kk_language_dash_constructs__expression_s _base;
  kk_language_dash_constructs__expression cond;
  kk_language_dash_constructs__expression thus;
  kk_language_dash_constructs__expression otherwise;
};
struct kk_language_dash_constructs_MLpair {
  struct kk_language_dash_constructs__expression_s _base;
  kk_language_dash_constructs__expression e1;
  kk_language_dash_constructs__expression e2;
};
struct kk_language_dash_constructs_Apply {
  struct kk_language_dash_constructs__expression_s _base;
  kk_language_dash_constructs__expression e1;
  kk_language_dash_constructs__expression e2;
};
struct kk_language_dash_constructs_Let {
  struct kk_language_dash_constructs__expression_s _base;
  kk_language_dash_constructs__patern arg;
  kk_language_dash_constructs__expression arg__val;
  kk_language_dash_constructs__expression body;
};
struct kk_language_dash_constructs_Letrec {
  struct kk_language_dash_constructs__expression_s _base;
  kk_language_dash_constructs__patern arg;
  kk_language_dash_constructs__expression arg__val;
  kk_language_dash_constructs__expression body;
};
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__new_EFalse(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(2));
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__new_ETrue(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(3));
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__base_Num(struct kk_language_dash_constructs_Num* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__new_Num(kk_reuse_t _at, kk_integer_t n, kk_context_t* _ctx) {
  struct kk_language_dash_constructs_Num* _con = kk_block_alloc_at_as(struct kk_language_dash_constructs_Num, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->n = n;
  return kk_language_dash_constructs__base_Num(_con);
}
static inline struct kk_language_dash_constructs_Num* kk_language_dash_constructs__as_Num(kk_language_dash_constructs__expression x) {
  return kk_datatype_as_assert(struct kk_language_dash_constructs_Num*, x, (kk_tag_t)(1) /* _tag */);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__base_Variable(struct kk_language_dash_constructs_Variable* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__new_Variable(kk_reuse_t _at, kk_string_t name, kk_context_t* _ctx) {
  struct kk_language_dash_constructs_Variable* _con = kk_block_alloc_at_as(struct kk_language_dash_constructs_Variable, _at, 1 /* scan count */, (kk_tag_t)(4), _ctx);
  _con->name = name;
  return kk_language_dash_constructs__base_Variable(_con);
}
static inline struct kk_language_dash_constructs_Variable* kk_language_dash_constructs__as_Variable(kk_language_dash_constructs__expression x) {
  return kk_datatype_as_assert(struct kk_language_dash_constructs_Variable*, x, (kk_tag_t)(4) /* _tag */);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__base_Lambda(struct kk_language_dash_constructs_Lambda* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__new_Lambda(kk_reuse_t _at, kk_language_dash_constructs__patern arg, kk_language_dash_constructs__expression body, kk_context_t* _ctx) {
  struct kk_language_dash_constructs_Lambda* _con = kk_block_alloc_at_as(struct kk_language_dash_constructs_Lambda, _at, 2 /* scan count */, (kk_tag_t)(5), _ctx);
  _con->arg = arg;
  _con->body = body;
  return kk_language_dash_constructs__base_Lambda(_con);
}
static inline struct kk_language_dash_constructs_Lambda* kk_language_dash_constructs__as_Lambda(kk_language_dash_constructs__expression x) {
  return kk_datatype_as_assert(struct kk_language_dash_constructs_Lambda*, x, (kk_tag_t)(5) /* _tag */);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__base_MLpair(struct kk_language_dash_constructs_MLpair* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__new_MLpair(kk_reuse_t _at, kk_language_dash_constructs__expression e1, kk_language_dash_constructs__expression e2, kk_context_t* _ctx) {
  struct kk_language_dash_constructs_MLpair* _con = kk_block_alloc_at_as(struct kk_language_dash_constructs_MLpair, _at, 2 /* scan count */, (kk_tag_t)(7), _ctx);
  _con->e1 = e1;
  _con->e2 = e2;
  return kk_language_dash_constructs__base_MLpair(_con);
}
static inline struct kk_language_dash_constructs_MLpair* kk_language_dash_constructs__as_MLpair(kk_language_dash_constructs__expression x) {
  return kk_datatype_as_assert(struct kk_language_dash_constructs_MLpair*, x, (kk_tag_t)(7) /* _tag */);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__base_Apply(struct kk_language_dash_constructs_Apply* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__new_Apply(kk_reuse_t _at, kk_language_dash_constructs__expression e1, kk_language_dash_constructs__expression e2, kk_context_t* _ctx) {
  struct kk_language_dash_constructs_Apply* _con = kk_block_alloc_at_as(struct kk_language_dash_constructs_Apply, _at, 2 /* scan count */, (kk_tag_t)(8), _ctx);
  _con->e1 = e1;
  _con->e2 = e2;
  return kk_language_dash_constructs__base_Apply(_con);
}
static inline struct kk_language_dash_constructs_Apply* kk_language_dash_constructs__as_Apply(kk_language_dash_constructs__expression x) {
  return kk_datatype_as_assert(struct kk_language_dash_constructs_Apply*, x, (kk_tag_t)(8) /* _tag */);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__base_If(struct kk_language_dash_constructs_If* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__new_If(kk_reuse_t _at, kk_language_dash_constructs__expression cond, kk_language_dash_constructs__expression thus, kk_language_dash_constructs__expression otherwise, kk_context_t* _ctx) {
  struct kk_language_dash_constructs_If* _con = kk_block_alloc_at_as(struct kk_language_dash_constructs_If, _at, 3 /* scan count */, (kk_tag_t)(6), _ctx);
  _con->cond = cond;
  _con->thus = thus;
  _con->otherwise = otherwise;
  return kk_language_dash_constructs__base_If(_con);
}
static inline struct kk_language_dash_constructs_If* kk_language_dash_constructs__as_If(kk_language_dash_constructs__expression x) {
  return kk_datatype_as_assert(struct kk_language_dash_constructs_If*, x, (kk_tag_t)(6) /* _tag */);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__base_Let(struct kk_language_dash_constructs_Let* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__new_Let(kk_reuse_t _at, kk_language_dash_constructs__patern arg, kk_language_dash_constructs__expression arg__val, kk_language_dash_constructs__expression body, kk_context_t* _ctx) {
  struct kk_language_dash_constructs_Let* _con = kk_block_alloc_at_as(struct kk_language_dash_constructs_Let, _at, 3 /* scan count */, (kk_tag_t)(9), _ctx);
  _con->arg = arg;
  _con->arg__val = arg__val;
  _con->body = body;
  return kk_language_dash_constructs__base_Let(_con);
}
static inline struct kk_language_dash_constructs_Let* kk_language_dash_constructs__as_Let(kk_language_dash_constructs__expression x) {
  return kk_datatype_as_assert(struct kk_language_dash_constructs_Let*, x, (kk_tag_t)(9) /* _tag */);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__base_Letrec(struct kk_language_dash_constructs_Letrec* _x) {
  return kk_datatype_from_base(&_x->_base);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__new_Letrec(kk_reuse_t _at, kk_language_dash_constructs__patern arg, kk_language_dash_constructs__expression arg__val, kk_language_dash_constructs__expression body, kk_context_t* _ctx) {
  struct kk_language_dash_constructs_Letrec* _con = kk_block_alloc_at_as(struct kk_language_dash_constructs_Letrec, _at, 3 /* scan count */, (kk_tag_t)(10), _ctx);
  _con->arg = arg;
  _con->arg__val = arg__val;
  _con->body = body;
  return kk_language_dash_constructs__base_Letrec(_con);
}
static inline struct kk_language_dash_constructs_Letrec* kk_language_dash_constructs__as_Letrec(kk_language_dash_constructs__expression x) {
  return kk_datatype_as_assert(struct kk_language_dash_constructs_Letrec*, x, (kk_tag_t)(10) /* _tag */);
}
static inline bool kk_language_dash_constructs__is_EFalse(kk_language_dash_constructs__expression x) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(2)));
}
static inline bool kk_language_dash_constructs__is_ETrue(kk_language_dash_constructs__expression x) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(3)));
}
static inline bool kk_language_dash_constructs__is_Num(kk_language_dash_constructs__expression x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(1)));
}
static inline bool kk_language_dash_constructs__is_Variable(kk_language_dash_constructs__expression x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(4)));
}
static inline bool kk_language_dash_constructs__is_Lambda(kk_language_dash_constructs__expression x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(5)));
}
static inline bool kk_language_dash_constructs__is_MLpair(kk_language_dash_constructs__expression x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(7)));
}
static inline bool kk_language_dash_constructs__is_Apply(kk_language_dash_constructs__expression x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(8)));
}
static inline bool kk_language_dash_constructs__is_If(kk_language_dash_constructs__expression x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(6)));
}
static inline bool kk_language_dash_constructs__is_Let(kk_language_dash_constructs__expression x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(9)));
}
static inline bool kk_language_dash_constructs__is_Letrec(kk_language_dash_constructs__expression x) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(10)));
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__expression_dup(kk_language_dash_constructs__expression _x) {
  return kk_datatype_dup(_x);
}
static inline void kk_language_dash_constructs__expression_drop(kk_language_dash_constructs__expression _x, kk_context_t* _ctx) {
  kk_datatype_drop(_x, _ctx);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__expression_hole() {
  return kk_datatype_from_tag((kk_tag_t)0);
}
static inline bool kk_language_dash_constructs__expression_is_unique(kk_language_dash_constructs__expression _x) {
  return kk_datatype_is_unique(_x);
}
static inline void kk_language_dash_constructs__expression_free(kk_language_dash_constructs__expression _x, kk_context_t* _ctx) {
  kk_datatype_free(_x, _ctx);
}
static inline void kk_language_dash_constructs__expression_decref(kk_language_dash_constructs__expression _x, kk_context_t* _ctx) {
  kk_datatype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_language_dash_constructs__expression_dropn_reuse(kk_language_dash_constructs__expression _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_datatype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_language_dash_constructs__expression_dropn(kk_language_dash_constructs__expression _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_datatype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_language_dash_constructs__expression_reuse(kk_language_dash_constructs__expression _x) {
  return kk_datatype_reuse(_x);
}
static inline kk_box_t kk_language_dash_constructs__expression_box(kk_language_dash_constructs__expression _x, kk_context_t* _ctx) {
  return kk_datatype_box(_x);
}
static inline kk_language_dash_constructs__expression kk_language_dash_constructs__expression_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_datatype_unbox(_x);
}

// value declarations
 
// Automatically generated. Tests for the `Ident` constructor of the `:patern` type.

static inline bool kk_language_dash_constructs_is_ident(kk_language_dash_constructs__patern patern, kk_context_t* _ctx) { /* (patern : patern) -> bool */ 
  if (kk_language_dash_constructs__is_Ident(patern)) {
    struct kk_language_dash_constructs_Ident* _con1245 = kk_language_dash_constructs__as_Ident(patern);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `NullPat` constructor of the `:patern` type.

static inline bool kk_language_dash_constructs_is_nullPat(kk_language_dash_constructs__patern patern, kk_context_t* _ctx) { /* (patern : patern) -> bool */ 
  if (kk_language_dash_constructs__is_NullPat(patern)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Patpair` constructor of the `:patern` type.

static inline bool kk_language_dash_constructs_is_patpair(kk_language_dash_constructs__patern patern, kk_context_t* _ctx) { /* (patern : patern) -> bool */ 
  if (kk_language_dash_constructs__is_Patpair(patern)) {
    struct kk_language_dash_constructs_Patpair* _con1246 = kk_language_dash_constructs__as_Patpair(patern);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Num` constructor of the `:expression` type.

static inline bool kk_language_dash_constructs_is_num(kk_language_dash_constructs__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_language_dash_constructs__is_Num(expression)) {
    struct kk_language_dash_constructs_Num* _con1247 = kk_language_dash_constructs__as_Num(expression);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `EFalse` constructor of the `:expression` type.

static inline bool kk_language_dash_constructs_is_efalse(kk_language_dash_constructs__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_language_dash_constructs__is_EFalse(expression)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `ETrue` constructor of the `:expression` type.

static inline bool kk_language_dash_constructs_is_etrue(kk_language_dash_constructs__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_language_dash_constructs__is_ETrue(expression)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Variable` constructor of the `:expression` type.

static inline bool kk_language_dash_constructs_is_variable(kk_language_dash_constructs__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_language_dash_constructs__is_Variable(expression)) {
    struct kk_language_dash_constructs_Variable* _con1248 = kk_language_dash_constructs__as_Variable(expression);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Lambda` constructor of the `:expression` type.

static inline bool kk_language_dash_constructs_is_lambda(kk_language_dash_constructs__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_language_dash_constructs__is_Lambda(expression)) {
    struct kk_language_dash_constructs_Lambda* _con1249 = kk_language_dash_constructs__as_Lambda(expression);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `If` constructor of the `:expression` type.

static inline bool kk_language_dash_constructs_is_if(kk_language_dash_constructs__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_language_dash_constructs__is_If(expression)) {
    struct kk_language_dash_constructs_If* _con1250 = kk_language_dash_constructs__as_If(expression);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `MLpair` constructor of the `:expression` type.

static inline bool kk_language_dash_constructs_is_mlpair(kk_language_dash_constructs__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_language_dash_constructs__is_MLpair(expression)) {
    struct kk_language_dash_constructs_MLpair* _con1251 = kk_language_dash_constructs__as_MLpair(expression);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Apply` constructor of the `:expression` type.

static inline bool kk_language_dash_constructs_is_apply(kk_language_dash_constructs__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_language_dash_constructs__is_Apply(expression)) {
    struct kk_language_dash_constructs_Apply* _con1252 = kk_language_dash_constructs__as_Apply(expression);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Let` constructor of the `:expression` type.

static inline bool kk_language_dash_constructs_is_let(kk_language_dash_constructs__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_language_dash_constructs__is_Let(expression)) {
    struct kk_language_dash_constructs_Let* _con1253 = kk_language_dash_constructs__as_Let(expression);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Letrec` constructor of the `:expression` type.

static inline bool kk_language_dash_constructs_is_letrec(kk_language_dash_constructs__expression expression, kk_context_t* _ctx) { /* (expression : expression) -> bool */ 
  if (kk_language_dash_constructs__is_Letrec(expression)) {
    struct kk_language_dash_constructs_Letrec* _con1254 = kk_language_dash_constructs__as_Letrec(expression);
    return true;
  }
  {
    return false;
  }
}

kk_string_t kk_language_dash_constructs_show(kk_language_dash_constructs__patern pat, kk_context_t* _ctx); /* (pat : patern) -> total string */ 

kk_string_t kk_language_dash_constructs_show_1(kk_language_dash_constructs__expression exp, kk_context_t* _ctx); /* (exp : expression) -> total string */ 

void kk_language_dash_constructs__init(kk_context_t* _ctx);


void kk_language_dash_constructs__done(kk_context_t* _ctx);

#endif // header
