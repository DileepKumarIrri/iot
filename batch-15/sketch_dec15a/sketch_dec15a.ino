void setup() {
  //put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,HIGH);
  delay(20);
  digitalWrite(8,LOW);
  delay(20);
  digitalWrite(10,HIGH);
  delay(100);
  digitalWrite(10,LOW);
  delay(20);
  digitalWrite(6,HIGH);
  delay(100);
  digitalWrite(6,LOW);
  delay(20);
  digitalWrite(7,LOW);
  delay(20);
  
    

}