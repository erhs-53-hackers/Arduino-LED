#include "rgbLED.h"
#include "Button.h"

LED red(13);
LED green(5);
LED blue(3);

rgbLED triled(&red, &green, &blue);

Button button(2);

void setup() {
  Serial.begin(9600);
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
