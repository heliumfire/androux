/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

  { "(TARGET_32BIT) && ( (GET_CODE (operands[1]) == CONST_INT\n\
       && !const_ok_for_arm (INTVAL (operands[1]))))",
    __builtin_constant_p (
#line 1185 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1191 "../../gcc/gcc/config/arm/arm.md"
( (GET_CODE (operands[1]) == CONST_INT
       && !const_ok_for_arm (INTVAL (operands[1])))))
    ? (int) (
#line 1185 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1191 "../../gcc/gcc/config/arm/arm.md"
( (GET_CODE (operands[1]) == CONST_INT
       && !const_ok_for_arm (INTVAL (operands[1])))))
    : -1 },
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode))",
    __builtin_constant_p 
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode)))
    ? (int) 
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode)))
    : -1 },
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V4HImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4HImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4HImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode))",
    __builtin_constant_p 
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode)))
    ? (int) 
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode)))
    : -1 },
#line 909 "../../gcc/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16",
    __builtin_constant_p 
#line 909 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16)
    ? (int) 
#line 909 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16)
    : -1 },
#line 875 "../../gcc/gcc/config/arm/fpa.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_FPA",
    __builtin_constant_p 
#line 875 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_FPA)
    ? (int) 
#line 875 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_FPA)
    : -1 },
#line 366 "../../gcc/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 366 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    ? (int) 
#line 366 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    : -1 },
#line 4335 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && (GET_CODE (operands[1]) != MEM) && BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 4335 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && (GET_CODE (operands[1]) != MEM) && BYTES_BIG_ENDIAN)
    ? (int) 
#line 4335 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && (GET_CODE (operands[1]) != MEM) && BYTES_BIG_ENDIAN)
    : -1 },
#line 832 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && satisfies_constraint_Px (operands[2])",
    __builtin_constant_p 
#line 832 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && satisfies_constraint_Px (operands[2]))
    ? (int) 
#line 832 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && satisfies_constraint_Px (operands[2]))
    : -1 },
#line 1070 "../../gcc/gcc/config/arm/ldmstm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 2",
    __builtin_constant_p 
#line 1070 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2)
    ? (int) 
#line 1070 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2)
    : -1 },
#line 3628 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 || arm_arch_thumb2",
    __builtin_constant_p 
#line 3628 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 || arm_arch_thumb2)
    ? (int) 
#line 3628 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 || arm_arch_thumb2)
    : -1 },
#line 1083 "../../gcc/gcc/config/arm/ldmstm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 3",
    __builtin_constant_p 
#line 1083 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3)
    ? (int) 
#line 1083 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 366 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 366 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && reload_completed\n\
   && GET_CODE(operands[3]) != PLUS\n\
   && GET_CODE(operands[3]) != MINUS)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 670 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 670 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT )",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4061 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT ))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4061 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT ))
    : -1 },
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V8HImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V8HImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V8HImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && arm_arch5)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 10492 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 10492 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5))
    : -1 },
#line 158 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V2SFmode)\n\
       || register_operand (operands[1], V2SFmode))",
    __builtin_constant_p 
#line 158 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[1], V2SFmode)))
    ? (int) 
#line 158 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[1], V2SFmode)))
    : -1 },
#line 145 "../../gcc/gcc/config/arm/iwmmxt.md"
  { "TARGET_REALLY_IWMMXT\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 145 "../../gcc/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 145 "../../gcc/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
#line 1329 "../../gcc/gcc/config/arm/iwmmxt.md"
  { "TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 1329 "../../gcc/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT)
    ? (int) 
#line 1329 "../../gcc/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT)
    : -1 },
#line 1517 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON && (!true || flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 1517 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON && (!true || flag_unsafe_math_optimizations))
    ? (int) 
#line 1517 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON && (!true || flag_unsafe_math_optimizations))
    : -1 },
#line 2159 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32\n\
      && INTVAL (operands[1]) > 0 \n\
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8\n\
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32)",
    __builtin_constant_p 
#line 2159 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32))
    ? (int) 
#line 2159 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32))
    : -1 },
#line 170 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && ! TARGET_IWMMXT\n\
   && !(TARGET_HARD_FLOAT && TARGET_VFP)\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 170 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 170 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
#line 797 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && arm_arch_hwdiv",
    __builtin_constant_p 
#line 797 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch_hwdiv)
    ? (int) 
#line 797 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch_hwdiv)
    : -1 },
#line 142 "../../gcc/gcc/config/arm/ldmstm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 142 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 142 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 5)
    : -1 },
#line 590 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_MAVERICK) && !TARGET_NEON",
    __builtin_constant_p 
#line 590 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_MAVERICK) && !TARGET_NEON)
    ? (int) 
#line 590 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_MAVERICK) && !TARGET_NEON)
    : -1 },
#line 10621 "../../gcc/gcc/config/arm/arm.md"
  { "arm_arch_thumb2",
    __builtin_constant_p 
#line 10621 "../../gcc/gcc/config/arm/arm.md"
(arm_arch_thumb2)
    ? (int) 
#line 10621 "../../gcc/gcc/config/arm/arm.md"
(arm_arch_thumb2)
    : -1 },
#line 8144 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && USE_RETURN_INSN (FALSE)",
    __builtin_constant_p 
#line 8144 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && USE_RETURN_INSN (FALSE))
    ? (int) 
#line 8144 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && USE_RETURN_INSN (FALSE))
    : -1 },
#line 8150 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && USE_RETURN_INSN (FALSE)",
    __builtin_constant_p 
#line 8150 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE))
    ? (int) 
#line 8150 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE))
    : -1 },
#line 5192 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && satisfies_constraint_J (operands[1])",
    __builtin_constant_p 
#line 5192 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 && satisfies_constraint_J (operands[1]))
    ? (int) 
#line 5192 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 && satisfies_constraint_J (operands[1]))
    : -1 },
#line 1208 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !const_ok_for_arm (INTVAL (operands[1]))\n\
   && const_ok_for_arm (~INTVAL (operands[1]))",
    __builtin_constant_p 
#line 1208 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !const_ok_for_arm (INTVAL (operands[1]))
   && const_ok_for_arm (~INTVAL (operands[1])))
    ? (int) 
#line 1208 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !const_ok_for_arm (INTVAL (operands[1]))
   && const_ok_for_arm (~INTVAL (operands[1])))
    : -1 },
#line 685 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && peep2_regno_dead_p(0, CC_REGNUM)\n\
   && (CONST_INT_P (operands[2]) || operands[1] == operands[0])\n\
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)\n\
       || REG_P(operands[2]))",
    __builtin_constant_p 
#line 685 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_regno_dead_p(0, CC_REGNUM)
   && (CONST_INT_P (operands[2]) || operands[1] == operands[0])
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P(operands[2])))
    ? (int) 
#line 685 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_regno_dead_p(0, CC_REGNUM)
   && (CONST_INT_P (operands[2]) || operands[1] == operands[0])
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P(operands[2])))
    : -1 },
#line 6025 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16)\n\
   && (	  s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 6025 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16)
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 6025 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16)
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 8036 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (GET_CODE (operands[0]) == SYMBOL_REF)\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0]))",
    __builtin_constant_p 
#line 8036 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (GET_CODE (operands[0]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    ? (int) 
#line 8036 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (GET_CODE (operands[0]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    : -1 },
#line 8371 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT || optimize_size || flag_pic",
    __builtin_constant_p 
#line 8371 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT || optimize_size || flag_pic)
    ? (int) 
#line 8371 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT || optimize_size || flag_pic)
    : -1 },
#line 4671 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && reload_completed",
    __builtin_constant_p 
#line 4671 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 && reload_completed)
    ? (int) 
#line 4671 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 && reload_completed)
    : -1 },
#line 2187 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32\n\
       && INTVAL (operands[2]) > 0 \n\
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8\n\
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)",
    __builtin_constant_p 
#line 2187 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32))
    ? (int) 
#line 2187 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32))
    : -1 },
#line 746 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && peep2_regno_dead_p(0, CC_REGNUM)\n\
   && ((rtx_equal_p(operands[0], operands[1])\n\
	&& INTVAL(operands[2]) > -256 && INTVAL(operands[2]) < 256)\n\
       || (INTVAL(operands[2]) > -8 && INTVAL(operands[2]) < 8))",
    __builtin_constant_p 
