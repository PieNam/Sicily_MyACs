//
//  main.cpp
//  1029Rabbit
//
//  Created by 许滨楠 on 2019/4/2.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

string hpadd(string a, string b) {
    if (a.size() < b.size()) swap(a, b);
    int la = (int)a.length(), lb = (int)b.length(), i, j;
    for (i = la-1, j = lb-1; i >= 0; --i, --j) {
        a[i] = char(a[i] + (j >= 0 ? b[j]-'0' : 0));
        if (a[i] - '0' >= 10) {
            a[i] = char((a[i] - '0') % 10 + '0');
            if (i) ++a[i-1];
            else a = '1' + a;
        }
    }
    return a;
}

int main() {
    int m, d, i;
    string t[10] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
    while (cin >> m >> d && m && d) {
        if (d <= m) cout << 1 + d << endl;
        else {
            string dp[d + 1];
            for (i = 0; i < m; ++i) dp[i] = t[i];
            for (i = m; i <= d; ++i) dp[i] = hpadd(dp[i-1], dp[i-m]);
            cout << dp[d] << endl;
        }
    }
    return 0;
}
