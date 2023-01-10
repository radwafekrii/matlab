/*
 * File: stateFlowCalc.c
 *
 * Code generated for Simulink model 'stateFlowCalc'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:36:57 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "stateFlowCalc.h"
#include "stateFlowCalc_private.h"

/* Block states (auto storage) */
DW_stateFlowCalc_T stateFlowCalc_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_stateFlowCalc_T stateFlowCalc_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_stateFlowCalc_T stateFlowCalc_Y;

/* Real-time model */
RT_MODEL_stateFlowCalc_T stateFlowCalc_M_;
RT_MODEL_stateFlowCalc_T *const stateFlowCalc_M = &stateFlowCalc_M_;

/* Model step function */
void stateFlowCalc_step(void)
{
  /* Chart: '<Root>/Chart' */
  /* Gateway: Chart */
  /* During: Chart */
  if (stateFlowCalc_DW.is_active_c3_stateFlowCalc == 0U) {
    /* Entry: Chart */
    stateFlowCalc_DW.is_active_c3_stateFlowCalc = 1U;

    /* Outport: '<Root>/Out1' incorporates:
     *  Inport: '<Root>/In1'
     */
    /* Entry Internal: Chart */
    /* Transition: '<S1>:8' */
    /* Entry 'CalcState': '<S1>:7' */
    stateFlowCalc_Y.Out1 = stateFlowCalc_U.In1;

    /* Outport: '<Root>/Out2' incorporates:
     *  Inport: '<Root>/In1'
     */
    stateFlowCalc_Y.Out2 = stateFlowCalc_U.In1;

    /* Outport: '<Root>/Out3' incorporates:
     *  Inport: '<Root>/In1'
     */
    stateFlowCalc_Y.Out3 = stateFlowCalc_U.In1 * 0.0;
  } else {
    /* Outport: '<Root>/Out4' */
    /* During 'CalcState': '<S1>:7' */
    /* Transition: '<S1>:9' */
    /* Transition: '<S1>:10' */
    /* Transition: '<S1>:12' */
    stateFlowCalc_Y.Out4 = 0.0;

    /* Transition: '<S1>:13' */
    /* Transition: '<S1>:14' */
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void stateFlowCalc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(stateFlowCalc_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&stateFlowCalc_DW, 0,
                sizeof(DW_stateFlowCalc_T));

  /* external inputs */
  stateFlowCalc_U.In1 = 0.0;

  /* external outputs */
  (void) memset((void *)&stateFlowCalc_Y, 0,
                sizeof(ExtY_stateFlowCalc_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  stateFlowCalc_DW.is_active_c3_stateFlowCalc = 0U;
}

/* Model terminate function */
void stateFlowCalc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
