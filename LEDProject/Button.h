/*
   Constructor: creates an instance of a digital buttontaking 
                the pin number for the input as its argument
   bool isPushed():  returns true if the button is pushed
                     else, returns false
   int getState():   returns the button's state (HIGH or LOW)
   getHeldTime():    returns how long the button has been held
                     in milliseconds
 */

#include <arduino.h>

class Button {
public:
  Button(int _pinNuber);
  bool isPushed();
  int getState();
  int getHeldTime();
private:
  int pinNumber;
  int buttonVal;
};

