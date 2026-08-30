int RedPin=11;
int BluePin=10;
int GreenPin=6;

int S2=7;
int S3=8;
int Outpin=4;
unsigned int PulseWidth;
int rcolor;
int gcolor;
int bcolor

void setup() {
  // put y our setup code here, to run once:

  Serial.begin(9600);

  pinMode(RedPin,OUTPUT);
  pinMode(GreenPin,OUTPUT);
  pinMode(BluePin,OUTPUT);

  pinMode(S2,OUTPUT);
  pinMode(S3,OUTPUT);
  pinMode(Outpin,INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  PulseWidth=pulseIn(Outpin,LOW);
  rcolor=(PulseWidth/400)-1;
  rcolor=(255-rcolor);
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  PulseWidth=pulseIn(Outpin,LOW);
  gcolor=(PulseWidth/400)-1;
  gcolor=(255-gcolor);
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  PulseWidth=pulseIn(Outpin,LOW);
  bcolor=(PulseWidth/400)-1;
  bcolor=(255-bcolor);
  
  if(rcolor>gcolor&&gcolor>bcolor){
    rcolor=255;
    gcolor=gcolor/2;
    bcolor=0;
  }
  if(rcolor>bcolor&&bcolor>gcolor){
    rcolor=255;
    gcolor=0;
    bcolor=bcolor/2;
  }
  if(gcolor>rcolor&&rcolor>bcolor){
    rcolor=rcolor/2;
    gcolor=255;
    bcolor=0;
  }
  if(gcolor>bcolor&&bcolor>rcolor){
    rcolor=0;
    gcolor=255;
    bcolor=bcolor/2;
  }
   if(bcolor>gcolor&&gcolor>rcolor){
    rcolor=0;
    gcolor=gcolor/2;
    bcolor=255;
  }
   if(bcolor>rcolor&&rcolor>gcolor){
    rcolor=rcolor/2;
    gcolor=0;
    bcolor=255;
  }
  bcolor=bcolor*.5;
  gcolor=gcolor*.75;
  
  Serial.print(rcolor);
  Serial.print(", ");
  Serial.print(gcolor);
  Serial.print(", ");
  Serial.println(bcolor);
  Serial.println(" ");
  analogWrite(RedPin,rcolor);
  analogWrite(GreenPin,gcolor);
  analogWrite(BluePin,bcolor);
  
  

}
