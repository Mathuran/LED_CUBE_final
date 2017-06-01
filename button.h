#ifndef button_h
#define button_h


class button
{
  public:
    /*
      int start = 17;
      int levelb = 15;
      int upb = 16;
      int downb = 18;
      int leftb = 14;
      int rightb = 19;
    */
    int switchPin[6] = {17, 15, 16, 18, 14, 19};
    bool buttonState[6];

    bool lastButton[6] = {LOW, LOW, LOW, LOW, LOW, LOW,} ;
    bool currentButton[6] = {LOW, LOW, LOW, LOW, LOW, LOW} ;
    int pressed = 9;

    bool toggle1 = false;
    int value1;

    int Pushed();
    bool debounce(bool last, int pin);
    int GameButton(int x );
};

#endif

