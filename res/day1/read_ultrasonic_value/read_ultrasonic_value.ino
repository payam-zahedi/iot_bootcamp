#define trig 13
#define echo 12

// defines variables
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);
  delayMicroseconds(2);

  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  duration = pulseIn(echo,HIGH);
 
  distance= duration/29/2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" Cm");
  delay(200);
}
