/*
 * File: upCounter.c
 *
 * Code generated for Simulink model 'upCounter'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:50:51 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "upCounter.h"
#include "upCounter_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_upCounter_T upCounter_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_upCounter_T upCounter_Y;

/* Real-time model */
RT_MODEL_upCounter_T upCounter_M_;
RT_MODEL_upCounter_T *const upCounter_M = &upCounter_M_;

/* Model step function */
void upCounter_step(void)
{
  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Inport: '<Root>/In1'
   *  Sum: '<Root>/Add'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  if (upCounter_Y.Out1 >= 10.0) {
    upCounter_Y.Out1 = 0.0;
  } else {
    upCounter_Y.Out1 += upCounter_U.In1;
  }

  /* End of Switch: '<Root>/Switch' */
}

/* Model initialize function */
void upCounter_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(upCounter_M, (NULL));

  /* external inputs */
  upCounter_U.In1 = 0.0;

  /* external outputs */
  upCounter_Y.Out1 = 0.0;
}

/* Model terminate function */
void upCounter_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
