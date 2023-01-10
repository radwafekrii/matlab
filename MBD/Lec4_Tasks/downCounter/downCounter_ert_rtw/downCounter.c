/*
 * File: downCounter.c
 *
 * Code generated for Simulink model 'downCounter'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:49:25 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "downCounter.h"
#include "downCounter_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_downCounter_T downCounter_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_downCounter_T downCounter_Y;

/* Real-time model */
RT_MODEL_downCounter_T downCounter_M_;
RT_MODEL_downCounter_T *const downCounter_M = &downCounter_M_;

/* Model step function */
void downCounter_step(void)
{
  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Inport: '<Root>/In1'
   *  Sum: '<Root>/Add'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  if (downCounter_Y.Out1 > 0.0) {
    downCounter_Y.Out1 -= downCounter_U.In1;
  } else {
    downCounter_Y.Out1 = 10.0;
  }

  /* End of Switch: '<Root>/Switch' */
}

/* Model initialize function */
void downCounter_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(downCounter_M, (NULL));

  /* external inputs */
  downCounter_U.In1 = 0.0;

  /* external outputs */
  downCounter_Y.Out1 = 0.0;
}

/* Model terminate function */
void downCounter_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
