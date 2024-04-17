#include <Servo.h>

Servo myservo_1;
Servo myservo_2;

const int servoPin_1 = 9
const int servoPin_2 = 3

#define LED_PIN_1 4
#define LED_PIN_2 6
#define BUTTON_PIN_1 2
#define BUTTON_PIN_2 7
#define BUTTON_PIN_3 5
#define BUTTON_PIN_4 8
#define BUTTON_PIN_5 1

void setup() {
  myservo_1.attach(9);
  myservo_2.attach(3);
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(BUTTON_PIN_1, INPUT_PULLUP);
  pinMode(BUTTON_PIN_2, INPUT_PULLUP);
  pinMode(BUTTON_PIN_3, INPUT_PULLUP);
  pinMode(BUTTON_PIN_4, INPUT_PULLUP);
  pinMode(BUTTON_PIN_5, INPUT_PULLUP);
}

void loop() {
  int buttonState1 = digitalRead(BUTTON_PIN_1);
  int buttonState2 = digitalRead(BUTTON_PIN_2);
  int buttonState3 = digitalRead(BUTTON_PIN_3);
  int buttonState4 = digitalRead(BUTTON_PIN_4);
  int buttonState5 = digitalRead(BUTTON_PIN_5);

  if (buttonState1 == LOW) {
    digitalWrite(LED_PIN_1, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  if (buttonState2 == LOW) {
    digitalWrite(LED_PIN_2, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  if (buttonState3 == LOW) {
    myservo_1.write(90);
  } else {
    myservo_1.write(0);
  }

   if (buttonState4 == LOW) {
    myservo_1.write(90);
  } else {
    myservo_1.write(0);
  }

     if (buttonState5 == LOW) {
    myservo_2.write(180);
  } else {
    myservo_2.write(0);
  }
}
