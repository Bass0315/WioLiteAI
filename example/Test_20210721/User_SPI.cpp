#include "User_SPI.h"

#include "LCD.h"
extern uint8_t g_LCD_level;


Dps310 Dps310PressureSensor = Dps310();

void SPI_INIT(void)
{
  int16_t pin_cs = PWM_D9;

  Dps310PressureSensor.begin(SPI, pin_cs);

  Serial.println(" SDCard init OK ");
}
bool SPI_TEST_DPS310(void)
{
  float temperature = 0;
  float pressure = 0;
  uint8_t oversampling = 7;
  int16_t ret = 0;
  Serial.println();
  g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "");
  g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "SPI :");


  ret = Dps310PressureSensor.measureTempOnce(temperature, oversampling);

  if (ret != 0)
  {
    //Something went wrong.
    //Look at the library code for more information about return codes
    Serial.print("FAIL! ret = ");
    Serial.println(ret);

    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_RED, TFT_BLACK, "SPI failed to connect DPS310.");
  }
  else
  {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" degrees of Celsius");
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_RED, TFT_BLACK, "SPI <-> DPS310 success.");
  }


  //ret = Dps310PressureSensor.measurePressureOnce(pressure);
  ret = Dps310PressureSensor.measurePressureOnce(pressure, oversampling);
  if (ret != 0)
  {
    //Something went wrong.
    //Look at the library code for more information about return codes
    Serial.print("FAIL! ret = ");
    Serial.println(ret);
    Serial.println();
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_RED, TFT_BLACK, "SPI failed to connect DPS310.");
    return false;
  }
  else
  {
    Serial.print("Pressure: ");
    Serial.print(pressure);
    Serial.println(" Pascal");
    Serial.println();
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "SPI <-> DPS310 success.");
    return true;
  }

}
