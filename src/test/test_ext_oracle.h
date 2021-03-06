/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
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

#ifndef __TEST_EXT_ORACLE_H__
#define __TEST_EXT_ORACLE_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtOracle : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_oci_connect();
  bool test_oci_new_connect();
  bool test_oci_pconnect();
  bool test_oci_server_version();
  bool test_oci_password_change();
  bool test_oci_new_cursor();
  bool test_oci_new_descriptor();
  bool test_oci_close();
  bool test_oci_commit();
  bool test_oci_rollback();
  bool test_oci_error();
  bool test_oci_internal_debug();
  bool test_oci_parse();
  bool test_oci_statement_type();
  bool test_oci_free_statement();
  bool test_oci_free_descriptor();
  bool test_oci_bind_array_by_name();
  bool test_oci_bind_by_name();
  bool test_oci_cancel();
  bool test_oci_define_by_name();
  bool test_oci_execute();
  bool test_oci_num_fields();
  bool test_oci_num_rows();
  bool test_oci_result();
  bool test_oci_set_prefetch();
  bool test_oci_fetch_all();
  bool test_oci_fetch_array();
  bool test_oci_fetch_assoc();
  bool test_oci_fetch_object();
  bool test_oci_fetch_row();
  bool test_oci_fetch();
  bool test_oci_field_is_null();
  bool test_oci_field_name();
  bool test_oci_field_precision();
  bool test_oci_field_scale();
  bool test_oci_field_size();
  bool test_oci_field_type_raw();
  bool test_oci_field_type();
};

///////////////////////////////////////////////////////////////////////////////

#endif // __TEST_EXT_ORACLE_H__
