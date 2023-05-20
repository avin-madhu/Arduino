int ml1 = 13;
int ml2 = 11;
int mr3 = 10;
int mr4 = 2;
int en1 = 5;
int en2 = 6;


void setup() {
 pinMode(ml1,OUTPUT);
 pinMode(ml2,OUTPUT);
 pinMode(mr3,OUTPUT);
 pinMode(mr4,OUTPUT);
 pinMode(en1,OUTPUT);
 pinMode(en2,OUTPUT);
}

void loop() {

  //front
  digitalWrite(en1,HIGH);
  digitalWrite(en2,HIGH);
  digitalWrite(ml1,HIGH);
  digitalWrite(ml2,LOW);
  digitalWrite(mr3,HIGH);
  digitalWrite(mr4,LOW);

   delay(1000);

//back
  digitalWrite(en1,HIGH);
  digitalWrite(en2,HIGH);
  digitalWrite(ml1,LOW);
  digitalWrite(ml2,HIGH);
  digitalWrite(mr3,LOW);
  digitalWrite(mr4,HIGH);

  delay(1000);

//left
  digitalWrite(en1,HIGH);
  digitalWrite(en2,HIGH);
  digitalWrite(ml1,LOW);
  digitalWrite(ml2,HIGH);
  digitalWrite(mr3,HIGH);
  digitalWrite(mr4,LOW);

  delay(1000);

//right
  digitalWrite(en1,HIGH);
  digitalWrite(en2,HIGH);
  digitalWrite(ml1,HIGH);
  digitalWrite(ml2,LOW);
  digitalWrite(mr3,LOW);
  digitalWrite(mr4,HIGH);
  
  delay(1000);

//stop
  digitalWrite(en1,LOW);
  digitalWrite(en2,LOW);
  digitalWrite(ml1,LOW);
  digitalWrite(ml2,LOW);
  digitalWrite(mr3,LOW);
  digitalWrite(mr4,LOW);

 delay(2000);

}