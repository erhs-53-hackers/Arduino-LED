#include <arduino.h>

class Thermistor {
public:
	Thermistor(int _pinNumber);
	int getValue();
	double getTempKelvin();
	double getTempCelcius();
	double getTempFahrenheit();
private:
	int value;
	int pinNumber;
};
