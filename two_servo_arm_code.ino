#include <Servo.h>

Servo myservo_left;  // create servo object to control a servo
Servo myservo_right;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position

void setup() {
  myservo_left.attach(4);  // attaches the servo on pin 4 to the servo object
  myservo_right.attach(5);  // attaches the servo on pin 5 to the servo object
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo_left.write(pos);              // tell servo to go to position in variable 'pos'
    myservo_right.write(pos);
    delay(15);                       // waits 15ms for the servo to reach the position, decrease move faster
  }
  
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo_left.write(pos); 
    myservo_right.write(pos);       // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

// https://docs.arduino.cc/learn/electronics/servo-motors

