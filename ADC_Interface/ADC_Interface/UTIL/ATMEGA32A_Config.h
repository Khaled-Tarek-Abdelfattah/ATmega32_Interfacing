
#define F_CPU (16000000U)  //lazem asmeeha F_CPU 3shan util_delay library 3arfa el esm da bs k frequency

#define NULL_PTR ((void*)0)

#ifndef ATMEGA32A_CONFIG_H_
#define ATMEGA32A_CONFIG_H_
#include "std_Types.h"
//PORTA Registers
#define PORTA_DIR_REG				((volatile uint8*)0x3AU)
#define PORTA_OUTPUT_REG			((volatile uint8*)0x3BU)
#define PORTA_INPUT_REG				((volatile uint8*)0x39U)

//PORTB Registers
#define PORTB_DIR_REG				((volatile uint8*)0x37U)
#define PORTB_OUTPUT_REG			((volatile uint8*)0x38U)
#define PORTB_INPUT_REG				((volatile uint8*)0x36U)

//PORTC Registers
#define PORTC_DIR_REG				((volatile uint8*)0x34U)
#define PORTC_OUTPUT_REG			((volatile uint8*)0x35U)
#define PORTC_INPUT_REG				((volatile uint8*)0x33U)

/*PORTD Registers*/
#define PORTD_DIR_REG				((volatile uint8*)0x31U)
#define PORTD_OUTPUT_REG			((volatile uint8*)0x32U)
#define PORTD_INPUT_REG				((volatile uint8*)0x30U)
/* !Comment: ADC configuration registers */
#define ADC_MUX_REG					((volatile uint8*) 0x27U)	/* ADMUX */
#define ADC_CTRL_STATUS_A_REG		((volatile uint8*) 0x26U)	/* ADCSRA */
#define ADC_DATA_HIGH_REG			((volatile uint8*) 0x25U)	/* ADCH */
#define ADC_DATA_LOW_REG			((volatile uint8*) 0x24U)	/* ADCL */
#define SPECIAL_FUNC_IO_REG			((volatile uint8*) 0x50U)	/* SFIOR */

#endif /* ATMEGA32A_CONFIG_H_ */