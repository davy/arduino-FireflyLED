# Simulate Firefly Blinking Patterns

This is a WIP

This arduino library can let you easily simulate a variety of firefly blinking patterns with LEDs.

## Install

Move the `arduino-FireflyLED` folder into the arduino library directory and rename it to `FireflyLED`.

Then simply add this to the top of your file:

```
#include <FireflyLED.h>
```

And include any of the specific Fireflies you wish to use:

```
#include <BlinkingFirefly.h>

// requires FastLED library and PWM
#include <FlickeringFirefly.h>
```

## Simple Example

```
#include <FireflyLED.h>
#include <BlinkingFirefly.h>

// Create a new firefly on pin 3
BlinkingFirefly firefly = BlinkingFirefly(3);

void setup() {
  // set the blinking interval
  firefly.setInterval(1000);

  // turn firefly on
  firefly.on();
}

void loop() {
  // need to call update on each loop cycle
  firefly.update();
}

```
