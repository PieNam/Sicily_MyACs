//
//  main.cpp
//  1381AMulB
//
//  Created by 许滨楠 on 2019/4/2.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

string mul(string a, int b) {
    int c = 0, l = (int)a.size(), t;
    string res = "";
    for (int i = l-1; i >= 0; --i) {
        t = c + (a[i] - '0') * b;
        res = char(t % 10 + '0') + res;
        c = t / 10;
    }
    while (c) {
        res = char(c % 10 + '0') + res;
        c /= 10;
    }
    return res;
}

int main() {
    string a, res;
    int t, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        res = mul(a, b);
        while (res[0] == '0') res.erase(0, 1);
        if (!res.size()) cout << 0 << endl;
        else cout << res << endl;
    }
    return 0;
}
