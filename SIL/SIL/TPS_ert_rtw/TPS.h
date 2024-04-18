/*
 * File: TPS.h
 *
 * Code generated for Simulink model 'TPS'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Thu Apr 18 10:13:33 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TPS_h_
#define RTW_HEADER_TPS_h_
#ifndef TPS_COMMON_INCLUDES_
#define TPS_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* TPS_COMMON_INCLUDES_ */

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T TPS_Sensor1;                /* '<Root>/TPS_Sensor1' */
  real32_T TPS_Sensor2;                /* '<Root>/TPS_Sensor2' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T TPS_Sensor1_Failure;       /* '<Root>/TPS_Sensor1_Failure' */
  boolean_T TPS_Sensor2_Failure;       /* '<Root>/TPS_Sensor2_Failure' */
  boolean_T TPS_Cohernecy_Faliure;     /* '<Root>/TPS_Cohernecy_Faliure' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void TPS_initialize(void);
extern void TPS_step(void);

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
 * '<Root>' : 'TPS'
 */
#endif                                 /* RTW_HEADER_TPS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
