int x[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; 
void setup( ) 
{
   Serial.begin(9600);
   delay(3000);
   for(int i = 0; i < 10; ++i) 
   {
      Serial.println(x[i]);
   }
}

void loop( ) 
{
   
}
