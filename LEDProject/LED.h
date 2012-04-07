/*
  Constructor:  makes an instance of the LED taking the
                input pin number as its argument
  void on():    turns the led on
  void off():   turns the led of
  void blink(): turn the led on and off, takes the delay 
                time in between as its argument
  setValue():   sets the analog value of the LED, takes
                an integer between 0 and 255 as its argument
 */


#include <arduino.h>

class LED {
public:
  LED(int _pinNumber);
  void on() ;
  void off();
  void blink(double delayTime);
  void setValue(int value);
private:
  int pinNumber;
};
