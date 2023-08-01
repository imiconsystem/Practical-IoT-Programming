const int potPin = 13;
int potValue = 0;
void setup() 
{
  Serial.begin(9600);
  delay(3000);
}

void loop() 
{
  potValue = analogRead(potPin);
  Serial.print("ADC Value : ");
  Serial.println(potValue);
  delay(500);
}
