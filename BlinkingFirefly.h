/*
 * BlinkingFirefly.h
 *
 *  Created on: April 12, 2016
 *      Author: davy
 */

#ifndef FireflyLED_H
#include "FireflyLED.h"
#endif

#ifndef BlinkingFirefly_H
#define BlinkingFirefly_H

class BlinkingFirefly: public FireflyType {
public:
  BlinkingFirefly(uint8_t pin);
  void update(void);
  void setInterval(long interval);
private:
  long blinkMillis;
  long blinkInterval;
};

#endif
