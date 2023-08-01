int num;
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
       Serial.print  ("Choice = ");
       Serial.println(num); 
       switch(num)
       {
       case 1:
          Serial.println("Thailand");
          break;
       case 2:
          Serial.println("China");
          break;
       case 3:
          Serial.println("Japan");
          break;
       default:
          Serial.println("Other");
          break;
       }      
   }
}
