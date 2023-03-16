#include<Servo.h>

#define ESC_PIN 9

Servo esc;

void setup() 
{
  Serial.begin(600);
  esc.attach(9);
  delay(1);
  esc.write(65);
  delay(5000);
}

void loop() 
{
  /*int joystickValue = analogRead(A0);
  joystickValue = constrain(joystickValue, 550, 1023);  //Read upper half of joystick value from center.
  int mmotorSpeed = map(joystickValue, 550, 1023, 0, 30);
  esc.write(mmotorSpeed);  
  Serial.println(mmotorSpeed);
  if(mmotorSpeed > 30) {
    mmotorSpeed = 0;
  }*/
  esc.writeMicroseconds
}
