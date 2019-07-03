//
//  main.cpp
//  13914TrainPassenger
//
//  Created by 许滨楠 on 2019/7/3.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    bool flag = true;
    int c, n, m = 0, l, e, w = 0;
    cin >> c >> n;
    while (n--) {
        cin >> l >> e >> w;
        if (l > m) flag = false;
        m -= l;
        if (e + m > c) flag = false;
        m += e;
        if (c > m && w) flag = false;
    }
    cout << (flag && 0 == m && 0 == w ? "possible\n" : "impossible\n");
    return 0;
}
