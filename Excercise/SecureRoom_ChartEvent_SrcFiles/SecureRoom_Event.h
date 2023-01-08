/*
 * File: SecureRoom_Event.h
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

#ifndef RTW_HEADER_SecureRoom_Event_h_
#define RTW_HEADER_SecureRoom_Event_h_
#include <string.h>
#ifndef SecureRoom_Event_COMMON_INCLUDES_
# define SecureRoom_Event_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SecureRoom_Event_COMMON_INCLUDES_ */

#include "SecureRoom_Event_types.h"

/* Macros for accessing real-time model data structure */

/* Block signals (auto storage) */
typedef struct {
  real_T Merge;                        /* '<Root>/Merge' */
  real_T Merge1;                       /* '<Root>/Merge1' */
  real_T Merge2;                       /* '<Root>/Merge2' */
  real_T Merge3;                       /* '<Root>/Merge3' */
  real_T Merge4;                       /* '<Root>/Merge4' */
} B_SecureRoom_Event_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint8_T InvalidCounter;              /* '<Root>/SignalValidationChart' */
  uint8_T is_active_c2_SecureRoom_Event;/* '<Root>/ModeOperationChart1' */
  uint8_T is_c2_SecureRoom_Event;      /* '<Root>/ModeOperationChart1' */
  uint8_T EmergencyCounter;            /* '<Root>/ModeOperationChart1' */
  uint8_T is_active_c1_SecureRoom_Event;/* '<Root>/InvalidOperation' */
} DW_SecureRoom_Event_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T SecureKey;                    /* '<Root>/SecureKey' */
  real_T MotionSensor_1;               /* '<Root>/MotionSensor_1' */
  real_T MotionSensor_2;               /* '<Root>/MotionSensor_2' */
  real_T FireSystem;                   /* '<Root>/FireSystem' */
} ExtU_SecureRoom_Event_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T EntranceGate;                 /* '<Root>/EntranceGate' */
  real_T EmergencyGate1;               /* '<Root>/EmergencyGate1' */
  real_T Led2;                         /* '<Root>/Led2' */
  real_T Led1;                         /* '<Root>/Led1 ' */
  real_T VacuumSystem;                 /* '<Root>/VacuumSystem' */
} ExtY_SecureRoom_Event_T;

/* Block signals (auto storage) */
extern B_SecureRoom_Event_T SecureRoom_Event_B;

/* Block states (auto storage) */
extern DW_SecureRoom_Event_T SecureRoom_Event_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_SecureRoom_Event_T SecureRoom_Event_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_SecureRoom_Event_T SecureRoom_Event_Y;

/* Model entry point functions */
extern void SecureRoom_Event_initialize(void);
extern void SecureRoom_Event_step(void);
extern void SecureRoom_Event_terminate(void);

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
 * '<Root>' : 'SecureRoom_Event'
 * '<S1>'   : 'SecureRoom_Event/InvalidOperation'
 * '<S2>'   : 'SecureRoom_Event/ModeOperationChart1'
 * '<S3>'   : 'SecureRoom_Event/SignalValidationChart'
 */
#endif                                 /* RTW_HEADER_SecureRoom_Event_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
