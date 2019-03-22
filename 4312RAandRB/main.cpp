//
//  main.cpp
//  4312RAandRB
//
//  Created by 许滨楠 on 2019/3/22.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int reverser(int a) {
    int res = 0;
    while (a) {
        res = res * 10 + a % 10;
        a /= 10;
    }
    return res;
}

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << reverser(a) + reverser(b) << endl;
    }
    return 0;
}
