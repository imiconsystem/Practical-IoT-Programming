void setup() 
{
  Serial.begin(9600);
  delay(3000);
  String point = "50";
  int num = point.toInt();
  num = num*10;
  Serial.print("point = ");
  Serial.println(point);
  Serial.print("point*10 = ");
  Serial.println(num);
}
void loop() 
{

}
