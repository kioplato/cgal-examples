// Copyright (c) 1999  Max-Planck-Institute Saarbruecken (Germany).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org).
//
// $URL: https://github.com/CGAL/cgal/blob/v5.4.5/Convex_hull_2/include/CGAL/Convex_hull_2/ch_assertions.h $
// $Id: ch_assertions.h 5a36ff8 2020-12-04T08:02:26+00:00 Giles Bathgate
// SPDX-License-Identifier: GPL-3.0-or-later OR LicenseRef-Commercial
//
//
// Author(s)     : Geert-Jan Giezeman, Sven Schoenherr
//
// Generated from script create_assertions.sh


// Note that this header file is intentionnaly not protected with a
// macro (as <cassert>). Calling it a second time with another value
// for CGAL_NO_ASSERTIONS for example must make a difference.

#include <CGAL/assertions.h>

// macro definitions
// =================
// assertions
// ----------

#undef CGAL_ch_assertion
#undef CGAL_ch_assertion_msg
#undef CGAL_ch_assertion_code

#if defined(CGAL_CH_NO_ASSERTIONS) || defined(CGAL_NO_ASSERTIONS)
#  define CGAL_ch_assertion(EX) (static_cast<void>(0))

#include <CGAL/license/Convex_hull_2.h>

#  define CGAL_ch_assertion_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_ch_assertion_code(CODE)
#else
#  define CGAL_ch_assertion(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::assertion_fail( # EX , __FILE__, __LINE__))
#  define CGAL_ch_assertion_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::assertion_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_ch_assertion_code(CODE) CODE
#  define CGAL_ch_assertions 1
#endif // CGAL_CH_NO_ASSERTIONS


#undef CGAL_ch_exactness_assertion
#undef CGAL_ch_exactness_assertion_msg
#undef CGAL_ch_exactness_assertion_code

#if defined(CGAL_CH_NO_ASSERTIONS) || defined(CGAL_NO_ASSERTIONS) \
  || (!defined(CGAL_CH_CHECK_EXACTNESS) && !defined(CGAL_CHECK_EXACTNESS))
#  define CGAL_ch_exactness_assertion(EX) (static_cast<void>(0))
#  define CGAL_ch_exactness_assertion_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_ch_exactness_assertion_code(CODE)
#else
#  define CGAL_ch_exactness_assertion(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::assertion_fail( # EX , __FILE__, __LINE__))
#  define CGAL_ch_exactness_assertion_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::assertion_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_ch_exactness_assertion_code(CODE) CODE
#  define CGAL_ch_exactness_assertions 1
#endif // CGAL_CH_NO_ASSERTIONS


#undef CGAL_ch_expensive_assertion
#undef CGAL_ch_expensive_assertion_msg
#undef CGAL_ch_expensive_assertion_code

#if defined(CGAL_CH_NO_ASSERTIONS) \
  || defined(CGAL_NO_ASSERTIONS) \
  || (!defined(CGAL_CH_CHECK_EXPENSIVE) && !defined(CGAL_CHECK_EXPENSIVE))
#  define CGAL_ch_expensive_assertion(EX) (static_cast<void>(0))
#  define CGAL_ch_expensive_assertion_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_ch_expensive_assertion_code(CODE)
#else
#  define CGAL_ch_expensive_assertion(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::assertion_fail( # EX , __FILE__, __LINE__))
#  define CGAL_ch_expensive_assertion_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::assertion_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_ch_expensive_assertion_code(CODE) CODE
#  define CGAL_ch_expensive_assertions 1
#endif // CGAL_CH_NO_ASSERTIONS


#undef CGAL_ch_expensive_exactness_assertion
#undef CGAL_ch_expensive_exactness_assertion_msg
#undef CGAL_ch_expensive_exactness_assertion_code

#if defined(CGAL_CH_NO_ASSERTIONS) || defined(CGAL_NO_ASSERTIONS) \
  || (!defined(CGAL_CH_CHECK_EXACTNESS) && !defined(CGAL_CHECK_EXACTNESS))\
  || (!defined(CGAL_CH_CHECK_EXPENSIVE) && !defined(CGAL_CHECK_EXPENSIVE))
