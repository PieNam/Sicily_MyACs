//
//  main.cpp
//  1176TwoEnds
//
//  Created by 许滨楠 on 2019/3/27.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;

int c[1001], s[1001][1001];

int dp(int l, int r) {
    if (l > r) return 0;
    if (l == r) return c[l];
    if (s[l][r] != -1) return s[l][r];
    int takeLeft = 0, takeRight = 0;
    
    // take left
    if (c[r] > c[l+1])
        takeLeft = dp(1+l, r-1) + c[l];
    else
        takeLeft = dp(2+l, r) + c[l];
    
    // take right
    if (c[r-1] > c[l])
        takeRight = dp(l, r-2) + c[r];
    else
        takeRight = dp(l+1, r-1) + c[r];
    
    return s[l][r] = (takeLeft > takeRight ? takeLeft : takeRight);
}

int main() {
    int n, i, count = 0;
    while (cin >> n && n != 0) {
        int sum = 0;
        memset(c, -1, sizeof(c));
        memset(s, -1, sizeof(s));
        for (i = 0; i < n; ++i) {
            cin >> c[i];
            sum += c[i];
        }
        int a = dp(0, n-1), b = sum - a;
        cout << "In game " << ++count << ", the greedy strategy might lose by as many as " << a - b << " points." << endl;
    }
    return 0;
}
