
int ledPin=9;
int ledPin1=13;
int ledPin2=11;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledPin, HIGH);
delay(100);
digitalWrite(ledPin, LOW);
delay(100);
digitalWrite(ledPin1, HIGH);
delay(100);
digitalWrite(ledPin1, LOW);
delay(100);
digitalWrite(ledPin2, HIGH);
delay(100);
digitalWrite(ledPin2, LOW);
delay(100);
}
