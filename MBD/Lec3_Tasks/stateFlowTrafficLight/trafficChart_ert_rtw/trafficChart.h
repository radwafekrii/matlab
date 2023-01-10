/*
 * File: trafficChart.h
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

#ifndef RTW_HEADER_trafficChart_h_
#define RTW_HEADER_trafficChart_h_
#include <stddef.h>
#include <string.h>
#ifndef trafficChart_COMMON_INCLUDES_
# define trafficChart_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* trafficChart_COMMON_INCLUDES_ */

#include "trafficChart_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_trafficChart;   /* '<Root>/Chart' */
  uint8_T is_c3_trafficChart;          /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_trafficChart_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
} ExtY_trafficChart_T;

/* Real-time Model Data Structure */
struct tag_RTM_trafficChart_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_trafficChart_T trafficChart_DW;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_trafficChart_T trafficChart_Y;

/* Model entry point functions */
extern void trafficChart_initialize(void);
extern void trafficChart_step(void);
extern void trafficChart_terminate(void);

/* Real-time Model object */
extern RT_MODEL_trafficChart_T *const trafficChart_M;

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
 * '<Root>' : 'trafficChart'
 * '<S1>'   : 'trafficChart/Chart'
 */
#endif                                 /* RTW_HEADER_trafficChart_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
