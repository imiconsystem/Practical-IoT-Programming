void setup() 
{
   Serial.begin(9600);
   delay(3000);
   for (int adc = 0; adc <= 10; adc++) 
   {
      int mapped = map(adc, 0, 10, 0, 5);
      Serial.print(adc);
      Serial.print(" : ");
      Serial.println(mapped);
  }
}

void loop() 
{
}
