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

#ifndef __TEST_EXT_STRING_H__
#define __TEST_EXT_STRING_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtString : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_addcslashes();
  bool test_stripcslashes();
  bool test_addslashes();
  bool test_stripslashes();
  bool test_bin2hex();
  bool test_nl2br();
  bool test_quotemeta();
  bool test_str_shuffle();
  bool test_strrev();
  bool test_strtolower();
  bool test_strtoupper();
  bool test_ucfirst();
  bool test_ucwords();
  bool test_strip_tags();
  bool test_trim();
  bool test_ltrim();
  bool test_rtrim();
  bool test_chop();
  bool test_explode();
  bool test_implode();
  bool test_join();
  bool test_str_split();
  bool test_chunk_split();
  bool test_strtok();
  bool test_str_replace();
  bool test_str_ireplace();
  bool test_substr_replace();
  bool test_substr();
  bool test_str_pad();
  bool test_str_repeat();
  bool test_wordwrap();
  bool test_html_entity_decode();
  bool test_htmlentities();
  bool test_htmlspecialchars_decode();
  bool test_htmlspecialchars();
  bool test_quoted_printable_encode();
  bool test_quoted_printable_decode();
  bool test_convert_uudecode();
  bool test_convert_uuencode();
  bool test_str_rot13();
  bool test_crc32();
  bool test_crypt();
  bool test_md5();
  bool test_sha1();
  bool test_strtr();
  bool test_convert_cyr_string();
  bool test_get_html_translation_table();
  bool test_hebrev();
  bool test_hebrevc();
  bool test_setlocale();
  bool test_localeconv();
  bool test_nl_langinfo();
  bool test_echo();
  bool test_print();
  bool test_printf();
  bool test_vprintf();
  bool test_sprintf();
  bool test_vsprintf();
  bool test_sscanf();
  bool test_chr();
  bool test_ord();
  bool test_money_format();
  bool test_number_format();
  bool test_strcmp();
  bool test_strncmp();
  bool test_strnatcmp();
  bool test_strcasecmp();
  bool test_strncasecmp();
  bool test_strnatcasecmp();
  bool test_strcoll();
  bool test_substr_compare();
  bool test_strchr();
  bool test_strrchr();
  bool test_strstr();
  bool test_stristr();
  bool test_strpbrk();
  bool test_strpos();
  bool test_stripos();
  bool test_strrpos();
  bool test_strripos();
  bool test_substr_count();
  bool test_strspn();
  bool test_strcspn();
  bool test_strlen();
  bool test_count_chars();
  bool test_str_word_count();
  bool test_levenshtein();
  bool test_similar_text();
  bool test_soundex();
  bool test_metaphone();
  bool test_parse_str();
};

///////////////////////////////////////////////////////////////////////////////

#endif // __TEST_EXT_STRING_H__
