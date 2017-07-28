Serial Monitor Controlled Moving:
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

void setup()
{
servoLeft.attach(13);  // Set left servo to digital pin 10
    servoRight.attach(12);  // Set right servo to digital pin 9
Serial.begin(9600);
while (!Serial);
Serial.println("Input 1 to move forward.");
Serial.println("Input 2 to move backwards.");
Serial.println("Input 3 to turn left.");
Serial.println("Input 4 to turn right.");
Serial.println("Input 5 to stop robot.");
}

void loop(){
 if (Serial.available()>0) {
   int incomingByte = Serial.read();
   if (incomingByte == '1') {
    forward(100);
   } 
   
   if (incomingByte == '2') {
    reverse(100);
   }  
   
   if (incomingByte == '3') {
    turnLeft(80);
   } 
   
   if (incomingByte == '4') {
    turnRight(80);
   }
   
   if (incomingByte == '5') {
    stopRobot();
   }
}
}






