/*
 * grading.c
 *
 * Code generation for model "grading".
 *
 * Model version              : 1.3
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Sat Jan 07 17:13:57 2023
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "grading.h"
#include "grading_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_grading_T grading_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_grading_T grading_Y;

/* Real-time model */
RT_MODEL_grading_T grading_M_;
RT_MODEL_grading_T *const grading_M = &grading_M_;

/*
 * Output and update for action system:
 *    '<Root>/If Action Subsystem'
 *    '<Root>/If Action Subsystem1'
 *    '<Root>/If Action Subsystem2'
 *    '<Root>/If Action Subsystem3'
 */
void grading_IfActionSubsystem(real_T rtu_In1, real_T *rty_Out1)
{
  /* Inport: '<S1>/In1' */
  *rty_Out1 = rtu_In1;
}

/* Model step function */
void grading_step(void)
{
  real_T rtb_Merge1;

  /* If: '<Root>/If' incorporates:
   *  Constant: '<Root>/Constant6'
   *  Constant: '<Root>/Constant7'
   *  Constant: '<Root>/Constant8'
   *  Constant: '<Root>/Constant9'
   *  Inport: '<Root>/In1'
   */
  if (grading_U.In1 >= 90.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    grading_IfActionSubsystem(grading_P.Constant9_Value, &rtb_Merge1);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else if ((grading_U.In1 < 90.0) && (grading_U.In1 >= 75.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    grading_IfActionSubsystem(grading_P.Constant8_Value, &rtb_Merge1);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  } else if ((grading_U.In1 < 75.0) && (grading_U.In1 >= 60.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    grading_IfActionSubsystem(grading_P.Constant7_Value, &rtb_Merge1);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    grading_IfActionSubsystem(grading_P.Constant6_Value, &rtb_Merge1);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
  }

  /* End of If: '<Root>/If' */

  /* Outport: '<Root>/Out1' */
  grading_Y.Out1 = rtb_Merge1;

  /* Matfile logging */
  rt_UpdateTXYLogVars(grading_M->rtwLogInfo, (&grading_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(grading_M)!=-1) &&
        !((rtmGetTFinal(grading_M)-grading_M->Timing.taskTime0) >
          grading_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(grading_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++grading_M->Timing.clockTick0)) {
    ++grading_M->Timing.clockTickH0;
  }

  grading_M->Timing.taskTime0 = grading_M->Timing.clockTick0 *
    grading_M->Timing.stepSize0 + grading_M->Timing.clockTickH0 *
    grading_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void grading_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)grading_M, 0,
                sizeof(RT_MODEL_grading_T));
  rtmSetTFinal(grading_M, 10.0);
  grading_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    grading_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(grading_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(grading_M->rtwLogInfo, (NULL));
    rtliSetLogT(grading_M->rtwLogInfo, "tout");
    rtliSetLogX(grading_M->rtwLogInfo, "");
    rtliSetLogXFinal(grading_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(grading_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(grading_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(grading_M->rtwLogInfo, 0);
    rtliSetLogDecimation(grading_M->rtwLogInfo, 1);
    rtliSetLogY(grading_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(grading_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(grading_M->rtwLogInfo, (NULL));
  }

  /* external inputs */
  grading_U.In1 = 0.0;

  /* external outputs */
  grading_Y.Out1 = 0.0;

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(grading_M->rtwLogInfo, 0.0, rtmGetTFinal
    (grading_M), grading_M->Timing.stepSize0, (&rtmGetErrorStatus(grading_M)));
}

/* Model terminate function */
void grading_terminate(void)
{
  /* (no terminate code required) */
}
