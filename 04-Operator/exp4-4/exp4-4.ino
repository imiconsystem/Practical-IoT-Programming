void setup() 
{
  int x = 10;
  int y = 20; 
  Serial.begin(9600);
  delay(3000);
  Serial.printf ("x > y is %d\n", x > y);
  Serial.printf ("x < y is %d", x < y);
}

void loop() 
{
  
}
