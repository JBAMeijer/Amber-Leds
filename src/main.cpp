#include <Arduino.h>

//----Leds---------------------------------------

#define RIGHTLEDS 4
#define MIDDLELEDS 5
#define LEFTLEDS 6

//-----------------------------------------------
//----Buttons------------------------------------

#define RIGHTGREENBUTTON    23
#define LEFTGREENBUTTON     22
#define RIGHTYELLOWBUTTON   21
#define LEFTYELLOWBUTTON    20
#define RIGHTWHITEBUTTON    19
#define LEFTWHITEBUTTON     18
#define RIGHTBLUEBUTTON     17
#define LEFTBLUEBUTTON      16

//-----------------------------------------------

int right_green_button_val = 0;
int left_green_button_val = 0;
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

  delay(1000); // Sanity check
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

  String string = "right_green_button:  " + String(right_green_button_val, DEC)  + '\n'
                + "left_green_button:   " + String(left_green_button_val, DEC)   + '\n'
                + "right_yellow_button: " + String(right_yellow_button_val, DEC) + '\n'
                + "left_yellow_button:  " + String(left_yellow_button_val, DEC)  + '\n'
                + "right_white_button:  " + String(right_white_button_val, DEC)  + '\n'
                + "left_white_button:   " + String(left_white_button_val, DEC)   + '\n'
                + "right_blue_button:   " + String(right_blue_button_val, DEC)   + '\n'
                + "left_blue_button:    " + String(left_blue_button_val, DEC)    + '\n';
  
  Serial.print(string);
  Serial.println();
  Serial.println("---------------------------------------");
  Serial.println();
  delay(1000);
}