#define RelayPin  13 
void setup() 
{
   pinMode(RelayPin, OUTPUT);
}

void loop() 
{
   digitalWrite(RelayPin, LOW);
   delay(1000);
   digitalWrite(RelayPin, HIGH);
   delay(1000);
}
