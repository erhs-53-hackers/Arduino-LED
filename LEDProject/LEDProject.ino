
#include "rgbLED.h"

LED red(6);  
LED green(5);
LED blue(3);

rgbLED triled(&red, &green, &blue);

void setup() {
  Serial.begin(9600);
  Serial.println("Launching Program");
}

void loop() {
  triled.setColor(10, 10, 10);
}




