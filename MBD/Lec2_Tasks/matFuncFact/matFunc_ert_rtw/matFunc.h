/*
 * File: matFunc.h
 *
 * Code generated for Simulink model 'matFunc'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:32:04 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_matFunc_h_
#define RTW_HEADER_matFunc_h_
#include <stddef.h>
#ifndef matFunc_COMMON_INCLUDES_
# define matFunc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* matFunc_COMMON_INCLUDES_ */

#include "matFunc_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_matFunc_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_matFunc_T;

/* Real-time Model Data Structure */
struct tag_RTM_matFunc_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_matFunc_T matFunc_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_matFunc_T matFunc_Y;

/* Model entry point functions */
extern void matFunc_initialize(void);
extern void matFunc_step(void);
extern void matFunc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_matFunc_T *const matFunc_M;

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
 * '<Root>' : 'matFunc'
 * '<S1>'   : 'matFunc/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_matFunc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
