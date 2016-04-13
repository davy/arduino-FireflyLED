/*
 * FireflyLED.h
 *
 *  Created on: May 15, 2015
 *      Author: davy 
 */

#ifndef FireflyLED_H
#define FireflyLED_H

#if ARDUINO >= 100
 #include <Arduino.h>
#else
 #include <WProgram.h>
#endif

class FireflyType {
public:
  virtual void update(void) = 0;
  void setPin(uint8_t pin) {
    _pin = pin;
    // set pinMode
    pinMode(_pin, OUTPUT);
  }
  void on()  { enabled = true; }
  void off() { enabled = false; }
protected:
  uint8_t _pin;
  bool enabled;
  int blinkState;
  void init() {
    enabled = false;
    blinkState = LOW;
  }
  void dWrite(int) {
    digitalWrite(_pin, blinkState);
  }
  void aWrite(int) {
    analogWrite(_pin, blinkState);
  }
};

#endif
