#include <Arduino.h>

//----Leds---------------------------------------

#define RIGHTLEDS  0
#define MIDDLELEDS 1
#define LEFTLEDS   2

#define RIGHTGREENBUTTONLED  4
#define LEFTGREENBUTTONLED   5
#define RIGHTYELLOWBUTTONLED 6
#define LEFTYELLOWBUTTONLED  7
#define RIGHTWHITEBUTTONLED  8
#define LEFTWHITEBUTTONLED   9
#define RIGHTBLUEBUTTONLED   10
#define LEFTBLUEBUTTONLED    11

//-----------------------------------------------
//----Buttons------------------------------------

#define RIGHTGREENBUTTON  23
#define LEFTGREENBUTTON   22
#define RIGHTYELLOWBUTTON 21
#define LEFTYELLOWBUTTON  20
#define RIGHTWHITEBUTTON  19
#define LEFTWHITEBUTTON   18
#define RIGHTBLUEBUTTON   17
#define LEFTBLUEBUTTON    16

//-----------------------------------------------

int right_green_button_val = 0;
int left_green_button_val   = 0;
int right_yellow_button_val = 0;
int left_yellow_button_val = 0;
int right_white_button_val = 0;
int left_white_button_val = 0;
int right_blue_button_val = 0;
int left_blue_button_val = 0;


void setup() {
  pinMode(RIGHTLEDS, OUTPUT);
  pinMode(MIDDLELEDS, OUTPUT);
  pinMode(LEFTLEDS, OUTPUT);

  pinMode(RIGHTGREENBUTTONLED, OUTPUT);
  pinMode(LEFTGREENBUTTONLED, OUTPUT);
  pinMode(RIGHTYELLOWBUTTONLED, OUTPUT);
  pinMode(LEFTYELLOWBUTTONLED, OUTPUT);
  pinMode(RIGHTWHITEBUTTONLED, OUTPUT);
  pinMode(LEFTWHITEBUTTONLED, OUTPUT);
  pinMode(RIGHTBLUEBUTTONLED, OUTPUT);
  pinMode(LEFTBLUEBUTTONLED, OUTPUT);

  pinMode(RIGHTGREENBUTTON, INPUT_PULLUP);
  pinMode(LEFTGREENBUTTON, INPUT_PULLUP);
  pinMode(RIGHTYELLOWBUTTON, INPUT_PULLUP);
  pinMode(LEFTYELLOWBUTTON, INPUT_PULLUP);
  pinMode(RIGHTWHITEBUTTON, INPUT_PULLUP);
  pinMode(LEFTWHITEBUTTON, INPUT_PULLUP);
  pinMode(RIGHTBLUEBUTTON, INPUT_PULLUP);
  pinMode(LEFTBLUEBUTTON, INPUT_PULLUP);

  digitalWrite(LEFTLEDS, LOW);
  digitalWrite(MIDDLELEDS, LOW);
  digitalWrite(RIGHTLEDS, LOW);

  digitalWrite(RIGHTGREENBUTTONLED, LOW);
  digitalWrite(LEFTGREENBUTTONLED, LOW);
  digitalWrite(RIGHTYELLOWBUTTONLED, LOW);
  digitalWrite(LEFTYELLOWBUTTONLED, LOW);
  digitalWrite(RIGHTWHITEBUTTONLED, LOW);
  digitalWrite(LEFTWHITEBUTTONLED, LOW);
  digitalWrite(RIGHTBLUEBUTTONLED, LOW);
  digitalWrite(LEFTBLUEBUTTONLED, LOW);

  delay(2000); // Sanity check
  Serial.print("Setup complete!");
}

void loop() {
  // digitalWrite(LEFTLEDS, LOW);
  // digitalWrite(RIGHTLEDS, HIGH);
  // delay(1000);
  // digitalWrite(RIGHTLEDS, LOW);
  // digitalWrite(MIDDLELEDS, HIGH);
  // delay(1000);
  // digitalWrite(MIDDLELEDS, LOW);
  // digitalWrite(LEFTLEDS, HIGH);
  // delay(1000);

  right_green_button_val  = digitalRead(RIGHTGREENBUTTON);
  left_green_button_val   = digitalRead(LEFTGREENBUTTON);
  right_yellow_button_val = digitalRead(RIGHTYELLOWBUTTON);
  left_yellow_button_val  = digitalRead(LEFTYELLOWBUTTON);
  right_white_button_val  = digitalRead(RIGHTWHITEBUTTON);
  left_white_button_val   = digitalRead(LEFTWHITEBUTTON);
  right_blue_button_val   = digitalRead(RIGHTBLUEBUTTON);
  left_blue_button_val    = digitalRead(LEFTBLUEBUTTON);

  digitalWrite(RIGHTGREENBUTTONLED, !right_green_button_val);
  digitalWrite(LEFTGREENBUTTONLED, !left_green_button_val);
  digitalWrite(RIGHTYELLOWBUTTONLED, !right_yellow_button_val);
  digitalWrite(LEFTYELLOWBUTTONLED, !left_yellow_button_val);
  digitalWrite(RIGHTWHITEBUTTONLED, !right_white_button_val);
  digitalWrite(LEFTWHITEBUTTONLED, !left_white_button_val);
  digitalWrite(RIGHTBLUEBUTTONLED, !right_blue_button_val);
  digitalWrite(LEFTBLUEBUTTONLED, !left_blue_button_val);

  // String string = "right_green_button:  " + String(right_green_button_val, DEC)  + '\n'
  //               + "left_green_button:   " + String(left_green_button_val, DEC)   + '\n'
  //               + "right_yellow_button: " + String(right_yellow_button_val, DEC) + '\n'
  //               + "left_yellow_button:  " + String(left_yellow_button_val, DEC)  + '\n'
  //               + "right_white_button:  " + String(right_white_button_val, DEC)  + '\n'
  //               + "left_white_button:   " + String(left_white_button_val, DEC)   + '\n'
  //               + "right_blue_button:   " + String(right_blue_button_val, DEC)   + '\n'
  //               + "left_blue_button:    " + String(left_blue_button_val, DEC)    + '\n';
  
  // Serial.print(string);
  // Serial.println();
  // Serial.println("---------------------------------------");
  // Serial.println();
  delay(50);
}