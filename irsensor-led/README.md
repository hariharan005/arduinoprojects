Certainly! To create a simple Arduino program that uses an IR (Infrared) sensor and an LED, you can follow the example below. 
In this example, the IR sensor is used to detect the presence of an object, and the LED is turned on or off based on whether the object is detected.

Here's a basic circuit setup:

    Connect the IR sensor's VCC pin to the 5V pin on the Arduino.
    Connect the IR sensor's GND pin to the GND pin on the Arduino.
    Connect the IR sensor's OUT pin to a digital pin on the Arduino (e.g., D2).
    Connect the longer leg (anode) of the LED to a current-limiting resistor (e.g., 220Ω).
    Connect the other end of the resistor to a digital pin on the Arduino (e.g., D7).
    Connect the shorter leg (cathode) of the LED to the GND pin on the Arduino.

Here's the Arduino code for this setup:

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


Here's a breakdown of the code:

    const int irSensorPin = 2;: Defines the digital pin to which the OUT pin of the IR sensor is connected.

    const int ledPin = 7;: Defines the digital pin to which the LED is connected.

    pinMode(irSensorPin, INPUT); and pinMode(ledPin, OUTPUT);: Sets the pinMode for the IR sensor pin as INPUT and the LED pin as OUTPUT.

    The loop() function continuously reads the state of the IR sensor using digitalRead(irSensorPin).

    If the IR sensor detects an object (output is HIGH), it turns on the LED and prints "Object detected!" to the Serial Monitor. If no object is detected (output is LOW), it turns off the LED and prints "No object detected."

    delay(500); adds a small delay to avoid rapid switching.

Make sure to adjust the pin numbers in the code based on your actual wiring. Also, connect the components according to the circuit description. If you haven't already, you can open the Arduino IDE, copy and paste this code into a new sketch, and upload it to your Arduino board.


