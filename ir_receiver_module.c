/*
    Project name : Infrared sensor receiver module
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-infrared-sensor-receiver-module
*/

// Pin definitions
const int irReceiverPin = 2; // Pin connected to the output of IR receiver module

void setup() {
  Serial.begin(9600); // Initialize serial communication for debugging
  pinMode(irReceiverPin, INPUT); // Set IR receiver pin as input
}

void loop() {
  // Read the state of the IR receiver pin
  int irState = digitalRead(irReceiverPin);

  // Print the state to Serial Monitor
  Serial.print("IR Receiver State: ");
  Serial.println(irState);

  // If IR signal is detected (active low), print "IR detected"
  if (irState == LOW) {
    Serial.println("IR Signal Detected");
  }

  delay(100); // Add a small delay to debounce the sensor
}
