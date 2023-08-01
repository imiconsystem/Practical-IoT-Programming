void setup () 
{
   int x = 30;
   int y = 30; 
   Serial.begin(9600);
   delay(3000);
   x = x + 20;
   y += 20;   
   Serial.printf("x = %d\n", x);
   Serial.printf("y = %d\n", y);
}
void loop ()
{

} 
