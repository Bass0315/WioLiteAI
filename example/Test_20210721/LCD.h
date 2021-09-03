#ifndef __LCD_H_
#define __LCD_H_

#include "Arduino.h"

#include <SPI.h>
#include <TFT_eSPI.h>       // Hardware-specific library

void LCD_INIT(void);

uint8_t LCD_DisPlay(uint16_t x, uint16_t y, uint8_t font_value, uint16_t fgcolor, uint16_t bgcolor, char *string );

uint8_t  LCD_DisPlayClear(void);

uint8_t Remember_LCD_Level(uint8_t level);


#endif
