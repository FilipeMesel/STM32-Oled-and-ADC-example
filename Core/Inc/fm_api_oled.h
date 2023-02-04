/**------------------------------------------------------------------------
 * OLED DISPLAY API is a simple software to make easy to use the ssd1306 OLED
 * library developed by Tilen Majerle<tilen@majerle.eu> and updated by Alexander
 * Lutsai<s.lyra@ya.ru>.
 * ------------------------------------------------------------------------------
 * 								MAIN FEATURES
 * This api has three functions:
 * 1. fm_api_oled_init => Init the OLED display driver
 * 2. fm_api_oled_write => Write a char buffer into the display
 * 3. fm_api_oled_clear => Clear the display screen
 * 4. fm_api_oled_update_screen => Update the display screen
 *------------------------------------------------------------------------------
 * Author: Filipe Mesel Lobo Costa Cardoso <lipemesel@hotmail.com>
 * Version: v1.0
 * Date: 04/02/2023
 * -----------------------------------------------------------------------------*/


#ifndef _FM_API_OLED_H_
#define _FM_API_OLED_H_

/* C++ detection */
#ifdef __cplusplus
extern C {
#endif

#include "stm32f1xx_hal.h"
#include "string.h"

#include "fonts.h"
#include "ssd1306.h"

/*-------------------------------------------------------------------------------
 * 								FONTS ENUM
 *enum that represents the fonts included by fonts.h
 * Author: Filipe Mesel Lobo Costa Cardoso <lipemesel@hotmail.com>
 * Version: v1.0
 * Date: 04/02/2023
 *------------------------------------------------------------------------------*/
enum {
	FONT_7_X_10_PIXELS = 0,
	FONT_11_X_18_PIXELS,
	FONT_16_X_26_PIXELS,

};

/*-------------------------------------------------------------------------------
 * 								fm_api_oled_init
 * Description: Init Oled Display
 * Parameters: Don't have
 * Return: Don't have
 * Author: Filipe Mesel Lobo Costa Cardoso <lipemesel@hotmail.com>
 * Version: v1.0
 * Date: 04/02/2023
 *------------------------------------------------------------------------------*/
void fm_api_oled_init();

/*-------------------------------------------------------------------------------
 * 								fm_api_oled_write
 * Description: Write a String in Oled Display; passing x position, y position, the font,
 * and size of buffer
 * Parameters: char* str, int iSize, uint16_t uxPosition, uint16_t uyPosition,  uint8_t uFont
 * Return: Don't have
 * Author: Filipe Mesel Lobo Costa Cardoso <lipemesel@hotmail.com>
 * Version: v1.0
 * Date: 04/02/2023
 *------------------------------------------------------------------------------*/
void fm_api_oled_write(char* str, int iSize, uint16_t uxPosition, uint16_t uyPosition,  uint8_t uFont);

/*-------------------------------------------------------------------------------
 * 								fm_api_oled_clear
 * Description: Clear Oled Display
 * Parameters: Don't have
 * Return: Don't have
 * Author: Filipe Mesel Lobo Costa Cardoso <lipemesel@hotmail.com>
 * Version: v1.0
 * Date: 04/02/2023
 *------------------------------------------------------------------------------*/
void fm_api_oled_clear();

/*-------------------------------------------------------------------------------
 * 								fm_api_oled_update_screen
 * Description: Update the Oled Display Screen
 * Parameters: Don't have
 * Return: Don't have
 * Author: Filipe Mesel Lobo Costa Cardoso <lipemesel@hotmail.com>
 * Version: v1.0
 * Date: 04/02/2023
 *------------------------------------------------------------------------------*/
void fm_api_oled_update_screen();

#ifdef __cplusplus
}
#endif


#endif
