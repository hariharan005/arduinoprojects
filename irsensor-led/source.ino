int irSensorPin = 2;
int ledOutputPin = 7;

void setup() {
  pinMode(ledOutputPin, OUTPUT);
  pinMode(irSensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int SensorValue = digitalRead(irSensorPin);
  
  Serial.print("SensorPin Value: ");
  Serial.println(SensorValue);
  delay(1000);
   if (SensorValue==LOW){ // LOW MEANS Object Detected
    digitalWrite(ledOutputPin, HIGH);
  }
  else
  {
    digitalWrite(ledOutputPin, LOW); 
  }
}
