//
//  main.cpp
//  1137RiverBed
//
//  Created by 许滨楠 on 2019/5/8.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m, i, j;
    cin >> n >> m;
    int a[n], b[n];
    for (i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = 0;
    }
    b[0] = 1;
    int max = 1;
    for (i = 1; i < n; ++i) {
        b[i] = 1;
        for (j = i - 1; j >= i - b[i-1]; --j) {
            if (abs(a[j] - a[i]) <= m) ++b[i];
            else break;
            if (max < b[i]) max = b[i];
        }
    }
    cout << max << endl;
    return 0;
}