#line 746 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_regno_dead_p(0, CC_REGNUM)
   && ((rtx_equal_p(operands[0], operands[1])
	&& INTVAL(operands[2]) > -256 && INTVAL(operands[2]) < 256)
       || (INTVAL(operands[2]) > -8 && INTVAL(operands[2]) < 8)))
    ? (int) 
#line 746 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_regno_dead_p(0, CC_REGNUM)
   && ((rtx_equal_p(operands[0], operands[1])
	&& INTVAL(operands[2]) > -256 && INTVAL(operands[2]) < 256)
       || (INTVAL(operands[2]) > -8 && INTVAL(operands[2]) < 8)))
    : -1 },
#line 96 "../../gcc/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 96 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    ? (int) 
#line 96 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    : -1 },
#line 5368 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 5368 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 5368 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 4724 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && GET_CODE (XEXP (operands[4], 0)) == PLUS\n\
   && rtx_equal_p (operands[0], XEXP (XEXP (operands[4], 0), 0))\n\
   && rtx_equal_p (operands[2], XEXP (XEXP (operands[4], 0), 1))\n\
   && (peep2_reg_dead_p (3, operands[0])\n\
       || rtx_equal_p (operands[0], operands[3]))\n\
   && (peep2_reg_dead_p (3, operands[2])\n\
       || rtx_equal_p (operands[2], operands[3]))",
    __builtin_constant_p 
#line 4724 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && GET_CODE (XEXP (operands[4], 0)) == PLUS
   && rtx_equal_p (operands[0], XEXP (XEXP (operands[4], 0), 0))
   && rtx_equal_p (operands[2], XEXP (XEXP (operands[4], 0), 1))
   && (peep2_reg_dead_p (3, operands[0])
       || rtx_equal_p (operands[0], operands[3]))
   && (peep2_reg_dead_p (3, operands[2])
       || rtx_equal_p (operands[2], operands[3])))
    ? (int) 
#line 4724 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && GET_CODE (XEXP (operands[4], 0)) == PLUS
   && rtx_equal_p (operands[0], XEXP (XEXP (operands[4], 0), 0))
   && rtx_equal_p (operands[2], XEXP (XEXP (operands[4], 0), 1))
   && (peep2_reg_dead_p (3, operands[0])
       || rtx_equal_p (operands[0], operands[3]))
   && (peep2_reg_dead_p (3, operands[2])
       || rtx_equal_p (operands[2], operands[3])))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2\n\
   && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 620 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_THUMB2
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 620 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_THUMB2
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && arm_arch3m && !arm_arch6)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1724 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m && !arm_arch6))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1724 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m && !arm_arch6))
    : -1 },
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V2SFmode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V2SFmode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V2SFmode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 283 "../../gcc/gcc/config/arm/ldmstm.md"
  { "TARGET_ARM && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 283 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 283 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 5)
    : -1 },
#line 692 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT &&\n\
   !(const_ok_for_arm (INTVAL (operands[2]))\n\
     || const_ok_for_arm (-INTVAL (operands[2])))\n\
    && const_ok_for_arm (~INTVAL (operands[2]))",
    __builtin_constant_p 
#line 692 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT &&
   !(const_ok_for_arm (INTVAL (operands[2]))
     || const_ok_for_arm (-INTVAL (operands[2])))
    && const_ok_for_arm (~INTVAL (operands[2])))
    ? (int) 
#line 692 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT &&
   !(const_ok_for_arm (INTVAL (operands[2]))
     || const_ok_for_arm (-INTVAL (operands[2])))
    && const_ok_for_arm (~INTVAL (operands[2])))
    : -1 },
#line 56 "../../gcc/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 56 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    ? (int) 
#line 56 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    : -1 },
#line 5205 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && satisfies_constraint_K (operands[1])",
    __builtin_constant_p 
#line 5205 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 && satisfies_constraint_K (operands[1]))
    ? (int) 
#line 5205 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 && satisfies_constraint_K (operands[1]))
    : -1 },
#line 1041 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && reload_completed",
    __builtin_constant_p 
#line 1041 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed)
    ? (int) 
#line 1041 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed)
    : -1 },
#line 7386 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT || TARGET_THUMB1",
    __builtin_constant_p 
#line 7386 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT || TARGET_THUMB1)
    ? (int) 
#line 7386 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT || TARGET_THUMB1)
    : -1 },
#line 629 "../../gcc/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && reload_completed\n\
   && arm_general_register_operand (operands[0], DFmode)",
    __builtin_constant_p 
#line 629 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && reload_completed
   && arm_general_register_operand (operands[0], DFmode))
    ? (int) 
#line 629 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && reload_completed
   && arm_general_register_operand (operands[0], DFmode))
    : -1 },
#line 630 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && flag_pic",
    __builtin_constant_p 
#line 630 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && flag_pic)
    ? (int) 
#line 630 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && flag_pic)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && ! TARGET_IWMMXT\n\
   && !(TARGET_HARD_FLOAT && TARGET_VFP)\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 170 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 170 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    : -1 },
#line 6995 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (GET_CODE (operands[4]) == EQ\n\
       || GET_CODE (operands[4]) == NE\n\
       || GET_CODE (operands[4]) == GE\n\
       || GET_CODE (operands[4]) == LT)",
    __builtin_constant_p 
#line 6995 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (GET_CODE (operands[4]) == EQ
       || GET_CODE (operands[4]) == NE
       || GET_CODE (operands[4]) == GE
       || GET_CODE (operands[4]) == LT))
    ? (int) 
#line 6995 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (GET_CODE (operands[4]) == EQ
       || GET_CODE (operands[4]) == NE
       || GET_CODE (operands[4]) == GE
       || GET_CODE (operands[4]) == LT))
    : -1 },
#line 3079 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && GET_CODE (operands[1]) == GET_CODE (operands[9])\n\
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6])",
    __builtin_constant_p 
#line 3079 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[1]) == GET_CODE (operands[9])
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6]))
    ? (int) 
#line 3079 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[1]) == GET_CODE (operands[9])
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6]))
    : -1 },
#line 5817 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && arm_arch4\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 5817 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 5817 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
#line 515 "../../gcc/gcc/config/arm/cirrus.md"
  { "TARGET_THUMB2\n\
   && TARGET_HARD_FLOAT && TARGET_MAVERICK\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 515 "../../gcc/gcc/config/arm/cirrus.md"
(TARGET_THUMB2
   && TARGET_HARD_FLOAT && TARGET_MAVERICK
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 515 "../../gcc/gcc/config/arm/cirrus.md"
(TARGET_THUMB2
   && TARGET_HARD_FLOAT && TARGET_MAVERICK
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 831 "../../gcc/gcc/config/arm/fpa.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA",
    __builtin_constant_p 
#line 831 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA)
    ? (int) 
#line 831 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA)
    : -1 },
#line 10492 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch5",
    __builtin_constant_p 
#line 10492 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5)
    ? (int) 
#line 10492 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5)
    : -1 },
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode))",
    __builtin_constant_p 
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode)))
    ? (int) 
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode)))
    : -1 },
#line 527 "../../gcc/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP",
    __builtin_constant_p 
#line 527 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP)
    ? (int) 
#line 527 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP)
    : -1 },
#line 1499 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch6 && optimize_size",
    __builtin_constant_p 
#line 1499 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6 && optimize_size)
    ? (int) 
#line 1499 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6 && optimize_size)
    : -1 },
#line 207 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V2DImode)\n\
       || register_operand (operands[1], V2DImode))",
    __builtin_constant_p 
#line 207 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    ? (int) 
#line 207 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    : -1 },
#line 207 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], TImode)\n\
       || register_operand (operands[1], TImode))",
    __builtin_constant_p 
#line 207 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode)))
    ? (int) 
#line 207 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode)))
    : -1 },
#line 3269 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !arm_eliminable_register (operands[1])",
    __builtin_constant_p 
#line 3269 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1]))
    ? (int) 
#line 3269 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1]))
    : -1 },
#line 592 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed\n\
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0])))",
    __builtin_constant_p 
#line 592 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0]))))
    ? (int) 
#line 592 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0]))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && !arm_arch6)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4290 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4290 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6))
    : -1 },
#line 1818 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_DSP_MULTIPLY",
    __builtin_constant_p 
#line 1818 "../../gcc/gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY)
    ? (int) 
#line 1818 "../../gcc/gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY)
    : -1 },
