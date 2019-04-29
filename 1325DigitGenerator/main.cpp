//
//  main.cpp
//  1325DigitGenerator
//
//  Created by 许滨楠 on 2019/4/29.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, nc, sum, cnt = 1, i, ic;
        cin >> n;
        nc = n;
        while (nc /= 10) ++cnt;
        int num = 0;
        for (i = n - 9 * cnt; i < n; ++i) {
            sum = ic = i;
            while (ic) {
                sum += ic % 10;
                ic /= 10;
            }
            if (sum == n) {
                num = i;
                break;
            }
        }
        cout << num << endl;
    }
    return 0;
}
