**Bluetooth Configuration Interface with HC-05 using Arduino**

**Description:** 
  * The Bluetooth configuration interface with HC-05 using Arduino enables communication between an Arduino board and an HC-05 Bluetooth module using AT commands. 
  * The HC-05 module is a Bluetooth serial module that can be configured and controlled through AT commands. 
  * The Arduino code establishes a software-based serial communication interface (SoftwareSerial) on specific pins for the HC-05 module, allowing users to send AT commands from the Arduino Serial Monitor and receive responses.

**Components Required:**
  * Arduino Uno
  * Jumper wires (4)
  * HC-05 Bluetooth Module
  * Bread Board (if needed)

**Pin Configuration:** 
  Here is the pin configuration used in the code
    * First connect the 5v of HC-05 to 5v of Arduino
    * Then connect the GND of HC-05 to GND of Arduino
    * Connect the RX of HC-05 to Arduino Digital pin (6), it is set as TX in the code
    * Connect the TX of HC-05 to Arduino Digital pin (5), it is set as RX in the code

  Note: The RX and TX of the HC-05 should connect and vice versa

**Upload Code:**
  Before uploading the code just disconnect the RX and TX (Because the USB which is connected to the computer and Arduino gets busy when uploading code, then you will face some errors)

  [Source.ino](https://github.com/hariharan005/arduinoprojects/blob/main/hc05-arduino-atcommand/source.ino)

  While uploading the code, press and hold the button in HC-05 to avoid connection issues

**AT Commands:**

  After the code is uploaded connect the jumper wires and use the following commands to enter into AT COMMANDS
  The HC-05 is a popular Bluetooth module that can be used for wireless communication with various devices. To interact with the HC-05 module using AT commands, you'll need to connect to it using a serial communication interface. Here's a list of common AT commands for the HC-05 module:


      AT
        Check if the module is responsive.

    AT+VERSION
        Get the firmware version of the HC-05 module.

    AT+ADDR?
        Get the Bluetooth address of the module.

    AT+NAME?
        Get the name of the module.

    AT+ROLE?
        Get the role of the module (Master/Slave).

    AT+UART?
        Get the current UART settings.

    AT+PSWD?
        Get the current pairing password.

    AT+UART=<BaudRate>,<DataBits>,<StopBits>,<Parity>
        Set the UART configuration. Replace <BaudRate>, <DataBits>, <StopBits>, and <Parity> with the desired values.

    AT+NAME=<NewName>
        Set a new name for the module. Replace <NewName> with the desired name.

    AT+ROLE=<0/1/2>
        Set the role of the module. 0: Slave, 1: Master, 2: Slave-Loop.

    AT+PSWD=<NewPassword>
        Set a new pairing password. Replace <NewPassword> with the desired password.

    AT+RESET
        Reset the module.

    AT+ORGL
        Restore factory default settings.

    AT+CMODE=<0/1/2>
        Set the connection mode. 0: No security, 1: Service level enforced security, 2: Link level enforced security.

    AT+INQ
        Initiates the inquiry process to discover nearby devices.

    AT+INIT
        Initialize the SPP (Serial Port Profile) connection.

    AT+DISC
        Disconnect the current connection.

    AT+INQM=<InquiryMode>,<InquiryDuration>,<NumberofResponses>
        Set inquiry parameters.

Remember to send these commands to the HC-05 module using a serial communication tool (like Arduino IDE's Serial Monitor) or a microcontroller with UART capabilities. Also, make sure the baud rate and other communication settings match between your device and the HC-05 module.
  
