//
//  main.cpp
//  1014SpecializedFourDig
//
//  Created by 许滨楠 on 2019/3/6.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    for (int i = 1000; i <= 9999; ++i) {
        int hex = 0, duo = 0, dec = 0;
        int hext = i, duot = i, dect = i;
        for (int j = 0; j < 4; ++j) {
            dec += dect % 10;
            dect /= 10;
        }
        while (duot) {
            duo += duot % 12;
            duot /= 12;
        }
        while (hext) {
            hex += hext % 16;
            hext /= 16;
        }
        if (hex == duo && duo == dec) {
            cout << i << endl;
        }
    }
    return 0;
}
