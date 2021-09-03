#include "GPIO.h"
#include "LCD.h"

extern uint8_t g_LCD_level;


int ADC_Pin[] = {A0, A1, A2, A3, A4, A5};

void GPIO_INIT(void)
{
  //led
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_RED, OUTPUT);

  //bottom input
  pinMode(USER_BTN, INPUT);

  //adc input
  pinMode(A0, INPUT); //先初始化AO ，再初始化LCD，会冲突，硬性原因，无法更改
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);

  pinMode(PIN_SPI_MISO, OUTPUT);
}

//Bottom Test
bool USER_BUTTOM(void)
{
  bool val = false;
  if (!digitalRead(USER_BTN))
  {
    delay(10);
    if (!digitalRead(USER_BTN))
    {
      val = true;
    }
  }
  else
  {
    val = false;
  }
  return val;
}

void PWM_INIT(void)
{
  pinMode(PWM_D13, OUTPUT);
  pinMode(PWM_D12, OUTPUT);
  pinMode(PWM_D11, OUTPUT);
  pinMode(PWM_D10, OUTPUT);
  pinMode(PWM_D9, OUTPUT);
  pinMode(DCMI_PWM, OUTPUT);
}


void PWM_TEST(uint8_t value)  //127
{

  /* 问题：相同值情况下，输出不一致，D9/D12: 3.3V;  D10/D11/D13: 1.6V,*/
  analogWrite(PWM_D13, value);      //PE8
  analogWrite(PWM_D12, value);      //PB3
  analogWrite(PWM_D11, value);      //PE10
  analogWrite(PWM_D10, value);      //PF3
  analogWrite(PWM_D9, value);       //PA0
}

bool SAI_TEST(void)
{
  bool r_sta = false;

  g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "Audio  : ");
  
  pinMode(PIN_SPI_SCK, OUTPUT);
  pinMode(PIN_SPI_MOSI, OUTPUT);
  
  pinMode(SAI4_SCKA, OUTPUT);
  pinMode(SAI4_FSA, OUTPUT);
  
  pinMode(SAI4_SDA, OUTPUT);
  pinMode(SAI4_SDB, OUTPUT);
  
  pinMode(SAI4_MCLKA, OUTPUT);
  pinMode(GPIO_Audio_INT, OUTPUT);  
  
  digitalWrite(PIN_SPI_SCK, LOW);
  digitalWrite(SAI4_SCKA, LOW);
  digitalWrite(SAI4_SDA, LOW);
  digitalWrite(SAI4_MCLKA, HIGH);
  digitalWrite(PIN_SPI_MOSI, LOW);
  digitalWrite(SAI4_FSA, LOW);
  digitalWrite(SAI4_SDB, LOW);
  digitalWrite(GPIO_Audio_INT, HIGH);
  
  
  pinMode(PIN_SPI_SCK, OUTPUT);
  pinMode(PIN_SPI_MOSI, INPUT);
  
  pinMode(SAI4_SCKA, OUTPUT);
  pinMode(SAI4_FSA, INPUT);
  
  pinMode(SAI4_SDA, OUTPUT);
  pinMode(SAI4_SDB, INPUT);
  
  pinMode(SAI4_MCLKA, OUTPUT);
  pinMode(GPIO_Audio_INT, INPUT);
  
  digitalWrite(PIN_SPI_SCK, HIGH);
  digitalWrite(SAI4_SCKA, HIGH);
  digitalWrite(SAI4_SDA, HIGH);
  digitalWrite(SAI4_MCLKA, HIGH);
  
  Serial.println("DEBUG__1");
  Serial.println(digitalRead(PIN_SPI_MOSI));
  Serial.println(digitalRead(SAI4_FSA));
  Serial.println(digitalRead(SAI4_SDB));
  Serial.println(digitalRead(GPIO_Audio_INT));

  if(digitalRead(PIN_SPI_MOSI) & digitalRead(SAI4_FSA) & digitalRead(SAI4_SDB) & digitalRead(GPIO_Audio_INT))
  {
    Serial.println("DEBUG__1_____TRUE");
    r_sta = true;
  }

  digitalWrite(PIN_SPI_SCK, LOW);
  digitalWrite(SAI4_SCKA, LOW);
  digitalWrite(SAI4_SDA, LOW);
  digitalWrite(SAI4_MCLKA, LOW);
  
  pinMode(PIN_SPI_SCK, INPUT);
  pinMode(PIN_SPI_MOSI, OUTPUT);
  
  pinMode(SAI4_SCKA, INPUT);
  pinMode(SAI4_FSA, OUTPUT);
  
  pinMode(SAI4_SDA, INPUT);
  pinMode(SAI4_SDB, OUTPUT);
  
  pinMode(SAI4_MCLKA, INPUT);
  pinMode(GPIO_Audio_INT, OUTPUT);
  
  digitalWrite(PIN_SPI_MOSI, HIGH);
  digitalWrite(SAI4_FSA, HIGH);
  digitalWrite(SAI4_SDB, HIGH);
  digitalWrite(GPIO_Audio_INT, HIGH);
  
  Serial.println("DEBUG__2");
  Serial.println(digitalRead(PIN_SPI_SCK));
  Serial.println(digitalRead(SAI4_SCKA));
  Serial.println(digitalRead(SAI4_SDA));
  Serial.println(digitalRead(SAI4_MCLKA));

  if(digitalRead(PIN_SPI_SCK) & digitalRead(SAI4_SCKA) & digitalRead(SAI4_SDA) & digitalRead(SAI4_MCLKA))
  {
    Serial.println("DEBUG__2_____TRUE");
    r_sta = true;
  }
  
  if(r_sta)
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "Audio is OK. ");
  else
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_RED, TFT_BLACK, "Audio is FAIL. ");  
  return r_sta;
}

