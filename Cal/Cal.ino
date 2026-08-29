#include<LiquidCrystal.h>
LiquidCrystal Dis(10,9,5,4,3,2);
String math;
float firstnum;
float secondnum;

void setup() {
  // put your setup code here, to run once:
  Dis.begin(16,2);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  Dis.setCursor(3,0);
  Dis.print("CALCULATOR");
  Dis.setCursor(3,1);
  Dis.print("by Shaheer");
  delay(5000);
  Dis.clear();
  Dis.setCursor(0,0);
  Dis.print("Add,Sub,Div,Mul");
  Dis.setCursor(0,1);
  Dis.print("Sqrt,Square");
  while(Serial.available()==0){
    
  }
  math=Serial.readString();
  if(math=="Add"||math=="add"){
    Dis.clear();
    Dis.setCursor(0,0);
    Dis.print("First Num");
    while(Serial.available()==0){}
    firstnum=Serial.parseFloat();
    Dis.clear();
    Dis.setCursor(0,0);
    Dis.print("Second Num");
    while(Serial.available()==0){}
    secondnum=Serial.parseFloat();
    Dis.clear();
    Dis.setCursor(0,0);
    Dis.print(firstnum);
    Dis.print("+");
    Dis.print(secondnum);
    Dis.setCursor(0,1);
    Dis.print(firstnum+secondnum);
    delay(10000);
    Dis.clear();
  
    
  }
  if(math=="Sub"||math=="sub"){
    Dis.clear();
    Dis.setCursor(0,0);
    Dis.print("First Num");
    while(Serial.available()==0){}
    firstnum=Serial.parseFloat();
    Dis.clear();
    Dis.setCursor(0,0);
    Dis.print("Second Num");
    while(Serial.available()==0){}
    secondnum=Serial.parseFloat();
    Dis.clear();
    Dis.setCursor(0,0);
    Dis.print(firstnum);
    Dis.print("-");
    Dis.print(secondnum);
    Dis.setCursor(0,1);
    Dis.print(firstnum-secondnum);
    delay(10000);
    Dis.clear();
  
    
  }
  if(math=="Div"||math=="div"){
    Dis.clear();
    Dis.setCursor(0,0);
    Dis.print("First Num");
    while(Serial.available()==0){}
    firstnum=Serial.parseFloat();
    Dis.clear();
    Dis.setCursor(0,0);
    Dis.print("Second Num");
    while(Serial.available()==0){}
    secondnum=Serial.parseFloat();
    Dis.clear();
    Dis.setCursor(0,0);
    Dis.print(firstnum);
    Dis.print("/");
    Dis.print(secondnum);
    Dis.setCursor(0,1);
    Dis.print(firstnum/secondnum);
    delay(10000);
    Dis.clear();
  
    
  }
  if(math=="Mul"||math=="mul"){
    Dis.clear();
    Dis.setCursor(0,0);
    Dis.print("First Num");
    while(Serial.available()==0){}
    firstnum=Serial.parseFloat();
    Dis.clear();
    Dis.setCursor(0,0);
    Dis.print("Second Num");
    while(Serial.available()==0){}
    secondnum=Serial.parseFloat();
    Dis.clear();
    Dis.setCursor(0,0);
    Dis.print(firstnum);
    Dis.print("*");
    Dis.print(secondnum);
    Dis.setCursor(0,1);
    Dis.print(firstnum*secondnum);
    delay(10000);
    Dis.clear();
  
    
  }
  if(math=="Sqrt"||math=="sqrt"){
    Dis.clear();
    Dis.setCursor(0,0);
    Dis.print("Num");
    while(Serial.available()==0){}
    firstnum=Serial.parseFloat();
    Dis.clear();
    Dis.setCursor(0,0);
    Dis.print("Sqrt");
    Dis.print(firstnum);
    Dis.setCursor(0,1);
    Dis.print(sqrt(firstnum));
    delay(10000);
    Dis.clear();
  
    
  }
   if(math=="Square"||math=="square"){
    Dis.clear();
    Dis.setCursor(0,0);
    Dis.print("Num");
    while(Serial.available()==0){}
    firstnum=Serial.parseFloat();
    Dis.clear();
    Dis.setCursor(0,0);
    Dis.print(firstnum);
    Dis.print("Square");
    Dis.setCursor(0,1);
    Dis.print(firstnum*firstnum);
    delay(10000);
    Dis.clear();
  
    
  }





}
