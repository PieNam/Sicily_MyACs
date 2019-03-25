//
//  main.cpp
//  1011LennysLuckyLotto
//
//  Created by 许滨楠 on 2019/3/25.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int c, n, m, t, i, j, k;
    long long dp[12][2002], res;
    cin >> c;
    for (t = 1; t <= c; ++t) {
        cin >> n >> m;
        cout << "Case " << t << ": n = " << n
             << ", m = " << m << ", # lists = ";
        for (i = 0; i < 12; ++i)
            for (j = 0; j < 2002; ++j)
                dp[i][j] = 0;
        for (i = 0; i < 2002; ++i) dp[1][i] = 1;
        for (i = 2; i <= n; ++i)
            for (j = 1; j <= m; ++j)
                for (k = 1; k <= j/2; ++k)
                    dp[i][j] += dp[i-1][k];
        res = 0;
        for (i = 1; i <= m; ++i) res += dp[n][i];
        cout << res << endl;
    }
    return 0;
}
