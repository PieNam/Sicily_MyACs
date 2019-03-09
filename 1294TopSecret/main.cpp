//
//  main.cpp
//  1294TopSecret
//
//  Created by 许滨楠 on 2019/3/9.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int a, b, c, res = 1, i;
    cin >> a >> b >> c;
    for (i = 0; i < b; ++i) {
        res *= a;
        res %= c;
    }
    cout << res << endl;
    return 0;
}
