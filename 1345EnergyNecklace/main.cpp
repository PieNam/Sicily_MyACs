//
//  main.cpp
//  1345EnergyNecklace
//
//  Created by 许滨楠 on 2019/3/31.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n, i, j, k, res;
    while (cin >> n) {
        int b[n], dp[n][n+1];
        for (i = 0; i < n; ++i) cin >> b[i];
        memset(dp, 0, sizeof(dp));
        for (i = 0; i < n; ++i) dp[i][2] = b[i]*b[(i+1)%n]*b[(i+2)%n];
        for (i = 3; i <= n; ++i)
            for (j = 0; j < n; ++j) {
                res = 0;
                for (k = 1; k < i; ++k)
                    res = max(res, dp[j][k]+dp[(j+k)%n][i-k]+b[j]*b[(j+k)%n]*b[(j+i)%n]);
                dp[j][i] = res;
            }
        res = 0;
        for (i = 0; i < n; ++i) res = max(res, dp[i][n]);
        cout << res << endl;
    }
    return 0;
}
