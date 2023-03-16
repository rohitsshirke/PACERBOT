#include <Servo.h>
Servo myservo;

void setup() {
  Serial.begin(600);
  myservo.attach(9);
  delay(1);
  myservo.write(65);
  delay(5000);
}

void loop() {
  while(Serial.available() > 0){
    int val = Serial.parseInt();
    Serial.println(val);
    myservo.write(val);
  }

}
