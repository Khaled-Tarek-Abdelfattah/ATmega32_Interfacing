/**************************************************************************
 * FileName:Icu.h                                                         *
 *                                                                        *
 * Created: 10/20/2021 4:11:49 PM										  *
 *                                                                        *
 *  Author: Khaled Tarek                                                  *
 ***************************************************************************/ 


#ifndef ICU_H_
#define ICU_H_

#include "ATMEGA32A_Config.h"
#include "Macros.h"
#include "Icu_Pcfg.h"

/*******************************************************************************
 *                          ICU CHANNEL SELECTION                              *
 *******************************************************************************/
typedef enum 
{
	Icu_Channel1,
}Icu_ChannelType;

/*******************************************************************************
 *                              ICU STATUS                                     *
 *******************************************************************************/
typedef enum
{
	ICU_IDLE,				/*!Comment: No activation edge detected */
	ICU_ACTIVE,				/*!Comment: Activation edge has been detected */
}Icu_InputStateType;

/*******************************************************************************
 *                         PRESCALER SELECTION                                 *
 *******************************************************************************/
typedef enum
{
	ICU_NOCLK,
	ICU_PRESCALE1,
	ICU_PRESCALE8,
	ICU_PRESCALE64,
	ICU_PRESCALE256,
	ICU_PRESCALE1024,
	ICU_EXTERNALCLK_FALLING_EDGE,
	ICU_EXTERNALCLK_RISING_EDGE,
}Icu_PrescaleType;

/*******************************************************************************
 *                         TRIGGER EDGE FOR ICU                                *
 *******************************************************************************/
typedef enum
{
	ICU_FALLING_EDGE = 0x00,
	ICU_RISING_EDGE = 0x40,
}Icu_ActivationType;

/*******************************************************************************
 *                         Interrupt Status of ICU                             *
 *******************************************************************************/
typedef enum
{
	ICU_INT_DISABLE = 0x00,
	ICU_INT_ENABLE = 0x20,
}Icu_InterruptType;

typedef struct
{
	Icu_ChannelType IcuChannel;
	Icu_ActivationType IcuEdgeTrigger;
	Icu_PrescaleType IcuClkDiv;
	Icu_InterruptType IcuInt;
}Icu_ConfigType;

typedef uint16 Icu_ValueType;

/*******************************************************************************
 *                            Extern the Structure                             *
 *******************************************************************************/
extern Icu_ConfigType gastrIcu_Configuration;

/*******************************************************************************
 *                        ICU INITIALIZATION FUNCTION                          *
 *******************************************************************************/
void Icu_Init(Icu_ConfigType * ConfigPtr);

/*******************************************************************************
 *                        ICU Get Status function                              *
 *******************************************************************************/
Icu_ValueType Icu_GetValue(Icu_ChannelType Channel);

#endif /* ICU_H_ */