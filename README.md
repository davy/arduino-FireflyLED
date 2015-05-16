# Simulate Firefly Blinking Patterns

This arduino library can let you easily simulate a variety of firefly blinking patterns with LEDs.

## Install

Move the `arduino-FireflyLED` folder into the arduino library directory and rename it to `FireflyLED`.

Then simply add this to the top of your file:

```
#include <FireflyLED.h>
```

## Simple Example

```
#include <FireflyLED.h>

// Create a new FireflyLED on pin 3
FireflyLED led = FireflyLED(3)

void setup() {
  // turn firefly on
  led.on();
}

void loop() {
  // need to call update on each loop cycle
  led.update();
}

```
