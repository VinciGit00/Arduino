int delayled = 1000;
int pinLed = 8;

void setup() {
  pinMode(pinLed, OUTPUT);
}

void loop() {
  digitalWrite(pinLed, HIGH)
  delay(delayled);
  digitalWrite(pinLed, LOW)
  delay(delayled);
}
