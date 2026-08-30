int analogPin; // assigning a variable to analog pin a0
int readValue;  // declaring variable read value
int LED; 

int writeValue;

void setup() {
  // put your setup code here, to run on
  Serial.begin(9600);       //Start serial port
  Serial.println("To what anlog pin is your potentiometer connected to?");
  while(Serial.available()==0){}
  analogPin=Serial.parseInt();
  Serial.println("To what pin is your LED connected to?");
  while(Serial.available()==0){}
  LED=Serial.parseInt();
  
  pinMode(analogPin,INPUT);    //declaring analogPin as an input        
  pinMode(LED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  readValue = analogRead(analogPin);    // read panalogPin and put it in readValue
  writeValue=(255./1023.)*readValue;
  Serial.print("You are writing: ");
  Serial.println(writeValue);
  analogWrite(LED,writeValue);
  Serial.println(readValue);
                      
  
  

}
