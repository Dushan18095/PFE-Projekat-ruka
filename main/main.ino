#include <Servo.h>

int pinMali = 2;
int pinDomali = 3;
int pinSrednji = 4;
int pinKaziprst = 5;
int pinPalac = 5;
int pinPalacZglob= 6;
int pinSaka = 7;

//plava +, bela -

Servo servoMali;
Servo servoDomali;
Servo servoSrednji;
Servo servoKaziprst;
Servo servoPalac;

void saviMali(){
  servoMali.write(140);
}
void ispraviMali(){
  servoMali.write(0);
}

void saviSrednji(){
  servoSrednji.write(0);
}
void ispraviSrednji(){
  servoSrednji.write(180);
}

void setup() {
  pinMode(pinMali, OUTPUT);
  pinMode(pinDomali, OUTPUT);
  pinMode(pinSrednji, OUTPUT);
  pinMode(pinKaziprst, OUTPUT);
  pinMode(pinPalac, OUTPUT);
  pinMode(pinPalacZglob, OUTPUT);
  pinMode(pinSaka, OUTPUT);

  servoMali.attach(pinMali);
  servoSrednji.attach(pinSrednji);
}

void loop() {
  saviMali();
  saviSrednji();
  delay(1500);
  ispraviMali();
  ispraviSrednji();
  delay(1500);
}