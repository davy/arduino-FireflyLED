#include <FireflyLED.h>
#include <BlinkingFirefly.h>

// Create a new blinking firefly on pin 3
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
