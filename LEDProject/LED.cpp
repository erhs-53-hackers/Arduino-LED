#include <arduino.h>
#include "LED.h"

LED::LED(int _pinNumber) {
  this->pinNumber = _pinNumber;
  pinMode(pinNumber, OUTPUT);
}
void LED::on() {
  digitalWrite(this->pinNumber, HIGH);
}
void LED::off() {
  digitalWrite(this->pinNumber, LOW);
}
void LED::blink(double delayTime) {
  on();
  delay(delayTime * 1000);
  off();
  delay(delayTime * 1000);
}
void LED::setValue(int value) {
  analogWrite(this->pinNumber, value);
}