#line 1074 "../../gcc/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE",
    __builtin_constant_p 
#line 1074 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    ? (int) 
#line 1074 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    : -1 },
#line 5984 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 5984 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    ? (int) 
#line 5984 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    : -1 },
#line 567 "../../gcc/gcc/config/arm/ldmstm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 567 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 567 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 4)
    : -1 },
#line 640 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && USE_RETURN_INSN (FALSE)",
    __builtin_constant_p 
#line 640 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && USE_RETURN_INSN (FALSE))
    ? (int) 
#line 640 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && USE_RETURN_INSN (FALSE))
    : -1 },
  { "(flag_pic) && ( reload_completed)",
    __builtin_constant_p (
#line 5271 "../../gcc/gcc/config/arm/arm.md"
(flag_pic) && 
#line 5273 "../../gcc/gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 5271 "../../gcc/gcc/config/arm/arm.md"
(flag_pic) && 
#line 5273 "../../gcc/gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT\n\
   && (   register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode)))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5968 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5968 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    : -1 },
#line 274 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], CImode)\n\
       || register_operand (operands[1], CImode))",
    __builtin_constant_p 
#line 274 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode)))
    ? (int) 
#line 274 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode)))
    : -1 },
#line 2861 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !TARGET_IWMMXT && !TARGET_NEON",
    __builtin_constant_p 
#line 2861 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_IWMMXT && !TARGET_NEON)
    ? (int) 
#line 2861 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_IWMMXT && !TARGET_NEON)
    : -1 },
#line 7987 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && !arm_arch5 && (!CONSTANT_ADDRESS_P (XEXP (operands[1], 0)))",
    __builtin_constant_p 
#line 7987 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch5 && (!CONSTANT_ADDRESS_P (XEXP (operands[1], 0))))
    ? (int) 
#line 7987 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch5 && (!CONSTANT_ADDRESS_P (XEXP (operands[1], 0))))
    : -1 },
#line 594 "../../gcc/gcc/config/arm/fpa.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (register_operand (operands[0], XFmode)\n\
       || register_operand (operands[1], XFmode))",
    __builtin_constant_p 
#line 594 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA
   && (register_operand (operands[0], XFmode)
       || register_operand (operands[1], XFmode)))
    ? (int) 
#line 594 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA
   && (register_operand (operands[0], XFmode)
       || register_operand (operands[1], XFmode)))
    : -1 },
#line 10609 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_SOFT_TP",
    __builtin_constant_p 
#line 10609 "../../gcc/gcc/config/arm/arm.md"
(TARGET_SOFT_TP)
    ? (int) 
#line 10609 "../../gcc/gcc/config/arm/arm.md"
(TARGET_SOFT_TP)
    : -1 },
#line 329 "../../gcc/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 329 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    ? (int) 
#line 329 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    : -1 },
#line 2790 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && !(const_ok_for_arm (INTVAL (operands[2]))\n\
        || (TARGET_THUMB2 && const_ok_for_arm (~INTVAL (operands[2]))))",
    __builtin_constant_p 
#line 2790 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[2]) == CONST_INT
   && !(const_ok_for_arm (INTVAL (operands[2]))
        || (TARGET_THUMB2 && const_ok_for_arm (~INTVAL (operands[2])))))
    ? (int) 
#line 2790 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[2]) == CONST_INT
   && !(const_ok_for_arm (INTVAL (operands[2]))
        || (TARGET_THUMB2 && const_ok_for_arm (~INTVAL (operands[2])))))
    : -1 },
#line 274 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], EImode)\n\
       || register_operand (operands[1], EImode))",
    __builtin_constant_p 
#line 274 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], EImode)
       || register_operand (operands[1], EImode)))
    ? (int) 
#line 274 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], EImode)
       || register_operand (operands[1], EImode)))
    : -1 },
#line 158 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V2SImode)\n\
       || register_operand (operands[1], V2SImode))",
    __builtin_constant_p 
#line 158 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[1], V2SImode)))
    ? (int) 
#line 158 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[1], V2SImode)))
    : -1 },
#line 4145 "../../gcc/gcc/config/arm/arm.md"
  { "!TARGET_THUMB2 && !arm_arch6",
    __builtin_constant_p 
#line 4145 "../../gcc/gcc/config/arm/arm.md"
(!TARGET_THUMB2 && !arm_arch6)
    ? (int) 
#line 4145 "../../gcc/gcc/config/arm/arm.md"
(!TARGET_THUMB2 && !arm_arch6)
    : -1 },
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode))",
    __builtin_constant_p 
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode)))
    ? (int) 
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT\n\
   && TARGET_SOFT_FLOAT\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6143 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_SOFT_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6143 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_SOFT_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    : -1 },
#line 5157 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
  && (!(const_ok_for_arm (INTVAL (operands[1]))\n\
        || const_ok_for_arm (~INTVAL (operands[1]))))",
    __builtin_constant_p 
#line 5157 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (!(const_ok_for_arm (INTVAL (operands[1]))
        || const_ok_for_arm (~INTVAL (operands[1])))))
    ? (int) 
#line 5157 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (!(const_ok_for_arm (INTVAL (operands[1]))
        || const_ok_for_arm (~INTVAL (operands[1])))))
    : -1 },
#line 558 "../../gcc/gcc/config/arm/fpa.md"
  { "TARGET_ARM\n\
   && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 558 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 558 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode)))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 406 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 406 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    : -1 },
#line 870 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && peep2_reg_dead_p (3, operands[2])",
    __builtin_constant_p 
#line 870 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && peep2_reg_dead_p (3, operands[2]))
    ? (int) 
#line 870 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && peep2_reg_dead_p (3, operands[2]))
    : -1 },
#line 8013 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && !arm_arch5",
    __builtin_constant_p 
#line 8013 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 && !arm_arch5)
    ? (int) 
#line 8013 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 && !arm_arch5)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_HARD_TP)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 10598 "../../gcc/gcc/config/arm/arm.md"
(TARGET_HARD_TP))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 10598 "../../gcc/gcc/config/arm/arm.md"
(TARGET_HARD_TP))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 9831 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 9831 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && arm_arch4 && !arm_arch6)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4632 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4632 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && XVECLEN (operands[0], 0) == 5)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 283 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 5))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 283 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 5))
    : -1 },
#line 1062 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2",
    __builtin_constant_p 
#line 1062 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2)
    ? (int) 
#line 1062 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2)
    : -1 },
#line 8122 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && GET_CODE (operands[0]) == SYMBOL_REF",
    __builtin_constant_p 
#line 8122 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && GET_CODE (operands[0]) == SYMBOL_REF)
    ? (int) 
#line 8122 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && GET_CODE (operands[0]) == SYMBOL_REF)
    : -1 },
#line 1073 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !TARGET_NEON",
    __builtin_constant_p 
#line 1073 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_NEON)
    ? (int) 
#line 1073 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_NEON)
    : -1 },
#line 8192 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && USE_RETURN_INSN (TRUE)",
    __builtin_constant_p 
#line 8192 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (TRUE))
    ? (int) 
#line 8192 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (TRUE))
    : -1 },
#line 274 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], OImode)\n\
       || register_operand (operands[1], OImode))",
    __builtin_constant_p 
#line 274 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode)))
    ? (int) 
#line 274 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode)))
    : -1 },
#line 2285 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && !reg_overlap_mentioned_p (operands[0], operands[3])",
    __builtin_constant_p 
#line 2285 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && !reg_overlap_mentioned_p (operands[0], operands[3]))
    ? (int) 
#line 2285 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && !reg_overlap_mentioned_p (operands[0], operands[3]))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && arm_arch_hwdiv)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 797 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch_hwdiv))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 797 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch_hwdiv))
    : -1 },
#line 139 "../../gcc/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 139 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 139 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
#line 6128 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_EITHER\n\
   && reload_completed\n\
   && GET_CODE (operands[1]) == CONST_DOUBLE",
    __builtin_constant_p 
#line 6128 "../../gcc/gcc/config/arm/arm.md"
(TARGET_EITHER
   && reload_completed
   && GET_CODE (operands[1]) == CONST_DOUBLE)
    ? (int) 
#line 6128 "../../gcc/gcc/config/arm/arm.md"
(TARGET_EITHER
   && reload_completed
   && GET_CODE (operands[1]) == CONST_DOUBLE)
    : -1 },
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V4SFmode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4SFmode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4SFmode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 10703 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_EITHER && (arm_arch6 || !optimize_size)",
    __builtin_constant_p 
