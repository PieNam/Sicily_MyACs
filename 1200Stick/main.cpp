//
//  main.cpp
//  1200Stick
//
//  Created by 许滨楠 on 2019/3/9.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, i;
    while (cin >> n && n) {
        int res = 0, t;
        for (i = 0; i < n; ++i) {
            cin >>t;
            res ^= t;
        }
        cout << res << endl;
    }
    return 0;
}
