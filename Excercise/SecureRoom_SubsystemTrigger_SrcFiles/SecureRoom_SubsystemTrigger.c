/*
 * File: SecureRoom_SubsystemTrigger.c
 *
 * Code generated for Simulink model 'SecureRoom_SubsystemTrigger'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Mon Jan 02 19:13:55 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SecureRoom_SubsystemTrigger.h"
#include "SecureRoom_SubsystemTrigger_private.h"

/* Named constants for Chart: '<S1>/InvalidOperation' */
#define SecureRoom_S_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

/* Named constants for Chart: '<S3>/ModeOperationChart1' */
#define SecureRoom_Subs_IN_SystemLocked ((uint8_T)4U)
#define SecureRoom_Subsyst_IN_Emergency ((uint8_T)1U)
#define SecureRoom_SubsystemTr_IN_Room1 ((uint8_T)2U)
#define SecureRoom_SubsystemTr_IN_Room2 ((uint8_T)3U)

/* Block signals (auto storage) */
B_SecureRoom_SubsystemTrigger_T SecureRoom_SubsystemTrigger_B;

/* Block states (auto storage) */
DW_SecureRoom_SubsystemTrigge_T SecureRoom_SubsystemTrigger_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_SecureRoom_SubsystemTrig_T SecureRoom_SubsystemTrigger_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_SecureRoom_SubsystemTrig_T SecureRoom_SubsystemTrigger_Y;

/* Real-time model */
RT_MODEL_SecureRoom_Subsystem_T SecureRoom_SubsystemTrigger_M_;
RT_MODEL_SecureRoom_Subsystem_T *const SecureRoom_SubsystemTrigger_M =
  &SecureRoom_SubsystemTrigger_M_;

