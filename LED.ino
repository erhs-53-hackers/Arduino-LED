/*
  Creates a class for the LED
  Creates a class for the rgbLED through implementing the LED
  Demonstrates the capabilites of both classes
  ToDO:  Separate classes into header files and move functions 
         out of main function body.
  ToDO:  Add function in rgbLED class to cycle through every 
         color combination
 */

class LED {
public:
  LED(int _pinNumber) {
    pinNumber = _pinNumber;
    pinMode(pinNumber, OUTPUT);
  }
  void on() {
    digitalWrite(pinNumber, HIGH);
  }
  void off() {
    digitalWrite(pinNumber, LOW);
  }
  void blink(double delayTime) {
    on();
    delay(delayTime * 1000);
    off();
    delay(delayTime * 1000);
  }
  void setValue(int value) {
    analogWrite(pinNumber, value);
  }
private:
  int pinNumber;
};

class rgbLED {
public:
  rgbLED(LED* redled, LED* greenled, LED* blueled) {
    red = redled;
    green = greenled;
    blue = blueled;
  }
  void showRed() {
    red->on();
    green->off();
    blue->off();
  }
  void showGreen() {
    red->off();
    green->on();
    blue->off();
  }
  void showBlue() {
    red->off();
    green->off();
    blue->on();
  }
  void showYellow() {
    red->on();
    green->on();
    blue->off();
  }
  void showMagenta() {
    red->on();
    green->off();
    blue->on();
  }
  void showCyan() {
    red->off();
    green->on();
    blue->on();
  }
  void showWhite() {
    red->on();
    green->on();
    blue->on();
  }
  void showNone() {
    red->off();
    green->off();
    blue->off();
  }
  void loopColors() {
    showRed();
    delay(500);
    showYellow();
    delay(500);
    showGreen();
    delay(500);
    showBlue();
    delay(500);
    showMagenta();
    delay(500);
    showCyan();
    delay(500);
    showWhite();
    delay(500);
  }
  void setColor(int redVal, int greenVal, int blueVal) {
    red->setValue(redVal);
    green->setValue(greenVal);
    blue->setValue(blueVal);
  }
private:
  LED* red;
  LED* green;
  LED* blue;
};

LED red(3);  
LED green(6);
LED blue(5);

rgbLED triled(&red, &green, &blue);

void setup() {
  Serial.begin(9600);
  Serial.println("Launching Program");
}

void loop() {
  for (int i = 0; i < 256; i++) {
    triled.setColor(102, 0, 0);
    delay(10);
  }
}



