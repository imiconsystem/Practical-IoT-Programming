const int LED = 12;  
const int interruptPin = 14; 
byte state = LOW;
void blink() 
{
   state = !state;
}

void setup() 
{
   pinMode(LED, OUTPUT);
   attachInterrupt(digitalPinToInterrupt(interruptPin), blink, RISING);
}

void loop() 
{
   digitalWrite(LED, state);
}
