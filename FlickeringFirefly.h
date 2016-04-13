/*
 * FlickeringFirefly.h
 *
 *  Created on: April 12, 2016
 *      Author: davy
 */

#ifndef FireflyLED_H
#include "FireflyLED.h"
#endif

#ifndef FlickeringFirefly_H
#define FlickeringFirefly_H

class FlickeringFirefly: public FireflyType {
public:
  FlickeringFirefly(uint8_t pin);
  void update(void);
};

#endif
