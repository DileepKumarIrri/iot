 int sensordata;
void setup(){
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(8,INPUT);
}
void loop(){
sensordata=digitalRead(8);
if(sensordata==HIGH){
digitalWrite(13,HIGH);
Serial.println("Sensor Activated");
Serial.print("Motion detected at");
Serial.print(millis()/1000);
Serial.println("secs");
delay(1000);
}
else{
digitalWrite(13,LOW);
}
delay(1000);
}
                                                                                                                                                                                                                                                                                                              
