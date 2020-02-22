#define photoCell A0
#define relle 13
#define threshold 780

int analogVal=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(relle,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogVal=analogRead(photoCell);
  Serial.println(analogVal);

  if(analogVal > threshold){
    digitalWrite(relle,HIGH);
  }else {
    digitalWrite(relle,LOW);
  }
  delay(100);
}
