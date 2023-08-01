#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>
#define DHTTYPE    DHT22        // DHT 22 (AM2302)
#define DHTPIN 14               // Connected to the sensor
#define OLED_ADDR   0x3C        // OLED I2C Address
#define SCREEN_WIDTH 128        // OLED display width
#define SCREEN_HEIGHT 64        // OLED display height
// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
// Declaration for DHT22 Sensor
DHT dht(DHTPIN, DHTTYPE);

void setup() 
{
   Serial.begin(9600);
   delay(3000);
   dht.begin();
   // initialize OLED with address 0x3C
   oled.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR); 
   oled.clearDisplay();           // Clear display
   oled.setTextColor(WHITE);      // Text color
}

void loop() 
{
   delay(5000);
   //read temperature and humidity
   float t = dht.readTemperature();
   float h = dht.readHumidity();
   if (isnan(h) || isnan(t)) 
   {
      Serial.println("Failed to read from sensor.");
   }
   
   // clear display
   oled.clearDisplay();
   
   // display temperature
   oled.setTextSize(1);
   oled.setCursor(0,0);
   oled.print("Temperature: ");
   oled.setTextSize(2);
   oled.setCursor(0,10);
   oled.print(t);
   oled.print(" ");
   oled.setTextSize(1);
   oled.cp437(true);
   oled.write(248);
   oled.setTextSize(2);
   oled.print("C");
   
   // display humidity
   oled.setTextSize(1);
   oled.setCursor(0, 35);
   oled.print("Humidity: ");
   oled.setTextSize(2);
   oled.setCursor(0, 45);
   oled.print(h);
   oled.print(" %"); 
   oled.display(); 
}
