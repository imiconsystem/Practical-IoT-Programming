void setup() 
{
   Serial.begin(9600);
   delay(3000);
   char city[] = "Lamphun";
   char country[9]; 
   Serial.println(city);
   country[0] = 'T';
   country[1] = 'h';
   country[2] = 'a';
   country[3] = 'i';
   country[4] = 'l';
   country[5] = 'a';
   country[6] = 'n';
   country[7] = 'd';
   country[8] = 0; 
   for(int i=0; i<sizeof(country); i++)
   {
      Serial.print(country[i]);
   }
}

void loop() 
{ 

}
