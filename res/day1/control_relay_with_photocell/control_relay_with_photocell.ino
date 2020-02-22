#define photoCell A0
#define relay 13
#define threshold 780

int analogVal=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(relay,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogVal=analogRead(photoCell);
  Serial.println(analogVal);

  if(analogVal > threshold){
    digitalWrite(relay,HIGH);
  }else {
    digitalWrite(relay,LOW);
  }
  delay(100);
}
