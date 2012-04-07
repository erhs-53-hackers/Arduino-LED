#include "rgbLED.h"
#include "Button.h"
#include "Thermistor.h"

#define redPin 13
#define greenPin 5
#define bluePin 3
#define buttonPin 2
#define ThermistorPin A0

// create three LED instances
LED red(redPin);
LED green(greenPin);
LED blue(bluePin);

// create an rgbLED instance, using the
// pointer adresses of the 3 LEDs
rgbLED triled(&red, &green, &blue);

// create an instance of a digital button
Button button(buttonPin);

Thermistor thermo(ThermistorPin);

void setup() {
  Serial.begin(9600); // begin serial communication at 9600 bps
  Serial.println("Launching Program");
}

void loop() {
  double temp = thermo.getTempFahrenheit();
  Serial.println(temp);
}

