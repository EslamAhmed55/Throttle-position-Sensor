/*
 * File: TPS.c
 *
 * Code generated for Simulink model 'TPS'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Wed Apr 10 17:33:48 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "TPS.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void TPS_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/TPS' */
  /* Outport: '<Root>/TPS_Sensor1_Failure' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Inport: '<Root>/TPS_Sensor1'
   *  Logic: '<S1>/OR'
   *  RelationalOperator: '<S1>/Relational Operator'
   *  RelationalOperator: '<S1>/Relational Operator1'
   */
  rtY.TPS_Sensor1_Failure = ((rtU.TPS_Sensor1 > 4.5F) || (rtU.TPS_Sensor1 < 0.5F));

  /* Outport: '<Root>/TPS_Sensor2_Failure' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Inport: '<Root>/TPS_Sensor2'
   *  Logic: '<S1>/OR1'
   *  RelationalOperator: '<S1>/Relational Operator2'
   *  RelationalOperator: '<S1>/Relational Operator3'
   */
  rtY.TPS_Sensor2_Failure = ((rtU.TPS_Sensor2 < 0.5F) || (rtU.TPS_Sensor2 > 4.5F));

  /* Outport: '<Root>/TPS_Cohernecy_Faliure' incorporates:
   *  Constant: '<S1>/Constant4'
   *  Inport: '<Root>/TPS_Sensor1'
   *  Inport: '<Root>/TPS_Sensor2'
   *  RelationalOperator: '<S1>/Relational Operator4'
   *  Sum: '<S1>/Add'
   */
  rtY.TPS_Cohernecy_Faliure = (rtU.TPS_Sensor1 + rtU.TPS_Sensor2 != 5.0F);

  /* End of Outputs for SubSystem: '<Root>/TPS' */
}

/* Model initialize function */
void TPS_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
