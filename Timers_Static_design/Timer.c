/*

 * Timers.c
 *
 * Created: 14/02/2020 04:57:53 ص
 *  Author: mo
 */
 /*INCLUDES*/
#include "Timer.h"
#include "Timer_Config.h"

/************************************************************************/
/*		         TIMER FUNCTIONS' IMPLEMENTATION		        */
/************************************************************************/
 /**
 * Input: Pointer to a structure contains the information needed to initialize the timer.
 * Output:
 * In/Out:
 * Return: The error status of the function.
 * Description: Initiates the module.
 *
 */
ERROR_STATUS Timer_Init(Timer_cfg_s* Timer_cfg)
{
switch (Timer_cfg->Timer_CH_NO) {
  case TIMER_CH0:
  {

switch (Timer_cfg->Timer_Mode) {
  case TIMER_MODE:
  {
      switch (Timer_cfg->Timer_Polling_Or_Interrupt) {
        case TIMER_POLLING_MODE:
        {

          break;
        }
        case TIMER_INTERRUPT_MODE:
        {

          break;
        }
      }

    break;
  }
  case COUNTER_RISING_MODE:
  {

        switch (Timer_cfg->Timer_Polling_Or_Interrupt) {
          case TIMER_POLLING_MODE:
          {

            break;
          }
          case TIMER_INTERRUPT_MODE:
          {

            break;
          }
        }
    break;
  }
  case COUNTER_FALLING_MODE:
  {

        switch (Timer_cfg->Timer_Polling_Or_Interrupt) {
          case TIMER_POLLING_MODE:
          {

            break;
          }
          case TIMER_INTERRUPT_MODE:
          {

            break;
          }
        }
  break;
  }
}







  return E_OK;
  }
  case TIMER_CH1:
  {

    switch (Timer_cfg->Timer_Mode) {
      case TIMER_MODE:
      {

            switch (Timer_cfg->Timer_Polling_Or_Interrupt) {
              case TIMER_POLLING_MODE:
              {

                break;
              }
              case TIMER_INTERRUPT_MODE:
              {

                break;
              }
            }
        break;
      }
      case COUNTER_RISING_MODE:
      {

            switch (Timer_cfg->Timer_Polling_Or_Interrupt) {
              case TIMER_POLLING_MODE:
              {

                break;
              }
              case TIMER_INTERRUPT_MODE:
              {

                break;
              }
            }
        break;
      }
      case COUNTER_FALLING_MODE:
      {

            switch (Timer_cfg->Timer_Polling_Or_Interrupt) {
              case TIMER_POLLING_MODE:
              {

                break;
              }
              case TIMER_INTERRUPT_MODE:
              {

                break;
              }
            }
      break;
      }
    }







  return E_OK;
  }
  case TIMER_CH2:
  {



    switch (Timer_cfg->Timer_Mode) {
      case TIMER_MODE:
      {

            switch (Timer_cfg->Timer_Polling_Or_Interrupt) {
              case TIMER_POLLING_MODE:
              {

                break;
              }
              case TIMER_INTERRUPT_MODE:
              {

                break;
              }
            }
        break;
      }
      case COUNTER_RISING_MODE:
      {

            switch (Timer_cfg->Timer_Polling_Or_Interrupt) {
              case TIMER_POLLING_MODE:
              {

                break;
              }
              case TIMER_INTERRUPT_MODE:
              {

                break;
              }
            }
        break;
      }
      case COUNTER_FALLING_MODE:
      {

            switch (Timer_cfg->Timer_Polling_Or_Interrupt) {
              case TIMER_POLLING_MODE:
              {

                break;
              }
              case TIMER_INTERRUPT_MODE:
              {

                break;
              }
            }
      break;
      }
    }





  return E_OK;
  }
  defult:
  return E_NOK;
}



}

/**
 * Input:
 * 	Timer_CH_NO: The channel number of the timer needed to be started.
 *	Timer_Count: The start value of the timer.
 * Output:
 * In/Out:
 * Return: The error status of the function.
 * Description: This function strats the needed timer.
 *
 */
ERROR_STATUS Timer_Start(uint8_t Timer_CH_NO, uint16_t Timer_Count)
{



}
/**
 * Input:
 *Timer_CH_NO: The channel number of the timer needed to be stopped.
 * Output:
 * In/Out:
 * Return: The error status of the function.
 * Description: This function stops the needed timer.
 *
 */
ERROR_STATUS Timer_Stop(uint8_t Timer_CH_NO)
{




}
/**
 * Input:
 * 	Timer_CH_NO: The channel number of the timer needed to get its status.
 * Output:
 * 	Data: A variable of type bool returns if the flag of the timer is raised or not.
 * In/Out:
 * Return: The error status of the function.
 * Description: This function is used to return if the flag of the timer is raised or not.
 *
 */
ERROR_STATUS Timer_GetStatus(uint8_t Timer_CH_NO,boolen* Data)
{



}
/**
 * Input:
 * 	Timer_CH_NO: The channel number of the timer needed to get its value.
 * Output:
 * 	Data: This is the output variable of the function which holds the status of the timer if ovf reached data = 1 else data = 0.
 * In/Out:
 * Return: The error status of the function.
 * Description: This function is used to return the value of the timer.
 *
 */
ERROR_STATUS Timer_GetValue(uint8_t Timer_CH_NO, uint16_t* Data)
{




}
