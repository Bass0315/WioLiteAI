#include "Video.h"

extern TFT_eSPI tft;

extern uint8_t g_LCD_level;

__attribute__((__section__(".psram.bss")))  uint8_t cam_buf[320 * 240 * 2];

static Frame_TypeDef frame = {
  .buffer = cam_buf,
  .length = 320 * 240 * 2,
  .width  = 320,
  .height = 240
};

static OV2640_TypeDef OV2640 = {
  .dcmi = &hdcmi,
  .dma = &hdma_dcmi_pssi,
  .cam_i2c = &Wire,
  .frame = &frame
};

void Video_INIT(void)
{
  OV2640_Init(&OV2640);
  OV2640_ReadID(&(OV2640.ID));
  Serial.printf("ID: %02X %02X \r\n", OV2640.ID.PIDH, OV2640.ID.PIDL);
}


void listDir( fs::FS& fs, const char* dirname, int numTabs )
{
  File dir = fs.open(dirname);

  while (true) {

    File entry =  dir.openNextFile();
    if (! entry) {
      // no more files
      break;
    }
    for (uint8_t i = 0; i < numTabs; i++) {
      Serial.print('\t');
    }
    Serial.print(entry.name());
    if (entry.isDirectory()) {
      Serial.println("/");
      listDir(fs, entry.name(), numTabs + 1);
    } else {
      // files have sizes, directories do not
      Serial.print("\t\t");
      Serial.print(entry.size(), DEC);
      Serial.println(" bytes");
    }
    entry.close();
  }
}

void Video_start(void)
{
  OV2640_UXGAConfig();
  OV2640_Start();
  listDir(SDMMC, "/", 0);
}
