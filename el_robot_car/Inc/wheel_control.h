/*
 ******************************************************************************
 * file           : wheel_control.h
 * Created		  : 11/13/2026
 * author         : camontoy378
 * brief          : Wheel control
 ******************************************************************************
 */

#ifndef WHEEL_CONTROL_H_
#define WHEEL_CONTROL_H_

//Include STM libs
#include "stm32f446xx.h"
#include "stm32f446xx_gpio_driver.h"

//Pin mapping
#define MOTOR_PIN_STBY		GPIO_PIN_NO_3
#define MOTOR_PIN_PWMA		GPIO_PIN_NO_4
#define MOTOR_PIN_PWMB		GPIO_PIN_NO_10
#define MOTOR_PIN_AIN_1		GPIO_PIN_NO_8
#define MOTOR_PIN_BIN_1		GPIO_PIN_NO_9
#define RIGHT_WHEEL			MOTOR_PIN_AIN_1
#define LEFT_WHEEL			MOTOR_PIN_BIN_1
#define RIGHT_WHEEL_SPEED	MOTOR_PIN_PWMA
#define LEFT_WHEEL_SPEED	MOTOR_PIN_PWMB

enum wheel_dir{
	BACK,
	FORWARD,
	STOP,
	STANDBY
};


void wheel_init();
void wheel_run(int direction, int side, int speed);


#endif /* WHEEL_CONTROL_H_ */
