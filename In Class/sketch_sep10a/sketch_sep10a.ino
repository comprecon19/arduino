
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); 
  // Enable serial communications
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  Serial.println("Turned LED On");
  delay(500);
  digitalWrite(ledPin, LOW);
  Serial.println("Turned LED Off");
  delay(500);
}
