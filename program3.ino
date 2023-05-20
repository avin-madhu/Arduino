int buzzerPin = 3;
int ledPin = 13;
void setup()
{
  
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}
void loop()
{
  digitalWrite(buzzerPin,HIGH);
  delay(500);
  digitalWrite(buzzerPin,LOW);
  delay(500);
  digitalWrite(ledPin,HIGH);
  delay(500);
  digitalWrite(ledPin,LOW);
  delay(500);
}