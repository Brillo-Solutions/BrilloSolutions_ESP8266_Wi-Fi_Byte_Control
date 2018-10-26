# BrilloSolutions_ESP8266_Wi-Fi_Byte_Control
Arduino program to turn ON/OFF gadget connected on digital pin.
This program has been written from scratch by following datasheet of ESP8266 command set and does not use any library.

1. Program acts as a server on IP: 192.168.4.1 and port 1883
2. Receives a command byte (#) from some client program (Java, Android or Windows) over the Wi-Fi network.
3. Turn ON or OFF the gadget connected to digital pin of micro-controller as per the command byte received.
4. Android client app: https://play.google.com/store/apps/details?id=comaarsoftronix.facebook.ihome