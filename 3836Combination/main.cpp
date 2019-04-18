//
//  main.cpp
//  3836Combination
//
//  Created by 许滨楠 on 2019/4/18.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int m, n, i;
    while (cin >> m >> n && (m || n)) {
        int res = 1;
        for (i = m; i > m-n; --i)
            res *= i;
        for (i = n; i > 1; --i)
            res /= i;
        cout << res << endl;
    }
    return 0;
}
