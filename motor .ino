int in3 = 7; //Declaring the pins where in1 in2 from the driver are wired 
int in4 = 6; //here they are wired with D9 and D8 from Arduino
void setup() {
  pinMode(in3, OUTPUT); //Declaring the pin modes, obviously they're outputs
  pinMode(in4, OUTPUT);
}
//Before starting the loop you should create functions type "void" to control the driver's pins
//Here I created three functions, one to turn the motor in a direction "#1", the other one to the other direction "#3"
//and the second one to stop the motor
//For changing directions you switch the HIGH with LOW and vice-versa
void TurnMotorA(){
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void TurnOFFA(){
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
void TurnMotorA2(){
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
void loop() {
  TurnMotorA(); // We turn to direction 1 for 3s then stop for 2s
  delay(3000);
  TurnOFFA();
  delay(2000);
  TurnMotorA2(); // We turn to direction 2 for 3s then stop for 2s
  delay(3000);
  TurnOFFA();
  delay(2000);
}

