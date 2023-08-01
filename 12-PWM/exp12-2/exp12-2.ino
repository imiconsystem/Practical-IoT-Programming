#define LED_GPIO  12
#define PWM_Freq  1000
#define PWM_Ch    0
#define PWM_Res   8
int dutyCycle = 0;
void setup()
{
  ledcAttachPin(LED_GPIO, PWM_Ch);
  ledcSetup(PWM_Ch, PWM_Freq, PWM_Res);
}
 
void loop()
{
  while(dutyCycle <= 255)
  {
    ledcWrite(PWM_Ch, dutyCycle++);
    delay(15);
  }
  while(dutyCycle > 0)
  {
    ledcWrite(PWM_Ch, dutyCycle--);
    delay(15);
  }
}
