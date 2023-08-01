int count = 0;
void setup() 
{
   Serial.begin(9600);
   delay(3000);
}

void loop() 
{
   while (Serial.available() == 0) { }
   count = Serial.parseInt();
   while(count > 0)  
   {  
      Serial.println("Slow Down Smile More");  
      count = count - 1;  
   } 
   Serial.println("--------------------");
}
