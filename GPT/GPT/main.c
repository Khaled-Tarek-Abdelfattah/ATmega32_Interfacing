/*
 * GPT.c
 *
 * Created: 10/12/2021 12:44:09 PM
 * Author : hp
 */ 

#include "Gpt.h"
#include "LED_Interface.h"
#include "External_Interrupt.h"
#include <avr/interrupt.h>

uint16 gu16Counter0 = 0U;
uint16 gu16Counter2 = 0U;

ISR(TIMER0_COMP_vect)
{
	gu16Counter0++;
}

ISR(TIMER1_COMPA_vect)
{
	Led_Toggle(LED_0);									/* 3 seconds */
}
ISR(TIMER2_OVF_vect)
{
	gu16Counter2++;
}

int main(void)
{
    Gpt_Init(&gaStrGpt0_Configuration);
	Gpt_Init(&gaStrGpt1_Configuration);
	Gpt_Init(&gaStrGpt2_Configuration);
	GlobaleInterrupts_StateSet(GLOBAL_INTERRUPTS_ENABLE);
	Led_Init(LED_0);
	Led_Init(LED_1);
	Led_Init(LED_2);
    while (1) 
    {
		if (gu16Counter0>=391U)
		{
			Led_Toggle(LED_1);							/* 5 seconds */
			gu16Counter0 = 0;
		}
		if (gu16Counter2>=977U)
		{
			Led_Toggle(LED_2);							/* 4 seconds */
			gu16Counter2 = 0;
		}
    }
}

