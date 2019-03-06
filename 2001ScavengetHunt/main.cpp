//
//  main.cpp
//  2001ScavengetHunt
//
//  Created by 许滨楠 on 2019/3/6.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int p, q, i, j, ac = 0, bc = 0;
    cin >> p >> q;
    int a[p / 2 + 1], b[q / 2 + 1];
    a[0] = b[0] = 1;
    if (p > q) {
        for (i = 2; i <= q; ++i) {
            if (p % i == 0) a[++ac] = i;
            if (q % i == 0) b[++bc] = i;
        }
        for (; i <= p; ++i) {
            if (p % i == 0) a[++ac] = i;
        }
    }
    else {
        for (i = 2; i <= p; ++i) {
            if (p % i == 0) a[++ac] = i;
            if (q % i == 0) b[++bc] = i;
        }
        for (; i <= q; ++i) {
            if (q % i == 0) b[++bc] = i;
        }
    }
    for (i = 0; i <= ac; ++i) {
        for (j = 0; j <= bc; ++j) {
            cout << a[i] << ' ' << b[j] << endl;
        }
    }
    return 0;
}
