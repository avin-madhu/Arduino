int ldrPin = 0;
int ledPin = 13;
int ldr;
int bzr = 3;
void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin,INPUT);
  pinMode(bzr,OUTPUT);

}

void loop() {

  digitalWrite(bzr,LOW);
  digitalWrite(ledPin,LOW);
  ldr = analogRead(ldrPin);
  if(ldr>600)
  {
    digitalWrite(bzr,HIGH);
    digitalWrite(ledPin,HIGH);
    Serial.println(ldr);
  }
    
}