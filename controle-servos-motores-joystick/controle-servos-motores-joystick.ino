#include <Servo.h>
Servo servo1;
Servo servo2;
int VRX, VRY;

void setup() {
  servo1.attach(5);
  servo2.attach(6);
  servo1.write(90);
  servo2.write(90);
}

void loop() {
  VRX = analogRead(3);
  VRY = analogRead(4);
  VRX = map(VRX, 0, 1023, 0, 180);
  VRY = map(VRY, 0, 1023, 0, 180);
  servo1.write(VRX);
  servo2.write(VRY);
  delay(15);
}
