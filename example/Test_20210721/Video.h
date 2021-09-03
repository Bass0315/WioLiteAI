#ifndef __VIDEO_H_
#define __VIDEO_H_

#include "Arduino.h"
#include "dma.h"
#include "dcmi.h"
#include "OV2640.h"
#include "TFT_eSPI.h"

#include "IIC.h"
#include "SD.h"
#include "LCD.h"

void Video_INIT(void);
void listDir( fs::FS& fs, const char* dirname, int numTabs );
void Video_start(void);

#endif
