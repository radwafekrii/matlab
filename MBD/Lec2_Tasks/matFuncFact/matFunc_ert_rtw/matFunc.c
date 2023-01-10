/*
 * File: matFunc.c
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

#include "matFunc.h"
#include "matFunc_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_matFunc_T matFunc_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_matFunc_T matFunc_Y;

/* Real-time model */
RT_MODEL_matFunc_T matFunc_M_;
RT_MODEL_matFunc_T *const matFunc_M = &matFunc_M_;

/* Model step function */
void matFunc_step(void)
{
  real_T num;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/In1'
   */
  num = matFunc_U.In1;

  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* '<S1>:1:2' */
  matFunc_Y.Out1 = 1.0;
  while (num >= 1.0) {
    /* '<S1>:1:3' */
    /* '<S1>:1:4' */
    matFunc_Y.Out1 *= num;

    /* '<S1>:1:5' */
    num--;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
  /* '<S1>:1:7' */
}

/* Model initialize function */
void matFunc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(matFunc_M, (NULL));

  /* external inputs */
  matFunc_U.In1 = 0.0;

  /* external outputs */
  matFunc_Y.Out1 = 0.0;
}

/* Model terminate function */
void matFunc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
