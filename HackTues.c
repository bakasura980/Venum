int ledPin = 3;
int inPin = 7;
int fanstate = 0;
int buttoncurrentstate = 0;
int buttonprevstate = HIGH;
int tresshold = 200;
int waterlevel = A1;




void setup() {
  analogRead(waterlevel);
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  /*
  val = digitalRead(inPin);
  if (val == HIGH){
  digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, HIGH);
  }
  */
  buttonprevstate = buttoncurrentstate;
  buttoncurrentstate = digitalRead(inPin);
  waterlevel = analogRead(A1);

  
if (buttoncurrentstate == LOW && buttonprevstate == HIGH){
  fanstate++;
   
}


}
