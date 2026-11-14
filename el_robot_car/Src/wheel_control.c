/*
 ******************************************************************************
 * file           : wheel_control.c
 * Created		  : 11/13/2026
 * author         : camontoy378
 * brief          : Wheel control
 ******************************************************************************
 */

#include "wheel_control.h"

/******************************************************************************
 * Initialize wheel GPIO pins
******************************************************************************/
void wheel_init(){

    GPIO_Handle_t wheel_pins;

    //Set Pin port B
    wheel_pins.pGPIOx	= GPIOB;

    //Configure STBY pin (D3)
    wheel_pins.GPIO_PinConfig.GPIO_PinNumber		= MOTOR_PIN_STBY;
    wheel_pins.GPIO_PinConfig.GPIO_PinMode			= GPIO_MODE_OUT;
    wheel_pins.GPIO_PinConfig.GPIO_PinSpeed			= GPIO_SPEED_LOW;
    wheel_pins.GPIO_PinConfig.GPIO_PinPuPdControl	= GPIO_PIN_PU;
    wheel_pins.GPIO_PinConfig.GPIO_PinOPType		= GPIO_OP_TYPE_OD;

    GPIO_Init(&wheel_pins);


    //Configure PWMA pin (D5)
    wheel_pins.GPIO_PinConfig.GPIO_PinNumber		= MOTOR_PIN_PWMA;

    GPIO_Init(&wheel_pins);


    //Configure PWMB pin (D6)
    wheel_pins.GPIO_PinConfig.GPIO_PinNumber		= MOTOR_PIN_PWMB;

    GPIO_Init(&wheel_pins);


    //Set Pin port A
    wheel_pins.pGPIOx	= GPIOA;

    //Configure AIN1 pin (D7)
    wheel_pins.GPIO_PinConfig.GPIO_PinNumber		= MOTOR_PIN_AIN_1;

    GPIO_Init(&wheel_pins);


    //Configure BIN1 pin (D8)
    wheel_pins.GPIO_PinConfig.GPIO_PinNumber		= MOTOR_PIN_BIN_1;

    GPIO_Init(&wheel_pins);
}


/******************************************************************************
 *
******************************************************************************/
void wheel_run(int direction, int side, int speed){

	if(side == RIGHT_WHEEL){

		switch(direction){

		case BACK:
			GPIO_WriteToOutputPin(GPIOB, MOTOR_PIN_STBY,  ENABLE);
			GPIO_WriteToOutputPin(GPIOB, speed,  HIGH);

			GPIO_WriteToOutputPin(GPIOA, side, LOW);
			break;
		case FORWARD:
			GPIO_WriteToOutputPin(GPIOB, MOTOR_PIN_STBY,  ENABLE);
			GPIO_WriteToOutputPin(GPIOB, speed,  HIGH);

			GPIO_WriteToOutputPin(GPIOA, side, HIGH);
			break;
		case STOP:
			GPIO_WriteToOutputPin(GPIOB, speed, LOW);
			break;
		case STANDBY:
			GPIO_WriteToOutputPin(GPIOB, MOTOR_PIN_STBY, DISABLE);
			break;
		default:

		}

	}
	else if(side == LEFT_WHEEL){

		switch(direction){

		case BACK:
			GPIO_WriteToOutputPin(GPIOB, MOTOR_PIN_STBY,  ENABLE);
			GPIO_WriteToOutputPin(GPIOB, speed,  HIGH);

			GPIO_WriteToOutputPin(GPIOA, side, LOW);
			break;
		case FORWARD:
			GPIO_WriteToOutputPin(GPIOB, MOTOR_PIN_STBY,  ENABLE);
			GPIO_WriteToOutputPin(GPIOB, speed,  HIGH);

			GPIO_WriteToOutputPin(GPIOA, side, HIGH);
			break;
		case STOP:
			GPIO_WriteToOutputPin(GPIOB, speed, LOW);
			break;
		case STANDBY:
			GPIO_WriteToOutputPin(GPIOB, MOTOR_PIN_STBY, DISABLE);

			break;
		default:


		}
	}

}
