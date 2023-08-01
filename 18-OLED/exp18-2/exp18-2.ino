#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_ADDR   0x3C  // OLED I2C Address
#define SCREEN_WIDTH 128  // OLED display width  (pixels)
#define SCREEN_HEIGHT 64  // OLED display height (pixels)
#define buttonPin  14
//declare SSD1306 object connected to I2C
Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
void setup() 
{
   delay(2000);                // Wait for initializing
   // initialize OLED with address 0x3C
   oled.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR); 
   oled.clearDisplay();        // Clear display
   oled.setTextColor(WHITE);   // Text size
   oled.setTextSize(2);        // Text color
}

void loop() 
{
   oled.clearDisplay(); 
   int buttonPress = digitalRead(buttonPin); 
   if(buttonPress == HIGH) 
   { 
      oled.setCursor(20, 30);
      oled.println("Happy");  
   }             
   else 
   { 
      oled.setCursor(20, 30);
      oled.println("Smile");  
   }
   oled.display(); 
} 
