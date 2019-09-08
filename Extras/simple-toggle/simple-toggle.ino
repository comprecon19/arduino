/***************************************************
 Turn a pushbutton into a Toggle

-Dissecting a Button Press--------------------------
 It's important to remember that a full button press 
 includes both the "press" and the "release."

 This means that a full button press will change the 
 state twice (at the press and again at the release).

 Nested an if statement within state change
 detection limits it to only toggle when the new 
 state is the one state (it won't toggle itself 
 twice).

-Why State Change Detection?-------------------------
 Since the arduino is continuously looping through 
 the code, it is continuously reading the 
 buttonState.

 This means that if we removed the State Change 
 Detection aspect of this code, the toggle would be 
 toggled every single time the buttonPin was read 
 while it was pressed down (could be several times 
 per ms).
 
**************************************************/

int ledPin = 13;

int buttonPin = 2;
int buttonState = 0;
int lastButtonState = 0;

bool toggleState = true;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);

}

void loop() {

  // ---- TURN BUTTON INTO TOGGLE ----------------------------------  
  
  // read the button
  buttonState = digitalRead(buttonPin);

  // if button has been pressed...
  if (buttonState != lastButtonState) {
    // only if the new state is the press (not the release)
    if (buttonState == 1) {
      // flip the toggle
      toggleState = !toggleState;
    }
    // reset lastButtonState to save the current state
    lastButtonState = buttonState;
  }
      
  // ---- DO THINGS BASED ON TOGGLESTATE ----------------------------
  
  if (toggleState) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

}