#  define CGAL_ch_expensive_exactness_assertion(EX) (static_cast<void>(0))
#  define CGAL_ch_expensive_exactness_assertion_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_ch_expensive_exactness_assertion_code(CODE)
#else
#  define CGAL_ch_expensive_exactness_assertion(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::assertion_fail( # EX , __FILE__, __LINE__))
#  define CGAL_ch_expensive_exactness_assertion_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::assertion_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_ch_expensive_exactness_assertion_code(CODE) CODE
#  define CGAL_ch_expensive_exactness_assertions 1
#endif // CGAL_CH_NO_ASSERTIONS


// preconditions
// -------------

#undef CGAL_ch_precondition
#undef CGAL_ch_precondition_msg
#undef CGAL_ch_precondition_code

#if defined(CGAL_CH_NO_PRECONDITIONS) || defined(CGAL_NO_PRECONDITIONS)
#  define CGAL_ch_precondition(EX) (static_cast<void>(0))
#  define CGAL_ch_precondition_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_ch_precondition_code(CODE)
#else
#  define CGAL_ch_precondition(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::precondition_fail( # EX , __FILE__, __LINE__))
#  define CGAL_ch_precondition_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::precondition_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_ch_precondition_code(CODE) CODE
#  define CGAL_ch_preconditions 1
#endif // CGAL_CH_NO_PRECONDITIONS


#undef CGAL_ch_exactness_precondition
#undef CGAL_ch_exactness_precondition_msg
#undef CGAL_ch_exactness_precondition_code

#if defined(CGAL_CH_NO_PRECONDITIONS) || defined(CGAL_NO_PRECONDITIONS) \
  || (!defined(CGAL_CH_CHECK_EXACTNESS) && !defined(CGAL_CHECK_EXACTNESS))
#  define CGAL_ch_exactness_precondition(EX) (static_cast<void>(0))
#  define CGAL_ch_exactness_precondition_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_ch_exactness_precondition_code(CODE)
#else
#  define CGAL_ch_exactness_precondition(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::precondition_fail( # EX , __FILE__, __LINE__))
#  define CGAL_ch_exactness_precondition_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::precondition_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_ch_exactness_precondition_code(CODE) CODE
#  define CGAL_ch_exactness_preconditions 1
#endif // CGAL_CH_NO_PRECONDITIONS


#undef CGAL_ch_expensive_precondition
#undef CGAL_ch_expensive_precondition_msg
#undef CGAL_ch_expensive_precondition_code

#if defined(CGAL_CH_NO_PRECONDITIONS) || defined(CGAL_NO_PRECONDITIONS) \
  || (!defined(CGAL_CH_CHECK_EXPENSIVE) && !defined(CGAL_CHECK_EXPENSIVE))
#  define CGAL_ch_expensive_precondition(EX) (static_cast<void>(0))
#  define CGAL_ch_expensive_precondition_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_ch_expensive_precondition_code(CODE)
#else
#  define CGAL_ch_expensive_precondition(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::precondition_fail( # EX , __FILE__, __LINE__))
#  define CGAL_ch_expensive_precondition_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::precondition_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_ch_expensive_precondition_code(CODE) CODE
#  define CGAL_ch_expensive_preconditions 1
#endif // CGAL_CH_NO_PRECONDITIONS


#undef CGAL_ch_expensive_exactness_precondition
#undef CGAL_ch_expensive_exactness_precondition_msg
#undef CGAL_ch_expensive_exactness_precondition_code

#if defined(CGAL_CH_NO_PRECONDITIONS) || defined(CGAL_NO_PRECONDITIONS) \
  || (!defined(CGAL_CH_CHECK_EXACTNESS) && !defined(CGAL_CHECK_EXACTNESS))\
  || (!defined(CGAL_CH_CHECK_EXPENSIVE) && !defined(CGAL_CHECK_EXPENSIVE))
