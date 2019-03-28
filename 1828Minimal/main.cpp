//
//  main.cpp
//  1828Minimal
//
//  Created by 许滨楠 on 2019/3/28.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

const int inf = 1<<30;

int main() {
    int t, n, m, i, j;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int s1[n+1], s2[m+1];
        int f[n+1][m+1];
        for (i = 1; i <= n; ++i) cin >> s1[i];
        for (i = 1; i <= m; ++i) cin >> s2[i];
        sort(s1+1, s1+n+1);
        sort(s2+1, s2+m+1);
        for (i = 0; i <= n; ++i)
            for (j = 0; j <= m; ++j) {
                if (!i && !j) f[i][j] = 0;
                else if (j < i) f[i][j] = inf;
                else {
                    f[i][j] = inf;
                    if (i > 0) f[i][j] = min(f[i][j], f[i - 1][j - 1] + abs(s1[i] - s2[j]));
                    if (j > 0) f[i][j] = min(f[i][j], f[i][j - 1]);
                }
            }
        cout << f[n][m] << endl;
    }
    return 0;
}
