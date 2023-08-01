#include <WiFi.h>
//const char* ssid = "Wi-Fi Name";
//const char* password = "Wi-Fi Password";
const char* ssid = "Leafmind_2.4GHz";
const char* password = "jlt5687013";
void setup()
{
   Serial.begin(9600);
   delay(3000);
   WiFi.mode(WIFI_STA); 
   WiFi.begin(ssid, password);
   while(WiFi.status() != WL_CONNECTED)
   {
      Serial.println("Connecting.....");
      delay(100);
   }
   Serial.println("Connected Successfully.");
   //Serial.print("IP Address : ");
   //Serial.println(WiFi.localIP());
}

void loop()
{
}
