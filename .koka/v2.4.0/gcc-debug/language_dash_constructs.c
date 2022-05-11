// Koka generated module: "language-constructs", koka version: 2.4.0, platform: 64-bit
#include "language_dash_constructs.h"

kk_string_t kk_language_dash_constructs_show(kk_language_dash_constructs__patern pat, kk_context_t* _ctx) { /* (pat : patern) -> total string */ 
  if (kk_language_dash_constructs__is_Ident(pat)) {
    struct kk_language_dash_constructs_Ident* _con1255 = kk_language_dash_constructs__as_Ident(pat);
    kk_string_t name = _con1255->name;
    if (kk_likely(kk_language_dash_constructs__patern_is_unique(pat))) {
      kk_language_dash_constructs__patern_free(pat, _ctx);
    }
    else {
      kk_string_dup(name);
      kk_language_dash_constructs__patern_decref(pat, _ctx);
    }
    kk_string_t _x1256;
    kk_define_string_literal(, _s1257, 10, "Pattern: \'")
    _x1256 = kk_string_dup(_s1257); /*string*/
    kk_string_t _x1258;
    kk_string_t _x1259;
    kk_define_string_literal(, _s1260, 1, "\'")
    _x1259 = kk_string_dup(_s1260); /*string*/
    _x1258 = kk_std_core__lp__plus__plus__1_rp_(name, _x1259, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x1256, _x1258, _ctx);
  }
  if (kk_language_dash_constructs__is_NullPat(pat)) {
    kk_define_string_literal(, _s1261, 7, "NULLPat")
    return kk_string_dup(_s1261);
  }
  {
    struct kk_language_dash_constructs_Patpair* _con1262 = kk_language_dash_constructs__as_Patpair(pat);
    kk_language_dash_constructs__patern p1 = _con1262->p1;
    kk_language_dash_constructs__patern p2 = _con1262->p2;
    if (kk_likely(kk_language_dash_constructs__patern_is_unique(pat))) {
      kk_language_dash_constructs__patern_free(pat, _ctx);
    }
    else {
      kk_language_dash_constructs__patern_dup(p1);
      kk_language_dash_constructs__patern_dup(p2);
      kk_language_dash_constructs__patern_decref(pat, _ctx);
    }
    kk_string_t _x1263;
    kk_define_string_literal(, _s1264, 11, "Patpair: ({")
    _x1263 = kk_string_dup(_s1264); /*string*/
    kk_string_t _x1265;
    kk_string_t _x1266 = kk_language_dash_constructs_show(p1, _ctx); /*string*/
    kk_string_t _x1267;
    kk_string_t _x1268;
    kk_define_string_literal(, _s1269, 4, "}, {")
    _x1268 = kk_string_dup(_s1269); /*string*/
    kk_string_t _x1270;
    kk_string_t _x1271 = kk_language_dash_constructs_show(p2, _ctx); /*string*/
    kk_string_t _x1272;
    kk_define_string_literal(, _s1273, 2, "})")
    _x1272 = kk_string_dup(_s1273); /*string*/
    _x1270 = kk_std_core__lp__plus__plus__1_rp_(_x1271, _x1272, _ctx); /*string*/
    _x1267 = kk_std_core__lp__plus__plus__1_rp_(_x1268, _x1270, _ctx); /*string*/
    _x1265 = kk_std_core__lp__plus__plus__1_rp_(_x1266, _x1267, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x1263, _x1265, _ctx);
  }
}

