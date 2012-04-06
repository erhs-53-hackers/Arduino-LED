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
