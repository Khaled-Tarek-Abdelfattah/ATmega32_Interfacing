/*
 * DC_Motor.h
 *
 * Created: 10/17/2021 8:35:35 PM
 *  Author: Khaled Tarek
 */ 


#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include "Dio.h"
#include "Pwm.h"

#define DC_MOTOR0_DIR_REG        (PORTC_DIR_REG)
#define DC_MOTOR0_OUT_REG        (PORTC_OUTPUT_REG)
#define DC_MOTOR0_IN1_PIN        (DIO_PIN5)
#define DC_MOTOR0_IN2_PIN        (DIO_PIN6)

#define DC_MOTOR0_EN_DIR_REG     (PORTB_DIR_REG)
#define DC_MOTOR0_EN_PIN         (DIO_PIN3)

#define DC_MOTOR1_DIR_REG        (PORTC_DIR_REG)
#define DC_MOTOR1_OUT_REG        (PORTC_OUTPUT_REG)
#define DC_MOTOR1_IN1_PIN        (DIO_PIN5)
#define DC_MOTOR1_IN2_PIN        (DIO_PIN6)

#define DC_MOTOR1_EN_DIR_REG     (PORTD_DIR_REG)
#define DC_MOTOR1_EN_PIN         (DIO_PIN5)

#define DC_MOTOR2_DIR_REG        (PORTC_DIR_REG)
#define DC_MOTOR2_OUT_REG        (PORTC_OUTPUT_REG)
#define DC_MOTOR2_IN1_PIN        (DIO_PIN5)
#define DC_MOTOR2_IN2_PIN        (DIO_PIN6)

#define DC_MOTOR2_EN_DIR_REG     (PORTD_DIR_REG)
#define DC_MOTOR2_EN_PIN         (DIO_PIN7)

typedef enum
{
	DC_MOTOR_TURN_CW,
	DC_MOTOR_TURN_CCW
}DcMotor_RotationDirType;

typedef enum
{
	DC_MOTOR_SPEED_LOW,
	DC_MOTOR_SPEED_MID,
	DC_MOTOR_SPEED_HIGH,
}DcMotor_SpeedType;

void DCMotor_Init(void);
void DCMotor_Control(DcMotor_RotationDirType Dir, DcMotor_SpeedType Speed);


#endif /* DC_MOTOR_H_ */