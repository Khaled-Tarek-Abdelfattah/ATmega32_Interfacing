/*
 * ADC_Interface.c
 *
 * Created: 10/10/2021 1:32:03 PM
 * Author : Khaled Tarek
 */ 

#include "Adc.h"
#include "LCD.h"
#include "Temp_Sensor.h"
#include "Pot.h"
#include "SWITCH_Interface.h"
#include <util/delay.h>

int main(void)
{
    Pot_Init();
	TempSensor_Init();
	LCD_init();
	Switch_Init(SWITCH_0);
	Switch_Init(SWITCH_1);
	uint8 u8TempReading = 0;
	while(1)
	{
		if (Read_Switch(SWITCH_0))
		{
			while (1)
			{
				u8TempReading = TempSensor_ValueGet();
				LCD_Clear();
				LCD_IntegerDisplay(u8TempReading);
				LCD_StringDisplay(" Celsius");
				_delay_ms(500);
				if (Read_Switch(SWITCH_1))
				{
					TempSensor_Stop();
					LCD_Clear();
					break;
				}
			}
		}
		if (Read_Switch(SWITCH_1))
		{
			while (1)
			{
				u8TempReading = Pot_ValueGet();
				LCD_Clear();
				LCD_IntegerDisplay(u8TempReading);
				LCD_StringDisplay(" Volts");
				_delay_ms(500);
				if (Read_Switch(SWITCH_0))
				{
					Pot_Stop();
					LCD_Clear();
					break;
				}
			}
		}
	}
}

