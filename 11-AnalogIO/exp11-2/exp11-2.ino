const int potPin = 13;
int potValue = 0;
void setup() 
{
  Serial.begin(9600);
  delay(3000);
}

void loop() 
{
  potValue = map(analogRead(potPin), 0, 4095, 0, 255);
  Serial.print("ADC Value : ");
  Serial.println(potValue);
  delay(500);
}
