//Arc Labs Anvesh Reddy
//Control LED Using Blynk 2.0/Blynk IOT

#define BLYNK_TEMPLATE_ID "TMPL3BjRXKXBx"
#define BLYNK_TEMPLATE_NAME "sahasra reddy"
#define BLYNK_AUTH_TOKEN "R9m0440ixq2XYnXKN_wFGb8dF8ocrgI8"


#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[ ] = "Hotspot"; // Enter your Wifi Username
char pass[ ] = "sasu0143";  // Enter your Wifi password

int ledpin = D4;
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(ledpin,OUTPUT);
}

void loop()
{
  Blynk.run(); 
}
