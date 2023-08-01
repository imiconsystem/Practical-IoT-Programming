#define LED_Pin  12
#define Sensor_Pin 14    
unsigned long lastEvent = 0;
boolean LedState = false; 
void setup() 
{
   Serial.begin(9600);
   delay(3000);
   pinMode(LED_Pin, OUTPUT);
   pinMode(Sensor_Pin, INPUT);  
}

void loop() 
{
   int sensorData = digitalRead(Sensor_Pin);
   if (sensorData == LOW) 
   {
      if (millis() - lastEvent > 25) 
      {
         Serial.println("The sound has been detected.");
         LedState = !LedState;
         digitalWrite(LED_Pin, LedState ? HIGH : LOW);
      } 
      lastEvent = millis();
   }
} 
