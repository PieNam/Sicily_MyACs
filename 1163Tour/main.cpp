//
//  main.cpp
//  1163Tour
//
//  Created by 许滨楠 on 2019/3/30.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int i, j, n, x[51], y[51];
    double dp[51][51], d[51][51];
    while (cin >> n) {
        for (i = 0; i < n; ++i) cin >> x[i] >> y[i];
        for (i = 0; i < n; ++i)
            for (j = 0; j < i; ++j)
                d[i][j] = sqrt((x[i]-x[j])*(x[i]-x[j])
                               +(y[i]-y[j])*(y[i]-y[j]));
        dp[1][0] = dp[0][1] = d[1][0];
        for (i = 2; i < n; ++i) {
            dp[i][i-1] = 1<<30;
            for (j = 0; j < i-1; ++j) {
                dp[i][i-1] = min(dp[i][i-1], d[i][j] + dp[i-1][j]);
                dp[i][j] = d[i][i-1] + dp[i-1][j];
            }
        }
        double res = 1<<30;
        for (i = 0; i < n - 1; ++i)
            res = min(res, dp[n-1][i] + d[n-1][i]);
        cout << fixed << setprecision(2) << res << endl;
    }
    return 0;
}
