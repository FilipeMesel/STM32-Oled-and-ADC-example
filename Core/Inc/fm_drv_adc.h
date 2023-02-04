/**------------------------------------------------------------------------
 * ADC Driver is a simple software to make easy to use the ADC1 and ADC2
 * peripherals from stm32f103c8t6.
 * ------------------------------------------------------------------------------
 * 								MAIN FEATURES
 * This driver has an object that has the parameters below:
 * 1. Open => Open port for reading
 * 2. Read => get the ADC value
 * 3. uFlagEnable[number_of_ports] => set the adc status
 * 4. Value[number_of_ports] => get the values of a adc channel
 *------------------------------------------------------------------------------
 * Author: Filipe Mesel Lobo Costa Cardoso <lipemesel@hotmail.com>
 * Version: v1.0
 * Date: 04/02/2023
 * -----------------------------------------------------------------------------*/


#ifndef _FM_DRV_ADC_H_
#define _FM_DRV_ADC_H_
/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"


/*
 * Define that represents the number of ports used
 *
 * */
#define NUMPORTS 2


/*
 * This enum is used for select the adc channel for use
 * */
enum {

	ADC_CHANNEL_01 = 0,
	ADC_CHANNEL_02,

};

/*
 * This is the already explained object of the driver
 * */
typedef struct {
	uint8_t uFlagEnable[NUMPORTS];
	uint16_t uValue[NUMPORTS];

	int8_t  (*Open) (void);
	int8_t  (*Read) (uint8_t uSelectedPort);

}st_adc_t;

//Exporting ADC object
extern st_adc_t ADC;

#endif /* INC_FM_DRV_ADC_H_ */
