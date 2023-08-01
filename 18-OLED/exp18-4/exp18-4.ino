#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_ADDR   0x3C  // OLED I2C Address
#define SCREEN_WIDTH 128  // OLED display width  (pixels)
#define SCREEN_HEIGHT 64  // OLED display height (pixels)
//declare SSD1306 object connected to I2C
Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() 
{
   // initialize with the I2C addr 0x3C
   oled.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR); 
}

void loop() 
{
   // Clear display
   oled.clearDisplay();

   // Draw circle
   oled.clearDisplay();
   oled.fillCircle(63, 31, 30, WHITE);
   oled.display();
   delay(500);

   oled.invertDisplay(true);
   delay(1000);
   oled.invertDisplay(false);
   delay(500);
}