kk_string_t kk_language_dash_constructs_show_1(kk_language_dash_constructs__expression exp, kk_context_t* _ctx) { /* (exp : expression) -> total string */ 
  if (kk_language_dash_constructs__is_Num(exp)) {
    struct kk_language_dash_constructs_Num* _con1274 = kk_language_dash_constructs__as_Num(exp);
    kk_integer_t n = _con1274->n;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(exp))) {
      kk_language_dash_constructs__expression_free(exp, _ctx);
    }
    else {
      kk_integer_dup(n);
      kk_language_dash_constructs__expression_decref(exp, _ctx);
    }
    kk_string_t _x1275;
    kk_define_string_literal(, _s1276, 11, "Value: num ")
    _x1275 = kk_string_dup(_s1276); /*string*/
    kk_string_t _x1277 = kk_std_core_show(n, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x1275, _x1277, _ctx);
  }
  if (kk_language_dash_constructs__is_EFalse(exp)) {
    kk_define_string_literal(, _s1278, 12, "Value: false")
    return kk_string_dup(_s1278);
  }
  if (kk_language_dash_constructs__is_ETrue(exp)) {
    kk_define_string_literal(, _s1279, 11, "Value: true")
    return kk_string_dup(_s1279);
  }
  if (kk_language_dash_constructs__is_Variable(exp)) {
    struct kk_language_dash_constructs_Variable* _con1280 = kk_language_dash_constructs__as_Variable(exp);
    kk_string_t name = _con1280->name;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(exp))) {
      kk_language_dash_constructs__expression_free(exp, _ctx);
    }
    else {
      kk_string_dup(name);
      kk_language_dash_constructs__expression_decref(exp, _ctx);
    }
    kk_string_t _x1281;
    kk_define_string_literal(, _s1282, 11, "Variable: \"")
    _x1281 = kk_string_dup(_s1282); /*string*/
    kk_string_t _x1283;
    kk_string_t _x1284;
    kk_define_string_literal(, _s1285, 1, "\"")
    _x1284 = kk_string_dup(_s1285); /*string*/
    _x1283 = kk_std_core__lp__plus__plus__1_rp_(name, _x1284, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x1281, _x1283, _ctx);
  }
  if (kk_language_dash_constructs__is_Lambda(exp)) {
    struct kk_language_dash_constructs_Lambda* _con1286 = kk_language_dash_constructs__as_Lambda(exp);
    kk_language_dash_constructs__patern arg = _con1286->arg;
    kk_language_dash_constructs__expression body = _con1286->body;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(exp))) {
      kk_language_dash_constructs__expression_free(exp, _ctx);
    }
    else {
      kk_language_dash_constructs__patern_dup(arg);
      kk_language_dash_constructs__expression_dup(body);
      kk_language_dash_constructs__expression_decref(exp, _ctx);
    }
    kk_string_t _x1287;
    kk_define_string_literal(, _s1288, 32, "Function: with variable names: [")
    _x1287 = kk_string_dup(_s1288); /*string*/
    kk_string_t _x1289;
    kk_string_t _x1290 = kk_language_dash_constructs_show(arg, _ctx); /*string*/
    kk_string_t _x1291;
    kk_string_t _x1292;
    kk_define_string_literal(, _s1293, 1, "]")
    _x1292 = kk_string_dup(_s1293); /*string*/
    kk_string_t _x1294;
    kk_string_t _x1295;
    kk_define_string_literal(, _s1296, 14, " and body of: ")
    _x1295 = kk_string_dup(_s1296); /*string*/
    kk_string_t _x1297 = kk_language_dash_constructs_show_1(body, _ctx); /*string*/
    _x1294 = kk_std_core__lp__plus__plus__1_rp_(_x1295, _x1297, _ctx); /*string*/
    _x1291 = kk_std_core__lp__plus__plus__1_rp_(_x1292, _x1294, _ctx); /*string*/
    _x1289 = kk_std_core__lp__plus__plus__1_rp_(_x1290, _x1291, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x1287, _x1289, _ctx);
  }
  if (kk_language_dash_constructs__is_If(exp)) {
    struct kk_language_dash_constructs_If* _con1298 = kk_language_dash_constructs__as_If(exp);
    kk_language_dash_constructs__expression cond = _con1298->cond;
    kk_language_dash_constructs__expression thus = _con1298->thus;
    kk_language_dash_constructs__expression otherwise = _con1298->otherwise;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(exp))) {
      kk_language_dash_constructs__expression_free(exp, _ctx);
    }
    else {
      kk_language_dash_constructs__expression_dup(cond);
      kk_language_dash_constructs__expression_dup(otherwise);
      kk_language_dash_constructs__expression_dup(thus);
      kk_language_dash_constructs__expression_decref(exp, _ctx);
    }
    kk_string_t _x1299;
    kk_define_string_literal(, _s1300, 18, "If statement: if {")
    _x1299 = kk_string_dup(_s1300); /*string*/
    kk_string_t _x1301;
    kk_string_t _x1302 = kk_language_dash_constructs_show_1(cond, _ctx); /*string*/
    kk_string_t _x1303;
    kk_string_t _x1304;
    kk_define_string_literal(, _s1305, 8, "} then {")
    _x1304 = kk_string_dup(_s1305); /*string*/
    kk_string_t _x1306;
    kk_string_t _x1307 = kk_language_dash_constructs_show_1(thus, _ctx); /*string*/
    kk_string_t _x1308;
    kk_string_t _x1309;
    kk_define_string_literal(, _s1310, 8, "} else {")
    _x1309 = kk_string_dup(_s1310); /*string*/
    kk_string_t _x1311;
    kk_string_t _x1312 = kk_language_dash_constructs_show_1(otherwise, _ctx); /*string*/
    kk_string_t _x1313;
    kk_define_string_literal(, _s1314, 1, "}")
    _x1313 = kk_string_dup(_s1314); /*string*/
    _x1311 = kk_std_core__lp__plus__plus__1_rp_(_x1312, _x1313, _ctx); /*string*/
    _x1308 = kk_std_core__lp__plus__plus__1_rp_(_x1309, _x1311, _ctx); /*string*/
    _x1306 = kk_std_core__lp__plus__plus__1_rp_(_x1307, _x1308, _ctx); /*string*/
    _x1303 = kk_std_core__lp__plus__plus__1_rp_(_x1304, _x1306, _ctx); /*string*/
    _x1301 = kk_std_core__lp__plus__plus__1_rp_(_x1302, _x1303, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x1299, _x1301, _ctx);
  }
  if (kk_language_dash_constructs__is_MLpair(exp)) {
    struct kk_language_dash_constructs_MLpair* _con1315 = kk_language_dash_constructs__as_MLpair(exp);
    kk_language_dash_constructs__expression e1 = _con1315->e1;
    kk_language_dash_constructs__expression e2 = _con1315->e2;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(exp))) {
      kk_language_dash_constructs__expression_free(exp, _ctx);
    }
    else {
      kk_language_dash_constructs__expression_dup(e1);
      kk_language_dash_constructs__expression_dup(e2);
      kk_language_dash_constructs__expression_decref(exp, _ctx);
    }
    kk_string_t _x1316;
    kk_define_string_literal(, _s1317, 21, "Expression pair of: {")
    _x1316 = kk_string_dup(_s1317); /*string*/
    kk_string_t _x1318;
    kk_string_t _x1319 = kk_language_dash_constructs_show_1(e1, _ctx); /*string*/
    kk_string_t _x1320;
    kk_string_t _x1321;
    kk_define_string_literal(, _s1322, 7, "} and {")
    _x1321 = kk_string_dup(_s1322); /*string*/
    kk_string_t _x1323;
    kk_string_t _x1324 = kk_language_dash_constructs_show_1(e2, _ctx); /*string*/
    kk_string_t _x1325;
    kk_define_string_literal(, _s1326, 1, "}")
    _x1325 = kk_string_dup(_s1326); /*string*/
    _x1323 = kk_std_core__lp__plus__plus__1_rp_(_x1324, _x1325, _ctx); /*string*/
    _x1320 = kk_std_core__lp__plus__plus__1_rp_(_x1321, _x1323, _ctx); /*string*/
    _x1318 = kk_std_core__lp__plus__plus__1_rp_(_x1319, _x1320, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x1316, _x1318, _ctx);
  }
  if (kk_language_dash_constructs__is_Apply(exp)) {
    struct kk_language_dash_constructs_Apply* _con1327 = kk_language_dash_constructs__as_Apply(exp);
    kk_language_dash_constructs__expression e10 = _con1327->e1;
    kk_language_dash_constructs__expression e20 = _con1327->e2;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(exp))) {
      kk_language_dash_constructs__expression_free(exp, _ctx);
    }
    else {
      kk_language_dash_constructs__expression_dup(e10);
      kk_language_dash_constructs__expression_dup(e20);
      kk_language_dash_constructs__expression_decref(exp, _ctx);
    }
    kk_string_t _x1328;
    kk_define_string_literal(, _s1329, 17, "Application of: {")
    _x1328 = kk_string_dup(_s1329); /*string*/
    kk_string_t _x1330;
    kk_string_t _x1331 = kk_language_dash_constructs_show_1(e10, _ctx); /*string*/
    kk_string_t _x1332;
    kk_string_t _x1333;
    kk_define_string_literal(, _s1334, 15, "} onto values {")
    _x1333 = kk_string_dup(_s1334); /*string*/
    kk_string_t _x1335;
    kk_string_t _x1336 = kk_language_dash_constructs_show_1(e20, _ctx); /*string*/
    kk_string_t _x1337;
    kk_define_string_literal(, _s1338, 1, "}")
    _x1337 = kk_string_dup(_s1338); /*string*/
    _x1335 = kk_std_core__lp__plus__plus__1_rp_(_x1336, _x1337, _ctx); /*string*/
    _x1332 = kk_std_core__lp__plus__plus__1_rp_(_x1333, _x1335, _ctx); /*string*/
    _x1330 = kk_std_core__lp__plus__plus__1_rp_(_x1331, _x1332, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x1328, _x1330, _ctx);
  }
  if (kk_language_dash_constructs__is_Let(exp)) {
    struct kk_language_dash_constructs_Let* _con1339 = kk_language_dash_constructs__as_Let(exp);
    kk_language_dash_constructs__patern arg0 = _con1339->arg;
    kk_language_dash_constructs__expression arg__val = _con1339->arg__val;
    kk_language_dash_constructs__expression body0 = _con1339->body;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(exp))) {
      kk_language_dash_constructs__expression_free(exp, _ctx);
    }
    else {
      kk_language_dash_constructs__patern_dup(arg0);
      kk_language_dash_constructs__expression_dup(arg__val);
      kk_language_dash_constructs__expression_dup(body0);
      kk_language_dash_constructs__expression_decref(exp, _ctx);
    }
    kk_string_t _x1340;
    kk_define_string_literal(, _s1341, 21, "Let expression: let \'")
    _x1340 = kk_string_dup(_s1341); /*string*/
    kk_string_t _x1342;
    kk_string_t _x1343 = kk_language_dash_constructs_show(arg0, _ctx); /*string*/
    kk_string_t _x1344;
    kk_string_t _x1345;
    kk_define_string_literal(, _s1346, 6, "\' be {")
    _x1345 = kk_string_dup(_s1346); /*string*/
    kk_string_t _x1347;
    kk_string_t _x1348 = kk_language_dash_constructs_show_1(arg__val, _ctx); /*string*/
    kk_string_t _x1349;
    kk_string_t _x1350;
    kk_define_string_literal(, _s1351, 6, "} in {")
    _x1350 = kk_string_dup(_s1351); /*string*/
    kk_string_t _x1352;
    kk_string_t _x1353 = kk_language_dash_constructs_show_1(body0, _ctx); /*string*/
    kk_string_t _x1354;
    kk_define_string_literal(, _s1355, 1, "}")
    _x1354 = kk_string_dup(_s1355); /*string*/
    _x1352 = kk_std_core__lp__plus__plus__1_rp_(_x1353, _x1354, _ctx); /*string*/
    _x1349 = kk_std_core__lp__plus__plus__1_rp_(_x1350, _x1352, _ctx); /*string*/
    _x1347 = kk_std_core__lp__plus__plus__1_rp_(_x1348, _x1349, _ctx); /*string*/
    _x1344 = kk_std_core__lp__plus__plus__1_rp_(_x1345, _x1347, _ctx); /*string*/
    _x1342 = kk_std_core__lp__plus__plus__1_rp_(_x1343, _x1344, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x1340, _x1342, _ctx);
  }
  {
    struct kk_language_dash_constructs_Letrec* _con1356 = kk_language_dash_constructs__as_Letrec(exp);
    kk_language_dash_constructs__patern arg1 = _con1356->arg;
    kk_language_dash_constructs__expression arg__val0 = _con1356->arg__val;
    kk_language_dash_constructs__expression body1 = _con1356->body;
    if (kk_likely(kk_language_dash_constructs__expression_is_unique(exp))) {
      kk_language_dash_constructs__expression_free(exp, _ctx);
    }
    else {
      kk_language_dash_constructs__patern_dup(arg1);
      kk_language_dash_constructs__expression_dup(arg__val0);
      kk_language_dash_constructs__expression_dup(body1);
      kk_language_dash_constructs__expression_decref(exp, _ctx);
    }
    kk_string_t _x1357;
    kk_define_string_literal(, _s1358, 27, "LetRec expression: letRec \'")
    _x1357 = kk_string_dup(_s1358); /*string*/
    kk_string_t _x1359;
    kk_string_t _x1360 = kk_language_dash_constructs_show(arg1, _ctx); /*string*/
    kk_string_t _x1361;
    kk_string_t _x1362;
    kk_define_string_literal(, _s1363, 6, "\' be {")
    _x1362 = kk_string_dup(_s1363); /*string*/
    kk_string_t _x1364;
    kk_string_t _x1365 = kk_language_dash_constructs_show_1(arg__val0, _ctx); /*string*/
    kk_string_t _x1366;
    kk_string_t _x1367;
    kk_define_string_literal(, _s1368, 6, "} in {")
    _x1367 = kk_string_dup(_s1368); /*string*/
    kk_string_t _x1369;
    kk_string_t _x1370 = kk_language_dash_constructs_show_1(body1, _ctx); /*string*/
    kk_string_t _x1371;
    kk_define_string_literal(, _s1372, 1, "}")
    _x1371 = kk_string_dup(_s1372); /*string*/
    _x1369 = kk_std_core__lp__plus__plus__1_rp_(_x1370, _x1371, _ctx); /*string*/
    _x1366 = kk_std_core__lp__plus__plus__1_rp_(_x1367, _x1369, _ctx); /*string*/
    _x1364 = kk_std_core__lp__plus__plus__1_rp_(_x1365, _x1366, _ctx); /*string*/
    _x1361 = kk_std_core__lp__plus__plus__1_rp_(_x1362, _x1364, _ctx); /*string*/
    _x1359 = kk_std_core__lp__plus__plus__1_rp_(_x1360, _x1361, _ctx); /*string*/
    return kk_std_core__lp__plus__plus__1_rp_(_x1357, _x1359, _ctx);
  }
  {
    kk_language_dash_constructs__expression_drop(exp, _ctx);
    kk_define_string_literal(, _s1373, 163, "Not a valid expression, note this should never be reached and is just here to catch possibly otherwise very obscure bugs that might be introduced in the future :-D")
    return kk_string_dup(_s1373);
  }
}

// initialization
void kk_language_dash_constructs__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_language_dash_constructs__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core__done(_ctx);
  kk_std_core_types__done(_ctx);
}
