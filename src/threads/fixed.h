#ifndef __THREAD_FIXED_POINT_H
#define __THREAD_FIXED_POINT_H

/* Basic definitions of fixed point. */
typedef int float_t;
/* 16 LSB used for fractional part. */
#define FP_SHIFT 16
/* Convert a value to fixed-point value. */
#define FP_CONST(A) ((float_t)(A << FP_SHIFT))
/* Add two fixed-point value. */
#define FP_ADD(A,B) (A + B)
/* Add a fixed-point value A and an int value B. */
#define FP_ADD_MIX(A,B) (A + (B << FP_SHIFT))
/* Substract two fixed-point value. */
#define FP_SUB(A,B) (A - B)
/* Substract an int value B from a fixed-point value A */
#define FP_SUB_MIX(A,B) (A - (B << FP_SHIFT))
/* Multiply a fixed-point value A by an int value B. */
#define FP_MULT_MIX(A,B) (A * B)
/* Divide a fixed-point value A by an int value B. */
#define FP_DIV_MIX(A,B) (A / B)
/* Multiply two fixed-point value. */
#define FP_MULT(A,B) ((float_t)(((int64_t) A) * B >> FP_SHIFT))
/* Divide two fixed-point value. */
#define FP_DIV(A,B) ((float_t)((((int64_t) A) << FP_SHIFT) / B))
/* Get integer part of a fixed-point value. */
#define FP_INT_PART(A) (A >> FP_SHIFT)
/* Get rounded integer of a fixed-point value. */
#define FP_ROUND(A) (A >= 0 ? ((A + (1 << (FP_SHIFT - 1))) >> FP_SHIFT) \
        : ((A - (1 << (FP_SHIFT - 1))) >> FP_SHIFT))

#endif /*threads/fixed.h*/
