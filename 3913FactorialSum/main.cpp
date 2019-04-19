//
//  main.cpp
//  3913FactorialSum
//
//  Created by 许滨楠 on 2019/4/19.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, res = 0, i, j;
    cin >> n;
    for (j = 1; j <= n && j < 30; ++j) {
        int fac = 1;
        for (i = 1; i <= j; ++i) fac = (fac * i) % 1000000;
        res = (res + fac) % 1000000;
    }
    cout << res << endl;
    return 0;
}
