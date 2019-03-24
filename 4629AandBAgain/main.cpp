//
//  main.cpp
//  4629AandBAgain
//
//  Created by 许滨楠 on 2019/3/24.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (a > b) {
        if (0 == a % b) {
            return b;
        }
        return gcd(b, a % b);
    }
    if (0 == b % a) return a;
    return gcd(a, b % a);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int t, a, b, c, d, af, cf, numerator, denominator, f;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> d;
        denominator = lcm(b, d);
        af = denominator / b;
        cf = denominator / d;
        numerator = af * a + cf * c;
        f = gcd(denominator, numerator);
        denominator /= f;
        numerator /= f;
        if (1 == denominator) cout << numerator;
        else cout << numerator << "/" << denominator;
        cout << endl;
    }
    return 0;
}
