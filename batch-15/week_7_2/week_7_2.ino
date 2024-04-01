int VRx = A0; 
int VRy = A1;
int xPosition = 0;
int yPosition = 0;
int SW_state = 0;
int mapX = 0;
int mapY = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(VRx, INPUT);
  pinMode(VRy, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  xPosition = analogRead(VRx);
  yPosition = analogRead(VRy);
  mapX = map(xPosition, 0, 1023, -512, 512);
  mapY = map(yPosition, 0, 1023, -512, 512);
  Serial.print("X: "); Serial.print(mapX);
  Serial.print(" | Y: ");
  Serial.print(mapY);
  delay(100);
}
