//
//  main.cpp
//  1264AtomicCarRace
//
//  Created by 许滨楠 on 2019/3/30.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, i, j, a[101];
    double b, e, f, v, r, dp[101], t[10001];
    while (cin >> n && n) {
        a[0] = dp[0] = t[0] = 0;
        for (i = 1; i <= n; ++i) cin >> a[i];
        cin >> b >> r >> v >> e >> f;
        for (i = 0; i < a[n]; ++i)
            t[i+1] = t[i] + (i<r ? 1/(v-f*(r-i)) : 1/(v-e*(i-r)));
        for (i = 1; i <= n; ++i) {
            dp[i] = 1<<30;
            for (j = 0; j < i; ++j)
                dp[i] = min(dp[i], dp[j] + t[a[i]-a[j]] + b);
        }
        cout << fixed << setprecision(4) << dp[n] - b << endl;
    }
    return 0;
}
