#include "StepperMotor_Interface.h"

uint8 gau8StepperRotation[4U]={0x10U,0x20U,0x40,0x80};
uint8 gau8StepperRotation_2[4U]={0x10U,0x20U,0x40,0x80};

void StepperMotor_Init(void){
	/* initialize for stepper motor pin to be output */
	DioDirectionSet(STEPPER_MOTOR_DIR_REG,STEPPER_MOTOR_IN1_PIN,DIO_OUTPUT);
	DioDirectionSet(STEPPER_MOTOR_DIR_REG,STEPPER_MOTOR_IN2_PIN,DIO_OUTPUT);
	DioDirectionSet(STEPPER_MOTOR_DIR_REG,STEPPER_MOTOR_IN3_PIN,DIO_OUTPUT);
	DioDirectionSet(STEPPER_MOTOR_DIR_REG,STEPPER_MOTOR_IN4_PIN,DIO_OUTPUT);
	
}
void StepperMotor_TurnCW(void){
	uint8 u8LocalLoopIndex=0U;
	while(1){
		for (u8LocalLoopIndex=0;u8LocalLoopIndex<4U;u8LocalLoopIndex++)
		{
			*STEPPER_MOTOR_OUT_REG &= 0x0FU;
			*STEPPER_MOTOR_OUT_REG |= gau8StepperRotation[u8LocalLoopIndex];
			_delay_ms(STEPPER_MOTOR_STEP_DELAY_MS);
		}
	}
		/*while(1){
		0x10U<<i;
		i++;
		if (i==3)
		{
			i=0;
		}
	}*/
}
void StepperMotor_TurnCCW(void){
	sint8 s8LocalLoopIndex;
	while(1){
		for (s8LocalLoopIndex=3;s8LocalLoopIndex >= 0;s8LocalLoopIndex--)
		{
			*STEPPER_MOTOR_OUT_REG &= (0x0FU);
			*STEPPER_MOTOR_OUT_REG |= gau8StepperRotation[s8LocalLoopIndex];
			_delay_ms(STEPPER_MOTOR_STEP_DELAY_MS);
		}
	}
}