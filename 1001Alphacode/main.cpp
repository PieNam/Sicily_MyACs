//
//  main.cpp
//  1001Alphacode
//
//  Created by 许滨楠 on 2019/3/6.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string line = "";
    while(cin >> line && line != "0") {
        int l = (int)line.size();
        long dp[l];
        dp[0] = 1;
        if (line[1] == '0' || (((line[0] - '0') * 10 + line[1] - '0') > 26)) dp[1] = 1;
        else dp[1] = 2;
        for (int i = 2; i < l; ++i) {
            if (line[i] == '0') {
                dp[i] = dp[i - 2];
            }
            else {
                if (line[i - 1] == '0') {
                    dp[i] = dp[i - 1];
                }
                else if (line[i - 1] == '1' || (line[i - 1] == '2' && line[i] >= '1' && line[i] <= '6')) {
                    dp[i] = dp[i - 1] + dp[i - 2];
                }
                else {
                    dp[i] = dp[i - 1];
                }
            }
        }
        cout << dp[l - 1] << endl;
    }
    return 0;
}
