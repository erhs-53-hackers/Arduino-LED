#include "rgbLED.h"
#include "Button.h"
#include "Thermistor.h"
#include "PhotoCell.h"

#define redPin 11
#define greenPin 10
#define bluePin 9
#define buttonPin 13
#define thermistorPin A0
#define photoPin A1
#define potPin A3

// create three LED instances
LED red(redPin);
LED green(greenPin);
LED blue(bluePin);

// create an rgbLED instance, using the
// pointer adresses of the 3 LEDs
rgbLED triled(&red, &green, &blue);

// create an instance of a digital button
Button button(buttonPin);

//create an instance of a Thermistor
Thermistor thermo(thermistorPin);

//create an instance of a PhotoCell
PhotoCell photoCell(photoPin);

void setup() {
  Serial.begin(9600); // begin serial communication
  Serial.println("Launching Program");
  pinMode(potPin, INPUT);
}

int buttonCount;
int intensity;

void loop() {
  if (button.getHeldTime() > 10) buttonCount++;
  if (buttonCount > 7) buttonCount = 0;
  int potRead = analogRead(potPin);
  intensity = map(potRead, 0, 1024, 0, 255);
  Serial.println(buttonCount);
  Serial.println(intensity);
  if (buttonCount == 0) triled.showRed(intensity);
  if (buttonCount == 1) triled.showGreen(intensity);
  if (buttonCount == 2) triled.showBlue(intensity);
  if (buttonCount == 3) triled.showYellow(intensity);
  if (buttonCount == 4) triled.showMagenta(intensity);
  if (buttonCount == 5) triled.showCyan(intensity);
  if (buttonCount == 6) triled.showWhite(intensity);
  if (buttonCount == 7) triled.showNone();
}

