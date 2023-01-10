/*
 * File: subsys.h
 *
 * Code generated for Simulink model 'subsys'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:20:36 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_subsys_h_
#define RTW_HEADER_subsys_h_
#include <string.h>
#include <stddef.h>
#ifndef subsys_COMMON_INCLUDES_
# define subsys_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* subsys_COMMON_INCLUDES_ */

#include "subsys_types.h"

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
  real_T In2;                          /* '<Root>/In2' */
} ExtU_subsys_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  real_T Out4;                         /* '<Root>/Out4' */
} ExtY_subsys_T;

/* Real-time Model Data Structure */
struct tag_RTM_subsys_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_subsys_T subsys_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_subsys_T subsys_Y;

/* Model entry point functions */
extern void subsys_initialize(void);
extern void subsys_step(void);
extern void subsys_terminate(void);

/* Real-time Model object */
extern RT_MODEL_subsys_T *const subsys_M;

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
 * '<Root>' : 'subsys'
 * '<S1>'   : 'subsys/Subsystem'
 */
#endif                                 /* RTW_HEADER_subsys_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
