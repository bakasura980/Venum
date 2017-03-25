int ledPin = 3;
int inPin = 7;
int fanstate = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT_PULLUP);
  

}

void loop() {
  
  val = digitalRead(inPin);
  if (val == HIGH){
  digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, HIGH);
  }
  
}
