/*Written By: Er. Dapinder Singh Virk
  Email ID: brillosolutions@gmail.com
  Version: 1.0.0
  Date: August 30, 2018
  Wi-Fi: ESP8266
  IP: 192.168.4.1
  PORT: 1883
  Outputs: Turn ON or OFF gadget */

int gadgetPin = 13;
void setup() 
{
  pinMode(gadgetPin, OUTPUT);                   // Setting gadget pin (13) as an output.             
  Serial.begin(115200);                         // Initializing MCU's serial port speed to talk with Wi-Fi module.
  Serial.println("AT+CWMODE=2\r\n");            // Making Wi-Fi module as access point.
  delay(2000);                                  // Wait for 2 seconds.
  Serial.println("AT+CIPMUX=1\r\n");            // Making Wi-Fi module as multiplexer.
  delay(2000);                                  // Wait for 2 seconds.
  Serial.println("AT+CIPSERVER=1,1883\r\n");    // Making Wi-Fi module as TCP server on IP: 192.168.4.1, PORT: 1883
}

void loop() 
{
  while (Serial.available() > 0)                // Waiting for incoming of any byte from client over Wi-Fi network.
  {
    if (Serial.find('#'))                       // If # is received then:
      digitalWrite(gadgetPin, HIGH);            // Turn on the gadget.
    else                                        // else:
      digitalWrite(gadgetPin, LOW);             // Turn off the gadget.
  }
}
