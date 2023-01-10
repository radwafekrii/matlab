/*
 * File: subsystem.h
 *
 * Code generated for Simulink model 'subsystem'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Tue Jan 10 23:55:48 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_subsystem_h_
#define RTW_HEADER_subsystem_h_
#include <string.h>
#include <stddef.h>
#ifndef subsystem_COMMON_INCLUDES_
# define subsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* subsystem_COMMON_INCLUDES_ */

#include "subsystem_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  uint8_T Operand1;                    /* '<Root>/Operand1' */
  uint8_T Operand2;                    /* '<Root>/Operand2' */
} ExtU_subsystem_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  uint8_T AND;                         /* '<Root>/AND' */
  uint8_T NAND;                        /* '<Root>/NAND' */
  uint8_T OR;                          /* '<Root>/OR' */
  uint8_T NOR;                         /* '<Root>/NOR' */
  uint8_T XOR;                         /* '<Root>/XOR' */
  uint8_T XNOR;                        /* '<Root>/XNOR' */
  uint8_T NOT;                         /* '<Root>/NOT' */
} ExtY_subsystem_T;

/* Real-time Model Data Structure */
struct tag_RTM_subsystem_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_subsystem_T subsystem_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_subsystem_T subsystem_Y;

/* Model entry point functions */
extern void subsystem_initialize(void);
extern void subsystem_step(void);
extern void subsystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_subsystem_T *const subsystem_M;

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
 * '<Root>' : 'subsystem'
 * '<S1>'   : 'subsystem/Subsystem'
 */
#endif                                 /* RTW_HEADER_subsystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
