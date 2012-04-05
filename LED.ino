/*
  Creates a class for the LED, and demonstrates its capabilities
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
  void showRed();
  void showGreen();
  void showBlue();
  void showYellow();
  void showMagenta();
  void showCyan();
  void showWhite();
private:
  LED* red;
  LED* green;
  LED* blue;
};/*
void rgbLED::showRed() {
  red.on();
  green.off();
  blue.off();
}*/
// todo:  make all of the following functions part
// of the rgbLED class!

// this one is mostly done

LED red(13);  
LED green(12);
LED blue(11);

//rgbLED triled(red, green, blue);

void showRed() {
  red.on();
  green.off();
  blue.off();
}
void showGreen() {
  red.off();
  green.on();
  blue.off();
}
void showBlue() {
  red.off();
  green.off();
  blue.on();
}
void showYellow() {
  red.on();
  green.on();
  blue.off();
}
void showMagenta() {
  red.on();
  green.off();
  blue.on();
}
void showCyan() {
  red.off();
  green.on();
  blue.on();
}
void showWhite() {
  red.on();
  green.on();
  blue.on();
}
void showNone() {
  red.off();
  green.off();
  blue.off();
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





void setup() {
  Serial.begin(9600);
  Serial.println("Launching Program");
}

void loop() {
  showRed();
}


