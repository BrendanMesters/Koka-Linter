// Koka generated module: "std/os/dir", koka version: 2.4.0, platform: 64-bit
#include "std_os_dir.h"
/*---------------------------------------------------------------------------
  Copyright 2020-2021, Microsoft Research, Daan Leijen.

  This is free software; you can redistribute it and/or modify it under the
  terms of the Apache License, Version 2.0. A copy of the License can be
  found in the LICENSE file at the root of this distribution.
---------------------------------------------------------------------------*/

static kk_std_core__error kk_os_ensure_dir_error( kk_string_t path, kk_integer_t mode, kk_context_t* ctx ) {
  int m  = kk_integer_clamp32(mode,ctx);
  const int err = kk_os_ensure_dir(path,m,ctx);
  if (err != 0) return kk_error_from_errno(err,ctx);
           else return kk_error_ok(kk_unit_box(kk_Unit),ctx);
}

static kk_std_core__error kk_os_copy_file_error( kk_string_t from, kk_string_t to, bool preserve_mtime, kk_context_t* ctx ) {
  const int err = kk_os_copy_file(from,to,preserve_mtime,ctx);
  if (err != 0) return kk_error_from_errno(err,ctx);
           else return kk_error_ok(kk_unit_box(kk_Unit),ctx);
}

static kk_std_core__error kk_os_list_directory_prim( kk_string_t dir, kk_context_t* ctx ) {
  kk_vector_t contents;
  const int err = kk_os_list_directory(dir,&contents,ctx);
  if (err != 0) return kk_error_from_errno(err,ctx);
           else return kk_error_ok(kk_vector_box(contents,ctx),ctx);
}


kk_std_core__exception kk_std_os_dir_prepend(kk_std_core__exception exn, kk_string_t pre, kk_context_t* _ctx) { /* (exn : exception, pre : string) -> exception */ 
  kk_string_t _x1247;
  kk_string_t _x1248;
  kk_string_t _x1249;
  kk_define_string_literal(, _s1250, 2, ": ")
  _x1249 = kk_string_dup(_s1250); /*string*/
  kk_string_t _x1251;
  {
    kk_string_t _x = exn.message;
    kk_string_dup(_x);
    _x1251 = _x; /*string*/
  }
  _x1248 = kk_std_core__lp__plus__plus__1_rp_(_x1249, _x1251, _ctx); /*string*/
  _x1247 = kk_std_core__lp__plus__plus__1_rp_(pre, _x1248, _ctx); /*string*/
  kk_std_core__exception_info _x1252;
  {
    kk_std_core__exception_info _x0 = exn.info;
    kk_std_core__exception_info_dup(_x0);
    kk_std_core__exception_drop(exn, _ctx);
    _x1252 = _x0; /*exception-info*/
  }
  return kk_std_core__new_Exception(_x1247, _x1252, _ctx);
}

kk_std_core__error kk_std_os_dir_prim_copy_file(kk_string_t from, kk_string_t to, bool preserve_mtime, kk_context_t* _ctx) { /* (from : string, to : string, preserve-mtime : bool) -> fsys error<()> */ 
  return kk_os_copy_file_error(from,to,preserve_mtime,kk_context());
}

kk_std_core__error kk_std_os_dir_ensure_dir_err(kk_string_t path, kk_integer_t mode, kk_context_t* _ctx) { /* (path : string, mode : int) -> fsys error<()> */ 
  return kk_os_ensure_dir_error(path,mode,kk_context());
}

bool kk_std_os_dir_prim_is_dir(kk_string_t dir, kk_context_t* _ctx) { /* (dir : string) -> fsys bool */ 
  return kk_os_is_directory(dir,kk_context());
}

kk_std_core__error kk_std_os_dir_prim_list_dir(kk_string_t dir, kk_context_t* _ctx) { /* (dir : string) -> fsys error<vector<string>> */ 
  return kk_os_list_directory_prim(dir,kk_context());
}

bool kk_std_os_dir_prim_is_file(kk_string_t path, kk_context_t* _ctx) { /* (path : string) -> fsys bool */ 
  return kk_os_is_file(path,kk_context());
}
 
// Copy a file.


