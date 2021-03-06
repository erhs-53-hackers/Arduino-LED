#include <arduino.h>
#include "Button.h"

Button::Button(int _pinNumber) {
  this->pinNumber = _pinNumber;
  pinMode(pinNumber, INPUT);
}
int Button::getState() {
  this->buttonVal = digitalRead(this->pinNumber);
  return this->buttonVal;
}
bool Button::isPushed() {
  this->getState();
  if (this->buttonVal == HIGH) {
    return true;
  } 
  else {
    return false;
  }
}
int Button::getHeldTime() {
  int held = 0;
  while (this->isPushed()) {
    delay(1);
    held++;
  }
  return held;
}

