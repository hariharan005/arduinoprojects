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
[Click here to view the code file]()




