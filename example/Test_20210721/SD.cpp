#include "SD.h"

#include "LCD.h"
extern uint8_t g_LCD_level;

bool SDCARD_INIT(void)
{
  while (!SDMMC.begin())
  {
    return  false;
  }
  return  true;
}


bool SDCARD_TEST(void)
{
  bool b_sta = false;
  char buf[20] = {NULL};
  //Write
  g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "SD :");
  File RootWrite = SDMMC.open("/hello.txt", "w");
  if (RootWrite)
  {
    Serial.print("Writing to hello.txt...");
    RootWrite.println("Hello! I am WioLiteAI.");
    RootWrite.close();
    Serial.println("done.");
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "Write SD txt: ");
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "Hello! I am WioLiteAI.");
    b_sta = true;
  }
  else
  {
    Serial.println("error opening hello.txt");
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_RED, TFT_BLACK, "Failed to write SD.");
    b_sta = false;
  }

  //Read
  Serial.println("SD  DEBUG");
  File RootRead = SDMMC.open("/hello.txt");
  if (RootRead)
  {
    Serial.print("hello.txt: ");
    while (RootRead.available())
    {
      //Serial.write(RootRead.read());
      sprintf(buf, "%s%c", buf, RootRead.read());
    }
    RootRead.close();
    //Serial.println(buf);
    Serial.println();
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "Read SD txt: ");
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_YELLOW, TFT_BLACK, buf);
    b_sta = true;
  }
  else
  {
    Serial.println("error opening hello.txt");
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_RED, TFT_BLACK, "Failed to read SD.");
    b_sta = false;
  }
  return b_sta;
}
