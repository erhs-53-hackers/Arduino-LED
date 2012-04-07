/*
  Constructor:  Creates an instance of an rgbLED, taking the
                adresses (&) of three LED instances as its arguments
  showColor():  Turns the LED to the specified color
  loopColors(): Loops through all 7 of the basic colors
  setColor():   Turns the LED to a custom color, taking 3 RGB values
                between 0 and 255 as its arguments
  */

#include <arduino.h>
#include "LED.h"

class rgbLED {
public:
  rgbLED(LED* redled, LED* greenled, LED* blueled);
  void showRed();
  void showGreen();
  void showBlue();
  void showYellow();
  void showMagenta();
  void showCyan();
  void showWhite();
  void showNone();
  void loopColors();
  void setColor(int redVal, int greenVal, int blueVal);
private:
  LED* red;
  LED* green;
  LED* blue;
};
