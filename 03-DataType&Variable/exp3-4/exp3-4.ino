void setup () 
{
   char name[10]= "Thailand";   
   int code = 2499;  
   Serial.begin(9600);
   delay(3000);
   Serial.printf("%s \t %d", name, code);  
}

void loop() 
{
 
}
