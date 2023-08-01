void setup() 
{
  Serial.begin(9600);
  delay(3000);
  String text1 = "Hello";
  String text2 = "HELLO";
  if(text1.equals(text2))
  {
    Serial.println("Text1 Equal Text2");
  }
  else
  {
    Serial.println("Text1 NotEqual Text2");
  }
  if(text1.equalsIgnoreCase(text2))
  {
    Serial.println("Text1 Equal Text2");
  }
  else
  {
    Serial.println("Text1 NotEqual Text2");
  } 
}
void loop() 
{

}
