#include <SoftwareSerial.h>

SoftwareSerial BTSerial(5, 6); // RX | TX
//SoftwareSerial BTSerial(0, 1);   // RX | TX

void setup()
{
  Serial.begin(9600);
  Serial.println("Enter AT commands:");
  BTSerial.begin(38400);       // HC-05 default speed in AT command mode
}

void loop()
{
  if (BTSerial.available())    // read from HC-05 and send to Arduino Serial Monitor
    Serial.write(BTSerial.read());

  if (Serial.available())     // Keep reading from Arduino Serial Monitor and send to HC-05
    BTSerial.write(Serial.read());
}
