int delayled = 1000;
int pinLed = 5;
int buttonPin = 4;

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
