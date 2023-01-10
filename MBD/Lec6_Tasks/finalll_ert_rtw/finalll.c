/*
 * File: finalll.c
 *
 * Code generated for Simulink model 'finalll'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:08:22 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "finalll.h"
#include "finalll_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_finalll_T finalll_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_finalll_T finalll_Y;

/* Real-time model */
RT_MODEL_finalll_T finalll_M_;
RT_MODEL_finalll_T *const finalll_M = &finalll_M_;

/* Forward declaration for local functions */
static uint32_T finalll_Add(uint32_T num1, uint32_T num2);
static uint32_T finalll_Sub(uint32_T num1, uint32_T num2);
static uint32_T finalll_Mul(uint32_T num1, uint32_T num2);
static uint32_T finalll_Div(uint32_T num1, uint32_T num2);
void mul_wide_u32(uint32_T in0, uint32_T in1, uint32_T *ptrOutBitsHi, uint32_T
                  *ptrOutBitsLo)
{
  uint32_T outBitsLo;
  uint32_T in0Lo;
  uint32_T in0Hi;
  uint32_T in1Lo;
  uint32_T in1Hi;
  uint32_T productHiLo;
  uint32_T productLoHi;
  in0Hi = in0 >> 16U;
  in0Lo = in0 & 65535U;
  in1Hi = in1 >> 16U;
  in1Lo = in1 & 65535U;
  productHiLo = in0Hi * in1Lo;
  productLoHi = in0Lo * in1Hi;
  in0Lo *= in1Lo;
  in1Lo = 0U;
  outBitsLo = (productLoHi << /*MW:OvBitwiseOk*/ 16U) + /*MW:OvCarryOk*/ in0Lo;
  if (outBitsLo < in0Lo) {
    in1Lo = 1U;
  }

  in0Lo = outBitsLo;
  outBitsLo += /*MW:OvCarryOk*/ productHiLo << /*MW:OvBitwiseOk*/ 16U;
  if (outBitsLo < in0Lo) {
    in1Lo++;
  }

  *ptrOutBitsHi = (((productLoHi >> 16U) + (productHiLo >> 16U)) + in0Hi * in1Hi)
    + in1Lo;
  *ptrOutBitsLo = outBitsLo;
}

uint32_T mul_u32_sat(uint32_T a, uint32_T b)
{
  uint32_T result;
  uint32_T u32_chi;
  mul_wide_u32(a, b, &u32_chi, &result);
  if (u32_chi) {
    result = MAX_uint32_T;
  }

  return result;
}

/* Function for Chart: '<Root>/Chart' */
static uint32_T finalll_Add(uint32_T num1, uint32_T num2)
{
  uint32_T addRes;

  /* Graphical Function 'Add': '<S1>:7' */
  /* Transition: '<S1>:9' */
  addRes = num1 + /*MW:OvSatOk*/ num2;
  if (addRes < num1) {
    addRes = MAX_uint32_T;
  }

  return addRes;
}

/* Function for Chart: '<Root>/Chart' */
static uint32_T finalll_Sub(uint32_T num1, uint32_T num2)
{
  uint32_T subRes;

  /* Graphical Function 'Sub': '<S1>:41' */
  /* Transition: '<S1>:43' */
  subRes = num1 - /*MW:OvSatOk*/ num2;
  if (subRes > num1) {
    subRes = 0U;
  }

  return subRes;
}

/* Function for Chart: '<Root>/Chart' */
static uint32_T finalll_Mul(uint32_T num1, uint32_T num2)
{
  /* Graphical Function 'Mul': '<S1>:47' */
  /* Transition: '<S1>:49' */
  return mul_u32_sat(num1, num2);
}

/* Function for Chart: '<Root>/Chart' */
static uint32_T finalll_Div(uint32_T num1, uint32_T num2)
{
  /* Graphical Function 'Div': '<S1>:53' */
  /* Transition: '<S1>:55' */
  return num2 == 0U ? MAX_uint32_T : num1 / num2;
}

/* Model step function */
void finalll_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Chart: '<Root>/Chart'
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   */
  /* Gateway: Chart */
  /* During: Chart */
  /* Entry Internal: Chart */
  /* Transition: '<S1>:17' */
  /* Transition: '<S1>:24' */
  finalll_Y.Out1 = finalll_Add(finalll_U.In1, finalll_U.In2);

  /* Outport: '<Root>/Out2' incorporates:
   *  Chart: '<Root>/Chart'
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   */
  finalll_Y.Out2 = finalll_Sub(finalll_U.In1, finalll_U.In2);

  /* Outport: '<Root>/Out3' incorporates:
   *  Chart: '<Root>/Chart'
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   */
  finalll_Y.Out3 = finalll_Mul(finalll_U.In1, finalll_U.In2);

  /* Outport: '<Root>/Out4' incorporates:
   *  Chart: '<Root>/Chart'
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   */
  finalll_Y.Out4 = finalll_Div(finalll_U.In1, finalll_U.In2);
}

/* Model initialize function */
void finalll_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(finalll_M, (NULL));

  /* external inputs */
  (void)memset((void *)&finalll_U, 0, sizeof(ExtU_finalll_T));

  /* external outputs */
  (void) memset((void *)&finalll_Y, 0,
                sizeof(ExtY_finalll_T));
}

/* Model terminate function */
void finalll_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
