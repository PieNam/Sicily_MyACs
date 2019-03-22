//
//  main.cpp
//  3496ChickAndRabbit
//
//  Created by 许滨楠 on 2019/3/22.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int m, n, i;
    while (cin >> m >> n && m && n) {
        int x = 0, y = 0;
        for (i = 0; i < m; ++i) {
            if (i * 2 + (m - i) * 4 == n) {
                x = i;
                y = m - x;
            }
        }
        if (!(x || y)) cout << "No answer";
        else cout << x << " " << y;
        cout << endl;
    }
    return 0;
}
