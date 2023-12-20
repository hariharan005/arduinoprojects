#include <dht.h>

#define dataPin 11 // Defines pin number to which the sensor is connected
dht DHT; // Creates a DHT object

void setup() {
  Serial.begin(9600);
}

void loop() {
  int readData = DHT.read11(dataPin); // Reads the data from the sensor
  float t = DHT.temperature; // Gets the values of the temperature
  float h = DHT.humidity; // Gets the values of the humidity

  float m = t--; // To decrement t because DHT11 sense +-2 degree

  // Printing the results on the serial monitor
  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print("    Humidity = ");
  Serial.print(h);
  Serial.print(" % ");

  // Check whether the temperature is high; if high, send an alert
  if (t >= 30) {
    Serial.println("Temperature is high");
  } else {
    Serial.println("Normal Temperature");
  }
  
  delay(2000); // Delays 2 seconds, as the DHT11 sampling rate is 1Hz
}
