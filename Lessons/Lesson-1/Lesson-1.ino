/**************************************
  Lesson 1: Turn on the built-in LED

  Materials
  - 1 arduino (uno)
  - 1 usb cable
  
**************************************/

int ledPin = 13; // same as LED_BUILTIN

void setup() { 
  // put your setup code here, which runs once
  
  // set digital pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // main program goes here

  digitalWrite(ledPin, HIGH);   // turn the ledPin on

}
