/*
 * File: factMatWhile.h
 *
 * Code generated for Simulink model 'factMatWhile'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:17:31 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_factMatWhile_h_
#define RTW_HEADER_factMatWhile_h_
#include <string.h>
#include <stddef.h>
#ifndef factMatWhile_COMMON_INCLUDES_
# define factMatWhile_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* factMatWhile_COMMON_INCLUDES_ */

#include "factMatWhile_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S1>/Unit Delay1' */
  real_T UnitDelay2_DSTATE;            /* '<S1>/Unit Delay2' */
  real_T UnitDelay3_DSTATE;            /* '<S1>/Unit Delay3' */
} DW_factMatWhile_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  boolean_T In2;                       /* '<Root>/In2' */
} ExtU_factMatWhile_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_factMatWhile_T;

/* Real-time Model Data Structure */
struct tag_RTM_factMatWhile_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_factMatWhile_T factMatWhile_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_factMatWhile_T factMatWhile_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_factMatWhile_T factMatWhile_Y;

/* Model entry point functions */
extern void factMatWhile_initialize(void);
extern void factMatWhile_step(void);
extern void factMatWhile_terminate(void);

/* Real-time Model object */
extern RT_MODEL_factMatWhile_T *const factMatWhile_M;

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
 * '<Root>' : 'factMatWhile'
 * '<S1>'   : 'factMatWhile/While Iterator Subsystem1'
 * '<S2>'   : 'factMatWhile/While Iterator Subsystem1/Compare To Zero'
 */
#endif                                 /* RTW_HEADER_factMatWhile_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
