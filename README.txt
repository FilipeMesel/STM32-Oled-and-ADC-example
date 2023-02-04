# ADC Sensors Measure with STM32F103C8T6

## Description

This repository contains a simple use of two ADC channels reading by stm32f103c8t6 using
ADC interrupt mode. This example was written using the layers software design

## Features
As mentioned in the Description section, this software's written with layers software design. So:

###Driver Layer:
The driver layer contains a adc_driver that's responssable for init adc channels, read adc channels and
the ssd1306 i2c driver that controls the Oled access

###API Layer:
The API layer contains the ADC read and init abstraction and Oled print, clear and write adstraction

####Oled API init example:
	fm_api_oled_init();
	
####Oled API write example:
	char someText[10];
	sprintf(someText, "Hi!!!");
	/*
	* param 1: someText must be a char array
	* param 2: size of someText
	* param 3: Oled Display "x" position
	* param 4: Oled Display "y"
	* param 5: Font...This project has 3 fonts: FONT_7_X_10_PIXELS, FONT_11_X_18_PIXELS, FONT_16_X_26_PIXELS
	*/
	fm_api_oled_init(someText, sizeof(someText), 0, 0, FONT_11_X_18_PIXELS);
    fm_api_oled_update_screen();

####Oled API clear screen example:
	fm_api_oled_clear();
	

####ADC API init example:
	fm_api_adc_init();
	
####ADC API get value example:
	/*
	* param 1: ADC channel that you want to use.
	* this code supports ADC_CH1 and ADC_CH2
	*/
	fm_api_adc_get_value(ADC_CH1);
	

###APP Layer:
The application layer contains a simple logic algorithn for read two ADC channels and print then into Oled display.

## Hardware Design

The hardware degsign used in this code was wired with:
  - STM32F103C8T6 Blue Pill
  - Potentiometer connected into the PA_05 pin of mcu
  - MQ-13 Gas sensor connected into the PA_06 pin of mcu

## How to rum this code

After wire up the hardware design following specs showed in Hardware design section;
you just have to copy all files in the "Core" path and paste it in your project.