#line 10703 "../../gcc/gcc/config/arm/arm.md"
(TARGET_EITHER && (arm_arch6 || !optimize_size))
    ? (int) 
#line 10703 "../../gcc/gcc/config/arm/arm.md"
(TARGET_EITHER && (arm_arch6 || !optimize_size))
    : -1 },
#line 4988 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && !(TARGET_HARD_FLOAT && TARGET_MAVERICK)\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 4988 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && !(TARGET_HARD_FLOAT && TARGET_MAVERICK)
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 4988 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && !(TARGET_HARD_FLOAT && TARGET_MAVERICK)
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
#line 721 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && peep2_regno_dead_p(0, CC_REGNUM)\n\
   && (unsigned HOST_WIDE_INT) INTVAL(operands[1]) < 256",
    __builtin_constant_p 
#line 721 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_regno_dead_p(0, CC_REGNUM)
   && (unsigned HOST_WIDE_INT) INTVAL(operands[1]) < 256)
    ? (int) 
#line 721 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_regno_dead_p(0, CC_REGNUM)
   && (unsigned HOST_WIDE_INT) INTVAL(operands[1]) < 256)
    : -1 },
#line 6314 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FPA",
    __builtin_constant_p 
#line 6314 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FPA)
    ? (int) 
#line 6314 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FPA)
    : -1 },
#line 1082 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32)",
    __builtin_constant_p 
#line 1082 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32))
    ? (int) 
#line 1082 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32))
    : -1 },
#line 58 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V2DImode != V2SFmode && V2DImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode))",
    __builtin_constant_p 
#line 58 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2DImode != V2SFmode && V2DImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode)))
    ? (int) 
#line 58 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2DImode != V2SFmode && V2DImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode)))
    : -1 },
#line 10639 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && arm_arch6",
    __builtin_constant_p 
#line 10639 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 && arm_arch6)
    ? (int) 
#line 10639 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 && arm_arch6)
    : -1 },
#line 292 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && TARGET_SOFT_FLOAT",
    __builtin_constant_p 
#line 292 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_SOFT_FLOAT)
    ? (int) 
#line 292 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_SOFT_FLOAT)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && arm_arch4)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4593 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4593 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4))
    : -1 },
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V2SImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V2SImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V2SImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 10525 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch5e",
    __builtin_constant_p 
#line 10525 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5e)
    ? (int) 
#line 10525 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5e)
    : -1 },
#line 930 "../../gcc/gcc/config/arm/ldmstm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 3",
    __builtin_constant_p 
#line 930 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 3)
    ? (int) 
#line 930 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 3)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM\n\
   && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], DFmode)))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 558 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 558 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && XVECLEN (operands[0], 0) == 2)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1018 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 2))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1018 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 2))
    : -1 },
#line 7960 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch5",
    __builtin_constant_p 
#line 7960 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch5)
    ? (int) 
#line 7960 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch5)
    : -1 },
#line 4866 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !(TARGET_HARD_FLOAT && (TARGET_MAVERICK || TARGET_VFP))\n\
   && !TARGET_IWMMXT\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 4866 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !(TARGET_HARD_FLOAT && (TARGET_MAVERICK || TARGET_VFP))
   && !TARGET_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 4866 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !(TARGET_HARD_FLOAT && (TARGET_MAVERICK || TARGET_VFP))
   && !TARGET_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
#line 5171 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], SImode) \n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 5171 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SImode) 
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 5171 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SImode) 
       || register_operand (operands[1], SImode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 329 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 329 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    : -1 },
#line 207 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V16QImode)\n\
       || register_operand (operands[1], V16QImode))",
    __builtin_constant_p 
#line 207 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    ? (int) 
#line 207 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    : -1 },
#line 5528 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch4",
    __builtin_constant_p 
#line 5528 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch4)
    ? (int) 
#line 5528 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch4)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 56 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 56 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    : -1 },
#line 10550 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_EITHER",
    __builtin_constant_p 
#line 10550 "../../gcc/gcc/config/arm/arm.md"
(TARGET_EITHER)
    ? (int) 
#line 10550 "../../gcc/gcc/config/arm/arm.md"
(TARGET_EITHER)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && ! TARGET_IWMMXT\n\
   && !(TARGET_HARD_FLOAT && TARGET_VFP)\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5136 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5136 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    : -1 },
#line 30 "../../gcc/gcc/config/arm/sync.md"
  { "TARGET_HAVE_MEMORY_BARRIER",
    __builtin_constant_p 
#line 30 "../../gcc/gcc/config/arm/sync.md"
(TARGET_HAVE_MEMORY_BARRIER)
    ? (int) 
#line 30 "../../gcc/gcc/config/arm/sync.md"
(TARGET_HAVE_MEMORY_BARRIER)
    : -1 },
#line 7194 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_MAVERICK)",
    __builtin_constant_p 
#line 7194 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_MAVERICK))
    ? (int) 
#line 7194 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_MAVERICK))
    : -1 },
#line 2583 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed\n\
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0])))\n\
   && ! IS_IWMMXT_REGNUM (REGNO (operands[0]))",
    __builtin_constant_p 
#line 2583 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0])))
   && ! IS_IWMMXT_REGNUM (REGNO (operands[0])))
    ? (int) 
#line 2583 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0])))
   && ! IS_IWMMXT_REGNUM (REGNO (operands[0])))
    : -1 },
#line 4938 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_EITHER && reload_completed",
    __builtin_constant_p 
#line 4938 "../../gcc/gcc/config/arm/arm.md"
(TARGET_EITHER && reload_completed)
    ? (int) 
#line 4938 "../../gcc/gcc/config/arm/arm.md"
(TARGET_EITHER && reload_completed)
    : -1 },
#line 1018 "../../gcc/gcc/config/arm/ldmstm.md"
  { "TARGET_ARM && XVECLEN (operands[0], 0) == 2",
    __builtin_constant_p 
#line 1018 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 2)
    ? (int) 
#line 1018 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 2)
    : -1 },
#line 4893 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && reload_completed\n\
   && (arm_const_double_inline_cost (operands[1])\n\
       <= ((optimize_size || arm_ld_sched) ? 3 : 4))",
    __builtin_constant_p 
#line 4893 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && (arm_const_double_inline_cost (operands[1])
       <= ((optimize_size || arm_ld_sched) ? 3 : 4)))
    ? (int) 
#line 4893 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && (arm_const_double_inline_cost (operands[1])
       <= ((optimize_size || arm_ld_sched) ? 3 : 4)))
    : -1 },
#line 4061 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT ",
    __builtin_constant_p 
#line 4061 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT )
    ? (int) 
#line 4061 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT )
    : -1 },
#line 550 "../../gcc/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE",
    __builtin_constant_p 
#line 550 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    ? (int) 
#line 550 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    : -1 },
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode))",
    __builtin_constant_p 
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode)))
    ? (int) 
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode)))
    : -1 },
#line 911 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && optimize_size && peep2_regno_dead_p (0, CC_REGNUM)",
    __builtin_constant_p 
#line 911 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && peep2_regno_dead_p (0, CC_REGNUM))
    ? (int) 
#line 911 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && peep2_regno_dead_p (0, CC_REGNUM))
    : -1 },
#line 4622 "../../gcc/gcc/config/arm/arm.md"
  { "!arm_arch6",
    __builtin_constant_p 
#line 4622 "../../gcc/gcc/config/arm/arm.md"
(!arm_arch6)
    ? (int) 
#line 4622 "../../gcc/gcc/config/arm/arm.md"
(!arm_arch6)
    : -1 },
#line 4632 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch4 && !arm_arch6",
    __builtin_constant_p 
#line 4632 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6)
    ? (int) 
#line 4632 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 8484 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 8484 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM))
    : -1 },
#line 10171 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && reload_completed",
    __builtin_constant_p 
#line 10171 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed)
    ? (int) 
#line 10171 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FPA)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 522 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FPA))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 522 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FPA))
    : -1 },
#line 4290 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && !arm_arch6",
    __builtin_constant_p 
#line 4290 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6)
    ? (int) 
#line 4290 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6)
    : -1 },
