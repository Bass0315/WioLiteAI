#ifndef __WIFI_H_
#define __WIFI_H_
#include "seeed_rpcUnified.h"
#include "rtl_wifi/wifi_unified.h"

esp_err_t wifi_event_callback(void *ctx, system_event_t *event);
bool WIFI_SCANF(void);
bool WIFI_INIT(void);

#endif
