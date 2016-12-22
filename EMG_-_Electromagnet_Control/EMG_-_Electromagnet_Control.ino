const int muscleSensor = A5;
const int ledPin = 12;
const int electroPin = 10;

int muscleThreshold = 300;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(electroPin, OUTPUT);
}

void loop() {
  int reading = analogRead(muscleSensor);
  Serial.println(reading);
  if(reading>=muscleThreshold){
    digitalWrite(ledPin, HIGH);
    digitalWrite(electroPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
    digitalWrite(electroPin, LOW);
  }
  
  delay(50);
}
