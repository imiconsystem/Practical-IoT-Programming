#define LED_GPIO  12
#define PWM_Freq  1000
#define PWM_Ch    0
#define PWM_Res   12
#define POT       13
int Pot_value = 0;
void setup()
{
  ledcAttachPin(LED_GPIO, PWM_Ch);
  ledcSetup(PWM_Ch, PWM_Freq, PWM_Res);
}
 
void loop()
{
  Pot_value = analogRead(POT);
  ledcWrite(PWM_Ch, Pot_value);
}
