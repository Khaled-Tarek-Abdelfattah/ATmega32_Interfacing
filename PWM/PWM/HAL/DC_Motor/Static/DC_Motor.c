/*
 * DC_Motor.c
 *
 * Created: 10/17/2021 8:35:49 PM
 *  Author: Khaled Tarek
 */ 

#include "DC_Motor.h"

void DCMotor_Init(void)
{
	/* !Comment: Initialize the DC Motor direction selection Pins */
	DioDirectionSet(DC_MOTOR2_DIR_REG, DC_MOTOR2_IN1_PIN, DIO_OUTPUT);
	DioDirectionSet(DC_MOTOR2_DIR_REG, DC_MOTOR2_IN2_PIN, DIO_OUTPUT);
	DioDirectionSet(DC_MOTOR2_EN_DIR_REG, DC_MOTOR2_EN_PIN, DIO_OUTPUT);
	/* !Comment: Initialize PWM module */
	Pwm_Init(&gPwm2_configuration);
}
void DCMotor_Control(DcMotor_RotationDirType Dir, DcMotor_SpeedType Speed)
{
	switch(Dir)
	{
		case DC_MOTOR_TURN_CW:
		DioChannelWrite(DC_MOTOR2_OUT_REG, DC_MOTOR2_IN1_PIN, DIO_HIGH);
		DioChannelWrite(DC_MOTOR2_OUT_REG, DC_MOTOR2_IN2_PIN, DIO_LOW);
		break;
		case DC_MOTOR_TURN_CCW:
		DioChannelWrite(DC_MOTOR2_OUT_REG, DC_MOTOR2_IN1_PIN, DIO_LOW);
		DioChannelWrite(DC_MOTOR2_OUT_REG, DC_MOTOR2_IN2_PIN, DIO_HIGH);
		break;
		default:
		break;
	}
	switch(Speed)
	{
		case DC_MOTOR_SPEED_LOW:
		Pwm_SetDutyCycle(PWM_CHANNEL2,PWM_HIGH, 20U);
		break;
		case DC_MOTOR_SPEED_MID:
		Pwm_SetDutyCycle(PWM_CHANNEL2,PWM_HIGH, 50U);
		break;
		case DC_MOTOR_SPEED_HIGH:
		Pwm_SetDutyCycle(PWM_CHANNEL2,PWM_HIGH, 90U);
		break;
		default:
		break;
	}
}
