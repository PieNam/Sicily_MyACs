//
//  main.cpp
//  4315DigitCount
//
//  Created by 许滨楠 on 2019/3/24.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int digit[10] = {0};

void counter(int x) {
    while (x) {
        ++digit[x % 10];
        x /= 10;
    }
}

int main() {
    int t, n, i;
    cin >> t;
    while (t--) {
        cin >> n;
        for (i = 0; i < 10; ++i) digit[i] = 0;
        for (i = 1; i <= n; ++i) {
            counter(i);
        }
        for (i = 0; i < 9; ++i) cout << digit[i] << " ";
        cout << digit[9] << endl;
    }
    return 0;
}
