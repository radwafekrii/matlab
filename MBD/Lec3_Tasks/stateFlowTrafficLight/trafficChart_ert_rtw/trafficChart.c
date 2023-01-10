/*
 * File: trafficChart.c
 *
 * Code generated for Simulink model 'trafficChart'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:37:55 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "trafficChart.h"
#include "trafficChart_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define trafficChart_IN_Green_Light    ((uint8_T)1U)
#define trafficChart_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define trafficChart_IN_Red_Light      ((uint8_T)2U)
#define trafficChart_IN_Yellow_Light   ((uint8_T)3U)

/* Block states (auto storage) */
DW_trafficChart_T trafficChart_DW;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_trafficChart_T trafficChart_Y;

/* Real-time model */
RT_MODEL_trafficChart_T trafficChart_M_;
RT_MODEL_trafficChart_T *const trafficChart_M = &trafficChart_M_;

/* Model step function */
void trafficChart_step(void)
{
  /* Chart: '<Root>/Chart' */
  /* Gateway: Chart */
  if (trafficChart_DW.temporalCounter_i1 < 15U) {
    trafficChart_DW.temporalCounter_i1++;
  }

  /* During: Chart */
  if (trafficChart_DW.is_active_c3_trafficChart == 0U) {
    /* Entry: Chart */
    trafficChart_DW.is_active_c3_trafficChart = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:5' */
    trafficChart_DW.is_c3_trafficChart = trafficChart_IN_Red_Light;
    trafficChart_DW.temporalCounter_i1 = 0U;

    /* Outport: '<Root>/Out1' */
    /* Entry 'Red_Light': '<S1>:4' */
    trafficChart_Y.Out1 = 1.0;

    /* Outport: '<Root>/Out2' */
    trafficChart_Y.Out2 = 0.0;

    /* Outport: '<Root>/Out3' */
    trafficChart_Y.Out3 = 0.0;
  } else {
    switch (trafficChart_DW.is_c3_trafficChart) {
     case trafficChart_IN_Green_Light:
      /* During 'Green_Light': '<S1>:7' */
      if (trafficChart_DW.temporalCounter_i1 >= 5) {
        /* Transition: '<S1>:11' */
        trafficChart_DW.is_c3_trafficChart = trafficChart_IN_Red_Light;
        trafficChart_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Out1' */
        /* Entry 'Red_Light': '<S1>:4' */
        trafficChart_Y.Out1 = 1.0;

        /* Outport: '<Root>/Out2' */
        trafficChart_Y.Out2 = 0.0;

        /* Outport: '<Root>/Out3' */
        trafficChart_Y.Out3 = 0.0;
      }
      break;

     case trafficChart_IN_Red_Light:
      /* During 'Red_Light': '<S1>:4' */
      if (trafficChart_DW.temporalCounter_i1 >= 10) {
        /* Transition: '<S1>:9' */
        trafficChart_DW.is_c3_trafficChart = trafficChart_IN_Yellow_Light;
        trafficChart_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Out1' */
        /* Entry 'Yellow_Light': '<S1>:6' */
        trafficChart_Y.Out1 = 0.0;

        /* Outport: '<Root>/Out2' */
        trafficChart_Y.Out2 = 1.0;

        /* Outport: '<Root>/Out3' */
        trafficChart_Y.Out3 = 0.0;
      }
      break;

     default:
      /* During 'Yellow_Light': '<S1>:6' */
      if (trafficChart_DW.temporalCounter_i1 >= 5) {
        /* Transition: '<S1>:10' */
        trafficChart_DW.is_c3_trafficChart = trafficChart_IN_Green_Light;
        trafficChart_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Out1' */
        /* Entry 'Green_Light': '<S1>:7' */
        trafficChart_Y.Out1 = 0.0;

        /* Outport: '<Root>/Out2' */
        trafficChart_Y.Out2 = 0.0;

        /* Outport: '<Root>/Out3' */
        trafficChart_Y.Out3 = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void trafficChart_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(trafficChart_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&trafficChart_DW, 0,
                sizeof(DW_trafficChart_T));

  /* external outputs */
  (void) memset((void *)&trafficChart_Y, 0,
                sizeof(ExtY_trafficChart_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  trafficChart_DW.temporalCounter_i1 = 0U;
  trafficChart_DW.is_active_c3_trafficChart = 0U;
  trafficChart_DW.is_c3_trafficChart = trafficChart_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void trafficChart_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