// lift anonymous function
struct kk_std_os_dir_copy_file_fun1254__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_file_fun1254(kk_function_t _fself, kk_box_t _b_938, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_file_fun1254(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_file_fun1254, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_copy_file_fun1254(kk_function_t _fself, kk_box_t _b_938, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x1255;
  kk_std_os_path__path _x1256 = kk_std_os_path__path_unbox(_b_938, _ctx); /*std/os/path/path*/
  _x1255 = kk_std_os_path_string(_x1256, _ctx); /*string*/
  return kk_string_box(_x1255);
}


// lift anonymous function
struct kk_std_os_dir_copy_file_fun1260__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_file_fun1260(kk_function_t _fself, kk_box_t _b_943, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_file_fun1260(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_file_fun1260, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_copy_file_fun1260(kk_function_t _fself, kk_box_t _b_943, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x1261;
  kk_std_os_path__path _x1262 = kk_std_os_path__path_unbox(_b_943, _ctx); /*std/os/path/path*/
  _x1261 = kk_std_os_path_string(_x1262, _ctx); /*string*/
  return kk_string_box(_x1261);
}


// lift anonymous function
struct kk_std_os_dir_copy_file_fun1266__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_file_fun1266(kk_function_t _fself, kk_box_t _b_951, kk_box_t _b_952, kk_box_t _b_953, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_file_fun1266(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_file_fun1266, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_copy_file_fun1266(kk_function_t _fself, kk_box_t _b_951, kk_box_t _b_952, kk_box_t _b_953, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__error _x1267;
  kk_string_t _x1268 = kk_string_unbox(_b_951); /*string*/
  kk_string_t _x1269 = kk_string_unbox(_b_952); /*string*/
  bool _x1270 = kk_bool_unbox(_b_953); /*bool*/
  _x1267 = kk_std_os_dir_prim_copy_file(_x1268, _x1269, _x1270, _ctx); /*error<()>*/
  return kk_std_core__error_box(_x1267, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_copy_file_fun1279__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_file_fun1279(kk_function_t _fself, kk_box_t _b_956, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_file_fun1279(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_file_fun1279, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_copy_file_fun1279(kk_function_t _fself, kk_box_t _b_956, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x1280;
  kk_string_t _x1281;
  kk_std_os_path__path _x1282 = kk_std_os_path__path_unbox(_b_956, _ctx); /*std/os/path/path*/
  _x1281 = kk_std_os_path_string(_x1282, _ctx); /*string*/
  _x1280 = kk_std_core_show_3(_x1281, _ctx); /*string*/
  return kk_string_box(_x1280);
}


// lift anonymous function
struct kk_std_os_dir_copy_file_fun1288__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_file_fun1288(kk_function_t _fself, kk_box_t _b_959, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_file_fun1288(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_file_fun1288, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_copy_file_fun1288(kk_function_t _fself, kk_box_t _b_959, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path p0_987 = kk_std_os_path__path_unbox(_b_959, _ctx); /*std/os/path/path*/;
  kk_string_t _x1289;
  kk_string_t _x1290 = kk_std_os_path_string(p0_987, _ctx); /*string*/
  _x1289 = kk_std_core_show_3(_x1290, _ctx); /*string*/
  return kk_string_box(_x1289);
}


// lift anonymous function
struct kk_std_os_dir_copy_file_fun1292__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_file_fun1292(kk_function_t _fself, kk_box_t _b_967, kk_box_t _b_968, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_file_fun1292(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_file_fun1292, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_copy_file_fun1292(kk_function_t _fself, kk_box_t _b_967, kk_box_t _b_968, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__exception _x1293;
  kk_string_t _x1294;
  kk_string_t _x1295 = kk_string_unbox(_b_968); /*string*/
  kk_string_t _x1296;
  kk_string_t _x1297;
  kk_define_string_literal(, _s1298, 2, ": ")
  _x1297 = kk_string_dup(_s1298); /*string*/
  kk_string_t _x1299;
  kk_std_core__exception _match_1246;
  kk_box_t _x1300 = kk_box_dup(_b_967); /*1000*/
  _match_1246 = kk_std_core__exception_unbox(_x1300, _ctx); /*exception*/
  {
    kk_string_t _x = _match_1246.message;
    kk_string_dup(_x);
    kk_std_core__exception_drop(_match_1246, _ctx);
    _x1299 = _x; /*string*/
  }
  _x1296 = kk_std_core__lp__plus__plus__1_rp_(_x1297, _x1299, _ctx); /*string*/
  _x1294 = kk_std_core__lp__plus__plus__1_rp_(_x1295, _x1296, _ctx); /*string*/
  kk_std_core__exception_info _x1301;
  kk_std_core__exception _match_1245 = kk_std_core__exception_unbox(_b_967, _ctx); /*exception*/;
  {
    kk_std_core__exception_info _x03 = _match_1245.info;
    kk_std_core__exception_info_dup(_x03);
    kk_std_core__exception_drop(_match_1245, _ctx);
    _x1301 = _x03; /*exception-info*/
  }
  _x1293 = kk_std_core__new_Exception(_x1294, _x1301, _ctx); /*exception*/
  return kk_std_core__exception_box(_x1293, _ctx);
}

kk_unit_t kk_std_os_dir_copy_file(kk_std_os_path__path from, kk_std_os_path__path to, kk_std_core_types__optional preserve_mtime, kk_context_t* _ctx) { /* (from : std/os/path/path, to : std/os/path/path, preserve-mtime : optional<bool>) -> <exn,fsys> () */ 
  kk_string_t _x1_884;
  kk_box_t _x1253;
  kk_box_t _x1257;
  kk_std_os_path__path _x1258 = kk_std_os_path__path_dup(from); /*std/os/path/path*/
  _x1257 = kk_std_os_path__path_box(_x1258, _ctx); /*1000*/
  _x1253 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_file_fun1254(_ctx), _x1257, _ctx); /*1001*/
  _x1_884 = kk_string_unbox(_x1253); /*string*/
  kk_string_t _x2_885;
  kk_box_t _x1259;
  kk_box_t _x1263;
  kk_std_os_path__path _x1264 = kk_std_os_path__path_dup(to); /*std/os/path/path*/
  _x1263 = kk_std_os_path__path_box(_x1264, _ctx); /*1000*/
  _x1259 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_file_fun1260(_ctx), _x1263, _ctx); /*1001*/
  _x2_885 = kk_string_unbox(_x1259); /*string*/
  kk_std_core__error _match_1242;
  kk_box_t _x1265;
  kk_box_t _x1271;
  bool _x1272;
  if (kk_std_core_types__is_Optional(preserve_mtime)) {
    kk_box_t _box_x946 = preserve_mtime._cons.Optional.value;
    bool _preserve_mtime_119 = kk_bool_unbox(_box_x946);
    _x1272 = _preserve_mtime_119; /*bool*/
  }
  else {
    _x1272 = true; /*bool*/
  }
  _x1271 = kk_bool_box(_x1272); /*1002*/
  _x1265 = kk_std_core_hnd__open_none3(kk_std_os_dir_new_copy_file_fun1266(_ctx), kk_string_box(_x1_884), kk_string_box(_x2_885), _x1271, _ctx); /*1003*/
  _match_1242 = kk_std_core__error_unbox(_x1265, _ctx); /*error<()>*/
  if (kk_std_core__is_Error(_match_1242)) {
    kk_std_core__exception exn = _match_1242._cons.Error.exception;
    kk_std_core__exception_dup(exn);
    kk_std_core__error_drop(_match_1242, _ctx);
    kk_string_t _x20_890;
    kk_string_t _x1274;
    kk_define_string_literal(, _s1275, 15, "unable to copy ")
    _x1274 = kk_string_dup(_s1275); /*string*/
    kk_string_t _x1276;
    kk_string_t _x1277;
    kk_box_t _x1278 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_file_fun1279(_ctx), kk_std_os_path__path_box(from, _ctx), _ctx); /*1001*/
    _x1277 = kk_string_unbox(_x1278); /*string*/
    kk_string_t _x1283;
    kk_string_t _x1284;
    kk_define_string_literal(, _s1285, 4, " to ")
    _x1284 = kk_string_dup(_s1285); /*string*/
    kk_string_t _x1286;
    kk_box_t _x1287 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_file_fun1288(_ctx), kk_std_os_path__path_box(to, _ctx), _ctx); /*1001*/
    _x1286 = kk_string_unbox(_x1287); /*string*/
    _x1283 = kk_std_core__lp__plus__plus__1_rp_(_x1284, _x1286, _ctx); /*string*/
    _x1276 = kk_std_core__lp__plus__plus__1_rp_(_x1277, _x1283, _ctx); /*string*/
    _x20_890 = kk_std_core__lp__plus__plus__1_rp_(_x1274, _x1276, _ctx); /*string*/
    kk_std_core__exception exn0_843;
    kk_box_t _x1291 = kk_std_core_hnd__open_none2(kk_std_os_dir_new_copy_file_fun1292(_ctx), kk_std_core__exception_box(exn, _ctx), kk_string_box(_x20_890), _ctx); /*1002*/
    exn0_843 = kk_std_core__exception_unbox(_x1291, _ctx); /*exception*/
    kk_std_core_hnd__ev ev_912;
    kk_ssize_t _x1302 = (KK_IZ(0)); /*ssize_t*/
    ev_912 = kk_evv_at(_x1302,kk_context()); /*std/core/hnd/ev<.hnd-exn>*/
    kk_box_t _x1303;
    {
      struct kk_std_core_hnd_Ev* _con1304 = kk_std_core_hnd__as_Ev(ev_912);
      kk_std_core_hnd__marker m0 = _con1304->marker;
      kk_box_t _box_x974 = _con1304->hnd;
      kk_std_core__hnd_exn h = kk_std_core__hnd_exn_unbox(_box_x974, NULL);
      kk_std_core__hnd_exn_dup(h);
      kk_std_core_hnd__clause1 _match_1243;
      kk_std_core_hnd__clause1 _brw_1244 = kk_std_core__select_throw_exn(h, _ctx); /*std/core/hnd/clause1<exception,1001,.hnd-exn,1002,1003>*/;
      kk_std_core__hnd_exn_drop(h, _ctx);
      _match_1243 = _brw_1244; /*std/core/hnd/clause1<exception,1001,.hnd-exn,1002,1003>*/
      {
        kk_function_t _fun_unbox_x978 = _match_1243.clause;
        _x1303 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x978, (_fun_unbox_x978, m0, ev_912, kk_std_core__exception_box(exn0_843, _ctx), _ctx)); /*1010*/
      }
    }
    kk_unit_unbox(_x1303); return kk_Unit;
  }
  {
    kk_std_os_path__path_drop(to, _ctx);
    kk_std_os_path__path_drop(from, _ctx);
    kk_std_core__error_drop(_match_1242, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// Ensure a directory path exists


// lift anonymous function
struct kk_std_os_dir_ensure_dir_fun1307__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_ensure_dir_fun1307(kk_function_t _fself, kk_box_t _b_990, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_ensure_dir_fun1307(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_ensure_dir_fun1307, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_ensure_dir_fun1307(kk_function_t _fself, kk_box_t _b_990, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x1308;
  kk_std_os_path__path _x1309 = kk_std_os_path__path_unbox(_b_990, _ctx); /*std/os/path/path*/
  _x1308 = kk_std_os_path_string(_x1309, _ctx); /*string*/
  return kk_string_box(_x1308);
}


// lift anonymous function
struct kk_std_os_dir_ensure_dir_fun1313__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_ensure_dir_fun1313(kk_function_t _fself, kk_box_t _b_996, kk_box_t _b_997, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_ensure_dir_fun1313(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_ensure_dir_fun1313, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_ensure_dir_fun1313(kk_function_t _fself, kk_box_t _b_996, kk_box_t _b_997, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__error _x1314;
  kk_string_t _x1315 = kk_string_unbox(_b_996); /*string*/
  kk_integer_t _x1316 = kk_integer_unbox(_b_997); /*int*/
  _x1314 = kk_std_os_dir_ensure_dir_err(_x1315, _x1316, _ctx); /*error<()>*/
  return kk_std_core__error_box(_x1314, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_ensure_dir_fun1321__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_ensure_dir_fun1321(kk_function_t _fself, kk_box_t _b_1000, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_ensure_dir_fun1321(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_ensure_dir_fun1321, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_ensure_dir_fun1321(kk_function_t _fself, kk_box_t _b_1000, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x1322;
  kk_string_t _x1323;
  kk_std_os_path__path _x1324 = kk_std_os_path__path_unbox(_b_1000, _ctx); /*std/os/path/path*/
  _x1323 = kk_std_os_path_string(_x1324, _ctx); /*string*/
  _x1322 = kk_std_core_show_3(_x1323, _ctx); /*string*/
  return kk_string_box(_x1322);
}


// lift anonymous function
struct kk_std_os_dir_ensure_dir_fun1326__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_ensure_dir_fun1326(kk_function_t _fself, kk_box_t _b_1007, kk_box_t _b_1008, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_ensure_dir_fun1326(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_ensure_dir_fun1326, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_ensure_dir_fun1326(kk_function_t _fself, kk_box_t _b_1007, kk_box_t _b_1008, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__exception _x1327;
  kk_string_t _x1328;
  kk_string_t _x1329 = kk_string_unbox(_b_1008); /*string*/
  kk_string_t _x1330;
  kk_string_t _x1331;
  kk_define_string_literal(, _s1332, 2, ": ")
  _x1331 = kk_string_dup(_s1332); /*string*/
  kk_string_t _x1333;
  kk_std_core__exception _match_1241;
  kk_box_t _x1334 = kk_box_dup(_b_1007); /*1000*/
  _match_1241 = kk_std_core__exception_unbox(_x1334, _ctx); /*exception*/
  {
    kk_string_t _x = _match_1241.message;
    kk_string_dup(_x);
    kk_std_core__exception_drop(_match_1241, _ctx);
    _x1333 = _x; /*string*/
  }
  _x1330 = kk_std_core__lp__plus__plus__1_rp_(_x1331, _x1333, _ctx); /*string*/
  _x1328 = kk_std_core__lp__plus__plus__1_rp_(_x1329, _x1330, _ctx); /*string*/
  kk_std_core__exception_info _x1335;
  kk_std_core__exception _match_1240 = kk_std_core__exception_unbox(_b_1007, _ctx); /*exception*/;
  {
    kk_std_core__exception_info _x02 = _match_1240.info;
    kk_std_core__exception_info_dup(_x02);
    kk_std_core__exception_drop(_match_1240, _ctx);
    _x1335 = _x02; /*exception-info*/
  }
  _x1327 = kk_std_core__new_Exception(_x1328, _x1335, _ctx); /*exception*/
  return kk_std_core__exception_box(_x1327, _ctx);
}

kk_unit_t kk_std_os_dir_ensure_dir(kk_std_os_path__path dir, kk_context_t* _ctx) { /* (dir : std/os/path/path) -> <exn,fsys> () */ 
  kk_string_t _x1_893;
  kk_box_t _x1306;
  kk_box_t _x1310;
  kk_std_os_path__path _x1311 = kk_std_os_path__path_dup(dir); /*std/os/path/path*/
  _x1310 = kk_std_os_path__path_box(_x1311, _ctx); /*1000*/
  _x1306 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_ensure_dir_fun1307(_ctx), _x1310, _ctx); /*1001*/
  _x1_893 = kk_string_unbox(_x1306); /*string*/
  kk_std_core__error _match_1237;
  kk_box_t _x1312 = kk_std_core_hnd__open_none2(kk_std_os_dir_new_ensure_dir_fun1313(_ctx), kk_string_box(_x1_893), kk_integer_box(kk_integer_from_small(-1)), _ctx); /*1002*/
  _match_1237 = kk_std_core__error_unbox(_x1312, _ctx); /*error<()>*/
  if (kk_std_core__is_Error(_match_1237)) {
    kk_std_core__exception exn = _match_1237._cons.Error.exception;
    kk_std_core__exception_dup(exn);
    kk_std_core__error_drop(_match_1237, _ctx);
    kk_string_t _x20_897;
    kk_string_t _x1317;
    kk_define_string_literal(, _s1318, 27, "unable to create directory ")
    _x1317 = kk_string_dup(_s1318); /*string*/
    kk_string_t _x1319;
    kk_box_t _x1320 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_ensure_dir_fun1321(_ctx), kk_std_os_path__path_box(dir, _ctx), _ctx); /*1001*/
    _x1319 = kk_string_unbox(_x1320); /*string*/
    _x20_897 = kk_std_core__lp__plus__plus__1_rp_(_x1317, _x1319, _ctx); /*string*/
    kk_std_core__exception exn0_846;
    kk_box_t _x1325 = kk_std_core_hnd__open_none2(kk_std_os_dir_new_ensure_dir_fun1326(_ctx), kk_std_core__exception_box(exn, _ctx), kk_string_box(_x20_897), _ctx); /*1002*/
    exn0_846 = kk_std_core__exception_unbox(_x1325, _ctx); /*exception*/
    kk_std_core_hnd__ev ev_915;
    kk_ssize_t _x1336 = (KK_IZ(0)); /*ssize_t*/
    ev_915 = kk_evv_at(_x1336,kk_context()); /*std/core/hnd/ev<.hnd-exn>*/
    kk_box_t _x1337;
    {
      struct kk_std_core_hnd_Ev* _con1338 = kk_std_core_hnd__as_Ev(ev_915);
      kk_std_core_hnd__marker m0 = _con1338->marker;
      kk_box_t _box_x1014 = _con1338->hnd;
      kk_std_core__hnd_exn h = kk_std_core__hnd_exn_unbox(_box_x1014, NULL);
      kk_std_core__hnd_exn_dup(h);
      kk_std_core_hnd__clause1 _match_1238;
      kk_std_core_hnd__clause1 _brw_1239 = kk_std_core__select_throw_exn(h, _ctx); /*std/core/hnd/clause1<exception,1001,.hnd-exn,1002,1003>*/;
      kk_std_core__hnd_exn_drop(h, _ctx);
      _match_1238 = _brw_1239; /*std/core/hnd/clause1<exception,1001,.hnd-exn,1002,1003>*/
      {
        kk_function_t _fun_unbox_x1018 = _match_1238.clause;
        _x1337 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x1018, (_fun_unbox_x1018, m0, ev_915, kk_std_core__exception_box(exn0_846, _ctx), _ctx)); /*1010*/
      }
    }
    kk_unit_unbox(_x1337); return kk_Unit;
  }
  {
    kk_box_t _box_x1022 = _match_1237._cons.Ok.result;
    kk_unit_t _pat300 = kk_unit_unbox(_box_x1022);
    kk_std_os_path__path_drop(dir, _ctx);
    kk_std_core__error_drop(_match_1237, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// List directory contents (excluding `.` and `..`).
// Returns a list of full paths (not just the names in the directory).


// lift anonymous function
struct kk_std_os_dir_list_directory_fun1345__t {
  struct kk_function_s _base;
  kk_std_os_path__path dir;
};
static kk_box_t kk_std_os_dir_list_directory_fun1345(kk_function_t _fself, kk_box_t _b_1029, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_list_directory_fun1345(kk_std_os_path__path dir, kk_context_t* _ctx) {
  struct kk_std_os_dir_list_directory_fun1345__t* _self = kk_function_alloc_as(struct kk_std_os_dir_list_directory_fun1345__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_os_dir_list_directory_fun1345, kk_context());
  _self->dir = dir;
  return &_self->_base;
}

static kk_box_t kk_std_os_dir_list_directory_fun1345(kk_function_t _fself, kk_box_t _b_1029, kk_context_t* _ctx) {
  struct kk_std_os_dir_list_directory_fun1345__t* _self = kk_function_as(struct kk_std_os_dir_list_directory_fun1345__t*, _fself);
  kk_std_os_path__path dir = _self->dir; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(dir);}, {}, _ctx)
  kk_string_t name_1032 = kk_string_unbox(_b_1029); /*string*/;
  kk_std_os_path__path _x1346;
  kk_std_os_path__path _x1347 = kk_std_os_path_path(name_1032, _ctx); /*std/os/path/path*/
  _x1346 = kk_std_os_path__lp__fs__rp_(dir, _x1347, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x1346, _ctx);
}

kk_std_core__list kk_std_os_dir_list_directory(kk_std_os_path__path dir, kk_context_t* _ctx) { /* (dir : std/os/path/path) -> fsys list<std/os/path/path> */ 
  kk_std_core__error _match_1236;
  kk_string_t _x1342;
  kk_std_os_path__path _x1343 = kk_std_os_path__path_dup(dir); /*std/os/path/path*/
  _x1342 = kk_std_os_path_string(_x1343, _ctx); /*string*/
  _match_1236 = kk_std_os_dir_prim_list_dir(_x1342, _ctx); /*error<vector<string>>*/
  if (kk_std_core__is_Error(_match_1236)) {
    kk_std_core__exception _pat0 = _match_1236._cons.Error.exception;
    kk_std_os_path__path_drop(dir, _ctx);
    kk_std_core__error_drop(_match_1236, _ctx);
    return kk_std_core__new_Nil(_ctx);
  }
  {
    kk_box_t _box_x1026 = _match_1236._cons.Ok.result;
    kk_vector_t contents = kk_vector_unbox(_box_x1026, NULL);
    kk_vector_dup(contents);
    kk_std_core__error_drop(_match_1236, _ctx);
    kk_std_core__list _b_1030_1027 = kk_std_core_vlist(contents, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/;
    return kk_std_core_map_5(_b_1030_1027, kk_std_os_dir_new_list_directory_fun1345(dir, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_dir__mlift909_copy_directory_fun1348__t {
  struct kk_function_s _base;
  kk_std_os_path__path to;
};
static kk_unit_t kk_std_os_dir__mlift909_copy_directory_fun1348(kk_function_t _fself, kk_box_t _b_1049, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift909_copy_directory_fun1348(kk_std_os_path__path to, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift909_copy_directory_fun1348__t* _self = kk_function_alloc_as(struct kk_std_os_dir__mlift909_copy_directory_fun1348__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_os_dir__mlift909_copy_directory_fun1348, kk_context());
  _self->to = to;
  return &_self->_base;
}



// lift anonymous function
struct kk_std_os_dir__mlift909_copy_directory_fun1350__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir__mlift909_copy_directory_fun1350(kk_function_t _fself, kk_box_t _b_1038, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift909_copy_directory_fun1350(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir__mlift909_copy_directory_fun1350, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir__mlift909_copy_directory_fun1350(kk_function_t _fself, kk_box_t _b_1038, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _b_1034_1033;
  kk_std_core__list _x1351;
  kk_std_os_path__path _match_1235;
  kk_box_t _x1352 = kk_box_dup(_b_1038); /*1000*/
  _match_1235 = kk_std_os_path__path_unbox(_x1352, _ctx); /*std/os/path/path*/
  {
    kk_std_core__list _x100 = _match_1235.parts;
    kk_std_core__list_dup(_x100);
    kk_std_os_path__path_drop(_match_1235, _ctx);
    _x1351 = _x100; /*list<string>*/
  }
  _b_1034_1033 = kk_std_core_take(_x1351, kk_integer_from_small(1), _ctx); /*list<string>*/
  kk_std_os_path__path _x1353;
  kk_string_t _x1354 = kk_string_empty(); /*string*/
  kk_std_core__list _x1356;
  kk_std_core_types__optional _match_1233 = kk_std_core_types__new_Optional(kk_std_core__list_box(_b_1034_1033, _ctx), _ctx); /*optional<1035>*/;
  if (kk_std_core_types__is_Optional(_match_1233)) {
    kk_box_t _box_x1035 = _match_1233._cons.Optional.value;
    kk_std_core__list _parts_1110 = kk_std_core__list_unbox(_box_x1035, NULL);
    kk_box_drop(_b_1038, _ctx);
    _x1356 = _parts_1110; /*list<string>*/
  }
  else {
    kk_std_os_path__path _match_1234 = kk_std_os_path__path_unbox(_b_1038, _ctx); /*std/os/path/path*/;
    {
      kk_std_core__list _x000 = _match_1234.parts;
      kk_std_core__list_dup(_x000);
      kk_std_os_path__path_drop(_match_1234, _ctx);
      _x1356 = _x000; /*list<string>*/
    }
  }
  _x1353 = kk_std_os_path__new_Path(_x1354, _x1356, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x1353, _ctx);
}


// lift anonymous function
struct kk_std_os_dir__mlift909_copy_directory_fun1362__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir__mlift909_copy_directory_fun1362(kk_function_t _fself, kk_box_t _b_1045, kk_box_t _b_1046, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift909_copy_directory_fun1362(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir__mlift909_copy_directory_fun1362, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir__mlift909_copy_directory_fun1362(kk_function_t _fself, kk_box_t _b_1045, kk_box_t _b_1046, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x1363;
  kk_std_os_path__path _x1364 = kk_std_os_path__path_unbox(_b_1045, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x1365 = kk_std_os_path__path_unbox(_b_1046, _ctx); /*std/os/path/path*/
  _x1363 = kk_std_os_path__lp__fs__rp_(_x1364, _x1365, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x1363, _ctx);
}
static kk_unit_t kk_std_os_dir__mlift909_copy_directory_fun1348(kk_function_t _fself, kk_box_t _b_1049, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift909_copy_directory_fun1348__t* _self = kk_function_as(struct kk_std_os_dir__mlift909_copy_directory_fun1348__t*, _fself);
  kk_std_os_path__path to = _self->to; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(to);}, {}, _ctx)
  kk_std_os_path__path _x20_904;
  kk_box_t _x1349;
  kk_box_t _x1358 = kk_box_dup(_b_1049); /*1001*/
  _x1349 = kk_std_core_hnd__open_none1(kk_std_os_dir__new_mlift909_copy_directory_fun1350(_ctx), _x1358, _ctx); /*1001*/
  _x20_904 = kk_std_os_path__path_unbox(_x1349, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x1359 = kk_std_os_path__path_unbox(_b_1049, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x1360;
  kk_box_t _x1361 = kk_std_core_hnd__open_none2(kk_std_os_dir__new_mlift909_copy_directory_fun1362(_ctx), kk_std_os_path__path_box(to, _ctx), kk_std_os_path__path_box(_x20_904, _ctx), _ctx); /*1002*/
  _x1360 = kk_std_os_path__path_unbox(_x1361, _ctx); /*std/os/path/path*/
  return kk_std_os_dir_copy_directory(_x1359, _x1360, _ctx);
}

kk_unit_t kk_std_os_dir__mlift909_copy_directory(kk_std_core__list dirs, kk_std_os_path__path to, kk_unit_t wild__0, kk_context_t* _ctx) { /* (dirs : list<std/os/path/path>, to : std/os/path/path, wild_0 : ()) -> <exn,fsys,div> () */ 
  kk_std_core_foreach(dirs, kk_std_os_dir__new_mlift909_copy_directory_fun1348(to, _ctx), _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_dir__mlift910_copy_directory_fun1369__t {
  struct kk_function_s _base;
  kk_std_os_path__path to0;
};
static kk_unit_t kk_std_os_dir__mlift910_copy_directory_fun1369(kk_function_t _fself, kk_box_t _b_1074, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift910_copy_directory_fun1369(kk_std_os_path__path to0, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift910_copy_directory_fun1369__t* _self = kk_function_alloc_as(struct kk_std_os_dir__mlift910_copy_directory_fun1369__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_os_dir__mlift910_copy_directory_fun1369, kk_context());
  _self->to0 = to0;
  return &_self->_base;
}



// lift anonymous function
struct kk_std_os_dir__mlift910_copy_directory_fun1371__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir__mlift910_copy_directory_fun1371(kk_function_t _fself, kk_box_t _b_1063, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift910_copy_directory_fun1371(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir__mlift910_copy_directory_fun1371, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir__mlift910_copy_directory_fun1371(kk_function_t _fself, kk_box_t _b_1063, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _b_1059_1058;
  kk_std_core__list _x1372;
  kk_std_os_path__path _match_1232;
  kk_box_t _x1373 = kk_box_dup(_b_1063); /*1000*/
  _match_1232 = kk_std_os_path__path_unbox(_x1373, _ctx); /*std/os/path/path*/
  {
    kk_std_core__list _x13 = _match_1232.parts;
    kk_std_core__list_dup(_x13);
    kk_std_os_path__path_drop(_match_1232, _ctx);
    _x1372 = _x13; /*list<string>*/
  }
  _b_1059_1058 = kk_std_core_take(_x1372, kk_integer_from_small(1), _ctx); /*list<string>*/
  kk_std_os_path__path _x1374;
  kk_string_t _x1375 = kk_string_empty(); /*string*/
  kk_std_core__list _x1377;
  kk_std_core_types__optional _match_1230 = kk_std_core_types__new_Optional(kk_std_core__list_box(_b_1059_1058, _ctx), _ctx); /*optional<1035>*/;
  if (kk_std_core_types__is_Optional(_match_1230)) {
    kk_box_t _box_x1060 = _match_1230._cons.Optional.value;
    kk_std_core__list _parts_111 = kk_std_core__list_unbox(_box_x1060, NULL);
    kk_box_drop(_b_1063, _ctx);
    _x1377 = _parts_111; /*list<string>*/
  }
  else {
    kk_std_os_path__path _match_1231 = kk_std_os_path__path_unbox(_b_1063, _ctx); /*std/os/path/path*/;
    {
      kk_std_core__list _x03 = _match_1231.parts;
      kk_std_core__list_dup(_x03);
      kk_std_os_path__path_drop(_match_1231, _ctx);
      _x1377 = _x03; /*list<string>*/
    }
  }
  _x1374 = kk_std_os_path__new_Path(_x1375, _x1377, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x1374, _ctx);
}


// lift anonymous function
struct kk_std_os_dir__mlift910_copy_directory_fun1383__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir__mlift910_copy_directory_fun1383(kk_function_t _fself, kk_box_t _b_1070, kk_box_t _b_1071, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift910_copy_directory_fun1383(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir__mlift910_copy_directory_fun1383, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir__mlift910_copy_directory_fun1383(kk_function_t _fself, kk_box_t _b_1070, kk_box_t _b_1071, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x1384;
  kk_std_os_path__path _x1385 = kk_std_os_path__path_unbox(_b_1070, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x1386 = kk_std_os_path__path_unbox(_b_1071, _ctx); /*std/os/path/path*/
  _x1384 = kk_std_os_path__lp__fs__rp_(_x1385, _x1386, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x1384, _ctx);
}
static kk_unit_t kk_std_os_dir__mlift910_copy_directory_fun1369(kk_function_t _fself, kk_box_t _b_1074, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift910_copy_directory_fun1369__t* _self = kk_function_as(struct kk_std_os_dir__mlift910_copy_directory_fun1369__t*, _fself);
  kk_std_os_path__path to0 = _self->to0; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(to0);}, {}, _ctx)
  kk_std_os_path__path _x2_901;
  kk_box_t _x1370;
  kk_box_t _x1379 = kk_box_dup(_b_1074); /*1001*/
  _x1370 = kk_std_core_hnd__open_none1(kk_std_os_dir__new_mlift910_copy_directory_fun1371(_ctx), _x1379, _ctx); /*1001*/
  _x2_901 = kk_std_os_path__path_unbox(_x1370, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x1380 = kk_std_os_path__path_unbox(_b_1074, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x1381;
  kk_box_t _x1382 = kk_std_core_hnd__open_none2(kk_std_os_dir__new_mlift910_copy_directory_fun1383(_ctx), kk_std_os_path__path_box(to0, _ctx), kk_std_os_path__path_box(_x2_901, _ctx), _ctx); /*1002*/
  _x1381 = kk_std_os_path__path_unbox(_x1382, _ctx); /*std/os/path/path*/
  return kk_std_os_dir_copy_file(_x1380, _x1381, kk_std_core_types__new_None(_ctx), _ctx);
}


// lift anonymous function
struct kk_std_os_dir__mlift910_copy_directory_fun1388__t {
  struct kk_function_s _base;
  kk_std_core__list dirs0;
  kk_std_os_path__path to0;
};
static kk_box_t kk_std_os_dir__mlift910_copy_directory_fun1388(kk_function_t _fself, kk_box_t _b_1082, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift910_copy_directory_fun1388(kk_std_core__list dirs0, kk_std_os_path__path to0, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift910_copy_directory_fun1388__t* _self = kk_function_alloc_as(struct kk_std_os_dir__mlift910_copy_directory_fun1388__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_os_dir__mlift910_copy_directory_fun1388, kk_context());
  _self->dirs0 = dirs0;
  _self->to0 = to0;
  return &_self->_base;
}

static kk_box_t kk_std_os_dir__mlift910_copy_directory_fun1388(kk_function_t _fself, kk_box_t _b_1082, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift910_copy_directory_fun1388__t* _self = kk_function_as(struct kk_std_os_dir__mlift910_copy_directory_fun1388__t*, _fself);
  kk_std_core__list dirs0 = _self->dirs0; /* list<std/os/path/path> */
  kk_std_os_path__path to0 = _self->to0; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_core__list_dup(dirs0);kk_std_os_path__path_dup(to0);}, {}, _ctx)
  kk_unit_t wild__00_1084 = kk_Unit;
  kk_unit_unbox(_b_1082);
  kk_unit_t _x1389 = kk_Unit;
  kk_std_os_dir__mlift909_copy_directory(dirs0, to0, wild__00_1084, _ctx);
  return kk_unit_box(_x1389);
}

kk_unit_t kk_std_os_dir__mlift910_copy_directory(kk_std_os_path__path to0, kk_std_core_types__tuple2_ _y_859, kk_context_t* _ctx) { /* (to : std/os/path/path, (list<std/os/path/path>, list<std/os/path/path>)) -> <fsys,div,exn> () */ 
  {
    kk_box_t _box_x1056 = _y_859.fst;
    kk_box_t _box_x1057 = _y_859.snd;
    kk_std_core__list dirs0 = kk_std_core__list_unbox(_box_x1056, NULL);
    kk_std_core__list files = kk_std_core__list_unbox(_box_x1057, NULL);
    kk_std_core__list_dup(dirs0);
    kk_std_core__list_dup(files);
    kk_std_core_types__tuple2__drop(_y_859, _ctx);
    kk_unit_t x_918 = kk_Unit;
    kk_function_t _x1368;
    kk_std_os_path__path_dup(to0);
    _x1368 = kk_std_os_dir__new_mlift910_copy_directory_fun1369(to0, _ctx); /*(1001) -> 1002 ()*/
    kk_std_core_foreach(files, _x1368, _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x1387 = kk_std_core_hnd_yield_extend(kk_std_os_dir__new_mlift910_copy_directory_fun1388(dirs0, to0, _ctx), _ctx); /*1001*/
      kk_unit_unbox(_x1387); return kk_Unit;
    }
    {
      kk_std_os_dir__mlift909_copy_directory(dirs0, to0, x_918, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_dir__mlift911_copy_directory_fun1391__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir__mlift911_copy_directory_fun1391(kk_function_t _fself, kk_box_t _b_1087, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift911_copy_directory_fun1391(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir__mlift911_copy_directory_fun1391, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir__mlift911_copy_directory_fun1391(kk_function_t _fself, kk_box_t _b_1087, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x1392;
  kk_std_os_path__path _x1393 = kk_std_os_path__path_unbox(_b_1087, _ctx); /*std/os/path/path*/
  _x1392 = kk_std_os_dir_list_directory(_x1393, _ctx); /*list<std/os/path/path>*/
  return kk_std_core__list_box(_x1392, _ctx);
}


// lift anonymous function
struct kk_std_os_dir__mlift911_copy_directory_fun1394__t {
  struct kk_function_s _base;
};
static bool kk_std_os_dir__mlift911_copy_directory_fun1394(kk_function_t _fself, kk_box_t _b_1095, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift911_copy_directory_fun1394(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir__mlift911_copy_directory_fun1394, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_std_os_dir__mlift911_copy_directory_fun1396__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir__mlift911_copy_directory_fun1396(kk_function_t _fself, kk_box_t _b_1092, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift911_copy_directory_fun1396(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir__mlift911_copy_directory_fun1396, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir__mlift911_copy_directory_fun1396(kk_function_t _fself, kk_box_t _b_1092, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x1397;
  kk_std_os_path__path _x1398 = kk_std_os_path__path_unbox(_b_1092, _ctx); /*std/os/path/path*/
  _x1397 = kk_std_os_dir_is_directory(_x1398, _ctx); /*bool*/
  return kk_bool_box(_x1397);
}
static bool kk_std_os_dir__mlift911_copy_directory_fun1394(kk_function_t _fself, kk_box_t _b_1095, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x1395 = kk_std_core_hnd__open_none1(kk_std_os_dir__new_mlift911_copy_directory_fun1396(_ctx), _b_1095, _ctx); /*1001*/
  return kk_bool_unbox(_x1395);
}


// lift anonymous function
struct kk_std_os_dir__mlift911_copy_directory_fun1400__t {
  struct kk_function_s _base;
  kk_std_os_path__path to1;
};
static kk_box_t kk_std_os_dir__mlift911_copy_directory_fun1400(kk_function_t _fself, kk_box_t _b_1102, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift911_copy_directory_fun1400(kk_std_os_path__path to1, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift911_copy_directory_fun1400__t* _self = kk_function_alloc_as(struct kk_std_os_dir__mlift911_copy_directory_fun1400__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_os_dir__mlift911_copy_directory_fun1400, kk_context());
  _self->to1 = to1;
  return &_self->_base;
}

static kk_box_t kk_std_os_dir__mlift911_copy_directory_fun1400(kk_function_t _fself, kk_box_t _b_1102, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift911_copy_directory_fun1400__t* _self = kk_function_as(struct kk_std_os_dir__mlift911_copy_directory_fun1400__t*, _fself);
  kk_std_os_path__path to1 = _self->to1; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(to1);}, {}, _ctx)
  kk_std_core_types__tuple2_ _y_1104_8590 = kk_std_core_types__tuple2__unbox(_b_1102, _ctx); /*(list<std/os/path/path>, list<std/os/path/path>)*/;
  kk_unit_t _x1401 = kk_Unit;
  kk_std_os_dir__mlift910_copy_directory(to1, _y_1104_8590, _ctx);
  return kk_unit_box(_x1401);
}

kk_unit_t kk_std_os_dir__mlift911_copy_directory(kk_std_os_path__path dir, kk_std_os_path__path to1, kk_unit_t wild__, kk_context_t* _ctx) { /* (dir : std/os/path/path, to : std/os/path/path, wild_ : ()) -> <exn,fsys> () */ 
  kk_std_core__list all;
  kk_box_t _x1390 = kk_std_core_hnd__open_none1(kk_std_os_dir__new_mlift911_copy_directory_fun1391(_ctx), kk_std_os_path__path_box(dir, _ctx), _ctx); /*1001*/
  all = kk_std_core__list_unbox(_x1390, _ctx); /*list<std/os/path/path>*/
  kk_std_core_types__tuple2_ x0_920 = kk_std_core_partition(all, kk_std_os_dir__new_mlift911_copy_directory_fun1394(_ctx), _ctx); /*(list<std/os/path/path>, list<std/os/path/path>)*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__tuple2__drop(x0_920, _ctx);
    kk_box_t _x1399 = kk_std_core_hnd_yield_extend(kk_std_os_dir__new_mlift911_copy_directory_fun1400(to1, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x1399); return kk_Unit;
  }
  {
    kk_std_os_dir__mlift910_copy_directory(to1, x0_920, _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun1404__t {
  struct kk_function_s _base;
  kk_std_os_path__path dir0;
  kk_std_os_path__path to2;
};
static kk_box_t kk_std_os_dir_copy_directory_fun1404(kk_function_t _fself, kk_box_t _b_1106, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun1404(kk_std_os_path__path dir0, kk_std_os_path__path to2, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun1404__t* _self = kk_function_alloc_as(struct kk_std_os_dir_copy_directory_fun1404__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_os_dir_copy_directory_fun1404, kk_context());
  _self->dir0 = dir0;
  _self->to2 = to2;
  return &_self->_base;
}

static kk_box_t kk_std_os_dir_copy_directory_fun1404(kk_function_t _fself, kk_box_t _b_1106, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun1404__t* _self = kk_function_as(struct kk_std_os_dir_copy_directory_fun1404__t*, _fself);
  kk_std_os_path__path dir0 = _self->dir0; /* std/os/path/path */
  kk_std_os_path__path to2 = _self->to2; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(dir0);kk_std_os_path__path_dup(to2);}, {}, _ctx)
  kk_unit_t wild__1_1177 = kk_Unit;
  kk_unit_unbox(_b_1106);
  kk_unit_t _x1405 = kk_Unit;
  kk_std_os_dir__mlift911_copy_directory(dir0, to2, wild__1_1177, _ctx);
  return kk_unit_box(_x1405);
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun1407__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_directory_fun1407(kk_function_t _fself, kk_box_t _b_1109, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun1407(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_directory_fun1407, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_copy_directory_fun1407(kk_function_t _fself, kk_box_t _b_1109, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x1408;
  kk_std_os_path__path _x1409 = kk_std_os_path__path_unbox(_b_1109, _ctx); /*std/os/path/path*/
  _x1408 = kk_std_os_dir_list_directory(_x1409, _ctx); /*list<std/os/path/path>*/
  return kk_std_core__list_box(_x1408, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun1410__t {
  struct kk_function_s _base;
};
static bool kk_std_os_dir_copy_directory_fun1410(kk_function_t _fself, kk_box_t _b_1117, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun1410(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_directory_fun1410, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_std_os_dir_copy_directory_fun1412__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_directory_fun1412(kk_function_t _fself, kk_box_t _b_1114, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun1412(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_directory_fun1412, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_copy_directory_fun1412(kk_function_t _fself, kk_box_t _b_1114, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x1413;
  kk_std_os_path__path _x1414 = kk_std_os_path__path_unbox(_b_1114, _ctx); /*std/os/path/path*/
  _x1413 = kk_std_os_dir_is_directory(_x1414, _ctx); /*bool*/
  return kk_bool_box(_x1413);
}
static bool kk_std_os_dir_copy_directory_fun1410(kk_function_t _fself, kk_box_t _b_1117, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x1411 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_directory_fun1412(_ctx), _b_1117, _ctx); /*1001*/
  return kk_bool_unbox(_x1411);
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun1416__t {
  struct kk_function_s _base;
  kk_std_os_path__path to2;
};
static kk_box_t kk_std_os_dir_copy_directory_fun1416(kk_function_t _fself, kk_box_t _b_1124, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun1416(kk_std_os_path__path to2, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun1416__t* _self = kk_function_alloc_as(struct kk_std_os_dir_copy_directory_fun1416__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_os_dir_copy_directory_fun1416, kk_context());
  _self->to2 = to2;
  return &_self->_base;
}

static kk_box_t kk_std_os_dir_copy_directory_fun1416(kk_function_t _fself, kk_box_t _b_1124, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun1416__t* _self = kk_function_as(struct kk_std_os_dir_copy_directory_fun1416__t*, _fself);
  kk_std_os_path__path to2 = _self->to2; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(to2);}, {}, _ctx)
  kk_std_core_types__tuple2_ _y_1178_8591 = kk_std_core_types__tuple2__unbox(_b_1124, _ctx); /*(list<std/os/path/path>, list<std/os/path/path>)*/;
  kk_unit_t _x1417 = kk_Unit;
  kk_std_os_dir__mlift910_copy_directory(to2, _y_1178_8591, _ctx);
  return kk_unit_box(_x1417);
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun1421__t {
  struct kk_function_s _base;
  kk_std_os_path__path to2;
};
static kk_unit_t kk_std_os_dir_copy_directory_fun1421(kk_function_t _fself, kk_box_t _b_1143, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun1421(kk_std_os_path__path to2, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun1421__t* _self = kk_function_alloc_as(struct kk_std_os_dir_copy_directory_fun1421__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_os_dir_copy_directory_fun1421, kk_context());
  _self->to2 = to2;
  return &_self->_base;
}



// lift anonymous function
struct kk_std_os_dir_copy_directory_fun1423__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_directory_fun1423(kk_function_t _fself, kk_box_t _b_1132, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun1423(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_directory_fun1423, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_copy_directory_fun1423(kk_function_t _fself, kk_box_t _b_1132, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _b_1128_1127;
  kk_std_core__list _x1424;
  kk_std_os_path__path _match_1227;
  kk_box_t _x1425 = kk_box_dup(_b_1132); /*1000*/
  _match_1227 = kk_std_os_path__path_unbox(_x1425, _ctx); /*std/os/path/path*/
  {
    kk_std_core__list _x130 = _match_1227.parts;
    kk_std_core__list_dup(_x130);
    kk_std_os_path__path_drop(_match_1227, _ctx);
    _x1424 = _x130; /*list<string>*/
  }
  _b_1128_1127 = kk_std_core_take(_x1424, kk_integer_from_small(1), _ctx); /*list<string>*/
  kk_std_os_path__path _x1426;
  kk_string_t _x1427 = kk_string_empty(); /*string*/
  kk_std_core__list _x1429;
  kk_std_core_types__optional _match_1225 = kk_std_core_types__new_Optional(kk_std_core__list_box(_b_1128_1127, _ctx), _ctx); /*optional<1035>*/;
  if (kk_std_core_types__is_Optional(_match_1225)) {
    kk_box_t _box_x1129 = _match_1225._cons.Optional.value;
    kk_std_core__list _parts_1111 = kk_std_core__list_unbox(_box_x1129, NULL);
    kk_box_drop(_b_1132, _ctx);
    _x1429 = _parts_1111; /*list<string>*/
  }
  else {
    kk_std_os_path__path _match_1226 = kk_std_os_path__path_unbox(_b_1132, _ctx); /*std/os/path/path*/;
    {
      kk_std_core__list _x030 = _match_1226.parts;
      kk_std_core__list_dup(_x030);
      kk_std_os_path__path_drop(_match_1226, _ctx);
      _x1429 = _x030; /*list<string>*/
    }
  }
  _x1426 = kk_std_os_path__new_Path(_x1427, _x1429, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x1426, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun1435__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_directory_fun1435(kk_function_t _fself, kk_box_t _b_1139, kk_box_t _b_1140, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun1435(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_directory_fun1435, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_copy_directory_fun1435(kk_function_t _fself, kk_box_t _b_1139, kk_box_t _b_1140, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x1436;
  kk_std_os_path__path _x1437 = kk_std_os_path__path_unbox(_b_1139, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x1438 = kk_std_os_path__path_unbox(_b_1140, _ctx); /*std/os/path/path*/
  _x1436 = kk_std_os_path__lp__fs__rp_(_x1437, _x1438, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x1436, _ctx);
}
static kk_unit_t kk_std_os_dir_copy_directory_fun1421(kk_function_t _fself, kk_box_t _b_1143, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun1421__t* _self = kk_function_as(struct kk_std_os_dir_copy_directory_fun1421__t*, _fself);
  kk_std_os_path__path to2 = _self->to2; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(to2);}, {}, _ctx)
  kk_std_os_path__path _x2_9010;
  kk_box_t _x1422;
  kk_box_t _x1431 = kk_box_dup(_b_1143); /*1001*/
  _x1422 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_directory_fun1423(_ctx), _x1431, _ctx); /*1001*/
  _x2_9010 = kk_std_os_path__path_unbox(_x1422, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x1432 = kk_std_os_path__path_unbox(_b_1143, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x1433;
  kk_box_t _x1434 = kk_std_core_hnd__open_none2(kk_std_os_dir_new_copy_directory_fun1435(_ctx), kk_std_os_path__path_box(to2, _ctx), kk_std_os_path__path_box(_x2_9010, _ctx), _ctx); /*1002*/
  _x1433 = kk_std_os_path__path_unbox(_x1434, _ctx); /*std/os/path/path*/
  return kk_std_os_dir_copy_file(_x1432, _x1433, kk_std_core_types__new_None(_ctx), _ctx);
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun1440__t {
  struct kk_function_s _base;
  kk_std_core__list dirs1;
  kk_std_os_path__path to2;
};
static kk_box_t kk_std_os_dir_copy_directory_fun1440(kk_function_t _fself, kk_box_t _b_1151, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun1440(kk_std_core__list dirs1, kk_std_os_path__path to2, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun1440__t* _self = kk_function_alloc_as(struct kk_std_os_dir_copy_directory_fun1440__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_os_dir_copy_directory_fun1440, kk_context());
  _self->dirs1 = dirs1;
  _self->to2 = to2;
  return &_self->_base;
}

static kk_box_t kk_std_os_dir_copy_directory_fun1440(kk_function_t _fself, kk_box_t _b_1151, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun1440__t* _self = kk_function_as(struct kk_std_os_dir_copy_directory_fun1440__t*, _fself);
  kk_std_core__list dirs1 = _self->dirs1; /* list<std/os/path/path> */
  kk_std_os_path__path to2 = _self->to2; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_core__list_dup(dirs1);kk_std_os_path__path_dup(to2);}, {}, _ctx)
  kk_unit_t wild__01_1179 = kk_Unit;
  kk_unit_unbox(_b_1151);
  kk_unit_t _x1441 = kk_Unit;
  kk_std_os_dir__mlift909_copy_directory(dirs1, to2, wild__01_1179, _ctx);
  return kk_unit_box(_x1441);
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun1442__t {
  struct kk_function_s _base;
  kk_std_os_path__path to2;
};
static kk_unit_t kk_std_os_dir_copy_directory_fun1442(kk_function_t _fself, kk_box_t _b_1168, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun1442(kk_std_os_path__path to2, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun1442__t* _self = kk_function_alloc_as(struct kk_std_os_dir_copy_directory_fun1442__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_os_dir_copy_directory_fun1442, kk_context());
  _self->to2 = to2;
  return &_self->_base;
}



// lift anonymous function
struct kk_std_os_dir_copy_directory_fun1444__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_directory_fun1444(kk_function_t _fself, kk_box_t _b_1157, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun1444(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_directory_fun1444, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_copy_directory_fun1444(kk_function_t _fself, kk_box_t _b_1157, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _b_1153_1152;
  kk_std_core__list _x1445;
  kk_std_os_path__path _match_1224;
  kk_box_t _x1446 = kk_box_dup(_b_1157); /*1000*/
  _match_1224 = kk_std_os_path__path_unbox(_x1446, _ctx); /*std/os/path/path*/
  {
    kk_std_core__list _x1000 = _match_1224.parts;
    kk_std_core__list_dup(_x1000);
    kk_std_os_path__path_drop(_match_1224, _ctx);
    _x1445 = _x1000; /*list<string>*/
  }
  _b_1153_1152 = kk_std_core_take(_x1445, kk_integer_from_small(1), _ctx); /*list<string>*/
  kk_std_os_path__path _x1447;
  kk_string_t _x1448 = kk_string_empty(); /*string*/
  kk_std_core__list _x1450;
  kk_std_core_types__optional _match_1222 = kk_std_core_types__new_Optional(kk_std_core__list_box(_b_1153_1152, _ctx), _ctx); /*optional<1035>*/;
  if (kk_std_core_types__is_Optional(_match_1222)) {
    kk_box_t _box_x1154 = _match_1222._cons.Optional.value;
    kk_std_core__list _parts_11100 = kk_std_core__list_unbox(_box_x1154, NULL);
    kk_box_drop(_b_1157, _ctx);
    _x1450 = _parts_11100; /*list<string>*/
  }
  else {
    kk_std_os_path__path _match_1223 = kk_std_os_path__path_unbox(_b_1157, _ctx); /*std/os/path/path*/;
    {
      kk_std_core__list _x0000 = _match_1223.parts;
      kk_std_core__list_dup(_x0000);
      kk_std_os_path__path_drop(_match_1223, _ctx);
      _x1450 = _x0000; /*list<string>*/
    }
  }
  _x1447 = kk_std_os_path__new_Path(_x1448, _x1450, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x1447, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun1456__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_directory_fun1456(kk_function_t _fself, kk_box_t _b_1164, kk_box_t _b_1165, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun1456(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_directory_fun1456, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_copy_directory_fun1456(kk_function_t _fself, kk_box_t _b_1164, kk_box_t _b_1165, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x1457;
  kk_std_os_path__path _x1458 = kk_std_os_path__path_unbox(_b_1164, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x1459 = kk_std_os_path__path_unbox(_b_1165, _ctx); /*std/os/path/path*/
  _x1457 = kk_std_os_path__lp__fs__rp_(_x1458, _x1459, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x1457, _ctx);
}
static kk_unit_t kk_std_os_dir_copy_directory_fun1442(kk_function_t _fself, kk_box_t _b_1168, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun1442__t* _self = kk_function_as(struct kk_std_os_dir_copy_directory_fun1442__t*, _fself);
  kk_std_os_path__path to2 = _self->to2; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(to2);}, {}, _ctx)
  kk_std_os_path__path _x20_9040;
  kk_box_t _x1443;
  kk_box_t _x1452 = kk_box_dup(_b_1168); /*1001*/
  _x1443 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_directory_fun1444(_ctx), _x1452, _ctx); /*1001*/
  _x20_9040 = kk_std_os_path__path_unbox(_x1443, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x1453 = kk_std_os_path__path_unbox(_b_1168, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x1454;
  kk_box_t _x1455 = kk_std_core_hnd__open_none2(kk_std_os_dir_new_copy_directory_fun1456(_ctx), kk_std_os_path__path_box(to2, _ctx), kk_std_os_path__path_box(_x20_9040, _ctx), _ctx); /*1002*/
  _x1454 = kk_std_os_path__path_unbox(_x1455, _ctx); /*std/os/path/path*/
  return kk_std_os_dir_copy_directory(_x1453, _x1454, _ctx);
}

kk_unit_t kk_std_os_dir_copy_directory(kk_std_os_path__path dir0, kk_std_os_path__path to2, kk_context_t* _ctx) { /* (dir : std/os/path/path, to : std/os/path/path) -> <pure,fsys> () */ 
  kk_unit_t x1_922 = kk_Unit;
  kk_std_os_path__path _x1402 = kk_std_os_path__path_dup(to2); /*std/os/path/path*/
  kk_std_os_dir_ensure_dir(_x1402, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x1403 = kk_std_core_hnd_yield_extend(kk_std_os_dir_new_copy_directory_fun1404(dir0, to2, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x1403); return kk_Unit;
  }
  {
    kk_std_core__list all0;
    kk_box_t _x1406 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_directory_fun1407(_ctx), kk_std_os_path__path_box(dir0, _ctx), _ctx); /*1001*/
    all0 = kk_std_core__list_unbox(_x1406, _ctx); /*list<std/os/path/path>*/
    kk_std_core_types__tuple2_ x2_925 = kk_std_core_partition(all0, kk_std_os_dir_new_copy_directory_fun1410(_ctx), _ctx); /*(list<std/os/path/path>, list<std/os/path/path>)*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__tuple2__drop(x2_925, _ctx);
      kk_box_t _x1415 = kk_std_core_hnd_yield_extend(kk_std_os_dir_new_copy_directory_fun1416(to2, _ctx), _ctx); /*1001*/
      kk_unit_unbox(_x1415); return kk_Unit;
    }
    {
      kk_box_t _box_x1125 = x2_925.fst;
      kk_box_t _box_x1126 = x2_925.snd;
      kk_std_core__list dirs1 = kk_std_core__list_unbox(_box_x1125, NULL);
      kk_std_core__list files0 = kk_std_core__list_unbox(_box_x1126, NULL);
      kk_std_core__list_dup(dirs1);
      kk_std_core__list_dup(files0);
      kk_std_core_types__tuple2__drop(x2_925, _ctx);
      kk_unit_t x3_928 = kk_Unit;
      kk_function_t _x1420;
      kk_std_os_path__path_dup(to2);
      _x1420 = kk_std_os_dir_new_copy_directory_fun1421(to2, _ctx); /*(1001) -> 1002 ()*/
      kk_std_core_foreach(files0, _x1420, _ctx);
      if (kk_yielding(kk_context())) {
        kk_box_t _x1439 = kk_std_core_hnd_yield_extend(kk_std_os_dir_new_copy_directory_fun1440(dirs1, to2, _ctx), _ctx); /*1001*/
        kk_unit_unbox(_x1439); return kk_Unit;
      }
      {
        kk_std_core_foreach(dirs1, kk_std_os_dir_new_copy_directory_fun1442(to2, _ctx), _ctx); return kk_Unit;
      }
    }
  }
}
 
// Copy a file to a directory


// lift anonymous function
struct kk_std_os_dir_copy_file_to_dir_fun1461__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_file_to_dir_fun1461(kk_function_t _fself, kk_box_t _b_1186, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_file_to_dir_fun1461(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_file_to_dir_fun1461, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_copy_file_to_dir_fun1461(kk_function_t _fself, kk_box_t _b_1186, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _b_1182_1181;
  kk_std_core__list _x1462;
  kk_std_os_path__path _match_1218;
  kk_box_t _x1463 = kk_box_dup(_b_1186); /*1000*/
  _match_1218 = kk_std_os_path__path_unbox(_x1463, _ctx); /*std/os/path/path*/
  {
    kk_std_core__list _x11 = _match_1218.parts;
    kk_std_core__list_dup(_x11);
    kk_std_os_path__path_drop(_match_1218, _ctx);
    _x1462 = _x11; /*list<string>*/
  }
  _b_1182_1181 = kk_std_core_take(_x1462, kk_integer_from_small(1), _ctx); /*list<string>*/
  kk_std_os_path__path _x1464;
  kk_string_t _x1465 = kk_string_empty(); /*string*/
  kk_std_core__list _x1467;
  kk_std_core_types__optional _match_1216 = kk_std_core_types__new_Optional(kk_std_core__list_box(_b_1182_1181, _ctx), _ctx); /*optional<1035>*/;
  if (kk_std_core_types__is_Optional(_match_1216)) {
    kk_box_t _box_x1183 = _match_1216._cons.Optional.value;
    kk_std_core__list _parts_111 = kk_std_core__list_unbox(_box_x1183, NULL);
    kk_box_drop(_b_1186, _ctx);
    _x1467 = _parts_111; /*list<string>*/
  }
  else {
    kk_std_os_path__path _match_1217 = kk_std_os_path__path_unbox(_b_1186, _ctx); /*std/os/path/path*/;
    {
      kk_std_core__list _x01 = _match_1217.parts;
      kk_std_core__list_dup(_x01);
      kk_std_os_path__path_drop(_match_1217, _ctx);
      _x1467 = _x01; /*list<string>*/
    }
  }
  _x1464 = kk_std_os_path__new_Path(_x1465, _x1467, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x1464, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_copy_file_to_dir_fun1473__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_file_to_dir_fun1473(kk_function_t _fself, kk_box_t _b_1193, kk_box_t _b_1194, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_file_to_dir_fun1473(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_file_to_dir_fun1473, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_dir_copy_file_to_dir_fun1473(kk_function_t _fself, kk_box_t _b_1193, kk_box_t _b_1194, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x1474;
  kk_std_os_path__path _x1475 = kk_std_os_path__path_unbox(_b_1193, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x1476 = kk_std_os_path__path_unbox(_b_1194, _ctx); /*std/os/path/path*/
  _x1474 = kk_std_os_path__lp__fs__rp_(_x1475, _x1476, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x1474, _ctx);
}

kk_unit_t kk_std_os_dir_copy_file_to_dir(kk_std_os_path__path from, kk_std_os_path__path dir, kk_context_t* _ctx) { /* (from : std/os/path/path, dir : std/os/path/path) -> <exn,fsys> () */ 
  kk_std_os_path__path _x2_907;
  kk_box_t _x1460;
  kk_box_t _x1469;
  kk_std_os_path__path _x1470 = kk_std_os_path__path_dup(from); /*std/os/path/path*/
  _x1469 = kk_std_os_path__path_box(_x1470, _ctx); /*1000*/
  _x1460 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_file_to_dir_fun1461(_ctx), _x1469, _ctx); /*1001*/
  _x2_907 = kk_std_os_path__path_unbox(_x1460, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x1471;
  kk_box_t _x1472 = kk_std_core_hnd__open_none2(kk_std_os_dir_new_copy_file_to_dir_fun1473(_ctx), kk_std_os_path__path_box(dir, _ctx), kk_std_os_path__path_box(_x2_907, _ctx), _ctx); /*1002*/
  _x1471 = kk_std_os_path__path_unbox(_x1472, _ctx); /*std/os/path/path*/
  kk_std_os_dir_copy_file(from, _x1471, kk_std_core_types__new_None(_ctx), _ctx); return kk_Unit;
}
 
// Recursively list all the entries under a directory.


// lift anonymous function
struct kk_std_os_dir_list_directory_recursive_fun1480__t {
  struct kk_function_s _base;
};
static bool kk_std_os_dir_list_directory_recursive_fun1480(kk_function_t _fself, kk_box_t _b_1201, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_list_directory_recursive_fun1480(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_list_directory_recursive_fun1480, _ctx)
  return kk_function_dup(_fself);
}

static bool kk_std_os_dir_list_directory_recursive_fun1480(kk_function_t _fself, kk_box_t _b_1201, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x1481 = kk_std_os_path__path_unbox(_b_1201, _ctx); /*std/os/path/path*/
  return kk_std_os_dir_is_directory(_x1481, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_list_directory_recursive_fun1482__t {
  struct kk_function_s _base;
  kk_std_core_types__optional max_depth;
};
static kk_std_core__list kk_std_os_dir_list_directory_recursive_fun1482(kk_function_t _fself, kk_box_t _b_1208, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_list_directory_recursive_fun1482(kk_std_core_types__optional max_depth, kk_context_t* _ctx) {
  struct kk_std_os_dir_list_directory_recursive_fun1482__t* _self = kk_function_alloc_as(struct kk_std_os_dir_list_directory_recursive_fun1482__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_os_dir_list_directory_recursive_fun1482, kk_context());
  _self->max_depth = max_depth;
  return &_self->_base;
}

static kk_std_core__list kk_std_os_dir_list_directory_recursive_fun1482(kk_function_t _fself, kk_box_t _b_1208, kk_context_t* _ctx) {
  struct kk_std_os_dir_list_directory_recursive_fun1482__t* _self = kk_function_as(struct kk_std_os_dir_list_directory_recursive_fun1482__t*, _fself);
  kk_std_core_types__optional max_depth = _self->max_depth; /* optional<int> */
  kk_drop_match(_self, {kk_std_core_types__optional_dup(max_depth);}, {}, _ctx)
  kk_integer_t _b_1211_1205;
  kk_integer_t _x1483;
  if (kk_std_core_types__is_Optional(max_depth)) {
    kk_box_t _box_x1204 = max_depth._cons.Optional.value;
    kk_integer_t _max_depth_7560 = kk_integer_unbox(_box_x1204);
    _x1483 = _max_depth_7560; /*int*/
  }
  else {
    _x1483 = kk_integer_from_small(1000); /*int*/
  }
  _b_1211_1205 = kk_integer_add_small_const(_x1483, -1, _ctx); /*int*/
  kk_std_os_path__path _x1485 = kk_std_os_path__path_unbox(_b_1208, _ctx); /*std/os/path/path*/
  kk_std_core_types__optional _x1486 = kk_std_core_types__new_Optional(kk_integer_box(_b_1211_1205), _ctx); /*optional<1035>*/
  return kk_std_os_dir_list_directory_recursive(_x1485, _x1486, _ctx);
}

kk_std_core__list kk_std_os_dir_list_directory_recursive(kk_std_os_path__path dir, kk_std_core_types__optional max_depth, kk_context_t* _ctx) { /* (dir : std/os/path/path, max-depth : optional<int>) -> <div,fsys> list<std/os/path/path> */ 
  bool _match_1213;
  kk_integer_t _brw_1214;
  if (kk_std_core_types__is_Optional(max_depth)) {
    kk_box_t _box_x1198 = max_depth._cons.Optional.value;
    kk_integer_t _max_depth_756 = kk_integer_unbox(_box_x1198);
    kk_integer_dup(_max_depth_756);
    _brw_1214 = _max_depth_756; /*int*/
  }
  else {
    _brw_1214 = kk_integer_from_small(1000); /*int*/
  }
  bool _brw_1215 = kk_integer_lt_borrow(_brw_1214,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_1214, _ctx);
  _match_1213 = _brw_1215; /*bool*/
  if (_match_1213) {
    kk_std_core_types__optional_drop(max_depth, _ctx);
    kk_std_os_path__path_drop(dir, _ctx);
    return kk_std_core__new_Nil(_ctx);
  }
  {
    kk_std_core__list all = kk_std_os_dir_list_directory(dir, _ctx); /*list<std/os/path/path>*/;
    kk_std_core__list dirs;
    kk_std_core__list _x1479 = kk_std_core__list_dup(all); /*list<std/os/path/path>*/
    dirs = kk_std_core_filter(_x1479, kk_std_os_dir_new_list_directory_recursive_fun1480(_ctx), _ctx); /*list<std/os/path/path>*/
    kk_std_core__list ys_851 = kk_std_core_flatmap(dirs, kk_std_os_dir_new_list_directory_recursive_fun1482(max_depth, _ctx), _ctx); /*list<std/os/path/path>*/;
    return kk_std_core_append(all, ys_851, _ctx);
  }
}

// initialization
void kk_std_os_dir__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core__init(_ctx);
  kk_std_os_path__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_std_os_dir__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_os_path__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
