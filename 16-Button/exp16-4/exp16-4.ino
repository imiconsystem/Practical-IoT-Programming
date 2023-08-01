#include <ezButton.h>
ezButton button(14); 
void setup() 
{
   Serial.begin(9600);
   delay(3000);
   button.setDebounceTime(50);
}

void loop() 
{
   button.loop(); 
   if(button.isPressed())
   {
      Serial.println("Button has been pressed.");
   }
}
 
