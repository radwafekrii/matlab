/*
 * File: SecureRoom_Event.c
 *
 * Code generated for Simulink model 'SecureRoom_Event'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Mon Jan 02 18:58:31 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. MISRA C:2012 guidelines
 * Validation result: Not run
 */

#include "SecureRoom_Event.h"
#include "SecureRoom_Event_private.h"

/* Named constants for Chart: '<Root>/InvalidOperation' */
#define SecureRoom_E_IN_NO_ACTIVE_CHILD ((uint8_T)0U)

/* Named constants for Chart: '<Root>/ModeOperationChart1' */
#define SecureRoom_Even_IN_SystemLocked ((uint8_T)4U)
#define SecureRoom_Event_IN_Emergency  ((uint8_T)1U)
#define SecureRoom_Event_IN_Room1      ((uint8_T)2U)
#define SecureRoom_Event_IN_Room2      ((uint8_T)3U)

/* Block signals (auto storage) */
B_SecureRoom_Event_T SecureRoom_Event_B;

/* Block states (auto storage) */
DW_SecureRoom_Event_T SecureRoom_Event_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_SecureRoom_Event_T SecureRoom_Event_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_SecureRoom_Event_T SecureRoom_Event_Y;

/* Model step function */
void SecureRoom_Event_step(void)
{
  /* Chart: '<Root>/SignalValidationChart' incorporates:
   *  Inport: '<Root>/SecureKey'
   */
  /* Gateway: SignalValidationChart */
  /* During: SignalValidationChart */
  /* Entry Internal: SignalValidationChart */
  /* Transition: '<S3>:57' */
  /*  Check on Key Validity  */
  /* Check if key is invalid for times less than 3 */
  if ((SecureRoom_Event_U.SecureKey == 0.0) &&
      (SecureRoom_Event_DW.InvalidCounter < 3)) {
    /* Transition: '<S3>:58' */
    /* Transition: '<S3>:60' */
    /* Increment the error counter */
    SecureRoom_Event_DW.InvalidCounter++;

    /* Transition: '<S3>:65' */
    /* Transition: '<S3>:64' */
  } else {
    /* Transition: '<S3>:59' */
    /* if the key is valid */
    if ((SecureRoom_Event_U.SecureKey == 1.0) &&
        (SecureRoom_Event_DW.InvalidCounter < 3)) {
      /* Transition: '<S3>:61' */
      /* Transition: '<S3>:63' */
      /* reset the counter */
      SecureRoom_Event_DW.InvalidCounter = 0U;

      /* Transition: '<S3>:64' */
    } else {
      /* Transition: '<S3>:62' */
      /* Do nothing if the
         Key is invalid for more than three times
         , system is locked */
    }
  }

  /* Transition: '<S3>:66' */
  /* Invalid Input for three times */
  if (SecureRoom_Event_DW.InvalidCounter == 3) {
    /* Chart: '<Root>/InvalidOperation' */
    /* Chart: '<Root>/InvalidOperation' */
    /* Transition: '<S3>:32' */
    /* Transition: '<S3>:34' */
    /* Report Invalid Signal to the System */
    /* Event: '<S3>:79' */
    /* Gateway: InvalidOperation */
    /* Event: '<S1>:64' */
    /* During: InvalidOperation */
    if (SecureRoom_Event_DW.is_active_c1_SecureRoom_Event == 0U) {
      /* Entry: InvalidOperation */
      SecureRoom_Event_DW.is_active_c1_SecureRoom_Event = 1U;

      /* Entry Internal: InvalidOperation */
      /* Transition: '<S1>:63' */
      /* Entry 'Invalid': '<S1>:3' */
      SecureRoom_Event_B.Merge = 0.0;
      SecureRoom_Event_B.Merge1 = 0.0;
      SecureRoom_Event_B.Merge3 = 0.0;
      SecureRoom_Event_B.Merge2 = 0.0;
      SecureRoom_Event_B.Merge4 = 0.0;
    } else {
      /* During 'Invalid': '<S1>:3' */
    }

    /* End of Chart: '<Root>/InvalidOperation' */
    /* Transition: '<S3>:43' */
    /* Transition: '<S3>:42' */
    /* Transition: '<S3>:41' */
  } else {
    /* Transition: '<S3>:33' */
    /* Invalid signal for time more than one */
    if ((!((SecureRoom_Event_DW.InvalidCounter > 0) &&
           (SecureRoom_Event_U.SecureKey == 0.0))) &&
        (SecureRoom_Event_DW.InvalidCounter == 0)) {
      /* Chart: '<Root>/ModeOperationChart1' */
      /* Chart: '<Root>/ModeOperationChart1' incorporates:
       *  Inport: '<Root>/FireSystem'
       *  Inport: '<Root>/MotionSensor_1'
       *  Inport: '<Root>/MotionSensor_2'
       */
      /* Transition: '<S3>:36' */
      /* Valid Input */
      /* Transition: '<S3>:38' */
      /* Transition: '<S3>:40' */
      /* Report Valid Signal */
      /* Event: '<S3>:80' */
      /* Gateway: ModeOperationChart1 */
      /* Event: '<S2>:77' */
      /* During: ModeOperationChart1 */
      if (SecureRoom_Event_DW.is_active_c2_SecureRoom_Event == 0U) {
        /* Entry: ModeOperationChart1 */
        SecureRoom_Event_DW.is_active_c2_SecureRoom_Event = 1U;

        /* Entry Internal: ModeOperationChart1 */
        /* Transition: '<S2>:70' */
        SecureRoom_Event_DW.is_c2_SecureRoom_Event = SecureRoom_Event_IN_Room1;

        /* Entry 'Room1': '<S2>:67' */
        SecureRoom_Event_B.Merge3 = 1.0;
        SecureRoom_Event_B.Merge2 = 0.0;
        SecureRoom_Event_B.Merge4 = 0.0;
        SecureRoom_Event_B.Merge = 1.0;
        SecureRoom_Event_B.Merge1 = 1.0;
      } else {
        switch (SecureRoom_Event_DW.is_c2_SecureRoom_Event) {
         case SecureRoom_Event_IN_Emergency:
          /* During 'Emergency': '<S2>:64' */
          if (SecureRoom_Event_DW.EmergencyCounter == 5) {
            /* Transition: '<S2>:65' */
            SecureRoom_Event_DW.is_c2_SecureRoom_Event =
              SecureRoom_Even_IN_SystemLocked;

            /* Entry 'SystemLocked': '<S2>:66' */
            SecureRoom_Event_B.Merge = 0.0;
            SecureRoom_Event_B.Merge1 = 0.0;
          } else {
            SecureRoom_Event_DW.EmergencyCounter++;
          }
          break;

         case SecureRoom_Event_IN_Room1:
          /* During 'Room1': '<S2>:67' */
          if ((SecureRoom_Event_U.MotionSensor_1 == 0.0) &&
              (SecureRoom_Event_U.MotionSensor_2 == 1.0)) {
            /* Transition: '<S2>:76' */
            SecureRoom_Event_DW.is_c2_SecureRoom_Event =
              SecureRoom_Event_IN_Room2;

            /* Entry 'Room2': '<S2>:72' */
            SecureRoom_Event_B.Merge3 = 0.0;
            SecureRoom_Event_B.Merge2 = 1.0;
            SecureRoom_Event_B.Merge4 = 0.0;
            SecureRoom_Event_B.Merge = 1.0;
            SecureRoom_Event_B.Merge1 = 1.0;
          } else {
            /* Transition: '<S2>:75' */
            if (SecureRoom_Event_U.FireSystem == 1.0) {
              /* Transition: '<S2>:68' */
              SecureRoom_Event_DW.is_c2_SecureRoom_Event =
                SecureRoom_Event_IN_Emergency;

              /* Entry 'Emergency': '<S2>:64' */
              SecureRoom_Event_B.Merge3 = 1.0;
              SecureRoom_Event_B.Merge2 = 1.0;
              SecureRoom_Event_B.Merge4 = 1.0;
            }
          }
          break;

         case SecureRoom_Event_IN_Room2:
          /* During 'Room2': '<S2>:72' */
          if ((SecureRoom_Event_U.MotionSensor_1 == 1.0) &&
              (SecureRoom_Event_U.MotionSensor_2 == 0.0)) {
            /* Transition: '<S2>:63' */
            SecureRoom_Event_DW.is_c2_SecureRoom_Event =
              SecureRoom_Event_IN_Room1;

            /* Entry 'Room1': '<S2>:67' */
            SecureRoom_Event_B.Merge3 = 1.0;
            SecureRoom_Event_B.Merge2 = 0.0;
            SecureRoom_Event_B.Merge4 = 0.0;
            SecureRoom_Event_B.Merge = 1.0;
            SecureRoom_Event_B.Merge1 = 1.0;
          } else {
            /* Transition: '<S2>:71' */
            if (SecureRoom_Event_U.FireSystem == 1.0) {
              /* Transition: '<S2>:69' */
              SecureRoom_Event_DW.is_c2_SecureRoom_Event =
                SecureRoom_Event_IN_Emergency;

              /* Entry 'Emergency': '<S2>:64' */
              SecureRoom_Event_B.Merge3 = 1.0;
              SecureRoom_Event_B.Merge2 = 1.0;
              SecureRoom_Event_B.Merge4 = 1.0;
            }
          }
          break;

         default:
          /* During 'SystemLocked': '<S2>:66' */
          break;
        }
      }

      /* End of Chart: '<Root>/ModeOperationChart1' */
      /* Transition: '<S3>:41' */
    } else {
      /* Transition: '<S3>:35' */
      /* Transition: '<S3>:37' */
      /* Tempory Signal untill
         signal became stable
         do not trigger any event */
      /* Transition: '<S3>:42' */
      /* Transition: '<S3>:41' */
      /* Transition: '<S3>:39' */
      /* Do Nothing */
    }
  }

  /* End of Chart: '<Root>/SignalValidationChart' */

  /* Outport: '<Root>/EntranceGate' */
  /* Transition: '<S3>:44' */
  SecureRoom_Event_Y.EntranceGate = SecureRoom_Event_B.Merge;

  /* Outport: '<Root>/EmergencyGate1' */
  SecureRoom_Event_Y.EmergencyGate1 = SecureRoom_Event_B.Merge1;

  /* Outport: '<Root>/Led2' */
  SecureRoom_Event_Y.Led2 = SecureRoom_Event_B.Merge2;

  /* Outport: '<Root>/Led1 ' */
  SecureRoom_Event_Y.Led1 = SecureRoom_Event_B.Merge3;

  /* Outport: '<Root>/VacuumSystem' */
  SecureRoom_Event_Y.VacuumSystem = SecureRoom_Event_B.Merge4;
}

