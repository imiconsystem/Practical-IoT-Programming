void setup() 
{ 
   Serial.begin(9600);
   delay(3000);
   
   String fruit = "Banana";
   Serial.println(fruit);

   fruit.toUpperCase();
   Serial.println(fruit);

   fruit = "Strawberry";
   Serial.println(fruit);

   fruit.replace("Straw", "Rasp");
   Serial.println(fruit);

   Serial.print("String length = ");
   Serial.println(fruit.length());
}

void loop() 
{ 

}
