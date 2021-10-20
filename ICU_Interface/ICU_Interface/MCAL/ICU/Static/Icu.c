/**************************************************************************
 * FileName:Icu.c                                                         *
 *                                                                        *
 * Created: 10/20/2021 4:14:49 PM										  *
 *                                                                        *
 *  Author: Khaled Tarek                                                  *
 ***************************************************************************/ 

#include "Icu.h"

/*******************************************************************************
 *                     Deceleration of static functions                        *
 *******************************************************************************/
static void Icu_Timer1InitReg(void);
static Icu_InputStateType Icu_GetInputState(Icu_ChannelType Channel);

/*******************************************************************************
 *                     Implementation of the functions                        *
 *******************************************************************************/
void Icu_Init(Icu_ConfigType * ConfigPtr)
{
	switch(ConfigPtr->IcuChannel)
	{
		case Icu_Channel1:
		Icu_Timer1InitReg();
		*TIMER1_CTRL_B_REG |= ConfigPtr->IcuEdgeTrigger;
		*TIMER1_CTRL_B_REG |= ConfigPtr->IcuClkDiv;
		SET_BIT(*TIMER1_CTRL_B_REG,INPUT_CAPTUR_NOISE_CANCLER);
		*TIMER_INTERRUPT_MASK_REG |= ConfigPtr->IcuInt;
		break;
		default:
		break;
	}
}

Icu_ValueType Icu_GetValue(Icu_ChannelType Channel)
{
	Icu_ValueType LocalIcuValue = 0U;
	switch(Channel)
	{
		case Icu_Channel1:
		while(Icu_GetInputState(Icu_Channel1) == ICU_IDLE)
		{
			/*Stuck in the while loop*/
		}
		LocalIcuValue = *(uint16 *)TIMER1_INP_CAP_LOW_REG;
		break;
		default:
		break;
	}
	return LocalIcuValue;
}


static Icu_InputStateType Icu_GetInputState(Icu_ChannelType Channel)
{
	Icu_InputStateType LocalIcuStatus = ICU_IDLE;
	switch(Channel)
	{
		case Icu_Channel1:
		if(READ_BIT(*TIMER_INTERRUPT_FLAG_REG,INPUT_CAPTUR_INTERRUPT_FLAG) == ICU_IDLE)
		{
			/*Do Nothing */
		}
		else
		{
			/*!Comment:Data Now is Available*/
			LocalIcuStatus = ICU_ACTIVE;
			/*!Comment:Clear the ICU flag*/
			SET_BIT(*TIMER_INTERRUPT_FLAG_REG,INPUT_CAPTUR_INTERRUPT_FLAG);
		}
		break;
		default:
		break;
	}
	return LocalIcuStatus;
}

static void Icu_Timer1InitReg(void)
{
	*TIMER1_CMP_B_HIGH_REG = 0x00U;
	*TIMER1_CMP_B_LOW_REG = 0x00U;
	*TIMER1_CTRL_A_REG = 0x00U;
	*TIMER1_CTRL_B_REG = 0x00U;
	*TIMER_INTERRUPT_MASK_REG &= (0xC3U);
}