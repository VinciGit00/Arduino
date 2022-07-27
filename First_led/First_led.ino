int delayled = 1000;
int pinLed = 8;
int buttonPin = 9;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if(digitalRead(buttonPin) == HIGH ){
  digitalWrite(pinLed, HIGH);
  delay(delayled);
  digitalWrite(pinLed, LOW);
  delay(delayled);
  }
} 
