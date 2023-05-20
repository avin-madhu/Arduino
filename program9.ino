int ml1 = 13;
int ml2 = 11;
int mr3 = 10;
int mr4 = 2;
int en1 = 5;
int en2 = 6;
char a;

void setup() {
  Serial.begin(9600);
 pinMode(ml1,OUTPUT);
 pinMode(ml2,OUTPUT);
 pinMode(mr3,OUTPUT);
 pinMode(mr4,OUTPUT);
 pinMode(en1,OUTPUT);
 pinMode(en2,OUTPUT);
}

void forward()
{
   analogWrite(en1,128);
  analogWrite(en2,128);
  digitalWrite(ml1,HIGH);
  digitalWrite(ml2,LOW);
  digitalWrite(mr3,HIGH);
  digitalWrite(mr4,LOW);
}

void back()
{
  analogWrite(en1,128);
  analogWrite(en2,128);
  digitalWrite(ml1,LOW);
  digitalWrite(ml2,HIGH);
  digitalWrite(mr3,LOW);
  digitalWrite(mr4,HIGH);

}

 void right()
 {
  analogWrite(en1,128);
  analogWrite(en2,128);
  digitalWrite(ml1,LOW);
  digitalWrite(ml2,HIGH);
  digitalWrite(mr3,HIGH);
  digitalWrite(mr4,LOW);
 }

void left()
{
  analogWrite(en1,128);
  analogWrite(en2,128);
  digitalWrite(ml1,HIGH);
  digitalWrite(ml2,LOW);
  digitalWrite(mr3,LOW); 
  digitalWrite(mr4,HIGH);
}

void stop()
{
  digitalWrite(en1,LOW);
  digitalWrite(en2,LOW);
  digitalWrite(ml1,LOW);
  digitalWrite(ml2,LOW);
  digitalWrite(mr3,LOW);
  digitalWrite(mr4,LOW);

}
void loop() {
     
  if(Serial.available()>0)
  {
    a = Serial.read();
  }
  Serial.println(a);
  if(a == 'F')
  {
    forward();
  }
  else if(a == 'B')
  {
    back();
  }
  else if(a == 'L')
  {
    left();
  }
  else if(a == 'R')
  {
    right();
  }
  else
  {
    stop();
  }
}