//
//  main.cpp
//  1293NumberChain
//
//  Created by 许滨楠 on 2019/3/9.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int i, j, k, length, max = 0, t;
    cin >> i >> j;
    for (k = i; k <= j; ++k) {
        t = k;
        length = 1;
        while (t != 1) {
            if (t % 2) t = 3 * t + 1;
            else t /= 2;
            ++length;
        }
        if (length > max) max = length;
    }
    cout << max << endl;
    return 0;
}
