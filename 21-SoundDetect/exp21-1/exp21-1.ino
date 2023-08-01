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
   // The DHT22 returns at most one measurement every 2s
   delay(2000);
   // Reads the humidity in %
   float h = dht.readHumidity();
   // Reads the temperature in degrees Celsius
   float t = dht.readTemperature();
   // Reads the the temperature in Fahrenheit
   float f = dht.readTemperature(true);
   if (isnan(h) || isnan(t) || isnan(f)) 
   {
      // Returns an error if the ESP32 does not receive any measurements
      Serial.println(F("Failed reception"));
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
