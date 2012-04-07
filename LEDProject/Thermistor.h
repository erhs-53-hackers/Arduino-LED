#include <arduino.h>

class Thermistor {
public:
	Thermistor(int _pinNumber);
	double getVoltage();
	double getTempKelvin();
	double getTempCelcius();
	double getTempFahrenheit();
private:
	double voltage;
	int pinNumber;
};
