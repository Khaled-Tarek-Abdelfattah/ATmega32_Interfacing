#include "BUZZER.h"
#include "SWITCH_Interface.h"

int main(void)
{
	Switch_Init(SWITCH_0);
	Switch_Init(SWITCH_2);
	Buzzer_init();
    while (1) 
    {
		if (Read_Switch(SWITCH_0))
		{
			Buzzer_SetState(DIO_HIGH);
		}
		if(Read_Switch(SWITCH_2))
		{
			Buzzer_SetState(DIO_LOW);
		}
    }
}

