int x[2][3] = { {1, 2, 3}, {4, 5, 6} }; 
void setup( ) 
{
   Serial.begin(9600);
   delay(3000);
   
   Serial.println( x[0][0] );
   Serial.println( x[0][1] );
   Serial.println( x[0][2] );
   Serial.println( x[1][0] );
   Serial.println( x[1][1] );
   Serial.println( x[1][2] );
   Serial.println("-----------");
   for (int i =0; i < 2; i++) 
   {
      for (int j =0; j < 3; j++) 
      {
         x[i][j] = x[i][j] * 10;
        Serial.println( x[i][j] );
      }
   }
}

void loop( ) 
{
   
}
