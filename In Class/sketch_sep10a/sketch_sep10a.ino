
int ledPin = 11;

int knobPin = A1;
int knobValue = -1;
int knobValueMapped = -1;
int knobValueMappedBlinking = -1;

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

  if (switchState == 0) {
    Serial.println("Fade the LED");
    // fade the LED
    knobValue = constrain(knobValue, 30, 620);
    knobValueMapped = map(knobValue, 30, 620, 0, 255);
    analogWrite(ledPin, knobValueMapped);
  } else {
    Serial.println("Blink the LED");
    // blink the LED
    knobValueMappedBlinking = map(knobValue, 30, 620, 200, 2000);
    digitalWrite(ledPin, HIGH);
    delay(knobValueMappedBlinking);
    digitalWrite(ledPin, LOW);
    delay(knobValueMappedBlinking);
  }
  
}
