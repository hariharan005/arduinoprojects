# Arduino Temperature and Humidity Monitor with DHT11 Sensor

![](https://raw.githubusercontent.com/hariharan005/arduinoprojects/main/Arduino%20Temperature%20and%20Humidity%20Monitor%20with%20DHT11%20Sensor/dht11simple_bb.png)

**Description:**

This project involves creating a temperature and humidity monitoring system using an Arduino microcontroller and a DHT11 sensor. The DHT11 sensor is a low-cost device capable of providing accurate temperature and humidity readings. The Arduino, programmed with the appropriate code, reads data from the sensor and displays it on the Serial Monitor.

**Key Features:**

1. Real-time Monitoring:
   The system continuously reads temperature and humidity values in real-time using the DHT11 sensor.
2. Alert System:
   The Arduino is programmed to check if the temperature exceeds a predefined threshold (30°C in this case). If the temperature is high, an alert message is sent to the Serial Monitor.
            
**Pin Configuration:**

   DHT11 Sensor:
   
   1. VCC (Power): Connect to 5V on Arduino.
   2. GND (Ground): Connect to GND on Arduino.
   3. Data: Connect to the digital pin defined in the code (dataPin), which is pin 11 in this case.

      
   Arduino:
   
   1. Digital Pin 11 (dataPin): Connect to the Data pin on the DHT11 sensor.
   2. 5V: Connect to the VCC pin on the DHT11 sensor.
   3. GND: Connect to the GND pin on the DHT11 sensor.

Ensure the connections are secure and the code is uploaded to the Arduino. You can then open the Serial Monitor in the Arduino IDE to view temperature and humidity readings. If you have further questions or encounter issues, feel free to ask!
