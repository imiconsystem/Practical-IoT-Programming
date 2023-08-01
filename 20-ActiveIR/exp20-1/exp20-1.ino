#define Sensor_Pin 14   
void setup() 
{
  Serial.begin(9600);
  delay(3000);
  pinMode(Sensor_Pin, INPUT);
}

void loop() 
{
   int state = digitalRead(Sensor_Pin);
   if (state == LOW)
   {
      Serial.println("The obstacle is present");
   }   
   else
   {  
      Serial.println("The obstacle is NOT present");
   }
   delay(100);
} 
