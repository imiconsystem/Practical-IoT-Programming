#define LED  12
#define switchPin  14
void setup()
{
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}
void loop()
{
    if(digitalRead(switchPin))
    {
      digitalWrite(LED, HIGH);
    }
    else
    {
      digitalWrite(LED, LOW);      
    }
}
