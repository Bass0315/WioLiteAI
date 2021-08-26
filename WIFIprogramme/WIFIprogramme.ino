
void setup() {
  // put your setup code here, to run once:
  SerialUSB.begin(115200);

  RTL8720D.begin(115200);
  
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(PIN_SERIAL9_RX,OUTPUT);
  pinMode(WIFI_CHIP_EN,OUTPUT);

  /*Enter Uart DownLoad Mode*/
  digitalWrite(PIN_SERIAL9_RX,LOW);     //when RX is low
  digitalWrite(WIFI_CHIP_EN, LOW);  //reset
  delay(500);
  digitalWrite(WIFI_CHIP_EN, HIGH);
  delay(500);

  pinMode(PIN_SERIAL9_RX,INPUT);
  SerialUSB.beginWithoutDTR(115200);

  digitalWrite(LED_YELLOW, HIGH);
  digitalWrite(LED_RED, HIGH);
}

void loop() {
 
    unsigned long baud     = 0;
    unsigned long old_baud = 0;
    unsigned long count_s = 0;
    uint8_t state_s = LOW;
    unsigned long count_r = 0;
    uint8_t state_r = LOW;

    while (1) 
   {       
      baud = SerialUSB.baud(); 

      //updata baud
      if(baud != old_baud) 
      { 
        RTL8720D.begin(baud); 
        old_baud = baud; 
      } 
      
      // read from port 0, send to port 1: 
     if(SerialUSB.available()) 
     { 
       int inbyte = SerialUSB.read(); 
       RTL8720D.write(inbyte); 
       count_s++;
     } 
     
     // read from port 1, send to port 0: 
     if (RTL8720D.available()) 
     { 
       int inbyte = RTL8720D.read(); 
       SerialUSB.write(inbyte); 
       count_r++;
     } 

     if(count_s > 2000)
     {
       count_s = 0;
       state_s = state_s==HIGH?LOW:HIGH;
       digitalWrite(LED_YELLOW, state_s);
     }
     
     if(count_r > 20)
     {
       count_r = 0;
       state_r = state_r==HIGH?LOW:HIGH;
       digitalWrite(LED_RED, state_r);
     }
   }  
}
