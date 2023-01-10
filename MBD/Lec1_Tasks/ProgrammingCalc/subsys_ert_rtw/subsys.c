/*
 * File: subsys.c
 *
 * Code generated for Simulink model 'subsys'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:20:36 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "subsys.h"
#include "subsys_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_subsys_T subsys_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_subsys_T subsys_Y;

/* Real-time model */
RT_MODEL_subsys_T subsys_M_;
RT_MODEL_subsys_T *const subsys_M = &subsys_M_;

/* Model step function */
void subsys_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S1>/Add'
   */
  subsys_Y.Out1 = subsys_U.In1 + subsys_U.In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S1>/Subtract'
   */
  subsys_Y.Out2 = subsys_U.In1 - subsys_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<S1>/Product'
   */
  subsys_Y.Out3 = subsys_U.In1 * subsys_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<S1>/Divide'
   */
  subsys_Y.Out4 = subsys_U.In1 / subsys_U.In2;
}

/* Model initialize function */
void subsys_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(subsys_M, (NULL));

  /* external inputs */
  (void)memset((void *)&subsys_U, 0, sizeof(ExtU_subsys_T));

  /* external outputs */
  (void) memset((void *)&subsys_Y, 0,
                sizeof(ExtY_subsys_T));
}

/* Model terminate function */
void subsys_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
