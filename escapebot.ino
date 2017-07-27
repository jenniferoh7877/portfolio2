#include <Servo.h>

Servo servoRight;
Servo servoLeft;

void forward(int time) {
  servoLeft.write(0);
  servoRight.write(180);
  delay(time);
}

void reverse(int time) {
  servoLeft.write(180);
  servoRight.write(0);
  delay(time);
}

void turnRight(int time) {
  servoLeft.write(180);
  servoRight.write(180);
  delay(time);
}

void turnLeft(int time) {
  servoLeft.write(0);
  servoRight.write(0);
  delay(time);
}

void stopRobot() {
  servoLeft.write(90);
  servoRight.write(90);
}

  void setup() {
    servoLeft.attach(13);  // Set left servo to digital pin 10
    servoRight.attach(12);  // Set right servo to digital pin 9
  }

void loop () {  
if (infrared sensor far away from something)
{
  forward(100);
}
else
{
  turnLeft();
}
}



Button Test Code:

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 2;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);+
  // print out the state of the button:
  Serial.println(buttonState);
  delay(1);        // delay in between reads for stability
}

Whisker Wire Code:

/*
 * Robotics with the BOE Shield - DisplayWhiskerStates
 * Display left and right whisker states in Serial Monitor.
 * 1 indicates no contact; 0 indicates contact.
 */

void setup()                               // Built-in initialization block
{
  tone(4, 3000, 1000);                    // Play tone for 1 second
  delay(1000);                            // Delay to finish tone
  pinMode(7, INPUT);                      // Set right whisker pin to input
  pinMode(5, INPUT);                      // Set left whisker pin to input  

  Serial.begin(9600);                     // Set data rate to 9600 bps
}  
 
void loop()                               // Main loop auto-repeats
{                                          
  byte wLeft = digitalRead(5);            // Copy left result to wLeft  
  byte wRight = digitalRead(7);           // Copy right result to wRight

  Serial.print(wLeft);                    // Display left whisker state
  Serial.println(wRight);                 // Display right whisker state

  delay(50);                              // Pause for 50 ms
}    

