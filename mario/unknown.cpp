#include "unknown.h"
#include"global.h"
#include<iostream>

Unknown::Unknown(int a) {
    if(a==1)
    {
        Unknown_Init1();
    }
    if(a==2)
    {
        Unknown_Init2();
    }
    if(a==3)
    {
        Unknown_Init3();
    }
}

void Unknown::Unknown_Init1() {
    m.clear();
    unknown_state = 0;
    coin_state = 0;
    coin = 0;
    int arr[38][3] = {{800,  360, 1},
                      {1050, 360, 2},
                      {1100, 220, 1},
                      {1150, 360, 1},
                      {3650, 360, 1},
                      {4450, 220, 1},
                      {5000, 360, 1},
                      {5150, 360, 2},
                      {5150, 220, 1},
                      {5300, 360, 1},
                      {6100, 220, 1},
                      {6150, 220, 1},
                      {7350, 360, 1},
                      {8400, 280, 1},
                      {8450, 280, 1},
                      {8500, 280, 1},
                      {8550, 280, 1},
                      {8600, 280, 1},
                      {8650, 280, 1},
                      {8700, 280, 1},
                      {8750, 280, 1},
                      {8800, 280, 1},
                      {8850, 280, 1},
                      {7800, 320, 1},
                      {8250, 160, 0},
                      {8300, 160, 0},
                      {7850, 320, 1},
                      {7900, 320, 1},
                      {7900, 280, 0},
                      {7950, 280, 0},
                      {8000, 280, 0},
                      {8000, 240, 0},
                      {8050, 240, 0},
                      {8100, 240, 0},
                      {8100, 200, 0},
                      {8150, 200, 0},
                      {8200, 200, 0},
                      {8200, 160, 0}};
    for (int i = 0; i < 38; i++) {
        v.push_back(arr[i][0]);
        v.push_back(arr[i][1]);
        v.push_back(arr[i][2]);
        v2.push_back(v);
        v.clear();
    }
    m.insert(1, v2);
}

void Unknown::Unknown_Init2() {
    m.clear();
    unknown_state = 0;
    coin_state = 0;
    coin = 0;
    int arr[36][3] = {{2100,  360, 1},
                      {2250, 360, 1},
                      {2300, 220, 1},
                      {4000, 360, 1},
                      {4150, 360, 1},
                      {4250, 220, 1},
                      {4350, 360, 1},

                      {6100, 220, 1},
                      {6150, 220, 1},

                      {7350, 360, 1},
                      {7650, 360, 1},

                      {8400, 280, 0},
                      {8450, 280, 0},
                      {8500, 280, 0},
                      {8550, 280, 0},
                      {8600, 280, 0},
                      {8650, 280, 0},
                      {8700, 280, 0},
                      {8750, 280, 0},
                      {8800, 280, 0},
                      {8850, 280, 0},
                      {7800, 320, 1},
                      {8250, 160, 0},
                      {8300, 160, 0},
                      {7850, 320, 1},
                      {7900, 320, 1},
                      {7900, 280, 0},
                      {7950, 280, 0},
                      {8000, 280, 0},
                      {8000, 240, 0},
                      {8050, 240, 0},
                      {8100, 240, 0},
                      {8100, 200, 0},
                      {8150, 200, 0},
                      {8200, 200, 0},
                      {8200, 160, 0}};
    for (int i = 0; i < 36; i++) {
        v.push_back(arr[i][0]);
        v.push_back(arr[i][1]);
        v.push_back(arr[i][2]);
        v2.push_back(v);
        v.clear();
    }
    m.insert(1, v2);
}

void Unknown::Unknown_Init3() {
    m.clear();
    unknown_state = 0;
    coin_state = 0;
    coin = 0;
    int arr[52][3] = {{1150, 360, 1},
                      {1400, 320, 2},
                      {1850, 410, 1},
                      {1900, 410, 1},
                      {1950, 410, 1},
                      {2100, 340, 1},
                      {2150, 340, 1},
                      {2200, 320, 2},
                      {2250, 360, 1},
                      {2700, 360, 1},
                      {2800, 360, 0},
                      {2900, 360, 1},
                      {3200, 360, 1},
                      {3250, 360, 1},
                      {5000, 360, 0},
                      {5050, 360, 0},
                      {5100, 360, 0},
                      {6150, 360, 1},
                      {6800, 460, 0},
                      {6800, 420, 0},
                      {6800, 380, 0},
                      {6800, 340, 0},
                      {6850, 420, 1},
                      {7100, 460, 0},
                      {7100, 420, 0},
                      {7100, 380, 0},
                      {7100, 300, 0},

                      {8400, 280, 0},
                      {8450, 280, 0},
                      {8500, 280, 0},
                      {8550, 280, 0},
                      {8600, 280, 0},
                      {8650, 280, 0},
                      {8700, 280, 0},
                      {8750, 280, 0},
                      {8800, 280, 0},
                      {8850, 280, 0},
                      {7800, 320, 1},
                      {8250, 160, 0},
                      {8300, 160, 0},
                      {7850, 320, 1},
                      {7900, 320, 1},
                      {7900, 280, 0},
                      {7950, 280, 0},
                      {8000, 280, 0},
                      {8000, 240, 0},
                      {8050, 240, 0},
                      {8100, 240, 0},
                      {8100, 200, 0},
                      {8150, 200, 0},
                      {8200, 200, 0},
                      {8200, 160, 0}};
    for (int i = 0; i < 52; i++) {
        v.push_back(arr[i][0]);
        v.push_back(arr[i][1]);
        v.push_back(arr[i][2]);
        v2.push_back(v);
        v.clear();
    }
    m.insert(1, v2);
}

void Unknown::Unknown_State() {
    if (unknown_state == 750) {
        unknown_state = 0;
    }
    unknown_state += 50;
}


void Unknown::Unknown_crash(QVector < QVector < int >> ::iterator it){
    musicPlayer->play(CoinMusic);
    coin_state = 30;
    coin_x = *it->begin() + 10;
    coin_y = *(it->begin() + 1);
}

void Unknown::Crash_state() {

    if (coin_state > 0 && coin_state < 240) {
        coin_state += 30;
        coin_y -= 20;
    } else if (coin_state == 240) {
        coin_state = 0;
    }
}

