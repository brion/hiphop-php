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

#ifndef __GENERATED_CLS_EXCEPTION_H__
#define __GENERATED_CLS_EXCEPTION_H__


namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 3 */
class c_exception : virtual public ObjectData {
  BEGIN_CLASS_MAP(exception)
  END_CLASS_MAP(exception)
  DECLARE_CLASS(exception, Exception, ObjectData)
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: Variant m_message;
  public: Variant m_code;
  public: Variant m_file;
  public: Variant m_line;
  public: void t___construct(Variant v_message = "", Variant v_code = 0LL);
  public: ObjectData *create(Variant v_message = "", Variant v_code = 0LL);
  public: ObjectData *dynCreate(CArrRef params, bool init = true);
  public: void dynConstruct(CArrRef params);
  public: Variant t_getmessage();
  public: Variant t_getcode();
  public: Variant t_getfile();
  public: Variant t_getline();
  public: Variant t_gettrace();
  public: String t_gettraceasstring();
  public: String t___tostring();
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_CLS_EXCEPTION_H__
