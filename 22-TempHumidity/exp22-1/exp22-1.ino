#include "DHT.h"
#define Sensor_Pin 14
#define DHTTYPE DHT22
DHT dht(Sensor_Pin, DHTTYPE);

void setup() 
{
   Serial.begin(9600);
   delay(3000);
   dht.begin();
}

void loop() 
{
   delay(2000);
   float h = dht.readHumidity();
   float t = dht.readTemperature();
   float f = dht.readTemperature(true);
   if (isnan(h) || isnan(t) || isnan(f)) 
   {
      Serial.println("Failed to read from sensor.");
      return;
   }
   Serial.print("Humidite: ");
   Serial.print(h);
   Serial.print("%  Temperature: ");
   Serial.print(t);
   Serial.print("°C, ");
   Serial.print(f);
   Serial.println("°F");
}
