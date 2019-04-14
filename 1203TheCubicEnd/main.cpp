//
//  main.cpp
//  1203TheCubicEnd
//
//  Created by 许滨楠 on 2019/4/14.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

long long mul(long long a, long long b, long long mod) {
    long long c = 0;
    for (; b > 0; b /= 2) {
        c += (b % 2) * a;
        c %= mod;
        a = (a * 2) % mod;
    }
    return c;
}

long long cube(long long x, long long mod) {
    return mul(mul(x, x, mod), x, mod);
}

int main() {
    int t, l, i;
    long long res, remain, power, step;
    string str;
    cin >> t;
    while (t--) {
        cin >> str;
        l = (int)str.size();
        res = remain = str[l-1] - '0';
        power = 10;
        if (3 == res) res = 7;
        else if (7 == res) res = 3;
        for (i = l - 2; i >= 0; --i) {
            remain += (str[i] - '0') * power;
            step = power;
            power *= 10;
            while (cube(res, power) != remain) res += step;
        }
        cout << res << endl;
    }
    return 0;
}
