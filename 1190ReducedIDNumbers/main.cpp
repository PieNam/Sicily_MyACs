//
//  main.cpp
//  1190ReducedIDNumbers
//
//  Created by 许滨楠 on 2019/5/7.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t, i, j, n;
    bool f, a[1000001];
    cin >> t;
    while (t--) {
        cin >> n;
        int s[n];
        for (i = 0; i < n; ++i) cin >> s[i];
        for (i = n; i < 1000000; ++i) {
            f = 0;
            for (j = 0; j <= i; ++j) a[j] = false;
            for (j = 0; j < n; ++j) {
                if (a[s[j]%i]) {
                    f = true;
                    break;
                }
                a[s[j]%i] = true;
            }
            if (!f) break;
        }
        cout << i << endl;
    }
    return 0;
}
