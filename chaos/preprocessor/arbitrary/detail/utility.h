# /* ********************************************************************
#  *                                                                    *
#  *    (C) Copyright Paul Mensonides 2003-2004.                        *
#  *                                                                    *
#  *    Distributed under the Boost Software License, Version 1.0.      *
#  *    (See accompanying file LICENSE).                                *
#  *                                                                    *
#  *    See http://chaos-pp.sourceforge.net for most recent version.    *
#  *                                                                    *
#  ******************************************************************** */
#
# ifndef CHAOS_PREPROCESSOR_ARBITRARY_DETAIL_UTILITY_H
# define CHAOS_PREPROCESSOR_ARBITRARY_DETAIL_UTILITY_H
#
# include <chaos/preprocessor/config.h>
# include <chaos/preprocessor/control/iif.h>
# include <chaos/preprocessor/logical/compl.h>
# include <chaos/preprocessor/recursion/machine.h>
#
# /* CHAOS_PP_INSTRUCTION_0xCHAOS_0xCOMPL */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_INSTRUCTION_0xCHAOS_0xCOMPL(s, p, bit, k, ...) (, k, CHAOS_PP_COMPL(bit), p ## __VA_ARGS__)
# endif
#
# /* CHAOS_PP_INSTRUCTION_0xCHAOS_0xEVAL */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_INSTRUCTION_0xCHAOS_0xEVAL(s, p, k, ...) k
# endif
#
# /* CHAOS_PP_INSTRUCTION_0xCHAOS_0xIIF */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_INSTRUCTION_0xCHAOS_0xIIF(s, p, bit, t, f, k, ...) (, k, CHAOS_PP_IIF(bit)(p ## t, p ## f), p ## __VA_ARGS__)
# endif
#
# endif
