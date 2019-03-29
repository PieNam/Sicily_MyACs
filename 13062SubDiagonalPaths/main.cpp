//
//  main.cpp
//  13062SubDiagonalPaths
//
//  Created by 许滨楠 on 2019/3/29.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int i, j, n;
    long long dp[31] = {0};
    dp[0] = 1;
    dp[1] = 1;
    for (i = 2; i <= 30; ++i)
        for (j = 0; j < i; ++j)
            dp[i] += dp[j] * dp[i - 1 - j];
    while (cin >> n && n)
        cout << dp[n] << endl;
    return 0;
}
