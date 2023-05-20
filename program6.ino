//displays the distance infront
int trigPin = 8;
int echoPin = 7;
float distance, duration;
void setup() {
 
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  
 digitalWrite(trigPin,LOW);
 delayMicroseconds(10);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin,LOW);
 delayMicroseconds(10); 
 
 duration = pulseIn(echoPin,HIGH);
 distance = (duration*(0.0343))/2;
 Serial.print("Distance value is : ");
 Serial.println(distance);
 delay(500);
 
}