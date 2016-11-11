#include <TimerOne.h>

const int outPin = 10;
const int perioduS = 100;
int duty = 0;
const int ADCIn = A0;


void setup(){
  Timer1.initialize(perioduS);
}

void loop(){
  duty = analogRead(ADCIn);
  Timer1.pwm(outPin,duty);
  delay(1);
}

