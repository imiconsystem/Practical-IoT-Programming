int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int y = 0;
void setup() 
{
   Serial.begin(9600);
   delay(3000);
   for (int i = 0; i < 10; ++i)
   {
      y += x[i];
   } 
   Serial.print("Total = "); 
   Serial.print(y);
}

void loop() 
{
   
}
