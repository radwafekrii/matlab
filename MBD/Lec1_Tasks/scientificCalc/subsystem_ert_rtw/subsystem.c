/*
 * File: subsystem.c
 *
 * Code generated for Simulink model 'subsystem'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:55:48 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "subsystem.h"
#include "subsystem_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_subsystem_T subsystem_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_subsystem_T subsystem_Y;

/* Real-time model */
RT_MODEL_subsystem_T subsystem_M_;
RT_MODEL_subsystem_T *const subsystem_M = &subsystem_M_;

/* Model step function */
void subsystem_step(void)
{
  /* Outport: '<Root>/AND' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND'
   */
  subsystem_Y.AND = (uint8_T)(subsystem_U.Operand1 & subsystem_U.Operand2);

  /* Outport: '<Root>/NAND' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND2'
   */
  subsystem_Y.NAND = (uint8_T)~(uint8_T)(subsystem_U.Operand1 &
    subsystem_U.Operand2);

  /* Outport: '<Root>/OR' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND1'
   */
  subsystem_Y.OR = (uint8_T)(subsystem_U.Operand1 | subsystem_U.Operand2);

  /* Outport: '<Root>/NOR' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND3'
   */
  subsystem_Y.NOR = (uint8_T)~(uint8_T)(subsystem_U.Operand1 |
    subsystem_U.Operand2);

  /* Outport: '<Root>/XOR' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND4'
   */
  subsystem_Y.XOR = (uint8_T)(subsystem_U.Operand1 ^ subsystem_U.Operand2);

  /* Outport: '<Root>/XNOR' incorporates:
   *  Inport: '<Root>/Operand1'
   *  Inport: '<Root>/Operand2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND6'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND7'
   */
  subsystem_Y.XNOR = (uint8_T)~(uint8_T)(subsystem_U.Operand1 ^
    subsystem_U.Operand2);

  /* Outport: '<Root>/NOT' incorporates:
   *  Inport: '<Root>/Operand2'
   *  S-Function (sfix_bitop): '<S1>/Bitwise AND5'
   */
  subsystem_Y.NOT = (uint8_T)~subsystem_U.Operand2;
}

/* Model initialize function */
void subsystem_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(subsystem_M, (NULL));

  /* external inputs */
  (void)memset((void *)&subsystem_U, 0, sizeof(ExtU_subsystem_T));

  /* external outputs */
  (void) memset((void *)&subsystem_Y, 0,
                sizeof(ExtY_subsystem_T));
}

/* Model terminate function */
void subsystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