#line 431 "../../gcc/gcc/config/arm/cirrus.md"
  { "TARGET_ARM\n\
   && TARGET_HARD_FLOAT && TARGET_MAVERICK\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 431 "../../gcc/gcc/config/arm/cirrus.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_MAVERICK
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 431 "../../gcc/gcc/config/arm/cirrus.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_MAVERICK
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 7532 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE",
    __builtin_constant_p 
#line 7532 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
    ? (int) 
#line 7532 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
    : -1 },
#line 7073 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (GET_CODE (operands[3]) == EQ\n\
       || GET_CODE (operands[3]) == NE\n\
       || GET_CODE (operands[3]) == GE\n\
       || GET_CODE (operands[3]) == LT)",
    __builtin_constant_p 
#line 7073 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (GET_CODE (operands[3]) == EQ
       || GET_CODE (operands[3]) == NE
       || GET_CODE (operands[3]) == GE
       || GET_CODE (operands[3]) == LT))
    ? (int) 
#line 7073 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (GET_CODE (operands[3]) == EQ
       || GET_CODE (operands[3]) == NE
       || GET_CODE (operands[3]) == GE
       || GET_CODE (operands[3]) == LT))
    : -1 },
#line 282 "../../gcc/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREXBHD && TARGET_HAVE_MEMORY_BARRIER",
    __builtin_constant_p 
#line 282 "../../gcc/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBHD && TARGET_HAVE_MEMORY_BARRIER)
    ? (int) 
#line 282 "../../gcc/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBHD && TARGET_HAVE_MEMORY_BARRIER)
    : -1 },
#line 670 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && reload_completed\n\
   && GET_CODE(operands[3]) != PLUS\n\
   && GET_CODE(operands[3]) != MINUS",
    __builtin_constant_p 
#line 670 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS)
    ? (int) 
#line 670 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS)
    : -1 },
#line 5389 "../../gcc/gcc/config/arm/arm.md"
  { "flag_pic",
    __builtin_constant_p 
#line 5389 "../../gcc/gcc/config/arm/arm.md"
(flag_pic)
    ? (int) 
#line 5389 "../../gcc/gcc/config/arm/arm.md"
(flag_pic)
    : -1 },
#line 3834 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FPA || TARGET_VFP)",
    __builtin_constant_p 
#line 3834 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FPA || TARGET_VFP))
    ? (int) 
#line 3834 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FPA || TARGET_VFP))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_INT_SIMD)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4661 "../../gcc/gcc/config/arm/arm.md"
(TARGET_INT_SIMD))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4661 "../../gcc/gcc/config/arm/arm.md"
(TARGET_INT_SIMD))
    : -1 },
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode))",
    __builtin_constant_p 
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode)))
    ? (int) 
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode)))
    : -1 },
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode))",
    __builtin_constant_p 
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode)))
    ? (int) 
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode)))
    : -1 },
#line 10508 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch_thumb2",
    __builtin_constant_p 
#line 10508 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2)
    ? (int) 
#line 10508 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 5)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 355 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 355 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5))
    : -1 },
#line 4593 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch4",
    __builtin_constant_p 
#line 4593 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4)
    ? (int) 
#line 4593 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4)
    : -1 },
#line 8081 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && GET_CODE (operands[1]) == SYMBOL_REF\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1]))",
    __builtin_constant_p 
#line 8081 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && GET_CODE (operands[1]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    ? (int) 
#line 8081 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && GET_CODE (operands[1]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && arm_arch6)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 10630 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 10630 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6))
    : -1 },
#line 750 "../../gcc/gcc/config/arm/ldmstm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 750 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 750 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4)
    : -1 },
#line 493 "../../gcc/gcc/config/arm/cirrus.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_MAVERICK\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 493 "../../gcc/gcc/config/arm/cirrus.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_MAVERICK
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 493 "../../gcc/gcc/config/arm/cirrus.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_MAVERICK
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 5382 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_VXWORKS_RTP && TARGET_ARM && flag_pic",
    __builtin_constant_p 
#line 5382 "../../gcc/gcc/config/arm/arm.md"
(TARGET_VXWORKS_RTP && TARGET_ARM && flag_pic)
    ? (int) 
#line 5382 "../../gcc/gcc/config/arm/arm.md"
(TARGET_VXWORKS_RTP && TARGET_ARM && flag_pic)
    : -1 },
#line 71 "../../gcc/gcc/config/arm/iwmmxt.md"
  { "TARGET_REALLY_IWMMXT\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 71 "../../gcc/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 71 "../../gcc/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_THUMB1) && ( reload_completed)",
    __builtin_constant_p (
#line 10581 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1) && 
#line 10583 "../../gcc/gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 10581 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1) && 
#line 10583 "../../gcc/gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 612 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && !flag_pic",
    __builtin_constant_p 
#line 612 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !flag_pic)
    ? (int) 
#line 612 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !flag_pic)
    : -1 },
#line 5136 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && ! TARGET_IWMMXT\n\
   && !(TARGET_HARD_FLOAT && TARGET_VFP)\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 5136 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 5136 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
  { "(TARGET_32BIT) && ( reload_completed)",
    __builtin_constant_p (
#line 8752 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 8754 "../../gcc/gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 8752 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 8754 "../../gcc/gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 6143 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && TARGET_SOFT_FLOAT\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 6143 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_SOFT_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 6143 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_SOFT_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 950 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && optimize_size",
    __builtin_constant_p 
#line 950 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size)
    ? (int) 
#line 950 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size)
    : -1 },
#line 1423 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !arm_arch6",
    __builtin_constant_p 
#line 1423 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6)
    ? (int) 
#line 1423 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 96 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 96 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    : -1 },
#line 2100 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && !(const_ok_for_arm (INTVAL (operands[2]))\n\
	|| const_ok_for_arm (~INTVAL (operands[2])))",
    __builtin_constant_p 
#line 2100 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[2]) == CONST_INT
   && !(const_ok_for_arm (INTVAL (operands[2]))
	|| const_ok_for_arm (~INTVAL (operands[2]))))
    ? (int) 
#line 2100 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[2]) == CONST_INT
   && !(const_ok_for_arm (INTVAL (operands[2]))
	|| const_ok_for_arm (~INTVAL (operands[2]))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && arm_arch6)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4647 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4647 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6))
    : -1 },
#line 5729 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 5729 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 5729 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
#line 2818 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && !const_ok_for_arm (INTVAL (operands[2]))\n\
   && const_ok_for_arm (~INTVAL (operands[2]))",
    __builtin_constant_p 
#line 2818 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM
   && !const_ok_for_arm (INTVAL (operands[2]))
   && const_ok_for_arm (~INTVAL (operands[2])))
    ? (int) 
#line 2818 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM
   && !const_ok_for_arm (INTVAL (operands[2]))
   && const_ok_for_arm (~INTVAL (operands[2])))
    : -1 },
#line 10534 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT",
    __builtin_constant_p 
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT)
    ? (int) 
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT)
    : -1 },
#line 10630 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch6",
    __builtin_constant_p 
#line 10630 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6)
    ? (int) 
#line 10630 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6)
    : -1 },
#line 688 "../../gcc/gcc/config/arm/ldmstm.md"
  { "TARGET_ARM && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 688 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 688 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 4)
    : -1 },
#line 207 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4SFmode)\n\
       || register_operand (operands[1], V4SFmode))",
    __builtin_constant_p 
#line 207 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    ? (int) 
#line 207 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    : -1 },
#line 531 "../../gcc/gcc/config/arm/fpa.md"
  { "TARGET_ARM\n\
   && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 531 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 531 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 686 "../../gcc/gcc/config/arm/fpa.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_FPA && reload_completed",
    __builtin_constant_p 
#line 686 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_FPA && reload_completed)
    ? (int) 
#line 686 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_FPA && reload_completed)
    : -1 },
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode))",
    __builtin_constant_p 
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode)))
    ? (int) 
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode)))
    : -1 },
#line 9019 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)\n\
       != CCmode)",
    __builtin_constant_p 
#line 9019 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)
       != CCmode))
    ? (int) 
#line 9019 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)
       != CCmode))
    : -1 },
#line 158 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4HImode)\n\
       || register_operand (operands[1], V4HImode))",
    __builtin_constant_p 
#line 158 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4HImode)
       || register_operand (operands[1], V4HImode)))
    ? (int) 
#line 158 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4HImode)
       || register_operand (operands[1], V4HImode)))
    : -1 },
