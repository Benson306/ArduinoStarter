int ledPin=13;
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
delay(sensorValue+100);
digitalWrite(ledPin,LOW);
delay(sensorValue);
}
