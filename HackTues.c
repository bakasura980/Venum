int fanPin = 11; 
int redPin = 10, greenPin = 9, bluePin = 8;
int buttonPin = 7;
int fanState = 0;
int buttonCurrentState = 0;
int buttonPrevState = LOW;
int tresshold = 50;
int waterLevel;
int waterSensor = A1;


void setup() {

  for(int i = 8; i <= 11; i++){
    pinMode(i, OUTPUT); 
  }
 
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);

}

void turnOnOffFan(int turnOnOff){
  digitalWrite(fanPin, turnOnOff);
}

void setRGBColor(int color, int turnOnOff){
 
  for(int i = 8; i <= 10; i++){
    digitalWrite(i, LOW);
  }
 
  digitalWrite(color, HIGH);
  turnOnOffFan(turnOnOff);
}

void loop() {

  buttonPrevState = buttonCurrentState;
  buttonCurrentState = digitalRead(buttonPin);
  waterLevel = analogRead(waterSensor);

 
  if (buttonCurrentState == LOW && buttonPrevState == HIGH){ 
    if(fanState == 2){
      fanState = 0;
    }else{
      fanState++;
    }
  }

  switch(fanState){
    case 0 :
      setRGBColor(redPin, LOW);
      break;
    case 1 :
      setRGBColor(greenPin, HIGH);
      break;
    case 2 :
      if(waterLevel > tresshold){
        setRGBColor(bluePin, HIGH);
      }else{
        setRGBColor(redPin, LOW); 
      }
      break;
  }
}
