#include <arduino.h>
#include "rgbLED.h"

rgbLED::rgbLED(LED* redled, LED* greenled, LED* blueled) {
  this->red = redled;
  this->green = greenled;
  this->blue = blueled;
}
void rgbLED::showRed() {
  this->red->on();
  this->green->off();
  this->blue->off();
}
void rgbLED::showRed(int intensity) {
  this->red->setValue(intensity);
  this->green->off();
  this->blue->off();
}
void rgbLED::showGreen() {
  this->red->off();
  this->green->on();
  this->blue->off();
}
void rgbLED::showGreen(int intensity) {
  this->red->off();
  this->green->setValue(intensity);
  this->blue->off();
}
void rgbLED::showBlue() {
  this->red->off();
  this->green->off();
  this->blue->on();
} 
void rgbLED::showBlue(int intensity) {
  this->red->off();
  this->green->off();
  this->blue->setValue(intensity);
} 
void rgbLED::showYellow() {
  this->red->on();
  this->green->on();
  this->blue->off();
}
void rgbLED::showYellow(int intensity) {
  this->red->setValue(intensity);
  this->green->setValue(intensity);
  this->blue->off();
}
void rgbLED::showMagenta() {
  this->red->on();
  this->green->off();
  this->blue->on();
}
void rgbLED::showMagenta(int intensity) {
  this->red->setValue(intensity);
  this->green->off();
  this->blue->setValue(intensity);
}
void rgbLED::showCyan() {
  this->red->off();
  this->green->on();
  this->blue->on();
}
void rgbLED::showCyan(int intensity) {
  this->red->off();
  this->green->setValue(intensity);
  this->blue->setValue(intensity);
}
void rgbLED::showWhite() {
  this->red->on();
  this->green->on();
  this->blue->on();
}
void rgbLED::showWhite(int intensity) {
  this->red->setValue(intensity);
  this->green->setValue(intensity);
  this->blue->setValue(intensity);
}
void rgbLED::showNone() {
  this->red->off();
  this->green->off();
  this->blue->off();
}
void rgbLED::loopColors() {
  this->showRed();
  delay(500);
  this->showYellow();
  delay(500);
  this->showGreen();
  delay(500);
  this->showBlue();
  delay(500);
  this->showMagenta();
  delay(500);
  this->showCyan();
  delay(500);
  this->showWhite();
  delay(500);
}
void rgbLED::setColor(int redVal, int greenVal, int blueVal) {
  this->red->setValue(redVal);
  this->green->setValue(greenVal);
  this->blue->setValue(blueVal);
}
