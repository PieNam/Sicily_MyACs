//
//  main.cpp
//  12985SumFun
//
//  Created by 许滨楠 on 2019/5/7.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t, i, a[3];
    cin >> t;
    while (t--) {
        int max = 0, min = 101, mid, sum = 0, xi = 0, ni = 0, di;
        for (i = 0; i < 3; ++i) {
            cin >> a[i];
            sum += a[i];
            if (max < a[i]) {
                max = a[i];
                xi = i;
            }
            if (min > a[i]) {
                min = a[i];
                ni = i;
            }
        }
        mid = sum - max - min;
        di = 3 - xi - ni;
        if (max == min + mid) cout << (ni > di ? mid : min) << " + "
            << (ni > di ? min : mid) << " = " << max << endl;
        else cout << a[0] << " " << a[1] << " " << a[2] << " NO SUM\n";
    }
    return 0;
}
