#ifndef led_h
#define led_h


class led
{
  public:


int C = 4;
int B = 3;
int A = 2;
int inhib = 5;
int Cm2 = 8;
int Bm2 = 7;
int Am2 = 6;
int inhib2 = 9;
int layer1 = 10;
int layer2 = 11;
int layer3 = 12;
int layer4 = 13;

    void turnON(int column, int layer);
};

#endif









