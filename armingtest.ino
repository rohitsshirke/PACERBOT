#include <Servo.h>

Servo motor;

void setup ()
{
  motor.attach(9); 
  Serial.begin(9600);
  int i = 0;

  //Give some time before you start anything like switching on your ESC / Motor

  Serial.print("Arming Test Starts in ");
  for(i =10; i > 0; i--)
  {
     Serial.print(i);
     Serial.print(".. ");
  }

  Serial.println();

// Watch for the tone when the ESC gets armed

  for(i = 50; i < 130; i++)
  {
     motor.write(i);
     Serial.println(i);
     delay(500);
  }
}

void loop()
{
}