#include <FireflyLED.h>
#include <BlinkingFirefly.h>
#include <FlickeringFirefly.h>

// Create a new blinking firefly on pin 3
BlinkingFirefly blinkfly = BlinkingFirefly(3);
FlickeringFirefly flickerfly = FlickeringFirefly(6);

void setup() {
  // set the blinking interval
  blinkfly.setInterval(1000);

  // turn firefly on
  blinkfly.on();
  flickerfly.on();
}

void loop() {
  // need to call update on each loop cycle
  blinkfly.update();
  flickerfly.update();
}
