int num;
void setup() 
{
  Serial.begin(9600);
  delay(3000);
}

void loop() 
{
  if ( Serial.available() > 0) 
  {
    num = Serial.read();
    Serial.print  ("num = ");
    Serial.println(num);
  }
}
