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