/*
 * File: Scientific_Calculator.h
 *
 * Code generated for Simulink model 'Scientific_Calculator'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:55:16 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Scientific_Calculator_h_
#define RTW_HEADER_Scientific_Calculator_h_
#include <string.h>
#include <stddef.h>
#ifndef Scientific_Calculator_COMMON_INCLUDES_
# define Scientific_Calculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Scientific_Calculator_COMMON_INCLUDES_ */

#include "Scientific_Calculator_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  uint8_T Operand_1;                   /* '<Root>/Operand_1' */
  uint8_T Operand_2;                   /* '<Root>/Operand_2' */
} ExtU_Scientific_Calculator_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  uint8_T AND_Out;                     /* '<Root>/AND_Out' */
  uint8_T NAND_Out;                    /* '<Root>/NAND_Out' */
  uint8_T OR_Out;                      /* '<Root>/OR_Out' */
  uint8_T NOR_Out;                     /* '<Root>/NOR_Out' */
  uint8_T XOR_Out;                     /* '<Root>/XOR_Out' */
  uint8_T XNOR_Out;                    /* '<Root>/XNOR_Out' */
  uint8_T NOT_Out;                     /* '<Root>/NOT_Out' */
} ExtY_Scientific_Calculator_T;

/* Real-time Model Data Structure */
struct tag_RTM_Scientific_Calculator_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_Scientific_Calculator_T Scientific_Calculator_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Scientific_Calculator_T Scientific_Calculator_Y;

/* Model entry point functions */
extern void Scientific_Calculator_initialize(void);
extern void Scientific_Calculator_step(void);
extern void Scientific_Calculator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Scientific_Calculato_T *const Scientific_Calculator_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Scientific_Calculator'
 * '<S1>'   : 'Scientific_Calculator/Scientifc Calculator'
 */
#endif                                 /* RTW_HEADER_Scientific_Calculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
