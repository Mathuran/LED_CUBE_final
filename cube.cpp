
#include "Arduino.h"
#include "cube.h"
#include "led.h"

const int delay_time = 0.1;

/////////////////////////////////////////////TURN ON FACE FUNCTION////////////////////////////////////
void cube::faceON(int face_number) {
  led LED = led();

  if (face_number <= 4) {             //////////////BOTTOM FACE TO TOP FACE (1 TO 4)
    for (int x = 0; x < 16; x++)
    {
      LED.turnON(x, face_number);
      delay(delay_time);
      digitalWrite(inhib2, HIGH);
      digitalWrite(inhib, HIGH);
    }
  } else if (face_number == 5) {       //////////////BACK FACES TO FRONT FACE 5 TO 8/////////////////
    for (int y = 1; y < 5; y++) {
      for ( int x = 0; x < 4; x++) {
        LED.turnON(x, y);
        delay(delay_time);
        digitalWrite(inhib2, HIGH);
        digitalWrite(inhib, HIGH);
      }
    }
  } else if (face_number == 6) {
    for (int y = 1; y < 5; y++) {
      for ( int x = 4; x < 8; x++) {
        LED.turnON(x, y);
        delay(delay_time);
        digitalWrite(inhib2, HIGH);
        digitalWrite(inhib, HIGH);
      }
    }
  } else if (face_number == 7) {
    for (int y = 1; y < 5; y++) {
      for ( int x = 8; x < 12; x++) {
        LED.turnON(x, y);
        delay(delay_time);
        digitalWrite(inhib2, HIGH);
        digitalWrite(inhib, HIGH);
      }
    }
  } else if (face_number == 8) {
    for (int y = 1; y < 5; y++) {
      for ( int x = 12; x < 16; x++) {
        LED.turnON(x, y);
        delay(delay_time);
        digitalWrite(inhib2, HIGH);
        digitalWrite(inhib, HIGH);
      }
    }
  } else if (face_number == 9) {        /////////////////////LEFT SIDE TO RIGHT SIDE FACE 9 TO 12//////////////////
    for (int y = 1; y < 5; y++) {
      for ( int x = 0; x < 13; x = x + 4) {
        LED.turnON(x, y);
        delay(delay_time);
        digitalWrite(inhib2, HIGH);
        digitalWrite(inhib, HIGH);
      }
    }
  } else if (face_number == 10) {
    for (int y = 1; y < 5; y++) {
      for ( int x = 1; x < 14; x = x + 4) {
        LED.turnON(x, y);
        delay(delay_time);
        digitalWrite(inhib2, HIGH);
        digitalWrite(inhib, HIGH);
      }
    }
  } else if (face_number == 11) {
    for (int y = 1; y < 5; y++) {
      for ( int x = 2; x < 15; x = x + 4) {
        LED.turnON(x, y);
        delay(delay_time);
        digitalWrite(inhib2, HIGH);
        digitalWrite(inhib, HIGH);
      }
    }
  } else if (face_number == 12) {
    for (int y = 1; y < 5; y++) {
      for ( int x = 3; x < 16; x = x + 4) {
        LED.turnON(x, y);
        delay(delay_time);
        digitalWrite(inhib2, HIGH);
        digitalWrite(inhib, HIGH);
      }
    }
  }
}
/////////////////////////////2 by 2 cube loop//////////////
void cube::LOOP(int cube[]) {
  led LED = led();

  for (int y = 4; y < 6; y++) {
    for ( int x = 0; x < 4; x++) {
      LED.turnON(cube[x], cube[y]);
      delay(delay_time);
      digitalWrite(inhib2, HIGH);
      digitalWrite(inhib, HIGH);
    }
  }
}

///////////////////////////// 2 BY 2 CUBE ////////////////////////
void cube::twoBYtwo(int num) {
  cube CUBE = cube();

  if (num == 1) {                ///1ST ROW, LEVEL 1///FIRST 4 NUMBERS ARE THE INDEX NUMBER AND THE LAST TWO ARE THE LAYER NUMBER//////////
    CUBE.LOOP(cube1);
  } else if (num == 2) {
    CUBE.LOOP(cube2);
  } else if (num == 3) {
    CUBE.LOOP(cube3);
  } else if (num == 4) {          ////2ND ROW, LEVEL 2////
    CUBE.LOOP(cube4);
  } else if (num == 5) {
    CUBE.LOOP(cube5);
  } else if (num == 6) {
    CUBE.LOOP(cube6);
  } else if (num == 7) {          ////3RD ROW, LEVEL 1///
    CUBE.LOOP(cube7);
  } else if (num == 8) {
    CUBE.LOOP(cube8);
  } else if (num == 9) {
    CUBE.LOOP(cube9);
  } else if (num == 10) {         ///////1ST ROW, LEVEL 2/////////
    CUBE.LOOP(cube10);
  } else if (num == 11) {
    CUBE.LOOP(cube11);
  } else if (num == 12) {
    CUBE.LOOP(cube12);
  } else if (num == 13) {       ////2ND ROW, LEVEL 2////
    CUBE.LOOP(cube13);
  } else if (num == 14) {
    CUBE.LOOP(cube14);
  } else if (num == 15) {
    CUBE.LOOP(cube15);
  } else if (num == 16) {       ////3RD ROW, LEVEL 2///
    CUBE.LOOP(cube16);
  } else if (num == 17) {
    CUBE.LOOP(cube17);
  } else if (num == 18) {
    CUBE.LOOP(cube18);
  } else if (num == 19) {       ///1ST ROW, LEVEL 3///
    CUBE.LOOP(cube19);
  } else if (num == 20) {
    CUBE.LOOP(cube20);
  } else if (num == 21) {
    CUBE.LOOP(cube21);
  } else if (num == 22) {        ////2ND ROW, LEVEL 3////
    CUBE.LOOP(cube22);
  } else if (num == 23) {
    CUBE.LOOP(cube23);
  } else if (num == 24) {
    CUBE.LOOP(cube24);
  } else if (num == 25) {       ////3RD ROW, LEVEL 3///
    CUBE.LOOP(cube25);
  } else if (num == 26) {
    CUBE.LOOP(cube26);
  } else if (num == 27) {
    CUBE.LOOP(cube27);
  }
}

