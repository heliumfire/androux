/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../gcc/gcc/config/arm/arm.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_j (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (
#line 72 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_arch_thumb2)) && ((GET_CODE (op) == HIGH) || ((GET_CODE (op) == CONST_INT) && (
#line 75 "../../gcc/gcc/config/arm/constraints.md"
((ival & 0xffff0000) == 0))));
}
static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 92 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (ival)
		   : ival >= 0 && ival <= 255));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 99 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT ? (ival >= -4095 && ival <= 4095)
		   : (ival >= -255 && ival <= -1)));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 107 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (~ival)
		   : thumb_shiftable_const (ival)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 114 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (-ival)
		   : (ival >= -7 && ival <= 7)));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 123 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT ? ((ival >= 0 && ival <= 32)
				 || (((ival & (ival - 1)) & 0xFFFFFFFF) == 0))
		   : ival >= 0 && ival <= 1020 && (ival & 3) == 0));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 130 "../../gcc/gcc/config/arm/constraints.md"
(!TARGET_32BIT && (ival >= 0 && ival <= 31)));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 136 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -508 && ival <= 508
		   && ((ival & 3) == 0)));
}
static inline bool
satisfies_constraint_Pa (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 142 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -510 && ival <= 510
		    && (ival > 255 || ival < -255)));
}
static inline bool
satisfies_constraint_Pb (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 148 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -262 && ival <= 262
		    && (ival > 255 || ival < -255)));
}
static inline bool
satisfies_constraint_Pc (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 154 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_THUMB1
  		    && ival > 1020 && ival <= 1275));
}
static inline bool
satisfies_constraint_Pd (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 160 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= 0 && ival <= 7));
}
static inline bool
satisfies_constraint_Ps (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 165 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= 255));
}
static inline bool
satisfies_constraint_Pt (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 170 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -7 && ival <= 7));
}
static inline bool
satisfies_constraint_Pu (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 175 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= 1 && ival <= 8));
}
static inline bool
satisfies_constraint_Pv (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 180 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= 0));
}
static inline bool
satisfies_constraint_Pw (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 185 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= -1));
}
static inline bool
satisfies_constraint_Px (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 190 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -7 && ival <= -1));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 195 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_H (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 200 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT && neg_const_double_rtx_ok_for_fpa (op)));
}
static inline bool
satisfies_constraint_Dz (rtx op)
{
  enum machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 206 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_NEON && op == CONST0_RTX (mode)));
}
static inline bool
satisfies_constraint_Da (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 213 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 2);
}
static inline bool
satisfies_constraint_Db (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 220 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 3);
}
static inline bool
satisfies_constraint_Dc (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 228 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 4
		   && !(optimize_size || arm_ld_sched));
}
static inline bool
satisfies_constraint_Di (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
      break;
    default:
      return false;
    }
  return 
#line 236 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_by_immediates (op));
}
static inline bool
satisfies_constraint_Dn (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 243 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_mov_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_Dl (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 251 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_logic_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_DL (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 259 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_inv_logic_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_Dv (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 267 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT && vfp3_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_Dy (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 274 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT && TARGET_VFP_DOUBLE && vfp3_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_Ut (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 281 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_struct_mem_operand (op)));
}
static inline bool
satisfies_constraint_Uv (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 287 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_coproc_mem_operand (op, FALSE)));
}
static inline bool
satisfies_constraint_Uy (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 293 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_coproc_mem_operand (op, TRUE)));
}
static inline bool
satisfies_constraint_Un (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 300 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 0)));
}
static inline bool
satisfies_constraint_Um (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 307 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 2)));
}
static inline bool
satisfies_constraint_Us (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 314 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 1)));
}
static inline bool
satisfies_constraint_Uq (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 320 "../../gcc/gcc/config/arm/constraints.md"
(TARGET_ARM
		   && arm_legitimate_address_outer_p (GET_MODE (op), XEXP (op, 0),
						      SIGN_EXTEND, 0)));
}
static inline bool
satisfies_constraint_Q (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 328 "../../gcc/gcc/config/arm/constraints.md"
(REG_P (XEXP (op, 0))));
}
#endif /* tm-constrs.h */
