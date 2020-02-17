/*
 * Timers_Static_design.c
 *
 * Created: 14/02/2020 04:57:25 ص
 *  Author: mo
 */ 

#include "DIO.h"
#include "Timer.h"
int main(void)
{uint8_t error;
	 error = Timer_Init(&Timer_Configuration);
	 DIO_init (&Dio_configuration);
     DIO_Write (GPIOB,UPPER_NIBBLE,HIGH);
	while(1)
    {
	Timer_Start(TIMER_CH2,200);	
	  error=DIO_Toggle(GPIOB,UPPER_NIBBLE);
	  
    }
}