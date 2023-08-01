const int LED_GPIO = 12;
const int PWM_Freq = 1000; 
const int PWM_Ch = 0;
const int PWM_Res = 8; 
void setup()
{
   ledcAttachPin(LED_GPIO, PWM_Ch);
   ledcSetup(PWM_Ch, PWM_Freq, PWM_Res);
}

void loop()
{
   for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++)
   {
      ledcWrite(PWM_Ch, dutyCycle);
      delay(15);
    }
}
