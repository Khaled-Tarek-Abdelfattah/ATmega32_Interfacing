/*
 * External_Interrupts.c
 *
 * Created: 10/2/2021 9:02:47 PM
 * Author : Khaled
 */ 

#include "External_Interrupt.h"
#include "LED_Interface.h"
#include "SWITCH_Interface.h"
#include <avr/interrupt.h>

ISR(INT0_vect)
{
	/* Toggle LED */
	Led_Toggle(LED_0);
	Led_Toggle(LED_1);
	Led_Toggle(LED_2);
}

int main(void)
{
    ExtInterrupt_Enable(EXT_INT0, RISING_EDGE_MODE);
	GlobaleInterrupts_StateSet(GLOBAL_INTERRUPTS_ENABLE);
	Switch_Init(SWITCH_2);
	Led_Init(LED_0);
	Led_Init(LED_1);
	Led_Init(LED_2);
    while (1) 
    {
    }
}

