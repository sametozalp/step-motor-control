#include <Stepper.h>
#define STEPS 100
Stepper stepper(STEPS, 9, 10, 11, 12);

int previous = 0;

void setup() {
  stepper.setSpeed(30);
}

void loop() {
  stepper.step(STEPS);
  delay(1000);
}
