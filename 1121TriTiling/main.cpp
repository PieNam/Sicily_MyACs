//
//  main.cpp
//  1121TriTiling
//
//  Created by 许滨楠 on 2019/3/25.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, i, j, dp[31] = {0};
    dp[0] = 1;
    dp[2] = 3;
    for (i = 4; i <= 30; i += 2) {
        dp[i] = dp[i-2] * 3;
        for (j = i-4; j >= 0; j -= 2) dp[i] += dp[j] * 2;
    }
    while (cin >> n && n != -1) {
        cout << (n % 2 ? 0 : dp[n]) << endl;
    }
    return 0;
}