#  define CGAL_ch_expensive_exactness_precondition(EX) (static_cast<void>(0))
#  define CGAL_ch_expensive_exactness_precondition_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_ch_expensive_exactness_precondition_code(CODE)
#else
#  define CGAL_ch_expensive_exactness_precondition(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::precondition_fail( # EX , __FILE__, __LINE__))
#  define CGAL_ch_expensive_exactness_precondition_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::precondition_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_ch_expensive_exactness_precondition_code(CODE) CODE
#  define CGAL_ch_expensive_exactness_preconditions 1
#endif // CGAL_CH_NO_PRECONDITIONS


// postconditions
// --------------

#undef CGAL_ch_postcondition
#undef CGAL_ch_postcondition_msg
#undef CGAL_ch_postcondition_code

#if defined(CGAL_CH_NO_POSTCONDITIONS) || defined(CGAL_NO_POSTCONDITIONS)
#  define CGAL_ch_postcondition(EX) (static_cast<void>(0))
#  define CGAL_ch_postcondition_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_ch_postcondition_code(CODE)
#else
#  define CGAL_ch_postcondition(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::postcondition_fail( # EX , __FILE__, __LINE__))
#  define CGAL_ch_postcondition_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::postcondition_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_ch_postcondition_code(CODE) CODE
#  define CGAL_ch_postconditions 1
#endif // CGAL_CH_NO_POSTCONDITIONS


#undef CGAL_ch_exactness_postcondition
#undef CGAL_ch_exactness_postcondition_msg
#undef CGAL_ch_exactness_postcondition_code

#if defined(CGAL_CH_NO_POSTCONDITIONS) || defined(CGAL_NO_POSTCONDITIONS) \
  || (!defined(CGAL_CH_CHECK_EXACTNESS) && !defined(CGAL_CHECK_EXACTNESS))
#  define CGAL_ch_exactness_postcondition(EX) (static_cast<void>(0))
#  define CGAL_ch_exactness_postcondition_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_ch_exactness_postcondition_code(CODE)
#else
#  define CGAL_ch_exactness_postcondition(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::postcondition_fail( # EX , __FILE__, __LINE__))
#  define CGAL_ch_exactness_postcondition_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::postcondition_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_ch_exactness_postcondition_code(CODE) CODE
#  define CGAL_ch_exactness_postconditions 1
#endif // CGAL_CH_NO_POSTCONDITIONS


#undef CGAL_ch_expensive_postcondition
#undef CGAL_ch_expensive_postcondition_msg
#undef CGAL_ch_expensive_postcondition_code

#if defined(CGAL_CH_NO_POSTCONDITIONS) || defined(CGAL_NO_POSTCONDITIONS) \
  || (!defined(CGAL_CH_CHECK_EXPENSIVE) && !defined(CGAL_CHECK_EXPENSIVE))
#  define CGAL_ch_expensive_postcondition(EX) (static_cast<void>(0))
#  define CGAL_ch_expensive_postcondition_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_ch_expensive_postcondition_code(CODE)
#else
#  define CGAL_ch_expensive_postcondition(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::postcondition_fail( # EX , __FILE__, __LINE__))
#  define CGAL_ch_expensive_postcondition_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::postcondition_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_ch_expensive_postcondition_code(CODE) CODE
#  define CGAL_ch_expensive_postconditions 1
#endif // CGAL_CH_NO_POSTCONDITIONS


#undef CGAL_ch_expensive_exactness_postcondition
#undef CGAL_ch_expensive_exactness_postcondition_msg
#undef CGAL_ch_expensive_exactness_postcondition_code

#if defined(CGAL_CH_NO_POSTCONDITIONS) || defined(CGAL_NO_POSTCONDITIONS) \
  || (!defined(CGAL_CH_CHECK_EXACTNESS) && !defined(CGAL_CHECK_EXACTNESS))\
  || (!defined(CGAL_CH_CHECK_EXPENSIVE) && !defined(CGAL_CHECK_EXPENSIVE))
