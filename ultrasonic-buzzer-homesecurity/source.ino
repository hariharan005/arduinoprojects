// Define the Arduino pins for the ultrasonic sensor and buzzer
const int trigPin = 9;    // Pin to trigger the ultrasonic sensor
const int echoPin = 10;   // Pin to receive the echo from the ultrasonic sensor
const int buzzerPin = 11; // Pin to control the buzzer

long duration; // Variable to store the duration of the sound wave travel
int distance;   // Variable to store the calculated distance in centimeters

void setup() {
  pinMode(trigPin, OUTPUT);   // Set trigPin as an OUTPUT to send the ultrasonic signal
  pinMode(echoPin, INPUT);    // Set echoPin as an INPUT to receive the echo signal
  pinMode(buzzerPin, OUTPUT); // Set buzzerPin as an OUTPUT to control the buzzer
  Serial.begin(115200);       // Start the serial communication for debugging
}

void loop() {
  // Send a short pulse to trigger the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the duration of the echo signal and calculate the distance
  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.0343) / 2;

  // Print the distance to the serial monitor for debugging
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Check if the distance is less than or equal to 5cm
  if (distance <= 5) {
    delay(1000);
    digitalWrite(buzzerPin, HIGH); // Activate the buzzer
    Serial.print("Buzzer Activated");
    delay(1000);
  } else {
    digitalWrite(buzzerPin, LOW); // Deactivate the buzzer
  }

  // Add a delay before the next measurement
  delay(1000);
}
