#include "WIFI.h"

#include "LCD.h"
extern uint8_t g_LCD_level;

#define MAC_ARG(x) ((uint8_t *)(x))[0], ((uint8_t *)(x))[1], ((uint8_t *)(x))[2], ((uint8_t *)(x))[3], ((uint8_t *)(x))[4], ((uint8_t *)(x))[5]
#define MAC_FMT "%02x:%02x:%02x:%02x:%02x:%02x"

esp_err_t wifi_event_callback(void *ctx, system_event_t *event)
{
  Serial.printf("[WiFi-event] event: %d\n\r", event->event_id);

  switch (event->event_id)
  {
    case SYSTEM_EVENT_WIFI_READY:
      Serial.printf("WiFi interface ready\n\r");
      break;
    case SYSTEM_EVENT_SCAN_DONE:
      Serial.printf("Completed scan for access points\n\r");
      break;
    case SYSTEM_EVENT_STA_START:
      Serial.printf("WiFi client started\n\r");
      break;
    case SYSTEM_EVENT_STA_STOP:
      Serial.printf("WiFi clients stopped\n\r");
      break;
    case SYSTEM_EVENT_STA_CONNECTED:
      Serial.printf("Connected to access point\n\r");
      break;
    case SYSTEM_EVENT_STA_DISCONNECTED:
      Serial.printf("Disconnected from WiFi access point\n\r");
      break;
    case SYSTEM_EVENT_STA_AUTHMODE_CHANGE:
      Serial.printf("Authentication mode of access point has changed\n\r");
      break;
    case SYSTEM_EVENT_STA_GOT_IP:
      Serial.printf("Obtained IP address: \n\r");
      break;
    case SYSTEM_EVENT_STA_LOST_IP:
      Serial.printf("Lost IP address and IP address is reset to 0\n\r");
      break;
    case SYSTEM_EVENT_STA_WPS_ER_SUCCESS:
      Serial.printf("WiFi Protected Setup (WPS): succeeded in enrollee mode\n\r");
      break;
    case SYSTEM_EVENT_STA_WPS_ER_FAILED:
      Serial.printf("WiFi Protected Setup (WPS): failed in enrollee mode\n\r");
      break;
    case SYSTEM_EVENT_STA_WPS_ER_TIMEOUT:
      Serial.printf("WiFi Protected Setup (WPS): timeout in enrollee mode\n\r");
      break;
    case SYSTEM_EVENT_STA_WPS_ER_PIN:
      Serial.printf("WiFi Protected Setup (WPS): pin code in enrollee mode\n\r");
      break;
    case SYSTEM_EVENT_AP_START:
      Serial.printf("WiFi access point started\n\r");
      break;
    case SYSTEM_EVENT_AP_STOP:
      Serial.printf("WiFi access point  stopped\n\r");
      break;
    case SYSTEM_EVENT_AP_STACONNECTED:
      Serial.printf("Client connected\n\r");
      break;
    case SYSTEM_EVENT_AP_STADISCONNECTED:
      Serial.printf("Client disconnected\n\r");
      break;
    case SYSTEM_EVENT_AP_STAIPASSIGNED:
      Serial.printf("Assigned IP address to client\n\r");
      break;
    case SYSTEM_EVENT_AP_PROBEREQRECVED:
      Serial.printf("Received probe request\n\r");
      break;
    case SYSTEM_EVENT_GOT_IP6:
      Serial.printf("IPv6 is preferred\n\r");
      break;
    case SYSTEM_EVENT_ETH_START:
      Serial.printf("Ethernet started\n\r");
      break;
    case SYSTEM_EVENT_ETH_STOP:
      Serial.printf("Ethernet stopped\n\r");
      break;
    case SYSTEM_EVENT_ETH_CONNECTED:
      Serial.printf("Ethernet connected\n\r");
      break;
    case SYSTEM_EVENT_ETH_DISCONNECTED:
      Serial.printf("Ethernet disconnected\n\r");
      break;
    case SYSTEM_EVENT_ETH_GOT_IP:
      Serial.printf("Obtained IP address\n\r");
      break;
    default:
      break;
  }

  return ESP_OK;
}


static void print_scan_result(wifi_ap_record_t *record)
{
  char  buf[50] = {NULL};
  Serial.printf(MAC_FMT, MAC_ARG(record->bssid));
  Serial.printf(" %d\t ", record->rssi);
  Serial.printf(" %d\t  ", record->primary);
  Serial.printf(" %d\t  ", record->wps);
  Serial.printf("%s\t\t ", (record->authmode == WIFI_AUTH_OPEN) ? "Open" : (record->authmode == WIFI_AUTH_WEP) ? "WEP" : (record->authmode == WIFI_AUTH_WPA_PSK) ? "WPA PSK" : (record->authmode == WIFI_AUTH_WPA2_PSK) ? "WPA2 PSK" : (record->authmode == WIFI_AUTH_WPA_WPA2_PSK) ? "WPA/WPA2 AES" : "Unknown");
  Serial.printf(" %s ", record->ssid);
  sprintf(buf, "%s", record->ssid);
  g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, buf);
  Serial.printf("\r\n");
}

bool WIFI_SCANF(void)
{
  bool b_sta = true;
  g_LCD_level = LCD_DisPlayClear();
  g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_GREEN, TFT_BLACK, "WIFI :");

  Serial.println("wifi scanf start");
  wifi_scan_start();
  Serial.println("wifi scanf end");

  while (wifi_is_scaning())
  {
    Serial.printf("*");
    delay(200);
  }
  uint16_t networkNum = wifi_scan_get_ap_num();
  static wifi_ap_record_t networks[60];
  Serial.printf("networkNum:%d\n\r", networkNum);
  if (networkNum != 0)
  {
    int32_t ret = wifi_scan_get_ap_records(60, networks);
    if (ret != RTW_SUCCESS)
    {
      Serial.printf("error :%d\n\r", ret);
      g_LCD_level = LCD_DisPlay(5, (g_LCD_level - 1) * 24, 4, TFT_RED, TFT_BLACK, "WIFI scan ERROR.");
      b_sta = false;
    }
  }

  for (int i = 0; i < networkNum; i++)
  {
    print_scan_result(&networks[i]);
    delay(200);
  }
  return b_sta;
}

bool WIFI_INIT(void)
{
  Serial.println("DEBUG(WIFI_1)");
  system_event_callback_reg(wifi_event_callback);
  Serial.println("DEBUG(WIFI_2)");
  wifi_off();
  Serial.println("DEBUG(WIFI_3)");
  vTaskDelay(100);
  Serial.println("DEBUG(WIFI1_4)");
  if (wifi_on(RTW_MODE_STA) < 0)
  {
    Serial.printf("\n\rERROR: Wifi on STA failed.");
    return false;
  }
  return true;
}
