// C++ code
//
#include <Servo.h>

const int buttonWall = 2;
const int buttonDad = 7;
const int buttonMom = 12;
int buttonPin = 3;
int LEDa = 10;
int LEDb = 11;

Servo servo_9;
Servo servo_8;
Servo servo_4;

void setup()
{
  pinMode(buttonWall, INPUT);
  pinMode(buttonDad, INPUT);
  pinMode(buttonMom, INPUT);
  pinMode(LEDa, OUTPUT);
  pinMode(LEDb,OUTPUT);
  servo_8.attach(8, 500, 2500);
  servo_4.attach(4, 500, 2500);
  servo_9.attach(9,500, 2500);
}

void loop(){
 if (digitalRead(buttonPin) == HIGH) {
servo_9.write(100);
digitalWrite(LEDa, LOW);
digitalWrite(LEDb, LOW);
  } else {
servo_9.write(0);
digitalWrite(LEDa, HIGH);
digitalWrite(LEDb, HIGH);

  if (digitalRead(buttonDad) == HIGH) {
    servo_8.write(180);
  }
  

  if (digitalRead(buttonDad) == LOW) {
    servo_8.write(0);
  }

   if (digitalRead(buttonMom) == HIGH) {
    servo_4.write(180);
   }

    if (digitalRead(buttonMom) == LOW) {
    servo_4.write(0);
  }
}
}