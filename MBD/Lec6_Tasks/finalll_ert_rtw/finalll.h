/*
 * File: finalll.h
 *
 * Code generated for Simulink model 'finalll'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:08:22 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_finalll_h_
#define RTW_HEADER_finalll_h_
#include <string.h>
#include <stddef.h>
#ifndef finalll_COMMON_INCLUDES_
# define finalll_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* finalll_COMMON_INCLUDES_ */

#include "finalll_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  uint32_T In1;                        /* '<Root>/In1' */
  uint32_T In2;                        /* '<Root>/In2' */
} ExtU_finalll_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  uint32_T Out1;                       /* '<Root>/Out1' */
  uint32_T Out2;                       /* '<Root>/Out2' */
  uint32_T Out3;                       /* '<Root>/Out3' */
  uint32_T Out4;                       /* '<Root>/Out4' */
} ExtY_finalll_T;

/* Real-time Model Data Structure */
struct tag_RTM_finalll_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_finalll_T finalll_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_finalll_T finalll_Y;

/* Model entry point functions */
extern void finalll_initialize(void);
extern void finalll_step(void);
extern void finalll_terminate(void);

/* Real-time Model object */
extern RT_MODEL_finalll_T *const finalll_M;

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
 * '<Root>' : 'finalll'
 * '<S1>'   : 'finalll/Chart'
 */
#endif                                 /* RTW_HEADER_finalll_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
