#include <WiFi.h>
#define WIFI_AP_NAME "SmileMore"
#define WIFI_AP_PASS "12345678"

void setup() 
{
  Serial.begin(9600);
  delay(3000);
  WiFi.mode(WIFI_AP);
  WiFi.softAP(WIFI_AP_NAME, WIFI_AP_PASS);
  Serial.print("IP address: ");
  Serial.println(WiFi.softAPIP());
}

void loop() 
{ 
}
