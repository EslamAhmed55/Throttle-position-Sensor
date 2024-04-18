/*
 * File: TPS.c
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

#include "TPS.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void TPS_step(void)
{
  /* Outport: '<Root>/TPS_Sensor1_Failure' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Inport: '<Root>/TPS_Sensor1'
   *  Logic: '<Root>/OR'
   *  RelationalOperator: '<Root>/Relational Operator'
   *  RelationalOperator: '<Root>/Relational Operator1'
   */
  rtY.TPS_Sensor1_Failure = ((rtU.TPS_Sensor1 > 4.5F) || (rtU.TPS_Sensor1 < 0.5F));

  /* Outport: '<Root>/TPS_Sensor2_Failure' incorporates:
   *  Constant: '<Root>/Constant2'
   *  Constant: '<Root>/Constant3'
   *  Inport: '<Root>/TPS_Sensor2'
   *  Logic: '<Root>/OR1'
   *  RelationalOperator: '<Root>/Relational Operator2'
   *  RelationalOperator: '<Root>/Relational Operator3'
   */
  rtY.TPS_Sensor2_Failure = ((rtU.TPS_Sensor2 < 0.5F) || (rtU.TPS_Sensor2 > 4.5F));

  /* Outport: '<Root>/TPS_Cohernecy_Faliure' incorporates:
   *  Constant: '<Root>/Constant4'
   *  Inport: '<Root>/TPS_Sensor1'
   *  Inport: '<Root>/TPS_Sensor2'
   *  RelationalOperator: '<Root>/Relational Operator4'
   *  Sum: '<Root>/Add'
   */
  rtY.TPS_Cohernecy_Faliure = (rtU.TPS_Sensor1 + rtU.TPS_Sensor2 != 5.0F);
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
