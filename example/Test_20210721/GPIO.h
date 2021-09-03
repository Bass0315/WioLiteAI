#ifndef __GPIO_H_
#define __GPIO_H_
#include "Arduino.h"

void GPIO_INIT(void);
bool USER_BUTTOM(void);
void PWM_INIT(void);
void PWM_TEST(uint8_t value);
bool ADC_TEST(void);
bool SAI_TEST(void);

#endif
