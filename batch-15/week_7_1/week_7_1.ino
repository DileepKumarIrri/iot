int distance,duration;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,HIGH);
  delay(100);
  digitalWrite(8,LOW);
  duration=pulseIn(9,1);
  distance=duration*0.032/2;
  Serial.print("Distance");
  Serial.print(distance);
  Serial.println("cm");
  delay(1000);
}
