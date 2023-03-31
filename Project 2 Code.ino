// C++ code
//
#include <Servo.h>

int button = 2;

Servo servo_8;

void setup()
{
  servo_8.attach(8, 500, 2500);
}

void loop()
{
  if (digitalRead(button) == HIGH) {
    servo_8.write(180);
  }
  delay(10); // Delay a little bit to improve simulation performance

  if (digitalRead(button) == LOW) {
    servo_8.write(0);
  }
}