/////////////////////////////3 by 3 cube loop//////////////
void cube::LOOP2(int cube[]) {
  led LED = led();

  for (int y = 1; y < 4; y++) {
    for ( int x = 0; x < 9; x++) {
      LED.turnON(cube[x], y);
      delay(delay_time);
      digitalWrite(inhib2, HIGH);
      digitalWrite(inhib, HIGH);
    }
  }
}

/////////////////////////////////TURN ON RANDOMS COLUMNS MATRIXS STYLES////////////////////////////
void cube::RANDOMcolumns(int Time) {
  led LED = led();

  start = millis();
  passed = 0;
  while (Time > passed) {
    int x;
    x = random(16);
    for (int y = 4; y > 0; y--) {
      LED.turnON(x, y);
      delay(7);
    }
    Final = millis();
    passed = Final - start;
  }

}
/////////////////////////TURN ON DIAGONAL cube///////////////////////////////////////////
void cube::diagonalcube(int delay_speed, int Time) {
  cube CUBE = cube();
  led LED = led();


  start = millis();
  passed = 0;
  while (Time > passed) {
    delay(delay_speed);
    LED.turnON(0, 1);
    delay(delay_speed);
    CUBE.twoCUBEtimed(1, delay_speed);
    CUBE.threeCUBEtimed(1, delay_speed);
    CUBE.ONtimed(delay_speed);
    CUBE.threeCUBEtimed(2, delay_speed);
    CUBE.twoCUBEtimed(9, delay_speed);
    LED.turnON(15, 1);
    delay(delay_speed);

    Final = millis();
    passed = Final - start;
  }



}


////////////////////////////////turn on led face for timed period function/////////////////////////
void cube::faceONtimed(int face_num, int Time) {
  cube CUBE = cube();

  start = millis();
  passed = 0;
  while (Time > passed) {
    CUBE.faceON(face_num);
    Final = millis();
    passed = Final - start;
  }
}
/////////////////////////////////////// 2 BY 2 CUBE TIMED ////////////////////////
void cube::twoCUBEtimed(int cube_num, int Time) {
  cube CUBE = cube();

  start = millis();
  passed = 0;
  while (Time > passed) {
    CUBE.twoBYtwo(cube_num);
    Final = millis();
    passed = Final - start;
  }
}
/////////////////////////////////////// 3 BY 3 CUBE TIMED ////////////////////////
void cube::threeCUBEtimed(int num, int Time) {
  cube CUBE = cube();


  start = millis();
  passed = 0;
  while (Time > passed) {

    if (num == 1) {
      CUBE.LOOP2(cube301);
    } else if (num == 2) {
      CUBE.LOOP2(cube302);
    }

    Final = millis();
    passed = Final - start;
  }
}

/////////////////////////////4 by 4 cube loop//////////////
void cube::ONtimed(int Time) {
  led LED = led();

  start = millis();
  passed = 0;
  while (Time > passed) {
    for (int y = 1; y < 5; y++) {
      for ( int x = 0; x < 16; x++) {
        LED.turnON(x, y);
        delay(delay_time);
        digitalWrite(inhib2, HIGH);
        digitalWrite(inhib, HIGH);
      }
    }
    Final = millis();
    passed = Final - start;
  }
}
///////////////////////////SCORE//////////////////////////
void cube::scoreTimed(int score, int Time) {
  led LED = led();

  start = millis();
  passed = 0;
  while (Time > passed) {

    int layers ;
    int lastLED ;

    for (int y = 0; y < score; y++) {
      layers = (y / 16) + 1;
      lastLED = (y % 16);
      LED.turnON(lastLED, layers);
      delay(1);
    }
    Final = millis();
    passed = Final - start;
  }
}





