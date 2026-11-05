/*
 ******************************************************************************
 * file           : main.c
 * Created		  : 11/04/2026
 * author         : camontoy378
 * brief          : Main program body
 ******************************************************************************
 */

#include <stdint.h>

//Include STM libs
#include "stm32f446xx.h"
#include "stm32f446xx_gpio_driver.h"

//Initialize GPIO
void gpio_init_wheel_controller(){

    GPIO_Handle_t wheel_pins;

    //Set Pin port D
    wheel_pins.pGPIOx	= GPIOD;

    //Configure STBY pin (D3)
    wheel_pins.GPIO_PinConfig.GPIO_PinNumber		= GPIO_PIN_NO_3;
    wheel_pins.GPIO_PinConfig.GPIO_PinMode			= GPIO_MODE_OUT;
    wheel_pins.GPIO_PinConfig.GPIO_PinSpeed			= GPIO_SPEED_LOW;
    wheel_pins.GPIO_PinConfig.GPIO_PinPuPdControl	= GPIO_PIN_PU;
    wheel_pins.GPIO_PinConfig.GPIO_PinOPType		= GPIO_OP_TYPE_OD;
    wheel_pins.GPIO_PinConfig.GPIO_PinAltFunMode	= GPIO_MODE_OUT;

    GPIO_Init(&wheel_pins);


    //Configure PWMA pin (D5)
    wheel_pins.GPIO_PinConfig.GPIO_PinNumber		= GPIO_PIN_NO_5;

    GPIO_Init(&wheel_pins);


    //Configure PWMB pin (D6)
    wheel_pins.GPIO_PinConfig.GPIO_PinNumber		= GPIO_PIN_NO_6;

    GPIO_Init(&wheel_pins);


    //Configure AIN1 pin (D7)
    wheel_pins.GPIO_PinConfig.GPIO_PinNumber		= GPIO_PIN_NO_7;

    GPIO_Init(&wheel_pins);


    //Configure BIN1 pin (D8)
    wheel_pins.GPIO_PinConfig.GPIO_PinNumber		= GPIO_PIN_NO_8;

    GPIO_Init(&wheel_pins);
}

int main(void)
{
    /* Loop forever */
	while(1){
		//
	}
}
