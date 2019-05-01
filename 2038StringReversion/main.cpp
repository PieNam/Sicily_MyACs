//
//  main.cpp
//  2038StringReversion
//
//  Created by 许滨楠 on 2019/5/1.
//  Copyright © 2019 许滨楠. All rights reserved.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string ori;
        cin >> ori;
        int l = (int)ori.length(), i, cnt = 0;
        string res[l];
        for (i = 0; i < l; ++i) {
            if (ori[i] != '_') {
                res[cnt] = ori[i] + res[cnt];
            }
            else {
                ++cnt;
            }
        }
        for (i = 0; i <= cnt; ++i) {
            cout << res[i];
            if (i < cnt) cout << '_';
        }
        cout << endl;
    }
    return 0;
}
