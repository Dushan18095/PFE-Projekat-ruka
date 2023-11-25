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
Servo servoZglob;
Servo servoSaka;
Servo servoPalac;

void saviMali(){
  servoMali.write(140);
}
void ispraviMali(){
  servoMali.write(0);
}
void saviDomali(){
  servoDomali.write(20);
}
void ispraviDomali(){
  servoDomali.write(180);
}
void saviSrednji(){
  servoSrednji.write(0);
}
void ispraviSrednji(){
  servoSrednji.write(180);
}
void saviKaziprst(){
  servoKaziprst.write(40);
}
void ispraviKaziprst(){
  servoKaziprst.write(140);
}
void saviPalac(){
  servoKaziprst.write(180);
}
void ispraviPalac(){
  servoKaziprst.write(130);
}
void saviKaziprstIPalac(){
  servoKaziprst.write(0);
}
void ispraviSve(){
  servoMali.write(0);
  servoDomali.write(180);
  servoSrednji.write(180);
  servoKaziprst.write(130);
  servoZglob.write(120);
  servoSaka.write(90);
  delay(1500);
}
void saviZglob(int deg){
  servoZglob.write(deg);
}
void saviSaku(int deg){
  servoSaka.write(deg);
}
void pokaziSlovo(char slovo)
{
  if(slovo == 'A')
  {
    saviMali();
    saviDomali();
    saviSrednji();
    saviKaziprstIPalac();
    delay(1500);
  }
  else if(slovo == 'B')
  {
    ispraviSve();
    saviPalac();
    saviZglob(60);
    delay(1500);
  }
  else if(slovo == 'C')
  {
    servoMali.write(80);
    servoDomali.write(110);
    servoSrednji.write(70);
    servoKaziprst.write(30);
    saviZglob(50);
    servoSaka.write(180);
    delay(1500);
  }
  else if(slovo == 'D')
  {
    saviMali();
    saviDomali();
    saviSrednji();
    saviPalac();
    saviZglob(50);
    delay(1500);
  }
  else if(slovo == 'E')
  {
    saviMali();
    saviDomali();
    saviSrednji();
    saviKaziprstIPalac();
    saviZglob(50);
    delay(1500);
  }
  else if(slovo == 'F')
  {
    saviKaziprstIPalac();
    saviZglob(50);
    delay(1500);
  }
  else if(slovo == 'G')
  {
    saviMali();
    saviDomali();
    saviSrednji();
    saviPalac();
    saviZglob(90);
    delay(1500);
  }
  ispraviSve();
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
  servoDomali.attach(pinDomali);
  servoSrednji.attach(pinSrednji);
  servoKaziprst.attach(pinKaziprst);
  servoZglob.attach(pinPalacZglob);
  servoSaka.attach(pinSaka);
  //servoPalac.attach(pinPalac);
}

void loop() {
  pokaziSlovo('G');
  delay(10);
}
