/*
 * File: mbd_1.h
 *
 * Code generated for Simulink model 'mbd_1'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sat Jan 07 15:26:53 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_mbd_1_h_
#define RTW_HEADER_mbd_1_h_
#include <string.h>
#include <stddef.h>
#ifndef mbd_1_COMMON_INCLUDES_
# define mbd_1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* mbd_1_COMMON_INCLUDES_ */

#include "mbd_1_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  boolean_T In1;                       /* '<Root>/In1' */
  boolean_T In2;                       /* '<Root>/In2' */
} ExtU_mbd_1_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  boolean_T Out1;                      /* '<Root>/Out1' */
  boolean_T Out2;                      /* '<Root>/Out2' */
  boolean_T Out3;                      /* '<Root>/Out3' */
  boolean_T Out4;                      /* '<Root>/Out4' */
  boolean_T Out5;                      /* '<Root>/Out5' */
  boolean_T Out6;                      /* '<Root>/Out6' */
  boolean_T Out7;                      /* '<Root>/Out7' */
} ExtY_mbd_1_T;

/* Real-time Model Data Structure */
struct tag_RTM_mbd_1_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_mbd_1_T mbd_1_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_mbd_1_T mbd_1_Y;

/* Model entry point functions */
extern void mbd_1_initialize(void);
extern void mbd_1_step(void);
extern void mbd_1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_mbd_1_T *const mbd_1_M;

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
 * '<Root>' : 'mbd_1'
 */
#endif                                 /* RTW_HEADER_mbd_1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
