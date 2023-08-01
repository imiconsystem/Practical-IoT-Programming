void setup() 
{
  int x;
  int y; 
  Serial.begin(9600);
  delay(3000);
  x = 50;
  y = x++;
  Serial.printf ("x = %d\n", x);
  Serial.printf ("y = %d\n", y);
  x = 50;
  y = ++x;
  Serial.printf ("x = %d\n", x);
  Serial.printf ("y = %d", y);
}

void loop() 
{
  
}
