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
    num = Serial.parseInt();
    Serial.print  ("num = ");
    Serial.println(num);
    Serial.println(num*num);
  }
}
