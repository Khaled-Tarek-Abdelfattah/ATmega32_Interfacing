/*
 * External_Interrupt.h
 *
 * Created: 10/3/2021 6:07:12 PM
 *  Author: Khaled
 */ 


#ifndef EXTERNAL_INTERRUPT_H_
#define EXTERNAL_INTERRUPT_H_

#include "ATmega32_Cfg.h"
#include "Macros.h"
#include "Std_Types.h"

typedef enum
{
	EXT_INT0,
	EXT_INT1,
	EXT_INT2
}ExtInterruptSourceEnum_t;

typedef enum
{
	RISING_EDGE_MODE,
	FALLING_EDGE_MODE,
	EDGE_TRIGGER_MODE,
	LOW_LEVEL_MODE
}ExtInterruptModeEnum_t;

typedef enum
{
	GLOBAL_INTERRUPTS_DISABLE,
	GLOBAL_INTERRUPTS_ENABLE
}GlobalInterruptsStateEnum_t;

void ExtInterrupt_Enable(ExtInterruptSourceEnum_t Source, ExtInterruptModeEnum_t Mode);
void ExtInterrupt_Disable(ExtInterruptSourceEnum_t Source);
void GlobaleInterrupts_StateSet(GlobalInterruptsStateEnum_t State);


#endif /* EXTERNAL_INTERRUPT_H_ */