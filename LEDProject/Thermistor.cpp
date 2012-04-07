 // Uses the Steinhart-Hart Thermistor Equation:
 // Temperature in Kelvin = 1 / {A + B[ln(R)] + C[ln(R)]^3}
 // where A = 0.001129148, B = 0.000234125 and C = 8.76741E-08

#include <arduino.h>
#include <math.h>
#include "Thermistor.h"

#define A 0.001129148
#define B 0.000234125
#define C 0.0000000876741

Thermistor::Thermistor(int _pinNumber) {
	this->pinNumber = _pinNumber;
	pinMode(this->pinNumber, INPUT);
}
double Thermistor::getVoltage() {
	this->voltage = analogRead(this->pinNumber);
	return this->voltage;
}
double Thermistor::getTempKelvin() {
	this->getVoltage();
	long resistance; double temp;
	resistance = ((10240000/this->voltage) - 10000);
	temp = log(resistance);
	temp = 1 / (A + (B + (C * temp * temp ))* temp );
	return temp;
}
double Thermistor::getTempCelcius() {
	return this->getTempKelvin() - 273.15;
}
double Thermistor::getTempFahrenheit() {
	return (this->getTempCelcius() * 9.0) / 5.0 + 32.0;
}
	