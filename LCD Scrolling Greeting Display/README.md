# LCD Scrolling Greeting Message Using Arduino and 16x2 LCD Display


**Description:**
    Embark on a journey into the world of microcontroller programming with this introductory Arduino project. 
In this hands-on venture, you'll connect a 16x2 LCD display to an Arduino Uno and bring it to life by printing the timeless message, "Hello, Coders!"

**Hardware Setup:**
The hardware setup involves simple yet crucial connections between the Arduino board and the LCD display. 
By establishing a communication pathway using jumper wires, you enable the Arduino to control and display information on the LCD.

**Components Needed:**

    Arduino Uno
    16x2 LCD Display
    Potentiometer (for contrast adjustment) (10k)
    Jumper Wires
    Breadboard (optional)

**Hardware Connection:**

Note: Upload the code to the microcontroller then go to the hardware connection (otherwise you will face some error uploading code)
    Connect the VSS pin (pin 1) of the LCD to the GND on the Arduino.
    Connect the VDD pin (pin 2) of the LCD to the 5V on the Arduino.
    Connect the V0 pin (pin 3) of the LCD to the middle pin of the potentiometer.
    Connect one end of the potentiometer to the 5V on the Arduino.
    Connect the other end of the potentiometer to the GND on the Arduino.
    Connect the RS pin (pin 4) of the LCD to digital pin 12 on the Arduino.
    Connect the RW pin (pin 5) of the LCD to GND on the Arduino.
    Connect the E pin (pin 6) of the LCD to digital pin 11 on the Arduino.
    Connect the D4, D5, D6, and D7 pins (pins 11-14) of the LCD to digital pins 5, 4, 3, and 2 on the Arduino, respectively.
    Connect the A and K pins (pins 15 and 16) of the LCD to the 5V and GND on the Arduino, respectively.

**Upload Code:**

  [Source.ino](https://github.com/hariharan005/arduinoprojects/blob/main/LCD/source.ino)

    
