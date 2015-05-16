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

class FireflyLED {
private:
    uint8_t p;
    long blinkMillis;
    long blinkInterval;
    int blinkState;
public:
    FireflyLED(uint8_t pin=0);
    ~FireflyLED();
    void on();
    void off();
    bool update();
};

#endif
