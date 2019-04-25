//
//  main.cpp
//  1443PrinterQueue
//
//  Created by 许滨楠 on 2019/4/25.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t, i, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int p[n];
        for (i = 0; i < n; ++i) cin >> p[i];
        int c = 0, cnt = 0;
        while (true) {
            for (i = (c+1)%n; i != c; i = (i+1)%n)
                if (p[i] > p[c]) break;
            if (i == c) {
                ++cnt;
                p[i] = -1;
                if (i == m) break;
            }
            c = (c + 1) % n;
        }
        cout << cnt << endl;
    }
    return 0;
}
