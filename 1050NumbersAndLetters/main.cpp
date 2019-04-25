//
//  main.cpp
//  1050NumbersAndLetters
//
//  Created by 许滨楠 on 2019/4/25.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int aim, a[5], res;

void dfs(int n) {
    int i, j;
    for (i = 0; i < n; ++i)
        if (a[i] <= aim && a[i] > res)
            res = a[i];
    if (res == aim || 1 == n) return;
    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            int x = a[i], y = a[j];
            a[j] = a[n-1];
            a[i] = x + y;
            dfs(n-1);
            a[i] = x - y;
            dfs(n-1);
            a[i] = y - x;
            dfs(n-1);
            a[i] = x * y;
            dfs(n-1);
            if (y != 0 && 0 == x % y) {
                a[i] = x / y;
            } else if (x != 0 && 0 == y % x) {
                a[i] = y / x;
            }
            dfs(n-1);
            a[i] = x;
            a[j] = y;
        }
    }
}

int main() {
    int t, i;
    cin >> t;
    while (t--) {
        for (i = 0; i < 5; ++i) cin >> a[i];
        cin >> aim;
        res = -(1<<30);
        dfs(5);
        cout << res << endl;
    }
    return 0;
}
