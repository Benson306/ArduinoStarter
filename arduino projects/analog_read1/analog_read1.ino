int ledPin=13;
int ledPin1=10;
int ledPin2=8;
int sensorPin=A0;
int sensorValue=0;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorValue=analogRead(sensorPin);
digitalWrite(ledPin, HIGH);
delay(sensorValue);
digitalWrite(ledPin, LOW);
delay(sensorValue);
digitalWrite(ledPin1, HIGH);
delay(sensorValue);
digitalWrite(ledPin1, LOW);
delay(sensorValue);
digitalWrite(ledPin2, HIGH);
delay(sensorValue);
digitalWrite(ledPin2, LOW);
delay(sensorValue);
}
