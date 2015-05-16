/*
 * FireflyLED.cpp
 *
 *  Created on: May 15, 2015
 *      Author: davy 
 */

#include "FireflyLED.h"


long blinkMillis = 0;
long blinkInterval = 1000;
int blinkState = LOW;
bool enabled = false;

//<<constructor>>
FireflyLED::FireflyLED(uint8_t pin) {
 p = pin;
 pinMode(p, OUTPUT);
}

//<<destructor>>
FireflyLED::~FireflyLED() { /* nothing to destruct */ }

void FireflyLED::on() {
  enabled = true;
}

void FireflyLED::off() {
  enabled = false;
  digitalWrite(p, 0);
}

bool FireflyLED::update() {
  if (enabled) {

      unsigned long currentMillis = millis();

      if (currentMillis - blinkMillis > blinkInterval) {

          blinkMillis = currentMillis;

          if (blinkState == LOW)
              blinkState = HIGH;
          else
              blinkState = LOW;

          digitalWrite(p, blinkState);
      }
  }

}
