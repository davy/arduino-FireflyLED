/*
 * FireflyLED.cpp
 *
 *  Created on: May 15, 2015
 *      Author: davy 
 */

#include "FireflyLED.h"


long blinkMillis;
long blinkInterval;
int blinkState;
bool enabled;

//<<constructor>>
FireflyLED::FireflyLED(uint8_t pin) {
 p = pin;
 pinMode(p, OUTPUT);
 blinkMillis = 0;
 blinkInterval = 1000;
 blinkState = LOW;
 enabled = false;
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
