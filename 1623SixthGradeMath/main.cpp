//
//  main.cpp
//  1623SixthGradeMath
//
//  Created by 许滨楠 on 2019/3/14.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int gcd(int a, int b) {
    int c = a % b;
    if (!c) return b;
    else return gcd(b, c);
}

int main() {
    int count = 1, t, a, b, gcdres, lcmres;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        gcdres = (a > b ? gcd(a, b) : gcd(b, a));
        lcmres = a * b / gcdres;
        cout << count++ << " " << lcmres << " " << gcdres << endl;
    }
    return 0;
}
