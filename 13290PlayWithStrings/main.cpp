//
//  main.cpp
//  13290PlayWithStrings
//
//  Created by 许滨楠 on 2019/5/24.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    string x, y;
    cin >> x >> y;
    int a[26] = {0}, b[26] = {0}, i, xl = (int)x.length(), yl = (int)y.length();
    if (xl != yl) {
        cout << "NO\n";
        return 0;
    }
    for (i = 0; i < xl; ++i) {
        ++a[x[i] - 'a'];
        ++b[y[i] - 'a'];
    }
    for (i = 0; i < 26; ++i) {
        if (a[i] != b[i]) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
