/*
 * TimersConfig.h
 *
 * Created: 14/02/2020 04:58:38 ص
 *  Author: mo
 */


#ifndef TIMERSCONFIG_H_
#define TIMERSCONFIG_H_
/*INCLUDES**/
#include "std_types.h"
#include "registers.h"


/************************************************************************/
/*			  Structures Definitions		                            */
/************************************************************************/

typedef struct Timer_cfg_s
{
	uint8_t Timer_CH_NO;/*TIMER_CH0 0 or TIMER_CH1 1 or TIMER_CH2 2*/
	uint8_t Timer_Mode;/*Normal 0, Compare 1*/
	uint8_t Timer_Polling_Or_Interrupt;/*TIMER_POLLING_MODE 0,TIMER_INTERRUPT_MODE 1*/
	uint8_t Timer_Prescaler;/*No 0,8 1 ,16 2,32 3,64 4,128 5,256 6,1024 7*/
	void (*Timer_Cbk_ptr)(void);/*call back for TIMER_INTERRUPT_MODE*/
}Timer_cfg_s;

/************************************************************************/
/*				 DEFINES			        */
/************************************************************************/


#define		TIMER_CH0					0
#define		TIMER_CH1					1
#define		TIMER_CH2					2

#define		TIMER_MODE					0
#define		COUNTER_RISING_MODE					1
#define		COUNTER_FALLING_MODE				2

#define		TIMER_POLLING_MODE				0
#define		TIMER_INTERRUPT_MODE			1

#define		TIMER_NO_CLOCK					0
#define		TIMER_PRESCALER_NO				1
#define		TIMER_PRESCALER_8				2
#define		TIMER_PRESCALER_32				3
#define		TIMER_PRESCALER_64				4
#define		TIMER_PRESCALER_128				5
#define		TIMER_PRESCALER_256				6
#define		TIMER_PRESCALER_1024			7
/***/
typedef enum ERROR_STATUS{
	E_OK=0,
	E_NOK=1
	}ERROR_STATUS;

typedef enum boolen{
T=1,
F=0
}boolen;
#endif /* TIMERSCONFIG_H_ */
