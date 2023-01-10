/*
 * File: factorialChart.c
 *
 * Code generated for Simulink model 'factorialChart'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:39:25 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "factorialChart.h"
#include "factorialChart_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_factorialChart_T factorialChart_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_factorialChart_T factorialChart_Y;

/* Real-time model */
RT_MODEL_factorialChart_T factorialChart_M_;
RT_MODEL_factorialChart_T *const factorialChart_M = &factorialChart_M_;

/* Model step function */
void factorialChart_step(void)
{
  real_T var;

  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/In1'
   */
  /* Gateway: Chart */
  /* During: Chart */
  /* Entry Internal: Chart */
  /* Transition: '<S1>:1' */
  /*  %Factorial */
  /* Transition: '<S1>:2' */
  var = factorialChart_U.In1;
  factorialChart_Y.Out1 = 1.0;
  while (var > 0.0) {
    /* Transition: '<S1>:3' */
    /* Transition: '<S1>:4' */
    factorialChart_Y.Out1 *= var;
    var--;

    /* Transition: '<S1>:5' */
  }

  /* End of Chart: '<Root>/Chart' */
  /* Transition: '<S1>:6' */
}

/* Model initialize function */
void factorialChart_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(factorialChart_M, (NULL));

  /* external inputs */
  factorialChart_U.In1 = 0.0;

  /* external outputs */
  factorialChart_Y.Out1 = 0.0;
}

/* Model terminate function */
void factorialChart_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
