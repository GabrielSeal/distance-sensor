int led1 = 11;
int trigPin = A5;
int echoPing = A4;

void setup () {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(echoPing, INPUT);
  pinMode(trigPin, OUTPUT);

}
void loop () {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin , LOW);
  duration = pulseIn(echoPing, HIGH);
  distance = (duration / 2) / 29.1;

  Serial.print(distance);
  Serial.println("Cm");
  delay (500);
  if ( distance <= 20)
  {
   digitalWrite(led1, HIGH);
   delay(500);
   digitalWrite(led1, LOW);
  }


}
