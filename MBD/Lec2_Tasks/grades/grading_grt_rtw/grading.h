/*
 * grading.h
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

#ifndef RTW_HEADER_grading_h_
#define RTW_HEADER_grading_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef grading_COMMON_INCLUDES_
# define grading_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* grading_COMMON_INCLUDES_ */

#include "grading_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_grading_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_grading_T;

/* Parameters (auto storage) */
struct P_grading_T_ {
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 60
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 80
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: 100
                                        * Referenced by: '<Root>/Constant9'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_grading_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_grading_T grading_P;

/* External inputs (root inport signals with auto storage) */
extern ExtU_grading_T grading_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_grading_T grading_Y;

/* Model entry point functions */
extern void grading_initialize(void);
extern void grading_step(void);
extern void grading_terminate(void);

/* Real-time Model object */
extern RT_MODEL_grading_T *const grading_M;

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
 * '<Root>' : 'grading'
 * '<S1>'   : 'grading/If Action Subsystem'
 * '<S2>'   : 'grading/If Action Subsystem1'
 * '<S3>'   : 'grading/If Action Subsystem2'
 * '<S4>'   : 'grading/If Action Subsystem3'
 * '<S5>'   : 'grading/If Action Subsystem4'
 * '<S6>'   : 'grading/If Action Subsystem5'
 * '<S7>'   : 'grading/If Action Subsystem6'
 * '<S8>'   : 'grading/If Action Subsystem7'
 */
#endif                                 /* RTW_HEADER_grading_h_ */
