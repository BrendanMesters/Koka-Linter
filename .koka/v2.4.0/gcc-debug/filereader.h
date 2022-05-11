#pragma once
#ifndef kk_filereader_H
#define kk_filereader_H
// Koka generated module: "filereader", koka version: 2.4.0, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core.h"
#include "std_os_path.h"

// type declarations

// value declarations

static inline kk_string_t kk_filereader_getpath(kk_context_t* _ctx) { /* () -> string */ 
  kk_std_os_path__path _x65;
  kk_string_t _x66;
  kk_define_string_literal(, _s67, 1, ".")
  _x66 = kk_string_dup(_s67); /*string*/
  kk_string_t _x68;
  kk_define_string_literal(, _s69, 7, ".bashrc")
  _x68 = kk_string_dup(_s69); /*string*/
  _x65 = kk_std_os_path__lp__fs__2_rp_(_x66, _x68, _ctx); /*std/os/path/path*/
  return kk_std_os_path_string(_x65, _ctx);
}

static inline kk_unit_t kk_filereader_main(kk_context_t* _ctx) { /* () -> console () */ 
  kk_string_t s_64;
  kk_std_os_path__path _x70;
  kk_string_t _x71;
  kk_define_string_literal(, _s72, 1, ".")
  _x71 = kk_string_dup(_s72); /*string*/
  kk_string_t _x73;
  kk_define_string_literal(, _s74, 7, ".bashrc")
  _x73 = kk_string_dup(_s74); /*string*/
  _x70 = kk_std_os_path__lp__fs__2_rp_(_x71, _x73, _ctx); /*std/os/path/path*/
  s_64 = kk_std_os_path_string(_x70, _ctx); /*string*/
  kk_std_core_printsln(s_64, _ctx); return kk_Unit;
}

void kk_filereader__init(kk_context_t* _ctx);


void kk_filereader__done(kk_context_t* _ctx);

#endif // header
