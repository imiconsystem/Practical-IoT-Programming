#define LED  12
#define buttonPin  14
void setup() 
{
   pinMode(buttonPin, INPUT); 
   pinMode(LED, OUTPUT); 
}

void loop() 
{
   int buttonPress = digitalRead(buttonPin); 
   if(buttonPress == 1) 
   { 
      digitalWrite(LED, HIGH); 
   } 
   else 
   { 
      digitalWrite(LED, LOW); 
   }
}