bool ADC_TEST(void)
{
  bool b_sta = true;
  char buf[50];
  //volatile float value = 0;
  float value = 0;
  uint16_t TFT_Color;

  g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "ADC  : ");

//5V
  for (uint8_t j = 0; j < 10; j++)
  {
    value += (float)analogRead(ADC_Pin[0]) / 1023.0 * 3.3f;
  }
  value = value / 10.0 * 2;
  if (5.0 - 5.0 * 5 / 100 < value && value < 5.0 + 5.0 * 5 / 100)
  {
    TFT_Color = TFT_GREEN;
  }
  else
  {
    TFT_Color = TFT_RED;
    b_sta = false;
  }
  //Serial.printf("A%d:%d.%dV\n",i,(int)value,(int)(value*100)%100);
  sprintf(buf, "A0: %d.%d V", (int)value, (int)(value * 100) % 100);
  Serial.println(buf);
  g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_Color, TFT_BLACK, buf);
  
//3V3
  for (uint8_t i = 1; i < 6; i++)
  {
    value = 0;
    for (uint8_t j = 0; j < 10; j++)
    {
      value += (float)analogRead(ADC_Pin[i]) / 1023.0 * 3.3f;
    }
    value = value / 10.0 * 2;
    if (3.3 - 3.3 * 5 / 100 < value && value < 3.3 + 3.3 * 5 / 100)
      TFT_Color = TFT_GREEN;
    else
    {
      TFT_Color = TFT_RED;
      b_sta = false;
    }
    //Serial.printf("A%d:%d.%dV\n",i,(int)value,(int)(value*100)%100);
    sprintf(buf, "A%d: %d.%d V", i, (int)value, (int)(value * 100) % 100);
    Serial.println(buf);
    g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_Color, TFT_BLACK, buf);
  }

  Serial.println();
  memset(buf, NULL, strlen(buf));
  g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_WHITE, TFT_BLACK, buf);
  return b_sta;
}
