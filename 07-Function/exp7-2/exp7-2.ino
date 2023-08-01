int sum(int x, int y) 
{
   x = x+y;
   return x; 
}

void setup () 
{
   Serial.begin(9600);
   delay(3000);
   int x = 10;
   int y = 20;
   int z = 0;
   Serial.print("x = ");
   Serial.println(x);
   Serial.print("y = ");
   Serial.println(y);
   Serial.print("z = ");
   Serial.println(z);
   Serial.println("-------------");
   z = sum(x, y); 
   Serial.print("x = ");
   Serial.println(x);
   Serial.print("y = ");
   Serial.println(y);
   Serial.print("z = ");
   Serial.println(z);
}
void loop()
{
}  
