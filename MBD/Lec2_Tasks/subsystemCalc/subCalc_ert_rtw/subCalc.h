/*
 * File: subCalc.h
 *
 * Code generated for Simulink model 'subCalc'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:34:49 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_subCalc_h_
#define RTW_HEADER_subCalc_h_
#include <string.h>
#include <stddef.h>
#ifndef subCalc_COMMON_INCLUDES_
# define subCalc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* subCalc_COMMON_INCLUDES_ */

#include "subCalc_types.h"

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
  real_T In2;                          /* '<Root>/In2' */
} ExtU_subCalc_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  real_T Out4;                         /* '<Root>/Out4' */
} ExtY_subCalc_T;

/* Real-time Model Data Structure */
struct tag_RTM_subCalc_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_subCalc_T subCalc_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_subCalc_T subCalc_Y;

/* Model entry point functions */
extern void subCalc_initialize(void);
extern void subCalc_step(void);
extern void subCalc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_subCalc_T *const subCalc_M;

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
 * '<Root>' : 'subCalc'
 * '<S1>'   : 'subCalc/Calculator'
 */
#endif                                 /* RTW_HEADER_subCalc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
