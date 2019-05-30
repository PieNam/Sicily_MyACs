//
//  main.cpp
//  1395Rounders
//
//  Created by 许滨楠 on 2019/5/30.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t, i, cnt, res;
    double n;
    cin >> t;
    while (t--) {
        cin >> n;
        cnt = 0;
        if (n <= 10) {
            res = n;
            cout << res << endl;
        }
        else {
            while (n > 10) {
                ++cnt;
                n = round(n / 10);
            }
            res = n;
            for (i = 0; i < cnt; ++i) {
                res *= 10;
            }
            cout << res << endl;
        }
    }
    return 0;
}
