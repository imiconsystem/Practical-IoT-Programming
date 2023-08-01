#define interruptPin  14 
byte interruptCount = 0;
int numberInterrupt = 0;
void handleInt() 
{
  interruptCount++;
} 

void setup() 
{
   Serial.begin(9600);
   delay(3000);
   attachInterrupt(digitalPinToInterrupt(interruptPin), handleInt, CHANGE);
}
 
void loop() 
{
   if(interruptCount > 0)
   {
      interruptCount--;
      numberInterrupt++;
      Serial.print("Number of interrupt : ");
      Serial.println(numberInterrupt);
   }
}
