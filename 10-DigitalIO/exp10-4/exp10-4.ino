const int OUT_1 = 13;
const int OUT_2 = 14;
const unsigned long INTERVAL = 1000;
unsigned long previousTime = 0; 
bool ledStatus = false; 
void setup() 
{
   Serial.begin(9600);
   delay(3000);
   pinMode(OUT_1, OUTPUT);
   pinMode(OUT_2, OUTPUT);
}
 
void loop() 
{
   unsigned long currentTime = millis(); 
   if (currentTime - previousTime >= INTERVAL) 
   {
       previousTime = currentTime;
       digitalWrite(OUT_1, ledStatus); 
       ledStatus = !ledStatus;
       digitalWrite(OUT_2, ledStatus);
   }
}
