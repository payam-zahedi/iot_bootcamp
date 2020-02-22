#define trig 13
#define echo 12
#define relay 11

// defines variables
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  pinMode(relay,OUTPUT);// Sets the relay as an Output
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

  if(distance < 6){
    digitalWrite(relay,LOW);
  }else {
    digitalWrite(relay,HIGH);
  }
  
  delay(200);
}