#line 4351 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])\n\
       == (GET_MODE_MASK (GET_MODE (operands[5]))\n\
           & (GET_MODE_MASK (GET_MODE (operands[5]))\n\
	      << (INTVAL (operands[2])))))",
    __builtin_constant_p 
#line 4351 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       == (GET_MODE_MASK (GET_MODE (operands[5]))
           & (GET_MODE_MASK (GET_MODE (operands[5]))
	      << (INTVAL (operands[2]))))))
    ? (int) 
#line 4351 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       == (GET_MODE_MASK (GET_MODE (operands[5]))
           & (GET_MODE_MASK (GET_MODE (operands[5]))
	      << (INTVAL (operands[2]))))))
    : -1 },
#line 4661 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_INT_SIMD",
    __builtin_constant_p 
#line 4661 "../../gcc/gcc/config/arm/arm.md"
(TARGET_INT_SIMD)
    ? (int) 
#line 4661 "../../gcc/gcc/config/arm/arm.md"
(TARGET_INT_SIMD)
    : -1 },
#line 573 "../../gcc/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE",
    __builtin_constant_p 
#line 573 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    ? (int) 
#line 573 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    : -1 },
#line 278 "../../gcc/gcc/config/arm/cirrus.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK && 0",
    __builtin_constant_p 
#line 278 "../../gcc/gcc/config/arm/cirrus.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK && 0)
    ? (int) 
#line 278 "../../gcc/gcc/config/arm/cirrus.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK && 0)
    : -1 },
#line 924 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && optimize_size && reload_completed",
    __builtin_constant_p 
#line 924 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed)
    ? (int) 
#line 924 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 3)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1083 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1083 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3))
    : -1 },
#line 716 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && GET_CODE (operands[2]) == CONST_INT\n\
   && !(const_ok_for_arm (INTVAL (operands[2]))\n\
        || const_ok_for_arm (-INTVAL (operands[2])))\n\
   && (reload_completed || !arm_eliminable_register (operands[1]))",
    __builtin_constant_p 
#line 716 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[2]) == CONST_INT
   && !(const_ok_for_arm (INTVAL (operands[2]))
        || const_ok_for_arm (-INTVAL (operands[2])))
   && (reload_completed || !arm_eliminable_register (operands[1])))
    ? (int) 
#line 716 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[2]) == CONST_INT
   && !(const_ok_for_arm (INTVAL (operands[2]))
        || const_ok_for_arm (-INTVAL (operands[2])))
   && (reload_completed || !arm_eliminable_register (operands[1])))
    : -1 },
  { "(TARGET_THUMB2) && ( reload_completed)",
    __builtin_constant_p (
#line 653 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2) && 
#line 655 "../../gcc/gcc/config/arm/thumb2.md"
( reload_completed))
    ? (int) (
#line 653 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2) && 
#line 655 "../../gcc/gcc/config/arm/thumb2.md"
( reload_completed))
    : -1 },
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V8QImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V8QImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V8QImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V4SImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4SImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4SImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 5305 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && flag_pic",
    __builtin_constant_p 
#line 5305 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 && flag_pic)
    ? (int) 
#line 5305 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 && flag_pic)
    : -1 },
#line 2612 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && reload_completed\n\
   && operands[0] != operands[1]",
    __builtin_constant_p 
#line 2612 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && operands[0] != operands[1])
    ? (int) 
#line 2612 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && operands[0] != operands[1])
    : -1 },
#line 351 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON && reload_completed",
    __builtin_constant_p 
#line 351 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed)
    ? (int) 
#line 351 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed)
    : -1 },
#line 867 "../../gcc/gcc/config/arm/ldmstm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 2",
    __builtin_constant_p 
#line 867 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 2)
    ? (int) 
#line 867 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 2)
    : -1 },
#line 8135 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && GET_CODE (operands[1]) == SYMBOL_REF",
    __builtin_constant_p 
#line 8135 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && GET_CODE (operands[1]) == SYMBOL_REF)
    ? (int) 
#line 8135 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && GET_CODE (operands[1]) == SYMBOL_REF)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1126 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1126 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && optimize_size && reload_completed)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 924 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 924 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed))
    : -1 },
#line 4968 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_LDRD\n\
  && reg_overlap_mentioned_p (operands[0], operands[1])\n\
  && reg_overlap_mentioned_p (operands[0], operands[2])",
    __builtin_constant_p 
#line 4968 "../../gcc/gcc/config/arm/arm.md"
(TARGET_LDRD
  && reg_overlap_mentioned_p (operands[0], operands[1])
  && reg_overlap_mentioned_p (operands[0], operands[2]))
    ? (int) 
#line 4968 "../../gcc/gcc/config/arm/arm.md"
(TARGET_LDRD
  && reg_overlap_mentioned_p (operands[0], operands[1])
  && reg_overlap_mentioned_p (operands[0], operands[2]))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 4)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 750 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 750 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4))
    : -1 },
#line 1517 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON && (!false || flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 1517 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON && (!false || flag_unsafe_math_optimizations))
    ? (int) 
#line 1517 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON && (!false || flag_unsafe_math_optimizations))
    : -1 },
#line 818 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && peep2_reg_dead_p (1, operands[1])\n\
   && satisfies_constraint_Pw (operands[2])",
    __builtin_constant_p 
#line 818 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_reg_dead_p (1, operands[1])
   && satisfies_constraint_Pw (operands[2]))
    ? (int) 
#line 818 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_reg_dead_p (1, operands[1])
   && satisfies_constraint_Pw (operands[2]))
    : -1 },
#line 649 "../../gcc/gcc/config/arm/fpa.md"
  { "TARGET_THUMB2\n\
   && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 649 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_THUMB2
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 649 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_THUMB2
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 275 "../../gcc/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16 && !TARGET_NEON_FP16\n\
   && (   s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 275 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16 && !TARGET_NEON_FP16
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 275 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16 && !TARGET_NEON_FP16
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 7751 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && TARGET_SOFT_FLOAT",
    __builtin_constant_p 
#line 7751 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && TARGET_SOFT_FLOAT)
    ? (int) 
#line 7751 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && TARGET_SOFT_FLOAT)
    : -1 },
  { "(TARGET_ARM) && ( reload_completed)",
    __builtin_constant_p (
#line 10566 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM) && 
#line 10568 "../../gcc/gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 10566 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM) && 
#line 10568 "../../gcc/gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode))",
    __builtin_constant_p 
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode)))
    ? (int) 
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode)))
    : -1 },
#line 2392 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM || arm_arch_thumb2",
    __builtin_constant_p 
#line 2392 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM || arm_arch_thumb2)
    ? (int) 
#line 2392 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM || arm_arch_thumb2)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16)\n\
   && (	  s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode)))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6025 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16)
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6025 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16)
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))))
    : -1 },
#line 9950 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM",
    __builtin_constant_p 
#line 9950 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM)
    ? (int) 
#line 9950 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM)
    : -1 },
#line 9831 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])",
    __builtin_constant_p 
#line 9831 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))
    ? (int) 
#line 9831 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (register_operand (operands[0], XFmode)\n\
       || register_operand (operands[1], XFmode)))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 594 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA
   && (register_operand (operands[0], XFmode)
       || register_operand (operands[1], XFmode))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 594 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_FPA
   && (register_operand (operands[0], XFmode)
       || register_operand (operands[1], XFmode))))
    : -1 },
#line 620 "../../gcc/gcc/config/arm/fpa.md"
  { "TARGET_THUMB2\n\
   && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 620 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_THUMB2
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 620 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_THUMB2
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode))",
    __builtin_constant_p 
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode)))
    ? (int) 
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode)))
    : -1 },
#line 9075 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)\n\
       != CCmode)",
    __builtin_constant_p 
#line 9075 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    ? (int) 
#line 9075 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    : -1 },
#line 843 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && INTVAL (operands[2]) == -INTVAL (operands[3])",
    __builtin_constant_p 
#line 843 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && INTVAL (operands[2]) == -INTVAL (operands[3]))
    ? (int) 
#line 843 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && INTVAL (operands[2]) == -INTVAL (operands[3]))
    : -1 },
#line 5968 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (   register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 5968 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    ? (int) 
#line 5968 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    : -1 },
#line 10598 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_HARD_TP",
    __builtin_constant_p 
