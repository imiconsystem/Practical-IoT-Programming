#define ButtonPin 12 
#define RelayPin  13  
void setup() 
{
  pinMode(ButtonPin, INPUT); 
  pinMode(RelayPin, OUTPUT);      
}

void loop() 
{
  int buttonState = digitalRead(ButtonPin); 
  if (buttonState == HIGH) 
  {
     digitalWrite(RelayPin, HIGH); 
  }
  else if (buttonState == LOW) 
  { 
     digitalWrite(RelayPin, LOW);  
  }
}
