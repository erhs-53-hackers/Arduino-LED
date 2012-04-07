#include "rgbLED.h"
#include "Button.h"

#define redPin 13
#define greenPin 5
#define bluePin 3
#define buttonPin 2

// create three LED instances
LED red(redPin);
LED green(greenPin);
LED blue(bluePin);

// create an rgbLED instance, using the
// pointer adresses of the 3 LEDs
rgbLED triled(&red, &green, &blue);

// create an instance of a digital button
Button button(buttonPin);

void setup() {
  Serial.begin(9600); // begin serial communication at 9600 bps
  Serial.println("Launching Program");
}

void loop() {
  if (button.isPushed()) {
    red.on();
    int time = button.getHeldTime();
    Serial.println(time);
  } else {
    red.off();
  }
}

