#include <Arduino.h>

#define LED_PIN PC13  // 大多数Blue Pill板载LED引脚

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, LOW);   // STM32的LED是反接的
  delay(1000);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}