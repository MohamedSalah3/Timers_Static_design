/*
 * Timers_Static_design.c
 *
 * Created: 14/02/2020 04:57:25 ص
 *  Author: mo
 */ 

#include "DIO.h"
#include "avr/delay.h"
int main(void)
{uint8_t error,err;
	 err=DIO_init (&Dio_configuration);
      error=DIO_Write (GPIOB,UPPER_NIBBLE,HIGH);
	while(1)
    {
    	_delay_ms(1000);
	  error=DIO_Toggle(GPIOB,UPPER_NIBBLE);
	  
    }
}