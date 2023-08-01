#include <WiFi.h>
//const char* ssid = "Wi-Fi Name";
//const char* password = "Wi-Fi Password";
const char* ssid = "Leafmind_2.4GHz";
const char* password = "jlt5687013";

void initWiFi() 
{
   WiFi.mode(WIFI_STA); 
   WiFi.begin(ssid, password);
   while(WiFi.status() != WL_CONNECTED)
   {
      Serial.println("Connecting.....");
      delay(100);
   }
   Serial.println("Connected Successfully.");
   Serial.print("Connected to Wi-Fi ");
   Serial.println(WiFi.SSID());
   Serial.print("IP Address : ");
   Serial.println(WiFi.localIP());
   Serial.print("RRSI: ");
   Serial.print(WiFi.RSSI());
   Serial.println(" dBm");
}

void setup()
{
   Serial.begin(9600);
   delay(3000);
   initWiFi();
}

void loop()
{
}
