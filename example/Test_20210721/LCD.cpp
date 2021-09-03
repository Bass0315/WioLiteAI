
#include "LCD.h"

extern uint8_t g_LCD_level;

TFT_eSPI tft = TFT_eSPI();  // Invoke custom library

void LCD_INIT(void)
{
  tft.init();

  tft.setRotation(2);

  tft.fillScreen(TFT_BLACK);

  //tft.setSwapBytes(true);
}

uint8_t LCD_DisPlay(uint16_t x, uint16_t y, uint8_t font_value, uint16_t fgcolor, uint16_t bgcolor, char *string )
{
  uint8_t re_data = 0;
  if ((y / 24 + 2) < 12 )
  {
    //Serial.println(y);
    //Serial.println(y / 24 + 2);
    re_data = y / 24 + 2;
  }
  else
  {
    g_LCD_level = LCD_DisPlayClear();
    re_data = g_LCD_level + 1;
  }
  tft.setCursor(x, y, font_value);
  tft.setTextColor(fgcolor, bgcolor);
  tft.println(string);
  return re_data;
}

uint8_t  LCD_DisPlayClear(void)
{
  tft.fillScreen(TFT_BLACK);
  return 1;
}



uint8_t Remember_LCD_Level(uint8_t level)
{
  if ((level - 1) * 24 <= 240 )
  {
    return level + 1;
  }
  else
  {
    tft.fillScreen(TFT_BLACK);
    return 1;
  }
}
