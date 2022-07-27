int delayled ;
int maxTime = 1000;
bool flag = true;

//Informations about pins
int pinLed = 5;
int buttonPin = 4;

void setup() {
  delayled = maxTime;
  pinMode(pinLed, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
 
  if(digitalRead(buttonPin) == HIGH ){
    delayled = delayled -200;
     if (delayled == 200) {
        flag = true;
        delayled = maxTime;  
      } else {
        flag = false;
        }
  }

    if(flag == true) {
    digitalWrite(pinLed, HIGH);
    } else {
      digitalWrite(pinLed, HIGH);
      delay(delayled);
      digitalWrite(pinLed, LOW);
      delay(delayled);
       if (delayled == 200) {
        flag = true;
        delayled = maxTime;  
      } else {
        flag = false;
     }
 
    }
  
} 
