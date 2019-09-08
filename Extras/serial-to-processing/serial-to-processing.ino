/**************************************
 Read a sensor and send to Processing 
 over serial communication

 For multiple sensors, see:
 https://forum.processing.org/two/discussion/6241/receive-multiple-sensor-information-from-arduino-to-processing
 
**************************************/

int sensorPin = A0;     // analog pin because reading a range of numbers
int sensorValue = 0;    // variable to store sensor value

void setup() {
  // connect to serial port at 9600 baud
  Serial.begin(9600);
}

void loop() {
  // read the sensor
  sensorValue = analogRead(sensorPin);
  // send value to serial port
  Serial.println(sensorValue,DEC);

}
