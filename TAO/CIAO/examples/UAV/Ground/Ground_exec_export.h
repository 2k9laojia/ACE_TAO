
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl GROUND_EXEC
// ------------------------------
#ifndef GROUND_EXEC_EXPORT_H
#define GROUND_EXEC_EXPORT_H

#include "ace/config-all.h"

#if !defined (GROUND_EXEC_HAS_DLL)
#  define GROUND_EXEC_HAS_DLL 1
#endif /* ! GROUND_EXEC_HAS_DLL */

#if defined (GROUND_EXEC_HAS_DLL) && (GROUND_EXEC_HAS_DLL == 1)
#  if defined (GROUND_EXEC_BUILD_DLL)
#    define GROUND_EXEC_Export ACE_Proper_Export_Flag
#    define GROUND_EXEC_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define GROUND_EXEC_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* GROUND_EXEC_BUILD_DLL */
#    define GROUND_EXEC_Export ACE_Proper_Import_Flag
#    define GROUND_EXEC_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define GROUND_EXEC_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* GROUND_EXEC_BUILD_DLL */
#else /* GROUND_EXEC_HAS_DLL == 1 */
#  define GROUND_EXEC_Export
#  define GROUND_EXEC_SINGLETON_DECLARATION(T)
#  define GROUND_EXEC_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* GROUND_EXEC_HAS_DLL == 1 */

// Set GROUND_EXEC_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (GROUND_EXEC_NTRACE)
#  if (ACE_NTRACE == 1)
#    define GROUND_EXEC_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define GROUND_EXEC_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !GROUND_EXEC_NTRACE */

#if (GROUND_EXEC_NTRACE == 1)
#  define GROUND_EXEC_TRACE(X)
#else /* (GROUND_EXEC_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define GROUND_EXEC_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (GROUND_EXEC_NTRACE == 1) */

#endif /* GROUND_EXEC_EXPORT_H */

// End of auto generated file.
