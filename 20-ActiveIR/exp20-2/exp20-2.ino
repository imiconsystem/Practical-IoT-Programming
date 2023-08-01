#define LED_Pin  12
#define Sensor_Pin 14
int lastState = HIGH;  // the previous state from the input pin
int currentState;      // the current reading from the input pin
void setup() 
{
   Serial.begin(9600);
   delay(3000);
   pinMode(LED_Pin, OUTPUT);
   pinMode(Sensor_Pin, INPUT);
}

void loop() 
{
   currentState = digitalRead(Sensor_Pin);
   if (lastState == HIGH && currentState == LOW)
   {
      digitalWrite(LED_Pin, HIGH);
      Serial.println("The obstacle is detected");
   }
   else if (lastState == LOW && currentState == HIGH)
   {
      digitalWrite(LED_Pin, LOW); 
      Serial.println("The obstacle is cleared");
   }
   delay(50);
   // save the the last state
   lastState = currentState;
}
