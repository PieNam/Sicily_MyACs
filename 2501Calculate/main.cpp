//
//  main.cpp
//  2501Calculate
//
//  Created by 许滨楠 on 2019/3/24.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, k, i, res = 0;
    cin >> n >> k;
    k %= 9900;
    for (i = 1; i <= k; ++i) {
        res = (res + 1) * n;
        res %= 9901;
    }
    cout << res << endl;
    return 0;
}
