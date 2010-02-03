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

#ifndef __BLOCK_STATEMENT_H__
#define __BLOCK_STATEMENT_H__

#include <lib/statement/statement.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

DECLARE_BOOST_TYPES(StatementList);
DECLARE_BOOST_TYPES(BlockStatement);

class BlockStatement : public Statement {
public:
  BlockStatement(STATEMENT_CONSTRUCTOR_PARAMETERS, StatementListPtr stmts);

  DECLARE_STATEMENT_VIRTUAL_FUNCTIONS;

  virtual bool hasDecl() const;
  virtual bool hasImpl() const;
  virtual bool hasRetExp() const;
  virtual int getRecursiveCount() const;
private:
  StatementListPtr m_stmts;
};

///////////////////////////////////////////////////////////////////////////////
}
#endif // __BLOCK_STATEMENT_H__
