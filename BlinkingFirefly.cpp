/*
 * BlinkingFirefly.cpp
 *
 *  Created on: April 12, 2016
 *      Author: davy 
 */

#include "FireflyLED.h"
#include "BlinkingFirefly.h"

/**************************************************************************/
/*!
    Constructor
*/
/**************************************************************************/
BlinkingFirefly::BlinkingFirefly(uint8_t pin) {
  init();
  blinkMillis = 0;
  setPin(pin);
  setInterval(1000);
}

/*========================================================================*/
/*                           PUBLIC FUNCTIONS                             */
/*========================================================================*/

/**************************************************************************/
/*!
    Sets the blinking on/off interval for the Firefly
*/
/**************************************************************************/
void BlinkingFirefly::setInterval(long interval) {
    blinkInterval = interval;
}

/**************************************************************************/
/*!
    Update function that controls the Firefly behavior
*/
/**************************************************************************/
void BlinkingFirefly::update(void) {
  if (enabled) {

    unsigned long currentMillis = millis();

    if (currentMillis - blinkMillis > blinkInterval) {

      blinkMillis = currentMillis;

      if (blinkState == LOW)
          blinkState = HIGH;
      else
          blinkState = LOW;

      dWrite(blinkState);
    }
  }
}