#line 10598 "../../gcc/gcc/config/arm/arm.md"
(TARGET_HARD_TP)
    ? (int) 
#line 10598 "../../gcc/gcc/config/arm/arm.md"
(TARGET_HARD_TP)
    : -1 },
#line 9079 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && reload_completed\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)\n\
       != CCmode)",
    __builtin_constant_p 
#line 9079 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    ? (int) 
#line 9079 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    : -1 },
#line 6070 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (	  s_register_operand (operands[0], HFmode) \n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 6070 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (	  s_register_operand (operands[0], HFmode) 
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 6070 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (	  s_register_operand (operands[0], HFmode) 
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 207 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4SImode)\n\
       || register_operand (operands[1], V4SImode))",
    __builtin_constant_p 
#line 207 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    ? (int) 
#line 207 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    : -1 },
#line 2252 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32\n\
       && INTVAL (operands[2]) > 0 \n\
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8\n\
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])",
    __builtin_constant_p 
#line 2252 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)
   && !reg_overlap_mentioned_p (operands[0], operands[4]))
    ? (int) 
#line 2252 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)
   && !reg_overlap_mentioned_p (operands[0], operands[4]))
    : -1 },
#line 504 "../../gcc/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP",
    __builtin_constant_p 
#line 504 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP)
    ? (int) 
#line 504 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP)
    : -1 },
#line 7682 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 7682 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT)
    ? (int) 
#line 7682 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT)
    : -1 },
#line 365 "../../gcc/gcc/config/arm/cirrus.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK",
    __builtin_constant_p 
#line 365 "../../gcc/gcc/config/arm/cirrus.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK)
    ? (int) 
#line 365 "../../gcc/gcc/config/arm/cirrus.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && reload_completed)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1041 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1041 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed))
    : -1 },
#line 4922 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && reload_completed\n\
   && arm_const_double_by_parts (operands[1])",
    __builtin_constant_p 
#line 4922 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed
   && arm_const_double_by_parts (operands[1]))
    ? (int) 
#line 4922 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed
   && arm_const_double_by_parts (operands[1]))
    : -1 },
#line 6277 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 6277 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 6277 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 7708 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FPA || TARGET_VFP_DOUBLE)",
    __builtin_constant_p 
#line 7708 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FPA || TARGET_VFP_DOUBLE))
    ? (int) 
#line 7708 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FPA || TARGET_VFP_DOUBLE))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && arm_arch6)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 591 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 591 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6))
    : -1 },
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode))",
    __builtin_constant_p 
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode)))
    ? (int) 
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode)))
    : -1 },
#line 377 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 377 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 377 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON && !BYTES_BIG_ENDIAN)
    : -1 },
  { "(TARGET_THUMB1) && ( reload_completed && CONST_INT_P (operands[2])\n\
   && ((operands[1] != stack_pointer_rtx\n\
        && (INTVAL (operands[2]) > 255 || INTVAL (operands[2]) < -255))\n\
       || (operands[1] == stack_pointer_rtx\n\
 	   && INTVAL (operands[2]) > 1020)))",
    __builtin_constant_p (
#line 736 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1) && 
#line 757 "../../gcc/gcc/config/arm/arm.md"
( reload_completed && CONST_INT_P (operands[2])
   && ((operands[1] != stack_pointer_rtx
        && (INTVAL (operands[2]) > 255 || INTVAL (operands[2]) < -255))
       || (operands[1] == stack_pointer_rtx
 	   && INTVAL (operands[2]) > 1020))))
    ? (int) (
#line 736 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1) && 
#line 757 "../../gcc/gcc/config/arm/arm.md"
( reload_completed && CONST_INT_P (operands[2])
   && ((operands[1] != stack_pointer_rtx
        && (INTVAL (operands[2]) > 255 || INTVAL (operands[2]) < -255))
       || (operands[1] == stack_pointer_rtx
 	   && INTVAL (operands[2]) > 1020))))
    : -1 },
#line 7971 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && !arm_arch5",
    __builtin_constant_p 
#line 7971 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch5)
    ? (int) 
#line 7971 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch5)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 2)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1070 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1070 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2))
    : -1 },
  { "(TARGET_32BIT) && (arm_arch_thumb2)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 10621 "../../gcc/gcc/config/arm/arm.md"
(arm_arch_thumb2))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 10621 "../../gcc/gcc/config/arm/arm.md"
(arm_arch_thumb2))
    : -1 },
#line 591 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && arm_arch6",
    __builtin_constant_p 
#line 591 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6)
    ? (int) 
#line 591 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && XVECLEN (operands[0], 0) == 4)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 688 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 4))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 688 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 4))
    : -1 },
#line 1951 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && operands[0] != operands[1] && reload_completed",
    __builtin_constant_p 
#line 1951 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && operands[0] != operands[1] && reload_completed)
    ? (int) 
#line 1951 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && operands[0] != operands[1] && reload_completed)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && USE_RETURN_INSN (FALSE))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 8150 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE)))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 8150 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE)))
    : -1 },
#line 3848 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed",
    __builtin_constant_p 
#line 3848 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed)
    ? (int) 
#line 3848 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed)
    : -1 },
#line 158 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V8QImode)\n\
       || register_operand (operands[1], V8QImode))",
    __builtin_constant_p 
#line 158 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8QImode)
       || register_operand (operands[1], V8QImode)))
    ? (int) 
#line 158 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8QImode)
       || register_operand (operands[1], V8QImode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM\n\
   && arm_arch4\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode)))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5817 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5817 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    : -1 },
#line 5292 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && flag_pic",
    __builtin_constant_p 
#line 5292 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && flag_pic)
    ? (int) 
#line 5292 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && flag_pic)
    : -1 },
#line 1117 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 1117 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON && flag_unsafe_math_optimizations)
    ? (int) 
#line 1117 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON && flag_unsafe_math_optimizations)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_NEON)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 2752 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 2752 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON))
    : -1 },
#line 9968 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && (((unsigned HOST_WIDE_INT) INTVAL (operands[1]))\n\
       == (((unsigned HOST_WIDE_INT) INTVAL (operands[1])) >> 24) << 24)",
    __builtin_constant_p 
#line 9968 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM
   && (((unsigned HOST_WIDE_INT) INTVAL (operands[1]))
       == (((unsigned HOST_WIDE_INT) INTVAL (operands[1])) >> 24) << 24))
    ? (int) 
#line 9968 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM
   && (((unsigned HOST_WIDE_INT) INTVAL (operands[1]))
       == (((unsigned HOST_WIDE_INT) INTVAL (operands[1])) >> 24) << 24))
    : -1 },
#line 406 "../../gcc/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 406 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 406 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 1110 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && (INTVAL (operands[2]) > 0 && INTVAL (operands[2]) < 32)",
    __builtin_constant_p 
#line 1110 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (INTVAL (operands[2]) > 0 && INTVAL (operands[2]) < 32))
    ? (int) 
#line 1110 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (INTVAL (operands[2]) > 0 && INTVAL (operands[2]) < 32))
    : -1 },
#line 8067 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && GET_CODE (operands[0]) == SYMBOL_REF\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0]))",
    __builtin_constant_p 
#line 8067 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && GET_CODE (operands[0]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    ? (int) 
#line 8067 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && GET_CODE (operands[0]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    : -1 },
#line 207 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V8HImode)\n\
       || register_operand (operands[1], V8HImode))",
    __builtin_constant_p 
#line 207 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    ? (int) 
#line 207 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    : -1 },
#line 274 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], XImode)\n\
       || register_operand (operands[1], XImode))",
    __builtin_constant_p 
#line 274 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode)))
    ? (int) 
#line 274 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode)))
    : -1 },
#line 1724 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch3m && !arm_arch6",
    __builtin_constant_p 
#line 1724 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m && !arm_arch6)
    ? (int) 
#line 1724 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m && !arm_arch6)
    : -1 },
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode))",
    __builtin_constant_p 
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode)))
    ? (int) 
#line 97 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && !arm_arch6)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1423 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1423 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6))
    : -1 },
#line 151 "../../gcc/gcc/config/arm/cirrus.md"
  { "0 && TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK",
    __builtin_constant_p 
#line 151 "../../gcc/gcc/config/arm/cirrus.md"
(0 && TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK)
    ? (int) 
#line 151 "../../gcc/gcc/config/arm/cirrus.md"
(0 && TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_MAVERICK)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && arm_arch_thumb2)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 10500 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 10500 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1102 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1102 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && reload_completed\n\
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)\n\
       || REG_P(operands[2])))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 705 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P(operands[2]))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 705 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P(operands[2]))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 909 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 909 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode)))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 139 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 139 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    : -1 },
