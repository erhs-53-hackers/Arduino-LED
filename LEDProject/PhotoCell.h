#include <arduino.h>

class PhotoCell {
public:
	PhotoCell(int _pinNumber);
	int getValue();
private:
	int pinNumber;
	int value;
};
