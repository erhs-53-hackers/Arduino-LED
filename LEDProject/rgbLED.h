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
