/**************************************
 Read a Sensor

 Make sure you know how much power the
 sensor needs in order to function.

 Sensor should be connected to ground
 and appropriate power, and its signal
 should be connected to an analog input
 
**************************************/

int ledPin = 10; // same as pin 13

int sensorPin = A0;     // analog pin because reading a range of numbers
int sensorValue = 0;    // variable for reading the sensor

void setup() {
  
  // set digital pin as output
  pinMode(ledPin, OUTPUT);

  // start serial communications at 9600 baud
  Serial.begin(9600);
  
}

void loop() {
  // main program goes here
  
  sensorValue = analogRead(sensorPin);
  //Serial.println(sensorValue);      // print out the value
  delay(10);
  sensorValue = map(sensorValue, 0, 600, 0, 400);


//  if (sensorValue > 0 && sensorValue < 100) {
//    Serial.print(sensorValue);
//    Serial.println(" test1");
//  } else if (sensorValue > 100 && sensorValue < 200) {
//    Serial.print(sensorValue);
//    Serial.println(" test2");
//  } else if (sensorValue > 200 && sensorValue < 300) {
//    Serial.print(sensorValue);
//    Serial.println(" test3");
//  }


  // change intensity of motor
  //analogWrite(ledPin, sensorValue);

  // change on/off (blink) rate
  digitalWrite(ledPin, HIGH);       // turn the ledPin on
  delay(sensorValue);                 // stop the program for <knobValue> ms
  sensorValue = analogRead(sensorPin);
  digitalWrite(ledPin, LOW);        // turn the ledPin off
  delay(sensorValue);                 // stop the program for <knobValue> ms





//  if (0 < sensorValue < 100) {
//    Serial.print(sensorValue);
//    Serial.println(" test1");
//  } else if ( 100 < sensorValue < 200) {
//    Serial.print(sensorValue);
//    Serial.println(" test2");
//  } else if (200 < sensorValue < 300) {
//    Serial.print(sensorValue);
//    Serial.println(" test3");
//  }
  


}
