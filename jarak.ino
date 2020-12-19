#define trigPin 9
#define echoPin 8


void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

  Serial.println(distance);
  delay(100);

  if(distance>=10 && distance <=15) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
    }

  if(distance>=16) {
    digitalWrite(6, HIGH);
    
  } else {
    digitalWrite(6, LOW);}
   
  if(distance<=9) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
}
