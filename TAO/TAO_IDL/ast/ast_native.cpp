// $Id$


// AST_Native: New IDL type added by the POA spec

#include "idl.h"
#include "idl_extern.h"

ACE_RCSID(ast, ast_native, "$Id$")

// Constructor(s).

AST_Native::AST_Native (void)
{
}

AST_Native::AST_Native(UTL_ScopedName *n,
                       UTL_StrList *p)
  : AST_Decl (AST_Decl::NT_native, 
              n, 
              p)
{
}

// Destructor.
AST_Native::~AST_Native (void)
{
}

// Dump this AST_Native node to the ostream o.
void
AST_Native::dump (ostream &o)
{
  AST_Decl::dump (o);
}

int
AST_Native::accept (ast_visitor *visitor)
{
  return visitor->visit_native (this);
}

// Narrowing.
IMPL_NARROW_METHODS1(AST_Native, AST_Type)
IMPL_NARROW_FROM_DECL(AST_Native)
