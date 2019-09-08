int ledPin = 10; // use a PWM pin

int knobPin = A0;
int knobValue = 0;

int sensorPin = A1;
int sensorValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  sensorValue = analogRead(sensorPin); // read the knob


// constrain range of knob
  //knobValue = constrain(knobValue, 0, 655);
  Serial.print("Sensor: ");
  Serial.print(sensorValue); // see what values you get from knobPin
  
//  Map the values
  sensorValue = map(sensorValue, 320, 380, 0, 255); // match the range of the PWM pin
  Serial.print("Sensor Mapped: ");
  Serial.println(sensorValue); // see what values you get from knobPin
  
  analogWrite(ledPin, sensorValue); // use analogWrite with PWM pins
  

}