#line 4325 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && (GET_CODE (operands[1]) != MEM) && ! BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 4325 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && (GET_CODE (operands[1]) != MEM) && ! BYTES_BIG_ENDIAN)
    ? (int) 
#line 4325 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && (GET_CODE (operands[1]) != MEM) && ! BYTES_BIG_ENDIAN)
    : -1 },
#line 6476 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 || TARGET_32BIT",
    __builtin_constant_p 
#line 6476 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 || TARGET_32BIT)
    ? (int) 
#line 6476 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 || TARGET_32BIT)
    : -1 },
#line 26 "../../gcc/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode))",
    __builtin_constant_p 
#line 26 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode)))
    ? (int) 
#line 26 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode)))
    : -1 },
#line 1711 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch3m",
    __builtin_constant_p 
#line 1711 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m)
    ? (int) 
#line 1711 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m)
    : -1 },
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V16QImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V16QImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "../../gcc/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V16QImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_DSP_MULTIPLY)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1818 "../../gcc/gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1818 "../../gcc/gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY))
    : -1 },
#line 220 "../../gcc/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_NEON_FP16\n\
   && (   s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 220 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_NEON_FP16
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 220 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_NEON_FP16
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 4267 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && !arm_arch6",
    __builtin_constant_p 
#line 4267 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 && !arm_arch6)
    ? (int) 
#line 4267 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 && !arm_arch6)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && XVECLEN (operands[0], 0) == 3)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1031 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 3))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1031 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 3))
    : -1 },
#line 9137 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)\n\
       == CCmode)",
    __builtin_constant_p 
#line 9137 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       == CCmode))
    ? (int) 
#line 9137 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       == CCmode))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1062 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1062 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2))
    : -1 },
#line 355 "../../gcc/gcc/config/arm/ldmstm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 355 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 355 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5)
    : -1 },
#line 5468 "../../gcc/gcc/config/arm/neon.md"
  { "TARGET_NEON",
    __builtin_constant_p 
#line 5468 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON)
    ? (int) 
#line 5468 "../../gcc/gcc/config/arm/neon.md"
(TARGET_NEON)
    : -1 },
#line 788 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[1])) < 1024\n\
   && (INTVAL (operands[1]) & 3) == 0",
    __builtin_constant_p 
#line 788 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[1])) < 1024
   && (INTVAL (operands[1]) & 3) == 0)
    ? (int) 
#line 788 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[1])) < 1024
   && (INTVAL (operands[1]) & 3) == 0)
    : -1 },
#line 10464 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1",
    __builtin_constant_p 
#line 10464 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1)
    ? (int) 
#line 10464 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1)
    : -1 },
#line 1044 "../../gcc/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP",
    __builtin_constant_p 
#line 1044 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP)
    ? (int) 
#line 1044 "../../gcc/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP)
    : -1 },
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode))",
    __builtin_constant_p 
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode)))
    ? (int) 
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode)))
    : -1 },
#line 26 "../../gcc/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode))",
    __builtin_constant_p 
#line 26 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode)))
    ? (int) 
#line 26 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode)))
    : -1 },
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode))",
    __builtin_constant_p 
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode)))
    ? (int) 
#line 107 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode)))
    : -1 },
#line 6163 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], SFmode) \n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 6163 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SFmode) 
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 6163 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SFmode) 
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 1183 "../../gcc/gcc/config/arm/ldmstm.md"
  { "(((operands[6] == operands[0] && operands[7] == operands[1])\n\
     || (operands[7] == operands[0] && operands[6] == operands[1]))\n\
    && peep2_reg_dead_p (3, operands[0]) && peep2_reg_dead_p (3, operands[1]))",
    __builtin_constant_p 
#line 1183 "../../gcc/gcc/config/arm/ldmstm.md"
((((operands[6] == operands[0] && operands[7] == operands[1])
     || (operands[7] == operands[0] && operands[6] == operands[1]))
    && peep2_reg_dead_p (3, operands[0]) && peep2_reg_dead_p (3, operands[1])))
    ? (int) 
#line 1183 "../../gcc/gcc/config/arm/ldmstm.md"
((((operands[6] == operands[0] && operands[7] == operands[1])
     || (operands[7] == operands[0] && operands[6] == operands[1]))
    && peep2_reg_dead_p (3, operands[0]) && peep2_reg_dead_p (3, operands[1])))
    : -1 },
#line 1028 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && peep2_regno_dead_p(0, CC_REGNUM)",
    __builtin_constant_p 
#line 1028 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_regno_dead_p(0, CC_REGNUM))
    ? (int) 
#line 1028 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_regno_dead_p(0, CC_REGNUM))
    : -1 },
#line 4647 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch6",
    __builtin_constant_p 
#line 4647 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6)
    ? (int) 
#line 4647 "../../gcc/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6)
    : -1 },
#line 705 "../../gcc/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && reload_completed\n\
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)\n\
       || REG_P(operands[2]))",
    __builtin_constant_p 
#line 705 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P(operands[2])))
    ? (int) 
#line 705 "../../gcc/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P(operands[2])))
    : -1 },
#line 373 "../../gcc/gcc/config/arm/cirrus.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_MAVERICK",
    __builtin_constant_p 
#line 373 "../../gcc/gcc/config/arm/cirrus.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_MAVERICK)
    ? (int) 
#line 373 "../../gcc/gcc/config/arm/cirrus.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_MAVERICK)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && !TARGET_IWMMXT && !TARGET_NEON)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 2861 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_IWMMXT && !TARGET_NEON))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 2861 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_IWMMXT && !TARGET_NEON))
    : -1 },
#line 1031 "../../gcc/gcc/config/arm/ldmstm.md"
  { "TARGET_ARM && XVECLEN (operands[0], 0) == 3",
    __builtin_constant_p 
#line 1031 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 3)
    ? (int) 
#line 1031 "../../gcc/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 3)
    : -1 },
#line 8001 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && arm_arch5",
    __builtin_constant_p 
#line 8001 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 && arm_arch5)
    ? (int) 
#line 8001 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB1 && arm_arch5)
    : -1 },
#line 461 "../../gcc/gcc/config/arm/cirrus.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_MAVERICK",
    __builtin_constant_p 
#line 461 "../../gcc/gcc/config/arm/cirrus.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_MAVERICK)
    ? (int) 
#line 461 "../../gcc/gcc/config/arm/cirrus.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_MAVERICK)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_REALLY_IWMMXT)",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1329 "../../gcc/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1329 "../../gcc/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT))
    : -1 },
#line 10696 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_THUMB",
    __builtin_constant_p 
#line 10696 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB)
    ? (int) 
#line 10696 "../../gcc/gcc/config/arm/arm.md"
(TARGET_THUMB)
    : -1 },
#line 26 "../../gcc/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode))",
    __builtin_constant_p 
#line 26 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode)))
    ? (int) 
#line 26 "../../gcc/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode)))
    : -1 },
#line 6249 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_SOFT_FLOAT\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 6249 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_SOFT_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 6249 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_SOFT_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 409 "../../gcc/gcc/config/arm/cirrus.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_MAVERICK\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 409 "../../gcc/gcc/config/arm/cirrus.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_MAVERICK
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 409 "../../gcc/gcc/config/arm/cirrus.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_MAVERICK
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 8052 "../../gcc/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (GET_CODE (operands[1]) == SYMBOL_REF)\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1]))",
    __builtin_constant_p 
#line 8052 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (GET_CODE (operands[1]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    ? (int) 
#line 8052 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (GET_CODE (operands[1]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM\n\
   && TARGET_HARD_FLOAT && TARGET_FPA\n\
   && (GET_CODE (operands[0]) != MEM\n\
       || register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 531 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    ? (int) (
#line 10534 "../../gcc/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 531 "../../gcc/gcc/config/arm/fpa.md"
(TARGET_ARM
   && TARGET_HARD_FLOAT && TARGET_FPA
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    : -1 },
#line 252 "../../gcc/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER",
    __builtin_constant_p 
#line 252 "../../gcc/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
    ? (int) 
#line 252 "../../gcc/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
