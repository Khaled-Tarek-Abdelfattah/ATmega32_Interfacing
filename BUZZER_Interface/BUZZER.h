/*
 * BUZZER.h
 *
 * Created: 9/25/2021 3:45:09 PM
 *  Author: hp
 */ 


#ifndef BUZZER_H_
#define BUZZER_H_

#include "ATMEGA32A_Config.h"
#include "Dio.h"

#define Buzzer_Port		DIO_PORTA
#define Buzzer_Pin		DIO_PIN3

void Buzzer_init();
void Buzzer_SetState(Dio_PinStateEnum_t state);



#endif /* BUZZER_H_ */