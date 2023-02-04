/**------------------------------------------------------------------------
 * ADC API is a simple software to make easy to use the ADC1 and ADC2
 * peripherals from stm32f103c8t6.
 * ------------------------------------------------------------------------------
 * 								MAIN FEATURES
 * This driver has an object that has the parameters below:
 * 1. fm_api_adc_init => Open port for reading
 * 2. fm_api_adc_get_value => get the ADC value
 *------------------------------------------------------------------------------
 * Author: Filipe Mesel Lobo Costa Cardoso <lipemesel@hotmail.com>
 * Version: v1.0
 * Date: 04/02/2023
 * -----------------------------------------------------------------------------*/

#ifndef INC_FM_API_ADC_H_
#define INC_FM_API_ADC_H_

#include "fm_drv_adc.h"

#define ADC_OK 0
#define ADC_ERROR -1

enum {
	ADC_CH1 = 0,
	ADC_CH2,
};

int8_t fm_api_adc_init();
uint16_t fm_api_adc_get_value(uint8_t uAdcSelectedChannel);


#endif /* INC_FM_API_ADC_H_ */
