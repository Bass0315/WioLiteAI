#include <Seeed_Arduino_FS.h>


#include "GPIO.h"
#include "WIFI.h"
#include "IIC.h"
#include "User_SPI.h"
#include "SD.h"
#include "LCD.h"
#include "Video.h"

extern TFT_eSPI tft;  // Invoke custom library

bool AllowTest_STA = false;
bool LED_STA = false;
bool Result_STA = true;

uint8_t g_LCD_level = 1;


void setup() {
  uint8_t i=255;
  Wire.begin();
  SPI.begin();
  Serial.begin(115200);
  //init
  GPIO_INIT();
  LCD_INIT();

  g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "LCD init OK.");

  PWM_INIT();
  //SPI_INIT();

  //SD Card init
  if (SDCARD_INIT())
  {
    Serial.println("SDCard init OK");
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "SD init OK.");
  }
  else
  {
    Serial.println("SDCard init ERROR");
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_RED, TFT_BLACK, "SD init ERROR.");
  }

  //WIFI init
  if (WIFI_INIT())
  {
    Serial.println("WIFI init OK");
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "WIFI init OK.");
  }
  else
  {
    Serial.println("WIFI init ERROR");
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_RED, TFT_BLACK, "WIFI init ERROR.");
  }
 
  while (!USER_BUTTOM())
  {
    digitalWrite(LED_YELLOW, !LED_STA);
    digitalWrite(LED_RED, LED_STA);

    //digitalWrite(PIN_SPI_MISO, LED_STA);
    
    delay(30);
    LED_STA = !LED_STA;
    PWM_TEST(i--);      // 0~255 (0~3.3V)
    if(i < 0)
    {
      i = 255;
    }
  }
}


void loop() {
  if (USER_BUTTOM())
  {
    AllowTest_STA = true;
    LED_STA = false;
    digitalWrite(LED_YELLOW, LED_STA);
    digitalWrite(LED_RED, LED_STA);
  }

  if (AllowTest_STA)
  {

    g_LCD_level = LCD_DisPlayClear();

    //PWM_TEST(255);      // 0~255 (0~3.3V)

    Result_STA = ADC_TEST();
    delay(4000);

    Result_STA ? Result_STA = SAI_TEST() : SAI_TEST();
    delay(4000);
    
    Result_STA ? Result_STA = IIC_TEST() : IIC_TEST();
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_WHITE, TFT_BLACK, "");
    delay(4000);
    
    Result_STA ? Result_STA = SDCARD_TEST() : SDCARD_TEST();
    delay(4000);

    //SPI_TEST_DPS310();
    //delay(2000);

    Result_STA ? Result_STA = WIFI_SCANF() : WIFI_SCANF();
    delay(4000);

    g_LCD_level = LCD_DisPlayClear();
    if (Result_STA)
    {
      LCD_DisPlay(80, 5 * 24, 4, TFT_GREEN, TFT_BLACK, " SUCCESS ");
    }
    else
    {
      LCD_DisPlay(110, 5 * 24, 4, TFT_RED, TFT_BLACK, " FAIL ");
    }
    delay(5000);



    g_LCD_level = LCD_DisPlayClear();
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "Start Camera / LCD :");
    delay(2000);

    Video_INIT();
    Video_start();
    delay(15000);
    OV2640_Reset();
    g_LCD_level = LCD_DisPlayClear();

    AllowTest_STA = false;
  }
  delay(1000);
  Serial.println("DEBUG OK.");
}
