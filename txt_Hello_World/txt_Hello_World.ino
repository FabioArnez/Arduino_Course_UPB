/*
  Blink - (Hardware Hello World!!!)
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc
 */
void setup()
{
  // Pin 13 is connected to the onboard LED
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("LED ON");
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  Serial.println("LED OFF");
  delay(1000);              // wait for a second
}