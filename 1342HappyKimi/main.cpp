//
//  main.cpp
//  1342HappyKimi
//
//  Created by 许滨楠 on 2019/5/26.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, m, i, j;
    while (cin >> n >> m) {
        int dp[n+1], a[m], b[m];
        for (i = 0; i < m; ++i) {
            cin >> a[i] >> b[i];
        }
        for (i = 0; i <= n; ++i) {
            dp[i] = 0;
        }
        for (j = 0; j < m; ++j) {
            for (i = n; i >=a[j]; --i) {
                dp[i] = max(dp[i-a[j]]+a[j]*b[j], dp[i]);
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}
