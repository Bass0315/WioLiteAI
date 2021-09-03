#include "IIC.h"
#include "LCD.h"


extern uint8_t g_LCD_level;


bool IIC_TEST(void)
{
  char buf[50];
  uint8_t error, address;
  int nDevices;

  g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "IIC  : ");

  Serial.println("Scanning...");

  nDevices = 0;
  for (address = 1; address < 127; address++ )
  {
    // The i2c_scanner uses the return value of
    // the Write.endTransmisstion to see if
    // a device did acknowledge to the address.
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0)
    {
      Serial.print("I2C device address 0x");
      if (address < 16)
        Serial.print("0");

      Serial.print(address, HEX);
      Serial.println("  !");

      sprintf(buf, "I2C device address: 0x%x", address);
      Serial.println(buf);
      g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_WHITE, TFT_BLACK, buf);

      nDevices++;
    }
    else if (error == 4)
    {
      Serial.print("Unknown error at address 0x");
      if (address < 16)
        Serial.print("0");
      Serial.println(address, HEX);

      sprintf(buf, "Unknown error address 0x%x", address);
      //Serial.println(buf);
      g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_RED, TFT_BLACK, buf);

    }
  }
  if (nDevices == 0)
  {
    Serial.println("No I2C devices found");
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_RED, TFT_BLACK, "No I2C devices found.");
    return false;
  }
  else
  {
    Serial.println("done\n");
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "I2C devices found done.");
    return true;
  }
}
