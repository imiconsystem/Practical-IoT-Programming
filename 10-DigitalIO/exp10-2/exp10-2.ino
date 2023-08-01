int out_pin = 13; 
int in_pin = 12; 
int value = 0; 
void setup()
{
   pinMode(out_pin, OUTPUT);
   pinMode(in_pin, INPUT);
}

void loop()
{
   value = digitalRead(in_pin); 
   digitalWrite(out_pin, value); 
}
