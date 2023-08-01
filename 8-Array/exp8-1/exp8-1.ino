int x[10]; 
void setup( ) 
{
   Serial.begin(9600);
   delay(3000);
   for(int i = 0; i < 10; ++i) 
   {
      x[i] = i; 
      Serial.println(x[i]);
   }
}

void loop( ) 
{
   
}
