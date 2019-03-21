//
//  main.cpp
//  2005LovelyNumber
//
//  Created by 许滨楠 on 2019/3/21.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, t, i, res;
    while (cin >> n) {
        res = 0;
        for (i = 0; i < n; ++i) {
            cin >> t;
            res ^= t;
        }
        cout << res << endl;
    }
    return 0;
}
