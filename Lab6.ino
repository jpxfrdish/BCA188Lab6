#include <Arduino.h>

// ESP32-S3 pins
const uint8_t BUTTON_PIN = 26;
const uint8_t MOTOR_IN1 = 4;
const uint8_t MOTOR_IN2 = 5;

void setup() {
  Serial.begin(115200);
  // Motor driver control pins
  pinMode(MOTOR_IN1, OUTPUT);
  pinMode(MOTOR_IN2, OUTPUT);

  // Button
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  // Motor initially stopped
  digitalWrite(MOTOR_IN1, LOW);
  digitalWrite(MOTOR_IN2, LOW);

  Serial.begin(115200);
  Serial.println("Example 7: Hold Button to Run Motor");
}

void loop() {

  // Button is pressed when the pin reads LOW
  const bool buttonPressed = (digitalRead(BUTTON_PIN) == LOW);

  if (buttonPressed) {
    // Motor runs in one direction
    digitalWrite(MOTOR_IN1, HIGH);
    digitalWrite(MOTOR_IN2, LOW);

    Serial.println("Button PRESSED - Motor RUNNING");
  } 
  else {
    // Both inputs LOW = motor coasts/stops
    digitalWrite(MOTOR_IN1, LOW);
    digitalWrite(MOTOR_IN2, LOW);

    Serial.println("Button RELEASED - Motor COASTING");
    Serial.println(buttonPressed);
  }

  delay(50);
}