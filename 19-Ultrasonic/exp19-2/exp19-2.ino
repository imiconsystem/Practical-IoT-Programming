#define Trig_Pin 23                     // connected to TRIG pin
#define Echo_Pin 22                     // connected to ECHO pin
#define LED_Pin  12                     // connected to GPIO pin
#define Distance_Threshold 10           // Threshold point (centimeters)

float duration, distance;
void setup() 
{
   Serial.begin (9600);
   delay(3000); 
   
   pinMode(Trig_Pin, OUTPUT);           // configure the trigger pin to output mode
   pinMode(Echo_Pin, INPUT);            // configure the echo pin to input mode
   pinMode(LED_Pin, OUTPUT);            // set GPIO pin to output mode
}

void loop() 
{
   digitalWrite(Trig_Pin, HIGH);        // generate 10-microsecond pulse to Trig Pin
   delayMicroseconds(10);
   digitalWrite(Trig_Pin, LOW);
   duration = pulseIn(Echo_Pin, HIGH);  // measure duration of pulse from Echo Pin
   //distance = 0.017 * duration;       // calculate the distance
   distance = (duration * 0.0343) / 2;
   if (distance > 10 || distance < 5)
   {
      Serial.println("Out of range");
   }
   else 
   {
    Serial.print("Distance = ");
    Serial.print(distance);
    Serial.println(" cm");
   }
   delay(500);
}
