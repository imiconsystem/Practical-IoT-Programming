#define LED  12
#define interruptPin  14
void IRAM_ATTR blink()
{
   digitalWrite(LED, !digitalRead(LED));
}

void setup()
{
  pinMode(LED, OUTPUT);
  attachInterrupt(interruptPin, blink, CHANGE);
} 

void loop()
{
} 
