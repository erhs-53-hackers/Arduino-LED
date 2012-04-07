#include <arduino.h>
#include "PhotoCell.h"

PhotoCell::PhotoCell(int _pinNumber) {
	this->pinNumber = pinNumber;
	pinMode(this->pinNumber, INPUT);
}
int PhotoCell::getValue() {
	this->value = analogRead(this->pinNumber);
	return this->value;
}