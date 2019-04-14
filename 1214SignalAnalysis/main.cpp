//
//  main.cpp
//  1214SignalAnalysis
//
//  Created by 许滨楠 on 2019/4/14.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long long l, num = 0, high;
    int digit = 1, i, bit[32], count = 0;
    cin >> l;
    while ((long long)pow(2, digit) <= l) ++digit;
    for (i = 1; i < digit; ++i) num += (long long)pow(2, (i+1)/2-1);
    high = l >> (digit / 2);
    if (digit % 2) num += high - (long long)pow(2, digit/2);
    else num += high - (long long)pow(2, digit/2-1);
    while (l != 0) {
        bit[count++] = l % 2;
        l /= 2;
    }
    bool flag = true;
    for (i = digit/2-1; i >= 0; --i) {
        if (bit[i] > bit[digit-i-1]) break;
        else if (bit[i] < bit[digit-i-1]) {
            flag = false;
            break;
        }
    }
    if (flag) num += 1;
    cout << num << endl;
    return 0;
}
