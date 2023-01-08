/*
 * File: mbd_1.c
 *
 * Code generated for Simulink model 'mbd_1'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sat Jan 07 15:34:09 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "mbd_1.h"
#include "mbd_1_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_mbd_1_T mbd_1_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_mbd_1_T mbd_1_Y;

/* Real-time model */
RT_MODEL_mbd_1_T mbd_1_M_;
RT_MODEL_mbd_1_T *const mbd_1_M = &mbd_1_M_;

/* Model step function */
void mbd_1_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Add'
   */
  mbd_1_Y.Out1 = mbd_1_U.In1 + mbd_1_U.In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Subtract'
   */
  mbd_1_Y.Out2 = mbd_1_U.In1 - mbd_1_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Product'
   */
  mbd_1_Y.Out3 = mbd_1_U.In1 * mbd_1_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Divide'
   */
  mbd_1_Y.Out4 = mbd_1_U.In1 / mbd_1_U.In2;
}

/* Model initialize function */
void mbd_1_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(mbd_1_M, (NULL));

  /* external inputs */
  (void)memset((void *)&mbd_1_U, 0, sizeof(ExtU_mbd_1_T));

  /* external outputs */
  (void) memset((void *)&mbd_1_Y, 0,
                sizeof(ExtY_mbd_1_T));
}

/* Model terminate function */
void mbd_1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
