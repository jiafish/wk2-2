const int ledCount = 8;    // the number of LEDs in the bar graph
int num=0;
int i=1;
int ledPins[] = {
 32,33,25,26,27,14,12,13
};   
int buttonPin=23;
int buttonState=1;
// an array of pin numbers to which LEDs are attached
void setup() {
  // loop over the pin array and set them all to output:
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin,HIGH);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  // put your main code here, to run repeatedly:
  if(i==1){
    if (buttonState == HIGH) {
    // turn LED on: 
    digitalWrite(ledPins[num], HIGH);
    num++;
    delay(200);
    if(num==8)i++;
    }
  }
    else{
      if (buttonState == HIGH) {
    // turn LED on: 
       digitalWrite(ledPins[num], LOW);
       num--;
      delay(200);
       if(num==0)i-- ;
  }
    }
  }
 

