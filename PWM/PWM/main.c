/*
 * PWM.c
 *
 * Created: 10/17/2021 6:52:28 PM
 * Author : Khaled Tarek
 */ 

#include "DC_Motor.h"
#include "Pwm.h"


int main(void)
{
    /* Replace with your application code */
	DCMotor_Init();
    while (1) 
    {
		DCMotor_Control(DC_MOTOR_TURN_CCW,DC_MOTOR_SPEED_MID);
    }
}

