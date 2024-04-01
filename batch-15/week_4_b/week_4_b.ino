#include<Stepper.h>
int steps_per_rev=32;
int gear_reduction=100;
int steps_req=gear_reduction*steps_per_rev;
Stepper motor(steps_per_rev,2,4,3,5);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(steps_req);
  motor.setSpeed(900);
  motor.step(steps_req);
  delay(500);
  Serial.println(steps_req);
  motor.setSpeed(900);
  motor.step(-steps_req);
  delay(1000);
}
