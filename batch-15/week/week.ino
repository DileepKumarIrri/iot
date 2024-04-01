#include<Servo.h>
Servo s1;
int servopin=8;


void setup() {
  // put your setup code here, to run once:
  s1.attach(servopin);

}

void loop() {
  // put your main code here, to run repeatedly
  s1.write(90);
  delay(500);

}
