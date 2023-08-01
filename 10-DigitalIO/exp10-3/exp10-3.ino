const int OUT_1 = 13;
const int OUT_2 = 14;
int i;     
void setup()
{
   Serial.begin(9600);
   delay(3000);
   pinMode(OUT_1, OUTPUT);
   pinMode(OUT_2, OUTPUT);
}
void loop()
{
   for(i = 0; i < 10; i++)
   {
      if( i < 5)
      { 
         digitalWrite(OUT_1, HIGH); 
         delay(1000);
         digitalWrite(OUT_1, LOW);
         delay(1000);
      }   
      else
      {
         digitalWrite(OUT_2, HIGH); 
         delay(1000);
         digitalWrite(OUT_2, LOW);
         delay(1000);       
      }
   }
}
