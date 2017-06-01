
#include "led.h"
#include "cube.h"
#include "button.h"
//#include "pitches.h"

int inhib = 5;
int inhib2 = 9;
int passed = 0 ;
int start;
int Final;
int Time;
int scoreNum;
int diff;
int a;
int b;
int c = 1;
int d;
int oldButton;
int newButton;
int started;
int faceArray[64];
int faceON[4] = {5, 8, 12, 9};
int buttonsPushed[64];
bool gameover = false;

cube CUBE = cube();
led LED = led();
button BUTTON = button();

void setup() {
  //Set ports [0, 12] as output ports
  for (int port = 0; port <= 12; port++) {
    pinMode(port, OUTPUT);
  }
  //Set ports [A0, A5] as input ports
  for (int port = 14; port <= 19; port++) {
    pinMode(port, INPUT);
  }

  Serial.begin(9600);
  //randomSeed(analogRead(0));
  Serial.println("start");

}
///////////////////////////////////////////////////VOID LOOP///////////////////////
void loop() {
  //CUBE.faceONtimed(12,100);

  a = BUTTON.Pushed();
  //Serial.println(a);

  if (started == 1) {
    goto GAME;
  } else if (a == 1) {
    diff = 1500;
    CUBE.faceONtimed(1, 100);
    goto GAME;
  } else if (a == 2) {
    diff = 1000;
    CUBE.faceONtimed(2, 100);
    goto GAME;
  } else if (a == 12) {
    diff = 600;
    CUBE.faceONtimed(3, 100);
    goto GAME;
  } else if (a > 13) {
    diff = 200;
    CUBE.faceONtimed(4, 100);
    goto GAME;
  }
  ///////////////////////////GAME///////////////////////////////////////
GAME:
  if (a == 4) {

    started = 1;
    //newButton = BUTTON.Pushed() - 3;

    /////////////////CONTROLS THE LEVEL AND STARTS THE GAME/////////////////
    for (int x = 1; x < 64; x++) {
      tone(53, 400);
      //delay(500);
      CUBE.ONtimed(500);
      noTone(53);
      delay(500);
      tone(53, 500);
      CUBE.ONtimed(500);
      noTone(53);
      delay(500);
      tone(53, 500);
      CUBE.ONtimed(500);
      noTone(53);


      faceArray[0] = 0;
      //////////////TURNS ON THE CUBE PACE IN A RANDOM PATTERN//////////////////
      for (int y = 1; y <= x; y++) {
        b = random(4);
        while (faceArray[y - 1] == b ) {
          b = random(4);
        }
        faceArray[y] = b;
        CUBE.faceONtimed(faceON[faceArray[y]], diff);
      }
      ////////////////////RECORDS YOUR BUTTON INPUT////////////////////////
      Time = 10000;
      start = millis();
      passed = 0;
      buttonsPushed[0] = -10;
      c = 1;
      oldButton = BUTTON.Pushed() - 3;

      while (Time > passed) {

        CUBE.twoCUBEtimed(14, 50);
        newButton = BUTTON.Pushed() - 3;

        if (BUTTON.GameButton(3) == 1 && c <= x) {
          buttonsPushed[c] = newButton;
          CUBE.faceONtimed(5, 200);
          c++;
          oldButton = newButton;
          newButton = BUTTON.Pushed() - 3;
          if ( x < c) {
            break;
          }

        } else if (BUTTON.GameButton(4) == 1 && c <= x) {
          buttonsPushed[c] = newButton;
          CUBE.faceONtimed(8, 200);
          c++;
          oldButton = newButton;
          newButton = BUTTON.Pushed() - 3;
          if ( x < c) {
            break;
          }

        } else if (BUTTON.GameButton(5) == 1 && c <= x) {
          buttonsPushed[c] = newButton;
          CUBE.faceONtimed(12, 200);
          c++;
          oldButton = newButton;
          newButton = BUTTON.Pushed() - 3;
          if ( x < c) {
            break;
          }

        } else if (BUTTON.GameButton(6) == 1 && c <= x) {
          buttonsPushed[c] = newButton;
          CUBE.faceONtimed(9, 200);
          c++;
          oldButton = newButton;
          newButton = BUTTON.Pushed() - 3;
          if ( x < c) {
            break;
          }
        }
        Final = millis();
        passed = Final - start;
      }
      //////////////////CHECKS IF YOUR BUTTON INPUTS ARE CORRECT///////////////////
      for (int z = 1; z <= x; z++) {
        /* Serial.println("compare");
          Serial.println(faceArray[z]);
          Serial.println(buttonsPushed[z]);*/

        if (faceArray[z] == buttonsPushed[z]) {
          CUBE.faceONtimed(faceON[faceArray[z]], 200);
          /* Serial.print("WIN");*/
        } else {
          scoreNum = x;
          //Serial.print(scoreNum);
          tone(53, 1000);
          CUBE.RANDOMcolumns(2000);
          noTone(53);
          gameover = true;
          break;
        }

      }
      /////////////////IS IT A GAME OVER OR IS IT NOY/////////////////////////////////////
      if (gameover == true) {
        //Serial.println(scoreNum);
        tone(53, 200);
        CUBE.scoreTimed(scoreNum, 5000);
        noTone(53);
        started = 0;
        gameover = false;

        break;
      }
    }
  }
}
//////////////////////////////////////////////////
/////////////////////////////////////////////////
///////////////////////////////////////////////


















