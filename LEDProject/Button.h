#include <arduino.h>

class Button {
public:
	Button(int _pinNuber);
	bool isPushed();
	int getState();
private:
	int pinNumber;
	int buttonVal;
};