
#include "fm_api_oled.h"

/*-------------------------------------------------------------------------------
 * 								fm_api_oled_init
 * Description: Init Oled Display
 * Parameters: Don't have
 * Return: Don't have
 * Author: Filipe Mesel Lobo Costa Cardoso <lipemesel@hotmail.com>
 * Version: v1.0
 * Date: 04/02/2023
 *------------------------------------------------------------------------------*/
void fm_api_oled_init()
{
	SSD1306_Init();

}

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

void fm_api_oled_write(char* str, int iSize, uint16_t uxPosition, uint16_t uyPosition,  uint8_t uFont)
{
	SSD1306_GotoXY (uxPosition,uyPosition);
	char buffer[iSize];
	memcpy(buffer, str, iSize);
	switch(uFont) {
	case FONT_7_X_10_PIXELS:
		SSD1306_Puts (buffer, &Font_7x10, 1);
	break;
	case FONT_11_X_18_PIXELS:
		SSD1306_Puts (buffer, &Font_11x18, 1);

	break;
	case FONT_16_X_26_PIXELS:
		SSD1306_Puts (buffer, &Font_16x26, 1);

	break;

	}
}

/*-------------------------------------------------------------------------------
 * 								fm_api_oled_clear
 * Description: Clear Oled Display
 * Parameters: Don't have
 * Return: Don't have
 * Author: Filipe Mesel Lobo Costa Cardoso <lipemesel@hotmail.com>
 * Version: v1.0
 * Date: 04/02/2023
 *------------------------------------------------------------------------------*/
void fm_api_oled_clear()
{
	SSD1306_Clear();
}

/*-------------------------------------------------------------------------------
 * 								fm_api_oled_update_screen
 * Description: Update the Oled Display Screen
 * Parameters: Don't have
 * Return: Don't have
 * Author: Filipe Mesel Lobo Costa Cardoso <lipemesel@hotmail.com>
 * Version: v1.0
 * Date: 04/02/2023
 *------------------------------------------------------------------------------*/
void fm_api_oled_update_screen()
{
	SSD1306_UpdateScreen();
}
