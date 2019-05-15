//
//  main.cpp
//  1930Sort
//
//  Created by 许滨楠 on 2019/5/15.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t, n, i, j;
    cin >> t;
    while (t--) {
        cin >> n;
        int cnt = 0, a[n], tmp, min;
        for (i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (i = 0; i < n - 1; ++i) {
            min = i;
            for (j = i + 1; j < n; ++j) {
                if (a[min] > a[j]) {
                    ++cnt;
                    min = j;
                }
            }
            tmp = a[min];
            a[min] = a[i];
            a[i] = tmp;
        }
        cout << cnt << endl;
    }
    return 0;
}
