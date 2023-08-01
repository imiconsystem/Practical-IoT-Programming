void setup () 
{
   float num = 123.4567;
   Serial.begin(9600);
   delay(3000);
   printf("The value is %f \n", num);
   printf("The value is %10.2f \n", num);
}
void loop ()
{

}
