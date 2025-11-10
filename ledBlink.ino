int ledPin = 13;
int ledPin2 = 14;
int buttonPin = 15;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if(digitalRead(buttonPin == HIGH) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW);
    delay(1000);
  }
}
