/*
 * File: ledTrigger.c
 *
 * Code generated for Simulink model 'ledTrigger'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:46:21 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ledTrigger.h"
#include "ledTrigger_private.h"

/* Block states (auto storage) */
DW_ledTrigger_T ledTrigger_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_ledTrigger_T ledTrigger_PrevZCX;

/* External inputs (root inport signals with auto storage) */
ExtU_ledTrigger_T ledTrigger_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_ledTrigger_T ledTrigger_Y;

/* Real-time model */
RT_MODEL_ledTrigger_T ledTrigger_M_;
RT_MODEL_ledTrigger_T *const ledTrigger_M = &ledTrigger_M_;

/* Model step function */
void ledTrigger_step(void)
{
  int32_T rtb_PulseGenerator;
  ZCEventType zcEvent;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = ((ledTrigger_DW.clockTickCounter < 1) &&
                        (ledTrigger_DW.clockTickCounter >= 0));
  if (ledTrigger_DW.clockTickCounter >= 19) {
    ledTrigger_DW.clockTickCounter = 0;
  } else {
    ledTrigger_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* Outputs for Triggered SubSystem: '<Root>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S1>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &ledTrigger_PrevZCX.TriggeredSubsystem_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* Chart: '<S1>/Chart' incorporates:
     *  Inport: '<Root>/In1'
     */
    /* Gateway: Triggered
       Subsystem/Chart */
    /* During: Triggered
       Subsystem/Chart */
    /* Entry Internal: Triggered
       Subsystem/Chart */
    /* Transition: '<S2>:3' */
    /* led_status */
    if (ledTrigger_U.In1 == 1.0) {
      /* Outport: '<Root>/led' */
      /* Transition: '<S2>:4' */
      /* Transition: '<S2>:6' */
      ledTrigger_Y.led = 1.0;

      /* Transition: '<S2>:7' */
    } else {
      /* Outport: '<Root>/led' */
      /* Transition: '<S2>:5' */
      ledTrigger_Y.led = 0.0;
    }

    /* End of Chart: '<S1>/Chart' */
    /* Transition: '<S2>:8' */
  }

  /* End of Outputs for SubSystem: '<Root>/Triggered Subsystem' */
}

/* Model initialize function */
void ledTrigger_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(ledTrigger_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&ledTrigger_DW, 0,
                sizeof(DW_ledTrigger_T));

  /* external inputs */
  ledTrigger_U.In1 = 0.0;

  /* external outputs */
  ledTrigger_Y.led = 0.0;

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  ledTrigger_DW.clockTickCounter = 0;
  ledTrigger_PrevZCX.TriggeredSubsystem_Trig_ZCE = UNINITIALIZED_ZCSIG;

  /* SystemInitialize for Triggered SubSystem: '<Root>/Triggered Subsystem' */
  /* SystemInitialize for Outport: '<Root>/led' incorporates:
   *  SystemInitialize for Chart: '<S1>/Chart'
   */
  ledTrigger_Y.led = 0.0;

  /* End of SystemInitialize for SubSystem: '<Root>/Triggered Subsystem' */
}

/* Model terminate function */
void ledTrigger_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