/* Model initialize function */
void SecureRoom_Event_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) memset(((void *) &SecureRoom_Event_B), 0,
                sizeof(B_SecureRoom_Event_T));

  /* states (dwork) */
  (void) memset((void *)&SecureRoom_Event_DW, 0,
                sizeof(DW_SecureRoom_Event_T));

  /* external inputs */
  (void) memset((void *)&SecureRoom_Event_U, 0,
                sizeof(ExtU_SecureRoom_Event_T));

  /* external outputs */
  (void) memset((void *)&SecureRoom_Event_Y, 0,
                sizeof(ExtY_SecureRoom_Event_T));
  SecureRoom_Event_DW.InvalidCounter = 0U;

  /* SystemInitialize for Chart: '<Root>/SignalValidationChart' incorporates:
   *  SystemInitialize for Chart: '<Root>/InvalidOperation'
   */
  /* SystemInitialize for Chart: '<Root>/InvalidOperation' */
  SecureRoom_Event_DW.is_active_c1_SecureRoom_Event = 0U;

  /* SystemInitialize for Chart: '<Root>/SignalValidationChart' incorporates:
   *  SystemInitialize for Chart: '<Root>/ModeOperationChart1'
   */
  /* SystemInitialize for Chart: '<Root>/ModeOperationChart1' */
  SecureRoom_Event_DW.is_active_c2_SecureRoom_Event = 0U;
  SecureRoom_Event_DW.is_c2_SecureRoom_Event = SecureRoom_E_IN_NO_ACTIVE_CHILD;
  SecureRoom_Event_DW.EmergencyCounter = 0U;
  SecureRoom_Event_B.Merge = 0.0;
  SecureRoom_Event_B.Merge1 = 0.0;
  SecureRoom_Event_B.Merge2 = 0.0;
  SecureRoom_Event_B.Merge3 = 0.0;
  SecureRoom_Event_B.Merge4 = 0.0;
}

/* Model terminate function */
void SecureRoom_Event_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
