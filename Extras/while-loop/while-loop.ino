/**************************************
  Example: Various ways to write the while conditional 

--The while loop ------------------------
  
  while loops will loop continuously, and infinitely, until the 
  expression inside the parenthesis, () becomes false. Something 
  must change the tested variable, or the while loop will never exit. 
  This could be in your code, such as an incremented variable, or an 
  external condition, such as testing a sensor.

  for loops can usually be replaced with a while loop, but the structure
  of a for loop is usually easier to write and keep track of.

  If you aren't careful, a while loop can freeze or block your code 
  from doing other things so I tend to use if statements. It ultimately 
  just depends on what you want your program to do in the end.
  
**************************************/

int ledPin = 13;

int buttonPin = 2;
int buttonState = 0;

void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);
}

void loop() {

  // GOAL: the LED light should be on except for when the button is pressed
  
 /* first way (long-winded)
    doing it this way, you must read the pin before the while loop
    and again inside the while loop at the end
  */
  
//  buttonState = digitalRead(buttonPin); // read it before
//  while(buttonState == 1) {
//    digitalWrite(ledPin, LOW);
//    buttonState = digitalRead(buttonPin); // read it again inside or else it will get stuck
//  }


 /* second way (all in one)
    the conditional evaluates the pin every time, so you don't
    need to worry about reading it before and reading it within
  */
  
  while(digitalRead(buttonPin) == 1) { // reads it as part of evaluating the conditional
    digitalWrite(ledPin, LOW);
  }
  
  digitalWrite(ledPin, HIGH);

  
}

