#include "LED.h"
#include "rgbLED.h"
/*
  Creates a class for the LED
 Creates a class for the rgbLED through implementing the LED
 Demonstrates the capabilites of both classes
 ToDO:  Separate classes into header files and move functions 
 out of main function body.
 ToDO:  Add function in rgbLED class to cycle through every 
 color combination
 */
/*
class rgbLED {
public:
  rgbLED(LED* redled, LED* greenled, LED* blueled) {
    red = redled;
    green = greenled;
    blue = blueled;
  }
  void showRed() {
    red->on();
    green->off();
    blue->off();
  }
  void showGreen() {
    red->off();
    green->on();
    blue->off();
  }
  void showBlue() {
    red->off();
    green->off();
    blue->on();
  }
  void showYellow() {
    red->on();
    green->on();
    blue->off();
  }
  void showMagenta() {
    red->on();
    green->off();
    blue->on();
  }
  void showCyan() {
    red->off();
    green->on();
    blue->on();
  }
  void showWhite() {
    red->on();
    green->on();
    blue->on();
  }
  void showNone() {
    red->off();
    green->off();
    blue->off();
  }
  void loopColors() {
    showRed();
    delay(500);
    showYellow();
    delay(500);
    showGreen();
    delay(500);
    showBlue();
    delay(500);
    showMagenta();
    delay(500);
    showCyan();
    delay(500);
    showWhite();
    delay(500);
  }
  void setColor(int redVal, int greenVal, int blueVal) {
    red->setValue(redVal);
    green->setValue(greenVal);
    blue->setValue(blueVal);
  }
private:
  LED* red;
  LED* green;
  LED* blue;
};
*/

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




