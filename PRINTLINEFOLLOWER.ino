//LOW = line detected
//HIGH = No line detected

void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT);//Sensor1
  pinMode(3,INPUT);//Sensor2
  pinMode(9,OUTPUT);//ESC

}

void loop() {
  int Sensor1=digitalRead(2);
  int Sensor2=digitalRead(3);
  //int [] SensorArray = {digitalRead(2),digitalRead(3),digitalRead(4),digitalRead(5),digitalRead(6),digitalRead(7),digitalRead(8),digitalRead(9),};
  //Serial.println(SensorArray);

  if(Sensor1 == LOW){
   Serial.println("Sensor1")
  }
  if(Sensor2 == LOW){
    Serial.println("Sensor2")
  }
  delay(500);



}
