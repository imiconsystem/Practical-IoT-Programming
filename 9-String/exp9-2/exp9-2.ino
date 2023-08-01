void setup() 
{
   Serial.begin(9600);
   delay(3000);

   char fruit[] = "Banana"; 
   char food[20]; 
   int num; 
   
   Serial.println(fruit);

   num = strlen(fruit);
   Serial.print("String length = ");
   Serial.println(num);
   num = sizeof(fruit); 
   Serial.print("Array size = ");
   Serial.println(num);

   strcpy(food, fruit);
   Serial.println(food);

   strcat(food, "Pizza");
   Serial.println(food);
  
   num = strlen(food);
   Serial.print("String length = ");
   Serial.println(num);
   num = sizeof(food);
   Serial.print("Array size = ");
   Serial.println(num);
}

void loop( ) 
{

}
