int num, count;
void setup() 
{
   Serial.begin(9600);
   delay(3000);
}

void loop() 
{
   while (Serial.available() == 0) { }
   count = Serial.parseInt();
   for(num = 0 ; num < count ; num++)  
   {  
      Serial.println("Slow Down Smile More");  
   }
   Serial.println("--------------------");       
}
