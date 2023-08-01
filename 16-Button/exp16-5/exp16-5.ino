#include <ezButton.h>
ezButton button(14);
void pressCount() 
{
   unsigned long count = button.getCount();
   Serial.print("Count : ");
   Serial.println(count);
}

void setup() 
{
   Serial.begin(9600);
   delay(3000);
   button.setDebounceTime(50); 
   button.setCountMode(COUNT_FALLING);
}

void loop() 
{
  button.loop(); 
   if(button.isPressed())
   {
      pressCount();
   }
}
