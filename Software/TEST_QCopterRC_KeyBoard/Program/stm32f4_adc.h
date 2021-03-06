/* #include "stm32f4_adc.h" */

#ifndef __STM32F4_ADC_H
#define __STM32F4_ADC_H

#include "stm32f4xx.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
#define ADC1_DR_ADDRESS ((u32)0x4001204C)
#define ADC2_DR_ADDRESS ((u32)0x4001214C)
#define ADC3_DR_ADDRESS ((u32)0x4001224C)

#define ADC_Channel  2
#define ADC_Sample  64
/*=====================================================================================================*/
/*=====================================================================================================*/
void ADC_Config( void );
void ADC_Average( u16* ADC_AveTr );
/*=====================================================================================================*/
/*=====================================================================================================*/
#endif
