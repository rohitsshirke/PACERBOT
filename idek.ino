int Xpin=A0;
int Ypin=A1;
int Spin=2;
int Xval;
int Yval;
int Sval;
int dt=200;
void setup() {
  // put your setup code here, to run once:
Serial.begin(38400);
pinMode(Xpin,INPUT);
pinMode(Ypin,INPUT);
pinMode(Spin,INPUT);
digitalWrite(Spin,HIGH);
}
 
void loop() {
 Xval=analogRead(Xpin);
 Yval=analogRead(Ypin);
 Sval=digitalRead(Spin);
 delay(dt);
 Serial.println("X Value = " + Xval);
 
 
}