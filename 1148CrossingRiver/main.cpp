//
//  main.cpp
//  1148CrossingRiver
//
//  Created by 许滨楠 on 2019/3/30.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int l, s, t, m, b[101], i, j, res = 0, dp[2001] = {0}, step;
    bool has[2001] = {false};
    cin >> l >> s >> t >> m;
    for (i = 0; i < m; ++i) cin >> b[i];
    if (s == t) {
        for (i = 0; i < m; ++i)
            if (b[i] % s == 0) ++res;
        cout << res << endl;
        return 0;
    }
    sort(b, b + m);
    if (b[0] > 20) {
        step = b[0] - 20;
        for (i = 0; i < m; ++i) b[i] -= step;
    }
    has[b[0]] = true;
    for (i = 1; i < m; ++i) {
        if (b[i] - b[i-1] > 20) {
            step = b[i] - b[i-1] - 20;
            for (j = i; j < m; ++j) b[j] -= step;
        }
        has[b[i]] = true;
    }
    while (l - b[m-1] > s + 2 * t) l -= (s + t);
    for (i = 0; i < s; ++i) dp[i] = m;
    for (; i <= t; ++i) dp[i] = (has[i] ? 1 : 0);
    for (; i <= l; ++i) {
        dp[i] = m;
        for (j = s; j <= t; ++j)
            if (i - j >= 0) dp[i] = min(dp[i], dp[i-j]) + (has[i]?1:0);
    }
    cout << dp[l] << endl;
    return 0;
}
