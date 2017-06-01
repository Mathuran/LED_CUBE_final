#ifndef cube_h
#define cube_h


class cube
{
  public:
    /*int C = 4;
    int B = 3;
    int A = 2;*/
    int inhib = 5;
    /*int Cm2 = 6;
    int Bm2 = 7;
    int Am2 = 8;*/
    int inhib2 = 9;
    int layer1 = 10;
    int layer2 = 11;
    int layer3 = 12;
    int layer4 = 13;

    //////////////////////////////////////////////////////////////////////variables for cube.faceON//////////////
    int y = 1;
    /////////////////////////////////////////////////////////////////// 2 BY 2 CUBE FUNCTION///////////////////////////////////////////////////
    //    int cubes[2][6] = {cube1, cube2};

    int cube1[6] = {0, 1, 4, 5, 1, 2};    ///1ST ROW///FIRST 4 NUMBERS ARE THE INDEX NUMBER AND THE LAST TWO ARE THE LAYER NUMBER//////////
    int cube2[6] = {1, 2, 5, 6, 1, 2};
    int cube3[6] = {2, 3, 6, 7, 1, 2};
    int cube4[6] = {4, 5, 8, 9, 1, 2};    ////2ND ROW////
    int cube5[6] = {5, 6, 9, 10, 1, 2};
    int cube6[6] = {6, 7, 10, 11, 1, 2};
    int cube7[6] = {8, 9, 12, 13, 1, 2};  ////3RD ROW///
    int cube8[6] = {9, 10, 13, 14, 1, 2};
    int cube9[6] = {10, 11, 14, 15, 1, 2};
    int cube10[6] = {0, 1, 4, 5, 2, 3};    ///1ST ROW, LEVEL 2/////////////
    int cube11[6] = {1, 2, 5, 6, 2, 3};
    int cube12[6] = {2, 3, 6, 7, 2, 3};
    int cube13[6] = {4, 5, 8, 9, 2, 3};    ////2ND ROW, LEVEL 2////
    int cube14[6] = {5, 6, 9, 10, 2, 3};
    int cube15[6] = {6, 7, 10, 11, 2, 3};
    int cube16[6] = {8, 9, 12, 13, 2, 3};  ////3RD ROW, LEVEL 2///
    int cube17[6] = {9, 10, 13, 14, 2, 3};
    int cube18[6] = {10, 11, 14, 15, 2, 3};
    int cube19[6] = {0, 1, 4, 5, 3, 4};    ///1ST ROW, LEVEL 3///
    int cube20[6] = {1, 2, 5, 6, 3, 4};
    int cube21[6] = {2, 3, 6, 7, 3, 4};
    int cube22[6] = {4, 5, 8, 9, 3, 4};    ////2ND ROW, LEVEL 3////
    int cube23[6] = {5, 6, 9, 10, 3, 4};
    int cube24[6] = {6, 7, 10, 11, 3, 4};
    int cube25[6] = {8, 9, 12, 13, 3, 4};  ////3RD ROW, LEVEL 3///
    int cube26[6] = {9, 10, 13, 14, 3, 4};
    int cube27[6] = {10, 11, 14, 15, 3, 4};
    ///////////////////////////////////////////////////////////////////3 BY 3 CUBE ARRAY FOR DIAGONAL////////////////////////////
    int cube301[9] = {0, 1, 2, 4, 5, 6, 8, 9, 10};
    int cube302[9] = {5, 6, 7, 9, 10, 11, 13, 14, 15};

    ////////////////////////////////////////////////////////////////varibles for cube.faceONTimed//////////
    int passed = 0 ;
    int start;
    int Final;

    //////////////////////////////////////////////////////SCORE FUNCTION/////////////////////////////////
    int count = 1;
    int ledx = 0 ;
    int ledy = 1;


    void faceON(int face_number);
    void LOOP(int cube[]);
    void LOOP2(int cube[]);
    void twoBYtwo(int num);
    void RANDOMcolumns(int Time);
    void diagonalcube(int delay_speed, int Time);
    void faceONtimed(int face_num, int Time);
    void twoCUBEtimed(int cube_num, int Time);
    void threeCUBEtimed(int num, int Time);
    void ONtimed(int Time);
    void scoreTimed(int score, int Time);

};


#endif

