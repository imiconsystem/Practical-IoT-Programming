int num;
const int point=10;
void setup() 
{
  Serial.begin(9600);
  delay(3000);
}

void loop() 
{
   if (Serial.available() > 0) 
   {
       num = Serial.parseInt();
       Serial.print  ("num = ");
       Serial.println(num); 
       Serial.print  ("point = ");
       Serial.println(point); 
       if (num > point)
       {
          Serial.println("num > point");
       }   
       else
       {
          if (num == point)
          {
             Serial.println("num = point");
          }
          else
          {
             Serial.println("num < point");
          }
       }
    }  
}
