/*
 * File: Scientific_Calculator.c
 *
 * Code generated for Simulink model 'Scientific_Calculator'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:55:16 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Scientific_Calculator.h"
#include "Scientific_Calculator_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Scientific_Calculator_T Scientific_Calculator_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Scientific_Calculator_T Scientific_Calculator_Y;

/* Real-time model */
RT_MODEL_Scientific_Calculato_T Scientific_Calculator_M_;
RT_MODEL_Scientific_Calculato_T *const Scientific_Calculator_M =
  &Scientific_Calculator_M_;

/* Model step function */
void Scientific_Calculator_step(void)
{
  /* Outport: '<Root>/AND_Out' incorporates:
   *  Inport: '<Root>/Operand_1'
   *  Inport: '<Root>/Operand_2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND'
   */
  Scientific_Calculator_Y.AND_Out = (uint8_T)(Scientific_Calculator_U.Operand_1
    & Scientific_Calculator_U.Operand_2);

  /* Outport: '<Root>/NAND_Out' incorporates:
   *  Inport: '<Root>/Operand_1'
   *  Inport: '<Root>/Operand_2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND2'
   */
  Scientific_Calculator_Y.NAND_Out = (uint8_T)~(uint8_T)
    (Scientific_Calculator_U.Operand_1 & Scientific_Calculator_U.Operand_2);

  /* Outport: '<Root>/OR_Out' incorporates:
   *  Inport: '<Root>/Operand_1'
   *  Inport: '<Root>/Operand_2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND1'
   */
  Scientific_Calculator_Y.OR_Out = (uint8_T)(Scientific_Calculator_U.Operand_1 |
    Scientific_Calculator_U.Operand_2);

  /* Outport: '<Root>/NOR_Out' incorporates:
   *  Inport: '<Root>/Operand_1'
   *  Inport: '<Root>/Operand_2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND3'
   */
  Scientific_Calculator_Y.NOR_Out = (uint8_T)~(uint8_T)
    (Scientific_Calculator_U.Operand_1 | Scientific_Calculator_U.Operand_2);

  /* Outport: '<Root>/XOR_Out' incorporates:
   *  Inport: '<Root>/Operand_1'
   *  Inport: '<Root>/Operand_2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND4'
   */
  Scientific_Calculator_Y.XOR_Out = (uint8_T)(Scientific_Calculator_U.Operand_1 ^
    Scientific_Calculator_U.Operand_2);

  /* Outport: '<Root>/XNOR_Out' incorporates:
   *  Inport: '<Root>/Operand_1'
   *  Inport: '<Root>/Operand_2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND6'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND7'
   */
  Scientific_Calculator_Y.XNOR_Out = (uint8_T)~(uint8_T)
    (Scientific_Calculator_U.Operand_1 ^ Scientific_Calculator_U.Operand_2);

  /* Outport: '<Root>/NOT_Out' incorporates:
   *  Inport: '<Root>/Operand_2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND5'
   */
  Scientific_Calculator_Y.NOT_Out = (uint8_T)~Scientific_Calculator_U.Operand_2;
}

/* Model initialize function */
void Scientific_Calculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Scientific_Calculator_M, (NULL));

  /* external inputs */
  (void)memset((void *)&Scientific_Calculator_U, 0, sizeof
               (ExtU_Scientific_Calculator_T));

  /* external outputs */
  (void) memset((void *)&Scientific_Calculator_Y, 0,
                sizeof(ExtY_Scientific_Calculator_T));
}

/* Model terminate function */
void Scientific_Calculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
