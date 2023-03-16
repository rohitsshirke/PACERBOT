#include<Servo.h>

Servo esc; 

void setup()
{
  esc.attach(9);
  esc.write(65);
  delay(5000);
/*
As you can see - I am not arming the ESC here.
For some reason, the ESC is now on a persistently armed mode now. 
Upon powering, the ESC automatically arms. 
Given sparse documentation for the ESC, I am not examining this behavior change. 

However, if your ESC refuses to arm, see the first post in this thread.
*/

//Again - this is useful only during the testing part. For autonomous running, it is pointless.

  int i=0;
  Serial.begin(9600); 
}

void loop()
{
  int i=0;
  
//Run for 2 seconds at moderately high speed (70).
  esc.write(10); delay(2000);

}
