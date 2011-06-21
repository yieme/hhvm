/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXTPROFILE_JSON_H__
#define __EXTPROFILE_JSON_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_json.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline String x_json_encode(CVarRef value, bool loose = false) {
  FUNCTION_INJECTION_BUILTIN(json_encode);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_json_encode(value, loose);
}

inline Variant x_json_decode(CStrRef json, bool assoc = false, bool loose = false) {
  FUNCTION_INJECTION_BUILTIN(json_decode);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_json_decode(json, assoc, loose);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_JSON_H__
