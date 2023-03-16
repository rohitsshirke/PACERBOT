#include<Servo.h>

#define ESC_PIN 9
Servo esc;

void setup() {
  Serial.begin(600);
  esc.attach(9);
  delay(1);
  esc.write(65);
  delay(5000);

}

void loop() {
  int joystickValue = analogRead(A0);
  joystickValue = constrain(joystickValue, 550, 1023);
  int motorSpeed = map(joystickValue, 550, 1023, 0, 180);
  esc.write(motorSpeed);
  Serial.println(joystickValue);
  delay(100)

}
