#define potPin 13
int adc_value;
float v_in;
void setup()
{  
   Serial.begin(9600);
   delay(3000);
}
void loop()
{
   adc_value = analogRead(potPin);
   v_in = ((adc_value * 3.3) / 4095);
   Serial.print("ADC Level : ");
   Serial.print(adc_value);
   Serial.print("  ");
   Serial.print("Voltage Level : ");
   Serial.print(v_in);
   Serial.println(" V");
   delay(1000);
}
