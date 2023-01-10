/*
 * File: downCounter.h
 *
 * Code generated for Simulink model 'downCounter'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:49:25 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_downCounter_h_
#define RTW_HEADER_downCounter_h_
#include <stddef.h>
#ifndef downCounter_COMMON_INCLUDES_
# define downCounter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* downCounter_COMMON_INCLUDES_ */

#include "downCounter_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_downCounter_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_downCounter_T;

/* Real-time Model Data Structure */
struct tag_RTM_downCounter_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_downCounter_T downCounter_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_downCounter_T downCounter_Y;

/* Model entry point functions */
extern void downCounter_initialize(void);
extern void downCounter_step(void);
extern void downCounter_terminate(void);

/* Real-time Model object */
extern RT_MODEL_downCounter_T *const downCounter_M;

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
 * '<Root>' : 'downCounter'
 */
#endif                                 /* RTW_HEADER_downCounter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
