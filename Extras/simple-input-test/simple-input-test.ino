/**************************************
 Simple program to test inputs
  
  - Knob on analog pin A0
  - Switch on digital pin 7

**************************************/

int ledPin = LED_BUILTIN; // same as pin 13

int knobPin = A0;     // analog pin because range of numbers
int knobValue = 0;    // variable for reading the knob

int switchPin = 7;    // digital pin because binary (on/off)
int switchState = 0;  // variable for reading the switch

void setup() {
  // put your setup code here, which runs once
  
  // set digital pin as output
  pinMode(ledPin, OUTPUT);
  
  // set digital pins as inputs:
  pinMode(switchPin, INPUT);

  // start serial communications at 9600 baud
  Serial.begin(9600);
  
}

void loop() {
  // main program goes here
  
  switchState = digitalRead(switchPin);
  Serial.print("Switch: ");
  Serial.println(switchState);

  knobValue = analogRead(knobPin);
  Serial.print("Knob: ");
  Serial.println(knobValue);
  Serial.println(' ');
}
