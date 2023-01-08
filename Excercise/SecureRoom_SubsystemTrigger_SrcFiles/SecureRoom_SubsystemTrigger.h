/*
 * File: SecureRoom_SubsystemTrigger.h
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

#ifndef RTW_HEADER_SecureRoom_SubsystemTrigger_h_
#define RTW_HEADER_SecureRoom_SubsystemTrigger_h_
#include <stddef.h>
#include <string.h>
#ifndef SecureRoom_SubsystemTrigger_COMMON_INCLUDES_
# define SecureRoom_SubsystemTrigger_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SecureRoom_SubsystemTrigger_COMMON_INCLUDES_ */

#include "SecureRoom_SubsystemTrigger_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T Merge;                        /* '<Root>/Merge' */
  real_T Merge1;                       /* '<Root>/Merge1' */
  real_T Merge2;                       /* '<Root>/Merge2' */
  real_T Merge3;                       /* '<Root>/Merge3' */
  real_T Merge4;                       /* '<Root>/Merge4' */
  uint8_T SignalValidity;              /* '<Root>/SignalValidationChart' */
} B_SecureRoom_SubsystemTrigger_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c2_SecureRoom_Subsyst;/* '<S3>/ModeOperationChart1' */
  uint8_T is_c2_SecureRoom_SubsystemTrigg;/* '<S3>/ModeOperationChart1' */
  uint8_T EmergencyCounter;            /* '<S3>/ModeOperationChart1' */
  uint8_T InvalidCounter;              /* '<Root>/SignalValidationChart' */
  uint8_T is_active_c1_SecureRoom_Subsyst;/* '<S1>/InvalidOperation' */
} DW_SecureRoom_SubsystemTrigge_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T SecureKey;                    /* '<Root>/SecureKey' */
  real_T MotionSensor_1;               /* '<Root>/MotionSensor_1' */
  real_T MotionSensor_2;               /* '<Root>/MotionSensor_2' */
  real_T FireSystem;                   /* '<Root>/FireSystem' */
} ExtU_SecureRoom_SubsystemTrig_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T EntranceGate;                 /* '<Root>/EntranceGate' */
  real_T EmergencyGate1;               /* '<Root>/EmergencyGate1' */
  real_T Led2;                         /* '<Root>/Led2' */
  real_T Led1;                         /* '<Root>/Led1 ' */
  real_T VacuumSystem;                 /* '<Root>/VacuumSystem' */
} ExtY_SecureRoom_SubsystemTrig_T;

/* Real-time Model Data Structure */
struct tag_RTM_SecureRoom_SubsystemT_T {
  const char_T * volatile errorStatus;
};

/* Block signals (auto storage) */
extern B_SecureRoom_SubsystemTrigger_T SecureRoom_SubsystemTrigger_B;

/* Block states (auto storage) */
extern DW_SecureRoom_SubsystemTrigge_T SecureRoom_SubsystemTrigger_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_SecureRoom_SubsystemTrig_T SecureRoom_SubsystemTrigger_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_SecureRoom_SubsystemTrig_T SecureRoom_SubsystemTrigger_Y;

/* Model entry point functions */
extern void SecureRoom_SubsystemTrigger_initialize(void);
extern void SecureRoom_SubsystemTrigger_step(void);
extern void SecureRoom_SubsystemTrigger_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SecureRoom_Subsystem_T *const SecureRoom_SubsystemTrigger_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SecureRoom_SubsystemTrigger'
 * '<S1>'   : 'SecureRoom_SubsystemTrigger/InvalidSubsystem'
 * '<S2>'   : 'SecureRoom_SubsystemTrigger/SignalValidationChart'
 * '<S3>'   : 'SecureRoom_SubsystemTrigger/ValidSubsystem'
 * '<S4>'   : 'SecureRoom_SubsystemTrigger/InvalidSubsystem/InvalidOperation'
 * '<S5>'   : 'SecureRoom_SubsystemTrigger/ValidSubsystem/ModeOperationChart1'
 */
#endif                                 /* RTW_HEADER_SecureRoom_SubsystemTrigger_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
