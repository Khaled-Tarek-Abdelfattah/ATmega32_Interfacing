/*
 * StepperMotor_Interface.h
 *
 * Created: 10/1/2021 6:44:44 PM
 *  Author: hp
 */ 


#ifndef STEPPERMOTOR_INTERFACE_H_
#define STEPPERMOTOR_INTERFACE_H_
#include "ATMEGA32A_Config.h"
#include "util/delay.h"
#include "Dio.h"

#define STEPPER_MOTOR_DIR_REG			(PORTA_DIR_REG)
#define STEPPER_MOTOR_OUT_REG			(PORTA_OUTPUT_REG)

#define STEPPER_MOTOR_IN1_PIN			(DIO_PIN4)
#define STEPPER_MOTOR_IN2_PIN			(DIO_PIN5)
#define STEPPER_MOTOR_IN3_PIN			(DIO_PIN6)
#define STEPPER_MOTOR_IN4_PIN			(DIO_PIN7)

#define STEPPER_MOTOR_STEP_DELAY_MS		(3U)


void StepperMotor_Init(void);
void StepperMotor_TurnCW(void);
void StepperMotor_TurnCCW(void);


#endif /* STEPPERMOTOR_INTERFACE_H_ */