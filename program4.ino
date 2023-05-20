int buttonstate;
int button = 4;
int ledPin = 13;
int buzzerPin = 3;
void setup()
{
  pinMode(buzzerPin,OUTPUT);
  pinMode(button,INPUT);
  pinMode(ledPin, OUTPUT);
}
void loop()
{
  buttonstate = digitalRead(button);
  if(buttonstate == HIGH)
  {
    digitalWrite(ledPin,HIGH);
    digitalWrite(buzzerPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
    digitalWrite(buzzerPin,LOW);
  }
//  digitalWrite(buzzerPin,HIGH);
//  delay(500);
//  digitalWrite(buzzerPin,LOW);
//  digitalWrite(ledPin,LOW);
//  delay(500);