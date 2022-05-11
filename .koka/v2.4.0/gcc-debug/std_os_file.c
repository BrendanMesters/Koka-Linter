// Koka generated module: "std/os/file", koka version: 2.4.0, platform: 64-bit
#include "std_os_file.h"
/*---------------------------------------------------------------------------
  Copyright 2020-2021, Microsoft Research, Daan Leijen.

  This is free software; you can redistribute it and/or modify it under the
  terms of the Apache License, Version 2.0. A copy of the License can be
  found in the LICENSE file at the root of this distribution.
---------------------------------------------------------------------------*/

static kk_std_core__error kk_os_read_text_file_error( kk_string_t path, kk_context_t* ctx ) {
  kk_string_t content;
  const int err = kk_os_read_text_file(path,&content,ctx);
  if (err != 0) return kk_error_from_errno(err,ctx);
           else return kk_error_ok(kk_string_box(content),ctx);
}

static kk_std_core__error kk_os_write_text_file_error( kk_string_t path, kk_string_t content, kk_context_t* ctx ) {
  const int err = kk_os_write_text_file(path,content,ctx);
  if (err != 0) return kk_error_from_errno(err,ctx);
           else return kk_error_ok(kk_unit_box(kk_Unit),ctx);
}


kk_std_core__exception kk_std_os_file_prepend(kk_std_core__exception exn, kk_string_t pre, kk_context_t* _ctx) { /* (exn : exception, pre : string) -> exception */ 
  kk_string_t _x424;
  kk_string_t _x425;
  kk_string_t _x426;
  kk_define_string_literal(, _s427, 2, ": ")
  _x426 = kk_string_dup(_s427); /*string*/
  kk_string_t _x428;
  {
    kk_string_t _x = exn.message;
    kk_string_dup(_x);
    _x428 = _x; /*string*/
  }
  _x425 = kk_std_core__lp__plus__plus__1_rp_(_x426, _x428, _ctx); /*string*/
  _x424 = kk_std_core__lp__plus__plus__1_rp_(pre, _x425, _ctx); /*string*/
  kk_std_core__exception_info _x429;
  {
    kk_std_core__exception_info _x0 = exn.info;
    kk_std_core__exception_info_dup(_x0);
    kk_std_core__exception_drop(exn, _ctx);
    _x429 = _x0; /*exception-info*/
  }
  return kk_std_core__new_Exception(_x424, _x429, _ctx);
}

kk_std_core__error kk_std_os_file_read_text_file_err(kk_string_t path, kk_context_t* _ctx) { /* (path : string) -> fsys error<string> */ 
  return kk_os_read_text_file_error(path,kk_context());
}

kk_std_core__error kk_std_os_file_write_text_file_err(kk_string_t path, kk_string_t content, kk_context_t* _ctx) { /* (path : string, content : string) -> fsys error<()> */ 
  return kk_os_write_text_file_error(path,content,kk_context());
}
 
// Read a text file synchronously (using UTF8 encoding)


