#include "StepperMotor_Interface.h"
#include "SWITCH_Interface.h"

int main(void)
{
    StepperMotor_Init();
    while (1) 
    {
		StepperMotor_TurnCCW();
    }
}

