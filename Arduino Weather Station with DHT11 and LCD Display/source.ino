#include <dht.h>
#include <LiquidCrystal.h>

#define dataPin 9 // Defines pin number to which the sensor is connected
dht DHT; // Creates a DHT object

// Define LCD pin mapping
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  // Setup the number of columns and rows on the LCD
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {
  // Read data from the DHT11 sensor
  int readData = DHT.read11(dataPin);
  
  // Get temperature and humidity values from the DHT object
  float t = DHT.temperature; // Gets the values of the temperature
  float h = DHT.humidity; // Gets the values of the humidity                                                                 

  // Print the results on the serial monitor
  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print("    Humidity = ");
  Serial.print(h);
  Serial.print(" % ");
  
  // Display temperature and humidity on the LCD
  lcd.setCursor(0, 0);
  lcd.print("Temp = ");
  lcd.print(t);
  lcd.print(" *C ");
  lcd.setCursor(0, 1);
  lcd.print("Humidity=");
  lcd.print(h);
  lcd.print(" % ");

  // Check whether the temperature is high; if high, send an alert
  if (t >= 30) {
    Serial.println("Temperature is high");
  } else {
    Serial.println("Normal Temperature");
  }
  
  delay(2000); // Delays 2 seconds, as the DHT11 sampling rate is 1Hz
}