// lift anonymous function
struct kk_std_os_file_read_text_file_fun431__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_read_text_file_fun431(kk_function_t _fself, kk_box_t _b_272, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_read_text_file_fun431(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_read_text_file_fun431, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_file_read_text_file_fun431(kk_function_t _fself, kk_box_t _b_272, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x432;
  kk_std_os_path__path _x433 = kk_std_os_path__path_unbox(_b_272, _ctx); /*std/os/path/path*/
  _x432 = kk_std_os_path_string(_x433, _ctx); /*string*/
  return kk_string_box(_x432);
}


// lift anonymous function
struct kk_std_os_file_read_text_file_fun437__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_read_text_file_fun437(kk_function_t _fself, kk_box_t _b_277, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_read_text_file_fun437(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_read_text_file_fun437, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_file_read_text_file_fun437(kk_function_t _fself, kk_box_t _b_277, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__error _x438;
  kk_string_t _x439 = kk_string_unbox(_b_277); /*string*/
  _x438 = kk_std_os_file_read_text_file_err(_x439, _ctx); /*error<string>*/
  return kk_std_core__error_box(_x438, _ctx);
}


// lift anonymous function
struct kk_std_os_file_read_text_file_fun444__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_read_text_file_fun444(kk_function_t _fself, kk_box_t _b_280, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_read_text_file_fun444(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_read_text_file_fun444, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_file_read_text_file_fun444(kk_function_t _fself, kk_box_t _b_280, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x445;
  kk_string_t _x446;
  kk_std_os_path__path _x447 = kk_std_os_path__path_unbox(_b_280, _ctx); /*std/os/path/path*/
  _x446 = kk_std_os_path_string(_x447, _ctx); /*string*/
  _x445 = kk_std_core_show_3(_x446, _ctx); /*string*/
  return kk_string_box(_x445);
}


// lift anonymous function
struct kk_std_os_file_read_text_file_fun449__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_read_text_file_fun449(kk_function_t _fself, kk_box_t _b_287, kk_box_t _b_288, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_read_text_file_fun449(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_read_text_file_fun449, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_file_read_text_file_fun449(kk_function_t _fself, kk_box_t _b_287, kk_box_t _b_288, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__exception _x450;
  kk_string_t _x451;
  kk_string_t _x452 = kk_string_unbox(_b_288); /*string*/
  kk_string_t _x453;
  kk_string_t _x454;
  kk_define_string_literal(, _s455, 2, ": ")
  _x454 = kk_string_dup(_s455); /*string*/
  kk_string_t _x456;
  kk_std_core__exception _match_421;
  kk_box_t _x457 = kk_box_dup(_b_287); /*1000*/
  _match_421 = kk_std_core__exception_unbox(_x457, _ctx); /*exception*/
  {
    kk_string_t _x = _match_421.message;
    kk_string_dup(_x);
    kk_std_core__exception_drop(_match_421, _ctx);
    _x456 = _x; /*string*/
  }
  _x453 = kk_std_core__lp__plus__plus__1_rp_(_x454, _x456, _ctx); /*string*/
  _x451 = kk_std_core__lp__plus__plus__1_rp_(_x452, _x453, _ctx); /*string*/
  kk_std_core__exception_info _x458;
  kk_std_core__exception _match_420 = kk_std_core__exception_unbox(_b_287, _ctx); /*exception*/;
  {
    kk_std_core__exception_info _x02 = _match_420.info;
    kk_std_core__exception_info_dup(_x02);
    kk_std_core__exception_drop(_match_420, _ctx);
    _x458 = _x02; /*exception-info*/
  }
  _x450 = kk_std_core__new_Exception(_x451, _x458, _ctx); /*exception*/
  return kk_std_core__exception_box(_x450, _ctx);
}

kk_string_t kk_std_os_file_read_text_file(kk_std_os_path__path path, kk_context_t* _ctx) { /* (path : std/os/path/path) -> <exn,fsys> string */ 
  kk_string_t _x1_243;
  kk_box_t _x430;
  kk_box_t _x434;
  kk_std_os_path__path _x435 = kk_std_os_path__path_dup(path); /*std/os/path/path*/
  _x434 = kk_std_os_path__path_box(_x435, _ctx); /*1000*/
  _x430 = kk_std_core_hnd__open_none1(kk_std_os_file_new_read_text_file_fun431(_ctx), _x434, _ctx); /*1001*/
  _x1_243 = kk_string_unbox(_x430); /*string*/
  kk_std_core__error _match_417;
  kk_box_t _x436 = kk_std_core_hnd__open_none1(kk_std_os_file_new_read_text_file_fun437(_ctx), kk_string_box(_x1_243), _ctx); /*1001*/
  _match_417 = kk_std_core__error_unbox(_x436, _ctx); /*error<string>*/
  if (kk_std_core__is_Error(_match_417)) {
    kk_std_core__exception exn = _match_417._cons.Error.exception;
    kk_std_core__exception_dup(exn);
    kk_std_core__error_drop(_match_417, _ctx);
    kk_string_t _x2_246;
    kk_string_t _x440;
    kk_define_string_literal(, _s441, 25, "unable to read text file ")
    _x440 = kk_string_dup(_s441); /*string*/
    kk_string_t _x442;
    kk_box_t _x443 = kk_std_core_hnd__open_none1(kk_std_os_file_new_read_text_file_fun444(_ctx), kk_std_os_path__path_box(path, _ctx), _ctx); /*1001*/
    _x442 = kk_string_unbox(_x443); /*string*/
    _x2_246 = kk_std_core__lp__plus__plus__1_rp_(_x440, _x442, _ctx); /*string*/
    kk_std_core__exception exn0_219;
    kk_box_t _x448 = kk_std_core_hnd__open_none2(kk_std_os_file_new_read_text_file_fun449(_ctx), kk_std_core__exception_box(exn, _ctx), kk_string_box(_x2_246), _ctx); /*1002*/
    exn0_219 = kk_std_core__exception_unbox(_x448, _ctx); /*exception*/
    kk_std_core_hnd__ev ev_257;
    kk_ssize_t _x459 = (KK_IZ(0)); /*ssize_t*/
    ev_257 = kk_evv_at(_x459,kk_context()); /*std/core/hnd/ev<.hnd-exn>*/
    kk_box_t _x460;
    {
      struct kk_std_core_hnd_Ev* _con461 = kk_std_core_hnd__as_Ev(ev_257);
      kk_std_core_hnd__marker m0 = _con461->marker;
      kk_box_t _box_x294 = _con461->hnd;
      kk_std_core__hnd_exn h = kk_std_core__hnd_exn_unbox(_box_x294, NULL);
      kk_std_core__hnd_exn_dup(h);
      kk_std_core_hnd__clause1 _match_418;
      kk_std_core_hnd__clause1 _brw_419 = kk_std_core__select_throw_exn(h, _ctx); /*std/core/hnd/clause1<exception,1001,.hnd-exn,1002,1003>*/;
      kk_std_core__hnd_exn_drop(h, _ctx);
      _match_418 = _brw_419; /*std/core/hnd/clause1<exception,1001,.hnd-exn,1002,1003>*/
      {
        kk_function_t _fun_unbox_x298 = _match_418.clause;
        _x460 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x298, (_fun_unbox_x298, m0, ev_257, kk_std_core__exception_box(exn0_219, _ctx), _ctx)); /*1010*/
      }
    }
    return kk_string_unbox(_x460);
  }
  {
    kk_box_t _box_x302 = _match_417._cons.Ok.result;
    kk_string_t content = kk_string_unbox(_box_x302);
    kk_std_os_path__path_drop(path, _ctx);
    kk_string_dup(content);
    kk_std_core__error_drop(_match_417, _ctx);
    return content;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_file__mlift256_write_text_file_fun465__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file__mlift256_write_text_file_fun465(kk_function_t _fself, kk_box_t _b_307, kk_context_t* _ctx);
static kk_function_t kk_std_os_file__new_mlift256_write_text_file_fun465(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file__mlift256_write_text_file_fun465, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_file__mlift256_write_text_file_fun465(kk_function_t _fself, kk_box_t _b_307, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x466;
  kk_std_os_path__path _x467 = kk_std_os_path__path_unbox(_b_307, _ctx); /*std/os/path/path*/
  _x466 = kk_std_os_path_string(_x467, _ctx); /*string*/
  return kk_string_box(_x466);
}


// lift anonymous function
struct kk_std_os_file__mlift256_write_text_file_fun471__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file__mlift256_write_text_file_fun471(kk_function_t _fself, kk_box_t _b_313, kk_box_t _b_314, kk_context_t* _ctx);
static kk_function_t kk_std_os_file__new_mlift256_write_text_file_fun471(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file__mlift256_write_text_file_fun471, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_file__mlift256_write_text_file_fun471(kk_function_t _fself, kk_box_t _b_313, kk_box_t _b_314, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__error _x472;
  kk_string_t _x473 = kk_string_unbox(_b_313); /*string*/
  kk_string_t _x474 = kk_string_unbox(_b_314); /*string*/
  _x472 = kk_std_os_file_write_text_file_err(_x473, _x474, _ctx); /*error<()>*/
  return kk_std_core__error_box(_x472, _ctx);
}


// lift anonymous function
struct kk_std_os_file__mlift256_write_text_file_fun479__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file__mlift256_write_text_file_fun479(kk_function_t _fself, kk_box_t _b_317, kk_context_t* _ctx);
static kk_function_t kk_std_os_file__new_mlift256_write_text_file_fun479(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file__mlift256_write_text_file_fun479, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_file__mlift256_write_text_file_fun479(kk_function_t _fself, kk_box_t _b_317, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x480;
  kk_string_t _x481;
  kk_std_os_path__path _x482 = kk_std_os_path__path_unbox(_b_317, _ctx); /*std/os/path/path*/
  _x481 = kk_std_os_path_string(_x482, _ctx); /*string*/
  _x480 = kk_std_core_show_3(_x481, _ctx); /*string*/
  return kk_string_box(_x480);
}


// lift anonymous function
struct kk_std_os_file__mlift256_write_text_file_fun484__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file__mlift256_write_text_file_fun484(kk_function_t _fself, kk_box_t _b_324, kk_box_t _b_325, kk_context_t* _ctx);
static kk_function_t kk_std_os_file__new_mlift256_write_text_file_fun484(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file__mlift256_write_text_file_fun484, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_file__mlift256_write_text_file_fun484(kk_function_t _fself, kk_box_t _b_324, kk_box_t _b_325, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__exception _x485;
  kk_string_t _x486;
  kk_string_t _x487 = kk_string_unbox(_b_325); /*string*/
  kk_string_t _x488;
  kk_string_t _x489;
  kk_define_string_literal(, _s490, 2, ": ")
  _x489 = kk_string_dup(_s490); /*string*/
  kk_string_t _x491;
  kk_std_core__exception _match_416;
  kk_box_t _x492 = kk_box_dup(_b_324); /*1000*/
  _match_416 = kk_std_core__exception_unbox(_x492, _ctx); /*exception*/
  {
    kk_string_t _x21 = _match_416.message;
    kk_string_dup(_x21);
    kk_std_core__exception_drop(_match_416, _ctx);
    _x491 = _x21; /*string*/
  }
  _x488 = kk_std_core__lp__plus__plus__1_rp_(_x489, _x491, _ctx); /*string*/
  _x486 = kk_std_core__lp__plus__plus__1_rp_(_x487, _x488, _ctx); /*string*/
  kk_std_core__exception_info _x493;
  kk_std_core__exception _match_415 = kk_std_core__exception_unbox(_b_324, _ctx); /*exception*/;
  {
    kk_std_core__exception_info _x3 = _match_415.info;
    kk_std_core__exception_info_dup(_x3);
    kk_std_core__exception_drop(_match_415, _ctx);
    _x493 = _x3; /*exception-info*/
  }
  _x485 = kk_std_core__new_Exception(_x486, _x493, _ctx); /*exception*/
  return kk_std_core__exception_box(_x485, _ctx);
}

kk_unit_t kk_std_os_file__mlift256_write_text_file(kk_string_t content, kk_std_os_path__path path, kk_unit_t _c_230, kk_context_t* _ctx) { /* (content : string, path : std/os/path/path, ()) -> () */ 
  kk_string_t _x12_250;
  kk_box_t _x464;
  kk_box_t _x468;
  kk_std_os_path__path _x469 = kk_std_os_path__path_dup(path); /*std/os/path/path*/
  _x468 = kk_std_os_path__path_box(_x469, _ctx); /*1000*/
  _x464 = kk_std_core_hnd__open_none1(kk_std_os_file__new_mlift256_write_text_file_fun465(_ctx), _x468, _ctx); /*1001*/
  _x12_250 = kk_string_unbox(_x464); /*string*/
  kk_std_core__error _match_412;
  kk_box_t _x470 = kk_std_core_hnd__open_none2(kk_std_os_file__new_mlift256_write_text_file_fun471(_ctx), kk_string_box(_x12_250), kk_string_box(content), _ctx); /*1002*/
  _match_412 = kk_std_core__error_unbox(_x470, _ctx); /*error<()>*/
  if (kk_std_core__is_Error(_match_412)) {
    kk_std_core__exception exn = _match_412._cons.Error.exception;
    kk_std_core__exception_dup(exn);
    kk_std_core__error_drop(_match_412, _ctx);
    kk_string_t _x20_254;
    kk_string_t _x475;
    kk_define_string_literal(, _s476, 26, "unable to write text file ")
    _x475 = kk_string_dup(_s476); /*string*/
    kk_string_t _x477;
    kk_box_t _x478 = kk_std_core_hnd__open_none1(kk_std_os_file__new_mlift256_write_text_file_fun479(_ctx), kk_std_os_path__path_box(path, _ctx), _ctx); /*1001*/
    _x477 = kk_string_unbox(_x478); /*string*/
    _x20_254 = kk_std_core__lp__plus__plus__1_rp_(_x475, _x477, _ctx); /*string*/
    kk_std_core__exception exn0_222;
    kk_box_t _x483 = kk_std_core_hnd__open_none2(kk_std_os_file__new_mlift256_write_text_file_fun484(_ctx), kk_std_core__exception_box(exn, _ctx), kk_string_box(_x20_254), _ctx); /*1002*/
    exn0_222 = kk_std_core__exception_unbox(_x483, _ctx); /*exception*/
    kk_std_core_hnd__ev ev_260;
    kk_ssize_t _x494 = (KK_IZ(0)); /*ssize_t*/
    ev_260 = kk_evv_at(_x494,kk_context()); /*std/core/hnd/ev<.hnd-exn>*/
    kk_box_t _x495;
    {
      struct kk_std_core_hnd_Ev* _con496 = kk_std_core_hnd__as_Ev(ev_260);
      kk_std_core_hnd__marker m0 = _con496->marker;
      kk_box_t _box_x331 = _con496->hnd;
      kk_std_core__hnd_exn h = kk_std_core__hnd_exn_unbox(_box_x331, NULL);
      kk_std_core__hnd_exn_dup(h);
      kk_std_core_hnd__clause1 _match_413;
      kk_std_core_hnd__clause1 _brw_414 = kk_std_core__select_throw_exn(h, _ctx); /*std/core/hnd/clause1<exception,1001,.hnd-exn,1002,1003>*/;
      kk_std_core__hnd_exn_drop(h, _ctx);
      _match_413 = _brw_414; /*std/core/hnd/clause1<exception,1001,.hnd-exn,1002,1003>*/
      {
        kk_function_t _fun_unbox_x335 = _match_413.clause;
        _x495 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x335, (_fun_unbox_x335, m0, ev_260, kk_std_core__exception_box(exn0_222, _ctx), _ctx)); /*1010*/
      }
    }
    kk_unit_unbox(_x495); return kk_Unit;
  }
  {
    kk_std_os_path__path_drop(path, _ctx);
    kk_std_core__error_drop(_match_412, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// Write a text file synchronously (using UTF8 encoding)


// lift anonymous function
struct kk_std_os_file_write_text_file_fun501__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_write_text_file_fun501(kk_function_t _fself, kk_box_t _b_347, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_write_text_file_fun501(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_write_text_file_fun501, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_file_write_text_file_fun501(kk_function_t _fself, kk_box_t _b_347, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x502;
  kk_string_t _x503;
  kk_std_core_types__optional _x504 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
  if (kk_std_core_types__is_Optional(_x504)) {
    kk_box_t _box_x343 = _x504._cons.Optional.value;
    kk_string_t _root_105 = kk_string_unbox(_box_x343);
    _x503 = _root_105; /*string*/
  }
  else {
    kk_std_os_path__path _match_411;
    kk_box_t _x506 = kk_box_dup(_b_347); /*1000*/
    _match_411 = kk_std_os_path__path_unbox(_x506, _ctx); /*std/os/path/path*/
    {
      kk_string_t _x00 = _match_411.root;
      kk_string_dup(_x00);
      kk_std_os_path__path_drop(_match_411, _ctx);
      _x503 = _x00; /*string*/
    }
  }
  kk_std_core__list _x507;
  kk_std_os_path__path _match_409 = kk_std_os_path__path_unbox(_b_347, _ctx); /*std/os/path/path*/;
  {
    kk_std_core__list _x = _match_409.parts;
    kk_std_core__list_dup(_x);
    kk_std_os_path__path_drop(_match_409, _ctx);
    if (kk_std_core__is_Cons(_x)) {
      struct kk_std_core_Cons* _con508 = kk_std_core__as_Cons(_x);
      kk_box_t _box_x344 = _con508->head;
      kk_std_core__list xx = _con508->tail;
      if (kk_likely(kk_std_core__list_is_unique(_x))) {
        kk_box_drop(_box_x344, _ctx);
        kk_std_core__list_free(_x, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_x, _ctx);
      }
      _x507 = xx; /*list<string>*/
    }
    else {
      _x507 = kk_std_core__new_Nil(_ctx); /*list<string>*/
    }
  }
  _x502 = kk_std_os_path__new_Path(_x503, _x507, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x502, _ctx);
}


// lift anonymous function
struct kk_std_os_file_write_text_file_fun514__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_write_text_file_fun514(kk_function_t _fself, kk_box_t _b_352, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_write_text_file_fun514(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_write_text_file_fun514, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_file_write_text_file_fun514(kk_function_t _fself, kk_box_t _b_352, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x515;
  kk_string_t _x516;
  kk_std_core_types__optional _x517 = kk_std_core_types__new_None(_ctx); /*forall<a> optional<a>*/
  if (kk_std_core_types__is_Optional(_x517)) {
    kk_box_t _box_x348 = _x517._cons.Optional.value;
    kk_string_t _root_1050 = kk_string_unbox(_box_x348);
    _x516 = _root_1050; /*string*/
  }
  else {
    kk_std_os_path__path _match_408;
    kk_box_t _x519 = kk_box_dup(_b_352); /*1000*/
    _match_408 = kk_std_os_path__path_unbox(_x519, _ctx); /*std/os/path/path*/
    {
      kk_string_t _x000 = _match_408.root;
      kk_string_dup(_x000);
      kk_std_os_path__path_drop(_match_408, _ctx);
      _x516 = _x000; /*string*/
    }
  }
  kk_std_core__list _x520;
  kk_std_os_path__path _match_406 = kk_std_os_path__path_unbox(_b_352, _ctx); /*std/os/path/path*/;
  {
    kk_std_core__list _x11 = _match_406.parts;
    kk_std_core__list_dup(_x11);
    kk_std_os_path__path_drop(_match_406, _ctx);
    if (kk_std_core__is_Cons(_x11)) {
      struct kk_std_core_Cons* _con521 = kk_std_core__as_Cons(_x11);
      kk_box_t _box_x349 = _con521->head;
      kk_std_core__list xx0 = _con521->tail;
      if (kk_likely(kk_std_core__list_is_unique(_x11))) {
        kk_box_drop(_box_x349, _ctx);
        kk_std_core__list_free(_x11, _ctx);
      }
      else {
        kk_std_core__list_dup(xx0);
        kk_std_core__list_decref(_x11, _ctx);
      }
      _x520 = xx0; /*list<string>*/
    }
    else {
      _x520 = kk_std_core__new_Nil(_ctx); /*list<string>*/
    }
  }
  _x515 = kk_std_os_path__new_Path(_x516, _x520, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x515, _ctx);
}


// lift anonymous function
struct kk_std_os_file_write_text_file_fun526__t {
  struct kk_function_s _base;
  kk_string_t content;
  kk_std_os_path__path path;
};
static kk_box_t kk_std_os_file_write_text_file_fun526(kk_function_t _fself, kk_box_t _b_360, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_write_text_file_fun526(kk_string_t content, kk_std_os_path__path path, kk_context_t* _ctx) {
  struct kk_std_os_file_write_text_file_fun526__t* _self = kk_function_alloc_as(struct kk_std_os_file_write_text_file_fun526__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_os_file_write_text_file_fun526, kk_context());
  _self->content = content;
  _self->path = path;
  return &_self->_base;
}

static kk_box_t kk_std_os_file_write_text_file_fun526(kk_function_t _fself, kk_box_t _b_360, kk_context_t* _ctx) {
  struct kk_std_os_file_write_text_file_fun526__t* _self = kk_function_as(struct kk_std_os_file_write_text_file_fun526__t*, _fself);
  kk_string_t content = _self->content; /* string */
  kk_std_os_path__path path = _self->path; /* std/os/path/path */
  kk_drop_match(_self, {kk_string_dup(content);kk_std_os_path__path_dup(path);}, {}, _ctx)
  kk_unit_t _c_399_230 = kk_Unit;
  kk_unit_unbox(_b_360);
  kk_unit_t _x527 = kk_Unit;
  kk_std_os_file__mlift256_write_text_file(content, path, _c_399_230, _ctx);
  return kk_unit_box(_x527);
}


// lift anonymous function
struct kk_std_os_file_write_text_file_fun529__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_write_text_file_fun529(kk_function_t _fself, kk_box_t _b_363, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_write_text_file_fun529(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_write_text_file_fun529, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_file_write_text_file_fun529(kk_function_t _fself, kk_box_t _b_363, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x530;
  kk_std_os_path__path _x531 = kk_std_os_path__path_unbox(_b_363, _ctx); /*std/os/path/path*/
  _x530 = kk_std_os_path_string(_x531, _ctx); /*string*/
  return kk_string_box(_x530);
}


// lift anonymous function
struct kk_std_os_file_write_text_file_fun535__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_write_text_file_fun535(kk_function_t _fself, kk_box_t _b_369, kk_box_t _b_370, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_write_text_file_fun535(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_write_text_file_fun535, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_file_write_text_file_fun535(kk_function_t _fself, kk_box_t _b_369, kk_box_t _b_370, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__error _x536;
  kk_string_t _x537 = kk_string_unbox(_b_369); /*string*/
  kk_string_t _x538 = kk_string_unbox(_b_370); /*string*/
  _x536 = kk_std_os_file_write_text_file_err(_x537, _x538, _ctx); /*error<()>*/
  return kk_std_core__error_box(_x536, _ctx);
}


// lift anonymous function
struct kk_std_os_file_write_text_file_fun543__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_write_text_file_fun543(kk_function_t _fself, kk_box_t _b_373, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_write_text_file_fun543(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_write_text_file_fun543, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_file_write_text_file_fun543(kk_function_t _fself, kk_box_t _b_373, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x544;
  kk_string_t _x545;
  kk_std_os_path__path _x546 = kk_std_os_path__path_unbox(_b_373, _ctx); /*std/os/path/path*/
  _x545 = kk_std_os_path_string(_x546, _ctx); /*string*/
  _x544 = kk_std_core_show_3(_x545, _ctx); /*string*/
  return kk_string_box(_x544);
}


// lift anonymous function
struct kk_std_os_file_write_text_file_fun548__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_write_text_file_fun548(kk_function_t _fself, kk_box_t _b_380, kk_box_t _b_381, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_write_text_file_fun548(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_write_text_file_fun548, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_file_write_text_file_fun548(kk_function_t _fself, kk_box_t _b_380, kk_box_t _b_381, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__exception _x549;
  kk_string_t _x550;
  kk_string_t _x551 = kk_string_unbox(_b_381); /*string*/
  kk_string_t _x552;
  kk_string_t _x553;
  kk_define_string_literal(, _s554, 2, ": ")
  _x553 = kk_string_dup(_s554); /*string*/
  kk_string_t _x555;
  kk_std_core__exception _match_405;
  kk_box_t _x556 = kk_box_dup(_b_380); /*1000*/
  _match_405 = kk_std_core__exception_unbox(_x556, _ctx); /*exception*/
  {
    kk_string_t _x21 = _match_405.message;
    kk_string_dup(_x21);
    kk_std_core__exception_drop(_match_405, _ctx);
    _x555 = _x21; /*string*/
  }
  _x552 = kk_std_core__lp__plus__plus__1_rp_(_x553, _x555, _ctx); /*string*/
  _x550 = kk_std_core__lp__plus__plus__1_rp_(_x551, _x552, _ctx); /*string*/
  kk_std_core__exception_info _x557;
  kk_std_core__exception _match_404 = kk_std_core__exception_unbox(_b_380, _ctx); /*exception*/;
  {
    kk_std_core__exception_info _x3 = _match_404.info;
    kk_std_core__exception_info_dup(_x3);
    kk_std_core__exception_drop(_match_404, _ctx);
    _x557 = _x3; /*exception-info*/
  }
  _x549 = kk_std_core__new_Exception(_x550, _x557, _ctx); /*exception*/
  return kk_std_core__exception_box(_x549, _ctx);
}

kk_unit_t kk_std_os_file_write_text_file(kk_std_os_path__path path, kk_string_t content, kk_std_core_types__optional create_dir, kk_context_t* _ctx) { /* (path : std/os/path/path, content : string, create-dir : optional<bool>) -> <exn,fsys> () */ 
  kk_unit_t x_263 = kk_Unit;
  if (kk_std_core_types__is_Optional(create_dir)) {
    kk_box_t _box_x342 = create_dir._cons.Optional.value;
    bool _create_dir_139 = kk_bool_unbox(_box_x342);
    if (_create_dir_139) {
      kk_std_os_path__path _x499;
      kk_box_t _x500;
      kk_box_t _x510;
      kk_std_os_path__path _x511 = kk_std_os_path__path_dup(path); /*std/os/path/path*/
      _x510 = kk_std_os_path__path_box(_x511, _ctx); /*1000*/
      _x500 = kk_std_core_hnd__open_none1(kk_std_os_file_new_write_text_file_fun501(_ctx), _x510, _ctx); /*1001*/
      _x499 = kk_std_os_path__path_unbox(_x500, _ctx); /*std/os/path/path*/
      kk_std_os_dir_ensure_dir(_x499, _ctx);
    }
    else {
      
    }
  }
  else {
    kk_std_os_path__path _x512;
    kk_box_t _x513;
    kk_box_t _x523;
    kk_std_os_path__path _x524 = kk_std_os_path__path_dup(path); /*std/os/path/path*/
    _x523 = kk_std_os_path__path_box(_x524, _ctx); /*1000*/
    _x513 = kk_std_core_hnd__open_none1(kk_std_os_file_new_write_text_file_fun514(_ctx), _x523, _ctx); /*1001*/
    _x512 = kk_std_os_path__path_unbox(_x513, _ctx); /*std/os/path/path*/
    kk_std_os_dir_ensure_dir(_x512, _ctx);
  }
  if (kk_yielding(kk_context())) {
    kk_box_t _x525 = kk_std_core_hnd_yield_extend(kk_std_os_file_new_write_text_file_fun526(content, path, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x525); return kk_Unit;
  }
  {
    kk_string_t _x12_250;
    kk_box_t _x528;
    kk_box_t _x532;
    kk_std_os_path__path _x533 = kk_std_os_path__path_dup(path); /*std/os/path/path*/
    _x532 = kk_std_os_path__path_box(_x533, _ctx); /*1000*/
    _x528 = kk_std_core_hnd__open_none1(kk_std_os_file_new_write_text_file_fun529(_ctx), _x532, _ctx); /*1001*/
    _x12_250 = kk_string_unbox(_x528); /*string*/
    kk_std_core__error _match_401;
    kk_box_t _x534 = kk_std_core_hnd__open_none2(kk_std_os_file_new_write_text_file_fun535(_ctx), kk_string_box(_x12_250), kk_string_box(content), _ctx); /*1002*/
    _match_401 = kk_std_core__error_unbox(_x534, _ctx); /*error<()>*/
    if (kk_std_core__is_Error(_match_401)) {
      kk_std_core__exception exn = _match_401._cons.Error.exception;
      kk_std_core__exception_dup(exn);
      kk_std_core__error_drop(_match_401, _ctx);
      kk_string_t _x20_254;
      kk_string_t _x539;
      kk_define_string_literal(, _s540, 26, "unable to write text file ")
      _x539 = kk_string_dup(_s540); /*string*/
      kk_string_t _x541;
      kk_box_t _x542 = kk_std_core_hnd__open_none1(kk_std_os_file_new_write_text_file_fun543(_ctx), kk_std_os_path__path_box(path, _ctx), _ctx); /*1001*/
      _x541 = kk_string_unbox(_x542); /*string*/
      _x20_254 = kk_std_core__lp__plus__plus__1_rp_(_x539, _x541, _ctx); /*string*/
      kk_std_core__exception exn0_222;
      kk_box_t _x547 = kk_std_core_hnd__open_none2(kk_std_os_file_new_write_text_file_fun548(_ctx), kk_std_core__exception_box(exn, _ctx), kk_string_box(_x20_254), _ctx); /*1002*/
      exn0_222 = kk_std_core__exception_unbox(_x547, _ctx); /*exception*/
      kk_std_core_hnd__ev ev_266;
      kk_ssize_t _x558 = (KK_IZ(0)); /*ssize_t*/
      ev_266 = kk_evv_at(_x558,kk_context()); /*std/core/hnd/ev<.hnd-exn>*/
      kk_box_t _x559;
      {
        struct kk_std_core_hnd_Ev* _con560 = kk_std_core_hnd__as_Ev(ev_266);
        kk_std_core_hnd__marker m0 = _con560->marker;
        kk_box_t _box_x387 = _con560->hnd;
        kk_std_core__hnd_exn h = kk_std_core__hnd_exn_unbox(_box_x387, NULL);
        kk_std_core__hnd_exn_dup(h);
        kk_std_core_hnd__clause1 _match_402;
        kk_std_core_hnd__clause1 _brw_403 = kk_std_core__select_throw_exn(h, _ctx); /*std/core/hnd/clause1<exception,1001,.hnd-exn,1002,1003>*/;
        kk_std_core__hnd_exn_drop(h, _ctx);
        _match_402 = _brw_403; /*std/core/hnd/clause1<exception,1001,.hnd-exn,1002,1003>*/
        {
          kk_function_t _fun_unbox_x391 = _match_402.clause;
          _x559 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x391, (_fun_unbox_x391, m0, ev_266, kk_std_core__exception_box(exn0_222, _ctx), _ctx)); /*1010*/
        }
      }
      kk_unit_unbox(_x559); return kk_Unit;
    }
    {
      kk_std_os_path__path_drop(path, _ctx);
      kk_std_core__error_drop(_match_401, _ctx);
      kk_Unit; return kk_Unit;
    }
  }
}

// initialization
void kk_std_os_file__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core__init(_ctx);
  kk_std_os_path__init(_ctx);
  kk_std_os_dir__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_std_os_file__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_os_dir__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
