//
//  main.cpp
//  1687Permutation
//
//  Created by 许滨楠 on 2019/4/24.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int m, n, i, j, dp[101][101] = {0};
    for (i = 1; i < 101; ++i) {
        dp[i][0] = 1;
        for (j = 1; j < 101; ++j)
            if (j == i - 1) dp[i][j] = 1;
            else dp[i][j] = (((j+1)*dp[i-1][j])%2007 + (i-j)*dp[i-1][j-1]%2007)%2007;
    }
    while (cin >> m >> n)
        cout << dp[m][n] << endl;
    return 0;
}
