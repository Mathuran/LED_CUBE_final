#include "Arduino.h"
#include "button.h"


// debounce function
bool button::debounce(bool last, int Pin) {

  bool current = digitalRead(Pin);
  if (last != current)
  {
    delay(10);
    current = digitalRead(Pin);
  }
  return current;
}


////////////////////BUTTON_PUSHED//////////////////////////
int button::Pushed() {

  for (int x = 0; x < 6; x++) {
    currentButton[x] = debounce(lastButton[x], switchPin[x] );
    if (lastButton[x] == LOW && currentButton[x] == HIGH) {
      if (toggle1 == true && x == 1) {
        pressed = pressed + 10;
        //break;
      } else {
        pressed = x + 1;
      }
      if ( x == 1) {
        toggle1 = true;
      } else {
        toggle1 = false;
      }
      //break;
    }
  }
  return pressed;
}

//////////////GAME BUTTON\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

int button::GameButton(int x ) {
  x = x - 1;
  currentButton[x] = debounce(lastButton[x], switchPin[x] );
  if (lastButton[x] == LOW && currentButton[x] == HIGH) {
    pressed = 1;
  } else {
    pressed = 0;
  }
  return pressed;
}










