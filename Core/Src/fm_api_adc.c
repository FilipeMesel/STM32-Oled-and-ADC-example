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


#include "fm_api_adc.h"


/*-------------------------------------------------------------------------------
 * 								fm_api_adc_init
 * Description: Init ADC API
 * Parameters: none
 * Return: 0 => OK -1=> false
 * Author: Filipe Mesel Lobo Costa Cardoso <lipemesel@hotmail.com>
 * Version: v1.0
 * Date: 04/02/2023
 *------------------------------------------------------------------------------*/
int8_t fm_api_adc_init() {
	if(ADC.Open() == 0) {
		return ADC_OK;
	}else {
		return ADC_ERROR;
	}
}

/*-------------------------------------------------------------------------------
 * 								fm_api_adc_get_value
 * Description: Read ADC Driver port and return this value
 * Parameters: ADC channel selected
 * Return: ADC Value
 * Author: Filipe Mesel Lobo Costa Cardoso <lipemesel@hotmail.com>
 * Version: v1.0
 * Date: 04/02/2023
 *------------------------------------------------------------------------------*/
uint16_t fm_api_adc_get_value(uint8_t uAdcSelectedChannel) {
	uint16_t uAdcValue = ADC.Read(uAdcSelectedChannel);

	return uAdcValue;

}
