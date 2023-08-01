#define LED  12
#define interruptPin  14
void handleInt() 
{ 
   Serial.println("Interrupt Detected");
   Serial.print("Stamp Time (ms): ");
   Serial.println(millis());
}

void setup() 
{ 
   Serial.begin(9600);
   delay(3000);
   pinMode(LED,OUTPUT); 
   attachInterrupt(digitalPinToInterrupt(interruptPin), handleInt, FALLING); 
} 

void loop() 
{ 
    digitalWrite(LED,HIGH); 
    delay(500); 
    digitalWrite(LED,LOW); 
    delay(500); 
} 
