#include <Servo.h>

#define escPin 9

#define THROTTLE_MIN        65
#define THROTTLE_MAX        100
#define THROTTLE_BAKE       82

int throttle = THROTTLE_MIN; //default throttle
bool startReading = false; //default set to not reading

Servo esc;


void setup() {
  Serial.begin(9600);
  Serial.println();
  Serial.println("Program Start...");

  esc.attach(escPin);
  delay(1);
  esc.write(65);
  delay(5000);
  Serial.println("Arming...");
  delay(2000);
}

void loop() {
  //esc.writeMicroseconds(throttle);
  esc.write(65);
  //int joystickValue = analogRead(A0);
  //int newThrottle = map(joystickValue, 550, 1023, THROTTLE_MIN, THROTTLE_MAX); 
  for(int i = 64; i < THROTTLE_MAX; i++){
    throttle = throttle + 1;
    Serial.println(throttle);
    delay(1000);
  }
  if(throttle >= 99){
    throttle = throttle - 35;
  }
  

}
