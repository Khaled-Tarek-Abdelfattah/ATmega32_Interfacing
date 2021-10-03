/*
 * ATmega32_Cfg.h
 *
 * Created: 9/12/2021 9:35:26 PM
 *  Author: Khaled
 */ 


#ifndef ATMEGA32_CFG_H_
#define ATMEGA32_CFG_H_

#include "Std_Types.h"

#define  F_CPU 16000000U

#define PORTA_DIR_REG      ((volatile uint8*)0x3AU)
#define PORTA_INPUT_REG      ((volatile uint8*)0x39U)
#define PORTA_OUTPUT_REG      ((volatile uint8*)0x3BU)

#define PORTB_DIR_REG      ((volatile uint8*)0x37U)
#define PORTB_INPUT_REG      ((volatile uint8*)0x36U)
#define PORTB_OUTPUT_REG      ((volatile uint8*)0x38U)

#define PORTC_DIR_REG      ((volatile uint8*)0x34U)
#define PORTC_INPUT_REG      ((volatile uint8*)0x33U)
#define PORTC_OUTPUT_REG      ((volatile uint8*)0x35U)

#define PORTD_DIR_REG      ((volatile uint8*)0x31U)
#define PORTD_INPUT_REG      ((volatile uint8*)0x30U)
#define PORTD_OUTPUT_REG      ((volatile uint8*)0x32U)

/* External Interrupts Registers */
#define MCU_CTRL_REG         ((volatile uint8*)0x55U)  /* MCUCR */
#define MCU_CTRL_STATUS_REG  ((volatile uint8*)0x54U)  /* MCUCSR */
#define GENRAL_INT_CTRL_REG  ((volatile uint8*)0x5BU)  /* GICR */
#define AVR_STATUS_REG       ((volatile uint8*)0x5FU)  /* SREG */

#define INT0_ISC00					  (0U)
#define INT0_ISC01					  (1U)
#define INT1_ISC10					  (2U)
#define INT1_ISC11					  (3U)
#define INT2_ISC2					  (6U)

#define INT0_ENABLE_BIT				  (6U)
#define INT1_ENABLE_BIT				  (7U)
#define INT2_ENABLE_BIT				  (5U)
#define GLOBALE_INTERRUPTS_ENABLE_BIT (7U)

#endif /* ATMEGA32_CFG_H_ */