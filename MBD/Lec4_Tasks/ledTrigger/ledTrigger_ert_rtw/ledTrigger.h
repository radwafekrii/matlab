/*
 * File: ledTrigger.h
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

#ifndef RTW_HEADER_ledTrigger_h_
#define RTW_HEADER_ledTrigger_h_
#include <stddef.h>
#include <string.h>
#ifndef ledTrigger_COMMON_INCLUDES_
# define ledTrigger_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#endif                                 /* ledTrigger_COMMON_INCLUDES_ */

#include "ledTrigger_types.h"
#include "rt_zcfcn.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
} DW_ledTrigger_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState TriggeredSubsystem_Trig_ZCE;/* '<Root>/Triggered Subsystem' */
} PrevZCX_ledTrigger_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_ledTrigger_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T led;                          /* '<Root>/led' */
} ExtY_ledTrigger_T;

/* Real-time Model Data Structure */
struct tag_RTM_ledTrigger_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_ledTrigger_T ledTrigger_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_ledTrigger_T ledTrigger_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_ledTrigger_T ledTrigger_Y;

/* Model entry point functions */
extern void ledTrigger_initialize(void);
extern void ledTrigger_step(void);
extern void ledTrigger_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ledTrigger_T *const ledTrigger_M;

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
 * '<Root>' : 'ledTrigger'
 * '<S1>'   : 'ledTrigger/Triggered Subsystem'
 * '<S2>'   : 'ledTrigger/Triggered Subsystem/Chart'
 */
#endif                                 /* RTW_HEADER_ledTrigger_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
