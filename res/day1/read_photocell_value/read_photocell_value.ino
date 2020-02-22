#define photoCell A0


int analogVal=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogVal=analogRead(photoCell);
  Serial.println(analogVal);
  delay(100);
}
