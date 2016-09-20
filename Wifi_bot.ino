/*
 ESP8266 Blink by Simon Peter
 Blink the blue LED on the ESP-01 module
 This example code is in the public domain
 
 The blue LED on the ESP-01 module is connected to GPIO1 
 (which is also the TXD pin; so we cannot use Serial.print() at the same time)
 
 Note that this sketch uses BUILTIN_LED to find the pin with the internal LED
*/

void setup() {
  pinMode(13, OUTPUT); 
  pinMode(12, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(16, OUTPUT);// Initialize the BUILTIN_LED pin as an output
   digitalWrite(13, LOW);
   digitalWrite(12, LOW);
   digitalWrite(14, LOW);
   digitalWrite(16, LOW);
   delay(100);
}

// the loop function runs over and over again forever
void loop() {

   // Wait for a second
  digitalWrite(13, HIGH);
  digitalWrite(14, HIGH);// Turn the LED off by making the voltage HIGH
  delay(1500);
  digitalWrite(13, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(14, LOW);                                  // but actually the LED is on; this is because 
                                    // it is acive low on the ESP-01)
  delay(1500);  

  digitalWrite(12, HIGH);
  digitalWrite(16, HIGH);// Turn the LED off by making the voltage HIGH
  delay(1500);
  digitalWrite(12, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(16, LOW);                                  // but actually the LED is on; this is because 
                                    // it is acive low on the ESP-01)
  delay(1500); 
                       // Wait for a second
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);// Turn the LED off by making the voltage HIGH
  delay(1500);
  digitalWrite(12, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(13, LOW);                                  // but actually the LED is on; this is because 
                                    // it is acive low on the ESP-01)
  delay(1500);
    digitalWrite(14, HIGH);
  digitalWrite(16, HIGH);// Turn the LED off by making the voltage HIGH
  delay(1500);
  digitalWrite(14, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(16, LOW);                                  // but actually the LED is on; this is because 
                                    // it is acive low on the ESP-01)
  delay(1500);
}
