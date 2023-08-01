#define LED  12
#define buttonPin 14 
int lastState = LOW;
int ledState = LOW;
void setup() 
{
   Serial.begin(9600);
   delay(3000);
   pinMode(buttonPin, INPUT); 
   pinMode(LED, OUTPUT); 
}

void loop() 
{
   int currentState = digitalRead(buttonPin);    
   if (lastState == HIGH && currentState == LOW) 
   {
      ledState = !ledState;
      digitalWrite(LED, ledState);
      Serial.println(lastState);
      Serial.println(currentState);
   }
   lastState = currentState;  
   delay(50);
}