#  define CGAL_ch_expensive_exactness_postcondition(EX) (static_cast<void>(0))
#  define CGAL_ch_expensive_exactness_postcondition_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_ch_expensive_exactness_postcondition_code(CODE)
#else
#  define CGAL_ch_expensive_exactness_postcondition(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::postcondition_fail( # EX , __FILE__, __LINE__))
#  define CGAL_ch_expensive_exactness_postcondition_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::postcondition_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_ch_expensive_exactness_postcondition_code(CODE) CODE
#  define CGAL_ch_expensive_exactness_postconditions 1
#endif // CGAL_CH_NO_POSTCONDITIONS


// warnings
// --------

#undef CGAL_ch_warning
#undef CGAL_ch_warning_msg
#undef CGAL_ch_warning_code

#if defined(CGAL_CH_NO_WARNINGS) || defined(CGAL_NO_WARNINGS)
#  define CGAL_ch_warning(EX) (static_cast<void>(0))
#  define CGAL_ch_warning_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_ch_warning_code(CODE)
#else
#  define CGAL_ch_warning(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::warning_fail( # EX , __FILE__, __LINE__))
#  define CGAL_ch_warning_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::warning_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_ch_warning_code(CODE) CODE
#  define CGAL_ch_warnings 1
#endif // CGAL_CH_NO_WARNINGS


#undef CGAL_ch_exactness_warning
#undef CGAL_ch_exactness_warning_msg
#undef CGAL_ch_exactness_warning_code

#if defined(CGAL_CH_NO_WARNINGS) || defined(CGAL_NO_WARNINGS) \
  || (!defined(CGAL_CH_CHECK_EXACTNESS) && !defined(CGAL_CHECK_EXACTNESS))
#  define CGAL_ch_exactness_warning(EX) (static_cast<void>(0))
#  define CGAL_ch_exactness_warning_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_ch_exactness_warning_code(CODE)
#else
#  define CGAL_ch_exactness_warning(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::warning_fail( # EX , __FILE__, __LINE__))
#  define CGAL_ch_exactness_warning_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::warning_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_ch_exactness_warning_code(CODE) CODE
#  define CGAL_ch_exactness_warnings 1
#endif // CGAL_CH_NO_WARNINGS


#undef CGAL_ch_expensive_warning
#undef CGAL_ch_expensive_warning_msg
#undef CGAL_ch_expensive_warning_code

#if defined(CGAL_CH_NO_WARNINGS) || defined(CGAL_NO_WARNINGS) \
  || (!defined(CGAL_CH_CHECK_EXPENSIVE) && !defined(CGAL_CHECK_EXPENSIVE))
#  define CGAL_ch_expensive_warning(EX) (static_cast<void>(0))
#  define CGAL_ch_expensive_warning_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_ch_expensive_warning_code(CODE)
#else
#  define CGAL_ch_expensive_warning(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::warning_fail( # EX , __FILE__, __LINE__))
#  define CGAL_ch_expensive_warning_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::warning_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_ch_expensive_warning_code(CODE) CODE
#  define CGAL_ch_expensive_warnings 1
#endif // CGAL_CH_NO_WARNINGS


#undef CGAL_ch_expensive_exactness_warning
#undef CGAL_ch_expensive_exactness_warning_msg
#undef CGAL_ch_expensive_exactness_warning_code

#if defined(CGAL_CH_NO_WARNINGS) || defined(CGAL_NO_WARNINGS) \
  || (!defined(CGAL_CH_CHECK_EXACTNESS) && !defined(CGAL_CHECK_EXACTNESS))\
  || (!defined(CGAL_CH_CHECK_EXPENSIVE) && !defined(CGAL_CHECK_EXPENSIVE))
#  define CGAL_ch_expensive_exactness_warning(EX) (static_cast<void>(0))
#  define CGAL_ch_expensive_exactness_warning_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_ch_expensive_exactness_warning_code(CODE)
#else
#  define CGAL_ch_expensive_exactness_warning(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::warning_fail( # EX , __FILE__, __LINE__))
#  define CGAL_ch_expensive_exactness_warning_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::warning_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_ch_expensive_exactness_warning_code(CODE) CODE
#  define CGAL_ch_expensive_exactness_warnings 1
#endif // CGAL_CH_NO_WARNINGS
