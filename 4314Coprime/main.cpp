//
//  main.cpp
//  4314Coprime
//
//  Created by 许滨楠 on 2019/3/23.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (0 == a % b) return b;
    else return gcd(b, a % b);
}

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (1 == (a > b ? gcd(a, b) : gcd(b, a))) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    return 0;
}
