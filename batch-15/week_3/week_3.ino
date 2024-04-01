int c;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  c=Serial.parseInt();
  if(c==1)
  {
    digitalWrite(8,1);
    digitalWrite(9,0);
    digitalWrite(10,0);
  }
  else if(c==2)
  {
    
    digitalWrite(9,1);
    digitalWrite(8,0);
    digitalWrite(10,0);
  }
  else if(c==3) 
  {
    
    digitalWrite(10,1);
    digitalWrite(9,0);
    digitalWrite(8,0);
  }
  Serial.println(c);
}
