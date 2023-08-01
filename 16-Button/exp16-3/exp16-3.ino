#define buttonPin  14
void setup() 
{
   Serial.begin(9600);
   delay(3000);
   pinMode(buttonPin, INPUT); 
}

void loop() 
{
   int buttonPress = digitalRead(buttonPin);
   delay(100);  
   if(buttonPress == HIGH) 
   { 
      Serial.println("Button has been pressed.");
   } 
}
