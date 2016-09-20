/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */

int cw = 3;
int ccw = 2;
int en = 5;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(cw, OUTPUT);
  pinMode(ccw, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {


  digitalWrite(cw, HIGH);
  digitalWrite(ccw, LOW);
  analogWrite(en, 255);// turn the LED on (HIGH is the voltage level)
  delay(random(500, 1500));
  analogWrite(en, 0);
  delay(random(0, 10));// wait for a second
  digitalWrite(ccw, HIGH);
  digitalWrite(cw, LOW); 
  analogWrite(en, 255);// turn the LED off by making the voltage LOW
  delay(random(500, 1500)); 
  analogWrite(en, 0);
  delay(random(0, 10));/// wait for a second

}
