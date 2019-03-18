//
//  main.cpp
//  1608DigitCounting
//
//  Created by 许滨楠 on 2019/3/18.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t, n, i, count[10], temp;
    cin >> t;
    while (t--) {
        cin >> n;
        for (i = 0; i < 10; ++i) count[i] = 0;
        for (i = 1; i <= n; ++i) {
            if (i < 10) ++count[i];
            else {
                temp = i;
                while (temp) {
                    ++count[temp % 10];
                    temp /= 10;
                }
            }
        }
        for (i = 0; i < 9; ++i) {
            cout << count[i] << " ";
        }
        cout << count[9] << endl;
    }
    return 0;
}
