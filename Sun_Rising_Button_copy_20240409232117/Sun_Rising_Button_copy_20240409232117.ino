#include <Servo.h>

Servo myservo_1;
Servo myservo_2;

const int servoPin_1 = 7;
const int servoPin_2 = 8;

#define LED_PIN_1 10
#define LED_PIN_2 11
#define BUTTON_PIN_1 2
#define BUTTON_PIN_2 3
#define BUTTON_PIN_3 4
#define BUTTON_PIN_4 5
#define BUTTON_PIN_5 6

void setup() {
  myservo_1.attach(7);
  myservo_2.attach(8);
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

  if (buttonState4 == LOW) {
    digitalWrite(LED_PIN_1, LOW);
  } else {
    digitalWrite(LED_PIN_1, HIGH);
  }

  if (buttonState2 == LOW) {
    digitalWrite(LED_PIN_2, LOW);
  } else {
    digitalWrite(LED_PIN_2, HIGH);
  }

  if (buttonState1 == HIGH || buttonState3 == HIGH) {
    myservo_1.write(0);
  } else {
    myservo_1.write(90);
  }

     if (buttonState5 == LOW) {
    myservo_2.write(90);
  } else {
    myservo_2.write(0);
  }
}