/* Model step function */
void SecureRoom_SubsystemTrigger_step(void)
{
  /* Chart: '<Root>/SignalValidationChart' incorporates:
   *  Inport: '<Root>/SecureKey'
   */
  /* Gateway: SignalValidationChart */
  /* During: SignalValidationChart */
  /* Entry Internal: SignalValidationChart */
  /* Transition: '<S2>:57' */
  /*  Check on Key Validity  */
  /* Check if key is invalid for times less than 3 */
  if ((SecureRoom_SubsystemTrigger_U.SecureKey == 0.0) &&
      (SecureRoom_SubsystemTrigger_DW.InvalidCounter < 3)) {
    /* Transition: '<S2>:58' */
    /* Transition: '<S2>:60' */
    /* Increment the error counter */
    SecureRoom_SubsystemTrigger_DW.InvalidCounter++;

    /* Transition: '<S2>:65' */
    /* Transition: '<S2>:64' */
  } else {
    /* Transition: '<S2>:59' */
    /* if the key is valid */
    if ((SecureRoom_SubsystemTrigger_U.SecureKey == 1.0) &&
        (SecureRoom_SubsystemTrigger_DW.InvalidCounter < 3)) {
      /* Transition: '<S2>:61' */
      /* Transition: '<S2>:63' */
      /* reset the counter */
      SecureRoom_SubsystemTrigger_DW.InvalidCounter = 0U;

      /* Transition: '<S2>:64' */
    } else {
      /* Transition: '<S2>:62' */
      /* Do nothing if the
         Key is invalid for more than three times
         , system is locked */
    }
  }

  /* Transition: '<S2>:66' */
  /* Invalid Input for three times */
  if (SecureRoom_SubsystemTrigger_DW.InvalidCounter == 3) {
    /* Transition: '<S2>:32' */
    /* Transition: '<S2>:34' */
    /* Report Invalid Signal to the System */
    SecureRoom_SubsystemTrigger_B.SignalValidity = 0U;

    /* Transition: '<S2>:43' */
    /* Transition: '<S2>:42' */
    /* Transition: '<S2>:41' */
  } else {
    /* Transition: '<S2>:33' */
    /* Invalid signal for time more than one */
    if ((!((SecureRoom_SubsystemTrigger_DW.InvalidCounter > 0) &&
           (SecureRoom_SubsystemTrigger_U.SecureKey == 0.0))) &&
        (SecureRoom_SubsystemTrigger_DW.InvalidCounter == 0)) {
      /* Transition: '<S2>:36' */
      /* Valid Input */
      /* Transition: '<S2>:38' */
      /* Transition: '<S2>:40' */
      /* Report Valid Signal */
      SecureRoom_SubsystemTrigger_B.SignalValidity = 1U;

      /* Transition: '<S2>:41' */
    } else {
      /* Transition: '<S2>:35' */
      /* Transition: '<S2>:37' */
      /* Tempory Signal untill
         signal became stable
         do not trigger any event */
      /* Transition: '<S2>:42' */
      /* Transition: '<S2>:41' */
      /* Transition: '<S2>:39' */
      /* Do Nothing */
    }
  }

  /* End of Chart: '<Root>/SignalValidationChart' */

  /* Outputs for Enabled SubSystem: '<Root>/InvalidSubsystem' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  /* Chart: '<S1>/InvalidOperation' incorporates:
   *  RelationalOperator: '<Root>/Relational Operator'
   */
  /* Transition: '<S2>:44' */
  if ((SecureRoom_SubsystemTrigger_B.SignalValidity == 1) &&
      (SecureRoom_SubsystemTrigger_DW.is_active_c1_SecureRoom_Subsyst == 0U)) {
    /* Gateway: InvalidSubsystem/InvalidOperation */
    /* During: InvalidSubsystem/InvalidOperation */
    /* Entry: InvalidSubsystem/InvalidOperation */
    SecureRoom_SubsystemTrigger_DW.is_active_c1_SecureRoom_Subsyst = 1U;

    /* Entry Internal: InvalidSubsystem/InvalidOperation */
    /* Transition: '<S4>:63' */
    /* Entry 'Invalid': '<S4>:3' */
    SecureRoom_SubsystemTrigger_B.Merge = 0.0;
    SecureRoom_SubsystemTrigger_B.Merge1 = 0.0;
    SecureRoom_SubsystemTrigger_B.Merge3 = 0.0;
    SecureRoom_SubsystemTrigger_B.Merge2 = 0.0;
    SecureRoom_SubsystemTrigger_B.Merge4 = 0.0;
  } else {
    /* During 'Invalid': '<S4>:3' */
  }

  /* End of Chart: '<S1>/InvalidOperation' */
  /* End of Outputs for SubSystem: '<Root>/InvalidSubsystem' */

  /* Outputs for Enabled SubSystem: '<Root>/ValidSubsystem' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  /* RelationalOperator: '<Root>/Relational Operator1' */
  if (SecureRoom_SubsystemTrigger_B.SignalValidity == 0) {
    /* Chart: '<S3>/ModeOperationChart1' incorporates:
     *  Inport: '<Root>/FireSystem'
     *  Inport: '<Root>/MotionSensor_1'
     *  Inport: '<Root>/MotionSensor_2'
     */
    /* Gateway: ValidSubsystem/ModeOperationChart1 */
    /* During: ValidSubsystem/ModeOperationChart1 */
    if (SecureRoom_SubsystemTrigger_DW.is_active_c2_SecureRoom_Subsyst == 0U) {
      /* Entry: ValidSubsystem/ModeOperationChart1 */
      SecureRoom_SubsystemTrigger_DW.is_active_c2_SecureRoom_Subsyst = 1U;

      /* Entry Internal: ValidSubsystem/ModeOperationChart1 */
      /* Transition: '<S5>:70' */
      SecureRoom_SubsystemTrigger_DW.is_c2_SecureRoom_SubsystemTrigg =
        SecureRoom_SubsystemTr_IN_Room1;

      /* Entry 'Room1': '<S5>:67' */
      SecureRoom_SubsystemTrigger_B.Merge3 = 1.0;
      SecureRoom_SubsystemTrigger_B.Merge2 = 0.0;
      SecureRoom_SubsystemTrigger_B.Merge4 = 0.0;
      SecureRoom_SubsystemTrigger_B.Merge = 1.0;
      SecureRoom_SubsystemTrigger_B.Merge1 = 1.0;
    } else {
      switch (SecureRoom_SubsystemTrigger_DW.is_c2_SecureRoom_SubsystemTrigg) {
       case SecureRoom_Subsyst_IN_Emergency:
        /* During 'Emergency': '<S5>:64' */
        if (SecureRoom_SubsystemTrigger_DW.EmergencyCounter == 5) {
          /* Transition: '<S5>:65' */
          SecureRoom_SubsystemTrigger_DW.is_c2_SecureRoom_SubsystemTrigg =
            SecureRoom_Subs_IN_SystemLocked;

          /* Entry 'SystemLocked': '<S5>:66' */
          SecureRoom_SubsystemTrigger_B.Merge = 0.0;
          SecureRoom_SubsystemTrigger_B.Merge1 = 0.0;
        } else {
          SecureRoom_SubsystemTrigger_DW.EmergencyCounter++;
        }
        break;

       case SecureRoom_SubsystemTr_IN_Room1:
        /* During 'Room1': '<S5>:67' */
        if ((SecureRoom_SubsystemTrigger_U.MotionSensor_1 == 0.0) &&
            (SecureRoom_SubsystemTrigger_U.MotionSensor_2 == 1.0)) {
          /* Transition: '<S5>:76' */
          SecureRoom_SubsystemTrigger_DW.is_c2_SecureRoom_SubsystemTrigg =
            SecureRoom_SubsystemTr_IN_Room2;

          /* Entry 'Room2': '<S5>:72' */
          SecureRoom_SubsystemTrigger_B.Merge3 = 0.0;
          SecureRoom_SubsystemTrigger_B.Merge2 = 1.0;
          SecureRoom_SubsystemTrigger_B.Merge4 = 0.0;
          SecureRoom_SubsystemTrigger_B.Merge = 1.0;
          SecureRoom_SubsystemTrigger_B.Merge1 = 1.0;
        } else {
          /* Transition: '<S5>:75' */
          if (SecureRoom_SubsystemTrigger_U.FireSystem == 1.0) {
            /* Transition: '<S5>:68' */
            SecureRoom_SubsystemTrigger_DW.is_c2_SecureRoom_SubsystemTrigg =
              SecureRoom_Subsyst_IN_Emergency;

            /* Entry 'Emergency': '<S5>:64' */
            SecureRoom_SubsystemTrigger_B.Merge3 = 1.0;
            SecureRoom_SubsystemTrigger_B.Merge2 = 1.0;
            SecureRoom_SubsystemTrigger_B.Merge4 = 1.0;
          }
        }
        break;

       case SecureRoom_SubsystemTr_IN_Room2:
        /* During 'Room2': '<S5>:72' */
        if ((SecureRoom_SubsystemTrigger_U.MotionSensor_1 == 1.0) &&
            (SecureRoom_SubsystemTrigger_U.MotionSensor_2 == 0.0)) {
          /* Transition: '<S5>:63' */
          SecureRoom_SubsystemTrigger_DW.is_c2_SecureRoom_SubsystemTrigg =
            SecureRoom_SubsystemTr_IN_Room1;

          /* Entry 'Room1': '<S5>:67' */
          SecureRoom_SubsystemTrigger_B.Merge3 = 1.0;
          SecureRoom_SubsystemTrigger_B.Merge2 = 0.0;
          SecureRoom_SubsystemTrigger_B.Merge4 = 0.0;
          SecureRoom_SubsystemTrigger_B.Merge = 1.0;
          SecureRoom_SubsystemTrigger_B.Merge1 = 1.0;
        } else {
          /* Transition: '<S5>:71' */
          if (SecureRoom_SubsystemTrigger_U.FireSystem == 1.0) {
            /* Transition: '<S5>:69' */
            SecureRoom_SubsystemTrigger_DW.is_c2_SecureRoom_SubsystemTrigg =
              SecureRoom_Subsyst_IN_Emergency;

            /* Entry 'Emergency': '<S5>:64' */
            SecureRoom_SubsystemTrigger_B.Merge3 = 1.0;
            SecureRoom_SubsystemTrigger_B.Merge2 = 1.0;
            SecureRoom_SubsystemTrigger_B.Merge4 = 1.0;
          }
        }
        break;

       default:
        /* During 'SystemLocked': '<S5>:66' */
        break;
      }
    }

    /* End of Chart: '<S3>/ModeOperationChart1' */
  }

  /* End of RelationalOperator: '<Root>/Relational Operator1' */
  /* End of Outputs for SubSystem: '<Root>/ValidSubsystem' */

  /* Outport: '<Root>/EntranceGate' */
  SecureRoom_SubsystemTrigger_Y.EntranceGate =
    SecureRoom_SubsystemTrigger_B.Merge;

  /* Outport: '<Root>/EmergencyGate1' */
  SecureRoom_SubsystemTrigger_Y.EmergencyGate1 =
    SecureRoom_SubsystemTrigger_B.Merge1;

  /* Outport: '<Root>/Led2' */
  SecureRoom_SubsystemTrigger_Y.Led2 = SecureRoom_SubsystemTrigger_B.Merge2;

  /* Outport: '<Root>/Led1 ' */
  SecureRoom_SubsystemTrigger_Y.Led1 = SecureRoom_SubsystemTrigger_B.Merge3;

  /* Outport: '<Root>/VacuumSystem' */
  SecureRoom_SubsystemTrigger_Y.VacuumSystem =
    SecureRoom_SubsystemTrigger_B.Merge4;
}

