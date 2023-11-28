const int trigPin = 9;
const int echoPin = 10;
const int buzzerPin = 11; 

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(115200);

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = (duration * 0.0343) / 2;


  //Print the distance to the serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  //Check if the distance is less than or equal to 5cm
  if (distance <= 5) {
    delay(1000);
    digitalWrite(buzzerPin, HIGH);
    delay(1000);
  } else {
    digitalWrite(buzzerPin, LOW);
  }

  //Add a delay before the next measurement
  delay(1000);
}
