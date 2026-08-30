#include <Servo.h>
int Position;
int servopin;
int potentiometer;
Servo Servo;
int potreading;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("To what pin is your Servo connected to?");
  while(Serial.available()==0){
    
  }
  servopin=Serial.parseInt();
  Servo.attach(servopin);
  Serial.println("To what pin is your Potentiometer connected to?");
  while(Serial.available()==0){
    
  }
  potentiometer=Serial.parseInt();
  pinMode(potentiometer,INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  potreading=analogRead(potentiometer);
  Position=(180./1023.)*potreading+0;
  Serial.println(Position);
  Servo.write(Position);
    
 
}
