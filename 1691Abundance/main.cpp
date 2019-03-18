//
//  main.cpp
//  1691Abundance
//
//  Created by 许滨楠 on 2019/3/18.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t, a, b, i, j, res;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int max = -1;
        for (i = a; i <= b; ++i) {
            int sigma = 1;
            for (j = 2; j <= sqrt(i); ++j) {
                if (i % j == 0) {
                    sigma += j;
                    if (j != sqrt(i)) sigma += i/j;
                }
            }
            res = sigma - i;
            if (res && res > max) max = res;
        }
        cout << max << endl;
    }
    return 0;
}
