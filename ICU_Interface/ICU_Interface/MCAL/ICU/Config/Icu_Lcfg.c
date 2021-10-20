/**************************************************************************
 * FileName:Icu_Lcfg.h                                                         *
 *                                                                        *
 * Created: 10/20/2021 4:17:49 PM										  *
 *                                                                        *
 *  Author: Khaled Tarek                                                  *
 ***************************************************************************/ 

#include "Icu.h"

Icu_ConfigType gastrIcu_Configuration =
{
	Icu_Channel1,
	ICU_RISING_EDGE,
	ICU_PRESCALE256,
	ICU_INT_ENABLE,
};