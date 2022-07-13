int trigPin = 13;
int echoPin=12;
int pingtraveltime;

int dir1=4;
int dir2=3;

int dir3=6;
int dir4=7;

int dir5=8;
int dir6=9;

int dir7=10;
int dir8=11;

int Gledpin=2;
int Rledpin=5;
void setup(){
pinMode(Gledpin,OUTPUT);
pinMode(Rledpin,OUTPUT);

pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
  
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
pinMode(dir3,OUTPUT);
pinMode(dir4,OUTPUT);
pinMode(dir5,OUTPUT);
pinMode(dir6,OUTPUT);
pinMode(dir7,OUTPUT);
pinMode(dir8,OUTPUT);
 
}

void loop(){
 digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
pingtraveltime= pulseIn(echoPin,HIGH);
delay(25);
Serial.println(pingtraveltime);
delay(100);

if ( pingtraveltime<300){
  digitalWrite(Rledpin,HIGH);
  digitalWrite(Gledpin,LOW);
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,HIGH);
  digitalWrite(dir3,LOW);
  digitalWrite(dir4,HIGH);
  digitalWrite(dir5,LOW);
  digitalWrite(dir6,HIGH);
  digitalWrite(dir7,LOW);
  digitalWrite(dir8,HIGH);
    
}
else{
  digitalWrite(Gledpin,HIGH);
  digitalWrite(Rledpin,LOW);
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  digitalWrite(dir3,HIGH);
  digitalWrite(dir4,LOW);
  digitalWrite(dir5,LOW);
  digitalWrite(dir6,HIGH);
    digitalWrite(dir7,LOW);
  digitalWrite(dir8,HIGH);
    
 
  
}

}