/* Model initialize function */
void SecureRoom_SubsystemTrigger_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(SecureRoom_SubsystemTrigger_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &SecureRoom_SubsystemTrigger_B), 0,
                sizeof(B_SecureRoom_SubsystemTrigger_T));

  /* states (dwork) */
  (void) memset((void *)&SecureRoom_SubsystemTrigger_DW, 0,
                sizeof(DW_SecureRoom_SubsystemTrigge_T));

  /* external inputs */
  (void) memset((void *)&SecureRoom_SubsystemTrigger_U, 0,
                sizeof(ExtU_SecureRoom_SubsystemTrig_T));

  /* external outputs */
  (void) memset((void *)&SecureRoom_SubsystemTrigger_Y, 0,
                sizeof(ExtY_SecureRoom_SubsystemTrig_T));

  /* SystemInitialize for Chart: '<Root>/SignalValidationChart' */
  SecureRoom_SubsystemTrigger_DW.InvalidCounter = 0U;
  SecureRoom_SubsystemTrigger_B.SignalValidity = 0U;

  /* SystemInitialize for Enabled SubSystem: '<Root>/InvalidSubsystem' */
  /* SystemInitialize for Chart: '<S1>/InvalidOperation' */
  SecureRoom_SubsystemTrigger_DW.is_active_c1_SecureRoom_Subsyst = 0U;

  /* End of SystemInitialize for SubSystem: '<Root>/InvalidSubsystem' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/ValidSubsystem' */
  /* SystemInitialize for Chart: '<S3>/ModeOperationChart1' */
  SecureRoom_SubsystemTrigger_DW.is_active_c2_SecureRoom_Subsyst = 0U;
  SecureRoom_SubsystemTrigger_DW.is_c2_SecureRoom_SubsystemTrigg =
    SecureRoom_S_IN_NO_ACTIVE_CHILD;
  SecureRoom_SubsystemTrigger_DW.EmergencyCounter = 0U;
  SecureRoom_SubsystemTrigger_B.Merge = 0.0;
  SecureRoom_SubsystemTrigger_B.Merge1 = 0.0;
  SecureRoom_SubsystemTrigger_B.Merge2 = 0.0;
  SecureRoom_SubsystemTrigger_B.Merge3 = 0.0;
  SecureRoom_SubsystemTrigger_B.Merge4 = 0.0;

  /* End of SystemInitialize for SubSystem: '<Root>/ValidSubsystem' */
}

/* Model terminate function */
void SecureRoom_SubsystemTrigger_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
