#define ButtonPin 12 
#define RelayPin  13
int lastState = LOW;
int relayState = LOW;
void setup() 
{
   pinMode(ButtonPin, INPUT); 
   pinMode(RelayPin, OUTPUT); 
}

void loop() 
{
   int currentState = digitalRead(ButtonPin);    
   if (lastState == HIGH && currentState == LOW) 
   {
      relayState = !relayState;
      digitalWrite(RelayPin, relayState);
   }
   lastState = currentState;  
   delay(50);
}
