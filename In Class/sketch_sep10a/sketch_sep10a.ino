
int ledPin = 11;

int knobPin = A0;
int knobValue = -1;

int switchPin = 7;
int switchState = -1;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); 
  pinMode(switchPin, INPUT);
  // Enable serial communications
  Serial.begin(9600);
}

void loop() {
  knobValue = analogRead(knobPin);
  Serial.print("knobValue = ");
  Serial.println(knobValue);

  switchState = digitalRead(switchPin);
  Serial.print("switchState = ");
  Serial.println(switchState);

  if ( knobValue > 255 ) {
    // put your main code here, to run repeatedly:
    digitalWrite(ledPin, HIGH);
    Serial.println("Turned LED On");
    delay(knobValue);
  
    knobValue = analogRead(knobPin);
    Serial.print("knobValue = ");
    Serial.println(knobValue);
    
    digitalWrite(ledPin, LOW);
    Serial.println("Turned LED Off");
    delay(knobValue);
  } else if (knobValue >= 0 && knobValue <= 255) {
    analogWrite(ledPin, knobValue);
  } else {
    digitalWrite(ledPin, HIGH);
  }
  
  
}
