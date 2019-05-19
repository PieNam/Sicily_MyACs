//
//  main.cpp
//  1052CandySharingGame
//
//  Created by 许滨楠 on 2019/5/19.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n && n) {
        int a[n], i, cnt = 0, lh;
        for (i = 0; i < n; ++i) {
            cin >> a[i];
        }
        while (true) {
            bool flag = true;
            for (i = 0; i < n - 1; ++i) {
                if (a[i] != a[i+1]) {
                    flag = false;
                    break;
                }
            }
            if (flag) break;
            ++cnt;
            lh = a[n-1] / 2;
            for (i = n - 1; i > 0; --i) {
                a[i] = a[i] / 2 + a[i-1] / 2;
                if (a[i] % 2) ++a[i];
            }
            a[0] = a[0] / 2 + lh;
            if (a[0] % 2) ++a[0];
        }
        cout << cnt << " " << a[0] << endl;
    }
    return 0;
}
