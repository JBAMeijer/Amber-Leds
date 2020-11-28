#include <Arduino.h>

#define RIGHTLEDS 4
#define MIDDLELEDS 5
#define LEFTLEDS 6

void setup() {
  pinMode(RIGHTLEDS, OUTPUT);
  pinMode(MIDDLELEDS, OUTPUT);
  pinMode(LEFTLEDS, OUTPUT);

  delay(1000);
}

void loop() {
  digitalWrite(LEFTLEDS, LOW);
  digitalWrite(RIGHTLEDS, HIGH);
  delay(1000);
  digitalWrite(RIGHTLEDS, LOW);
  digitalWrite(MIDDLELEDS, HIGH);
  delay(1000);
  digitalWrite(MIDDLELEDS, LOW);
  digitalWrite(LEFTLEDS, HIGH);
  delay(1000);
}