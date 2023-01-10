/*
 * File: subCalc.c
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

#include "subCalc.h"
#include "subCalc_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_subCalc_T subCalc_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_subCalc_T subCalc_Y;

/* Real-time model */
RT_MODEL_subCalc_T subCalc_M_;
RT_MODEL_subCalc_T *const subCalc_M = &subCalc_M_;

/* Model step function */
void subCalc_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S1>/Add'
   */
  subCalc_Y.Out1 = subCalc_U.In1 + subCalc_U.In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S1>/Subtract'
   */
  subCalc_Y.Out2 = subCalc_U.In1 - subCalc_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<S1>/Divide'
   */
  subCalc_Y.Out3 = subCalc_U.In1 / subCalc_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<S1>/Product'
   */
  subCalc_Y.Out4 = subCalc_U.In1 * subCalc_U.In2;
}

/* Model initialize function */
void subCalc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(subCalc_M, (NULL));

  /* external inputs */
  (void)memset((void *)&subCalc_U, 0, sizeof(ExtU_subCalc_T));

  /* external outputs */
  (void) memset((void *)&subCalc_Y, 0,
                sizeof(ExtY_subCalc_T));
}

/* Model terminate function */
void subCalc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
