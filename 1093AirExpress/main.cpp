//
//  main.cpp
//  1093AirExpress
//
//  Created by 许滨楠 on 2019/3/20.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int tw, r[4], w[3], count = 1, i, p[4];
    while (cin >> w[0] >> r[0]) {
        for (i = 1; i < 3; ++i) cin >> w[i] >> r[i];
        cin >> r[3];
        cout << "Set number " << count++ << ":" << endl;
        while (cin >> tw && tw) {
            for (i = 0; i < 4; ++i) p[i] = 1002002;
            if (tw <= w[0]) {
                p[0] = tw * r[0];
                for (i = 1; i < 4; ++i) {
                    p[i] = (w[i-1] + 1) * r[i];
                }
            } else if (tw <= w[1]) {
                p[1] = tw * r[1];
                for (i = 2; i < 4; ++i) {
                    p[i] = (w[i-1] + 1) * r[i];
                }
            } else if (tw <= w[2]) {
                p[2] = tw * r[2];
                p[3] = (w[2] + 1) * r[3];
            } else {
                p[3] = tw * r[3];
            }
            int min = 1002002, index = 3;
            for (i = 0 ; i < 4; ++i) {
                if (p[i] < min) {
                    min = p[i];
                    index = i;
                }
            }
            cout << "Weight (" << tw << ") has best price $" << p[index]
                 << " (add " << (index==0||tw>w[index-1] ? 0 : w[index-1]+1-tw)
                 << " pounds)" << endl;
        }
        cout << endl;
    }
    return 0;
}
