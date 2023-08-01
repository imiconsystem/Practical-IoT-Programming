void setup() 
{
  int x = 7;
  int y = 5; 
  Serial.begin(9600);
  delay(3000);
  Serial.printf ("Logical value is %d\n", x>y && x<y);
  Serial.printf ("Bitwise value is %d", x & y);
}

void loop() 
{
  
}
