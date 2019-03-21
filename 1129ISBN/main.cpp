//
//  main.cpp
//  1129ISBN
//
//  Created by 许滨楠 on 2019/3/21.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    string t;
    while (cin >> t) {
        int sum = 0, i, count = 10, res;
        for (i = 0; i < t.size(); ++i) {
            if (t[i] >= '0' && t[i] <= '9') {
                sum += (t[i] - '0') * count--;
            }
        }
        res = sum % 11 ? 11 - sum % 11 : 0;
        cout << t << "-";
        if (res == 10) cout << "X";
        else cout << res;
        cout << endl;
    }
    return 0;
}
