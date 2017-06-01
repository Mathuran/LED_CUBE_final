
#include "Arduino.h"
#include "led.h"
#include "cube.h"



///////////////////////////////////////TURN ON LED FUNCTION////////////////////////////////////

void led::turnON(int column, int layer) {       // THIS FUNCTION TURNS LEDS ON AND OFF  ##try bitshifting##
  if (column <= 7)                            // CHECKS IF SIGNAL IS GOING TO FIRST OR SECOND MULTIPLEXER
  {
    digitalWrite(inhib2, HIGH); //turns of the second multiplexar
    digitalWrite(inhib, LOW);

    if (column % 2 == 1) {                  // CHANGES THE COLUMN VALUE INTO BINARY WHICH IS SET TO CHANNEL A,B OR C
      digitalWrite(A, HIGH);
    } else {
      digitalWrite(A, LOW);
    }
    column = column / 2;                  //DIVIDES COLUMN INTERGER VALUE BY 2 SO THAT YOU CAN GET THE REST OF THE BINARY DIGITS
    if (column % 2 == 1) {
      digitalWrite(B, HIGH);
    } else {
      digitalWrite(B, LOW);
    }
    column = column / 2;
    if (column % 2 == 1) {
      digitalWrite(C, HIGH);
    } else {
      digitalWrite(C, LOW);
    }
  } else {
    digitalWrite(inhib, HIGH);          //turns off the first multiplexar
    digitalWrite(inhib2, LOW);

    column = column - 8;                  // COLUMN VALUE IS NOW MEANT FOR THE SECOND MULTIPLEXAR AND WILL WILL GO THROUGH THE SAME PROCESS AS BEFORE TO TURN ON CHANNEL
    if (column % 2 == 1) {
      digitalWrite(Am2, HIGH);
    } else {
      digitalWrite(Am2, LOW);
    }
    column = column / 2;
    if (column % 2 == 1) {
      digitalWrite(Bm2, HIGH);
    } else {
      digitalWrite(Bm2, LOW);
    }
    column = column / 2;
    if (column % 2 == 1) {
      digitalWrite(Cm2, HIGH);
    } else {
      digitalWrite(Cm2, LOW);
    }
  }
  if (layer == 1) {                 // OPENS THE TRASISTOR FOR GIVIN LAYER
    digitalWrite(layer1, HIGH);
    digitalWrite(layer2, LOW);
    digitalWrite(layer3, LOW);
    digitalWrite(layer4, LOW);

  } else if (layer == 2) {
    digitalWrite(layer2, HIGH);
    digitalWrite(layer3, LOW);
    digitalWrite(layer4, LOW);
    digitalWrite(layer1, LOW);

  } else if (layer == 3) {
    digitalWrite(layer3, HIGH);
    digitalWrite(layer1, LOW);
    digitalWrite(layer2, LOW);
    digitalWrite(layer4, LOW);

  } else if (layer == 4) {
    digitalWrite(layer4, HIGH);
    digitalWrite(layer1, LOW);
    digitalWrite(layer2, LOW);
    digitalWrite(layer3, LOW);
  }
}











