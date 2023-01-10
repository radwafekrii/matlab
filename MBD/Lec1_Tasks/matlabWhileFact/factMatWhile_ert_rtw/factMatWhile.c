/*
 * File: factMatWhile.c
 *
 * Code generated for Simulink model 'factMatWhile'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:17:31 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "factMatWhile.h"
#include "factMatWhile_private.h"

/* Block states (auto storage) */
DW_factMatWhile_T factMatWhile_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_factMatWhile_T factMatWhile_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_factMatWhile_T factMatWhile_Y;

/* Real-time model */
RT_MODEL_factMatWhile_T factMatWhile_M_;
RT_MODEL_factMatWhile_T *const factMatWhile_M = &factMatWhile_M_;

/* Model step function */
void factMatWhile_step(void)
{
  int32_T s1_iter;
  boolean_T rtb_Compare;

  /* Outputs for Iterator SubSystem: '<Root>/While Iterator Subsystem1' incorporates:
   *  WhileIterator: '<S1>/While Iterator'
   */
  s1_iter = 1;

  /* Inport: '<Root>/In2' */
  rtb_Compare = factMatWhile_U.In2;
  while (rtb_Compare && (s1_iter <= 6)) {
    /* RelationalOperator: '<S2>/Compare' incorporates:
     *  Constant: '<S2>/Constant'
     */
    rtb_Compare = (factMatWhile_DW.UnitDelay_DSTATE > 0.0);

    /* Outport: '<Root>/Out1' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay1'
     */
    factMatWhile_Y.Out1 = factMatWhile_DW.UnitDelay1_DSTATE * (real_T)s1_iter;

    /* Sum: '<S1>/Subtract' incorporates:
     *  Inport: '<Root>/In1'
     *  UnitDelay: '<S1>/Unit Delay2'
     *  UnitDelay: '<S1>/Unit Delay3'
     */
    factMatWhile_DW.UnitDelay_DSTATE = ((factMatWhile_U.In1 +
      factMatWhile_DW.UnitDelay_DSTATE) - factMatWhile_DW.UnitDelay2_DSTATE) -
      factMatWhile_DW.UnitDelay3_DSTATE;

    /* Update for UnitDelay: '<S1>/Unit Delay1' */
    factMatWhile_DW.UnitDelay1_DSTATE = factMatWhile_Y.Out1;

    /* Update for UnitDelay: '<S1>/Unit Delay2' incorporates:
     *  Constant: '<S1>/Constant'
     */
    factMatWhile_DW.UnitDelay2_DSTATE = 1.0;

    /* Update for UnitDelay: '<S1>/Unit Delay3' incorporates:
     *  Update for Inport: '<Root>/In1'
     */
    factMatWhile_DW.UnitDelay3_DSTATE = factMatWhile_U.In1;
    s1_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/While Iterator Subsystem1' */
}

/* Model initialize function */
void factMatWhile_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(factMatWhile_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&factMatWhile_DW, 0,
                sizeof(DW_factMatWhile_T));

  /* external inputs */
  (void)memset((void *)&factMatWhile_U, 0, sizeof(ExtU_factMatWhile_T));

  /* external outputs */
  factMatWhile_Y.Out1 = 0.0;

  /* SystemInitialize for Iterator SubSystem: '<Root>/While Iterator Subsystem1' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay1' */
  factMatWhile_DW.UnitDelay1_DSTATE = 1.0;

  /* End of SystemInitialize for SubSystem: '<Root>/While Iterator Subsystem1' */
}

/* Model terminate function */
void factMatWhile_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
