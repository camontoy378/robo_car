/*
 ******************************************************************************
 * file           : main.c
 * Created		  : 11/04/2026
 * author         : camontoy378
 * brief          : Main program body
 ******************************************************************************
 */

#include <stdint.h>

#include "wheel_control.h"

//BOOL
#define TRUE				1
#define FALSE				0

//Delay function
void delay(){
	int i;
	for(i = 0; i < 5000000/2; i++){
		//
	}
}


int main(void)
{
	//Init peripherals
	wheel_init();

	//Initialize
	//int run	= FALSE;
	int run	= TRUE;

	wheel_run(STANDBY, RIGHT_WHEEL,RIGHT_WHEEL_SPEED);


	//Test wheels
    /* Loop forever */
	while(run){

		wheel_run(FORWARD, RIGHT_WHEEL, RIGHT_WHEEL_SPEED);

		delay();


		wheel_run(STOP, RIGHT_WHEEL, RIGHT_WHEEL_SPEED);

		delay();

		wheel_run(FORWARD, LEFT_WHEEL, LEFT_WHEEL_SPEED);
		//wheel_run(BACK, RIGHT_WHEEL, RIGHT_WHEEL_SPEED);

		delay();


		wheel_run(STOP, LEFT_WHEEL, LEFT_WHEEL_SPEED);
		//wheel_run(STOP, RIGHT_WHEEL, RIGHT_WHEEL_SPEED);

		delay();

		//run = FALSE;
	}
}
