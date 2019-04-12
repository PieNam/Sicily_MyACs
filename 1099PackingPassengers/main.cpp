//
//  main.cpp
//  1099PackingPassengers
//
//  Created by 许滨楠 on 2019/4/12.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

long long gcd_extend(int &a, int b, long long *x, long long *y) {
    static long long r, t;
    if (!b) {
        *x = 1;
        *y = 0;
        return a;
    } else {
        r = gcd_extend(b, a % b, x, y);
        t = *x;
        *x = *y;
        *y = t - a / b * (*y);
        return r;
    }
}

int main() {
    int p, ca, pa, cb, pb, count = 0;
    long long lower, upper, k, gcd, x, y;
    while (cin >> p && p) {
        cout << "Data set " << ++count << ": ";
        cin >> ca >> pa >> cb >> pb;
        gcd = gcd_extend(pa, pb, &x, &y);
        if (0 == p % gcd) {
            x *= p / gcd;
            y *= p / gcd;
            upper = floor((double)y/(pa/gcd));
            lower = ceil((double)-x/(pb/gcd));
            k = pb * ca - pa * cb <= 0 ? upper : lower;
            cout << x+(pb/gcd)*k << " aircraft A, " << y-(pa/gcd)*k << " aircraft B\n";
        }
        else cout << "cannot be flown\n";
    }
    return 0;
}
