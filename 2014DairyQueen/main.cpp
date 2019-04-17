//
//  main.cpp
//  2014DairyQueen
//
//  Created by 许滨楠 on 2019/4/17.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, c, a[10], i, j, k, d[301] = {0};
    cin >> n >> c;
    for (i = 0; i < c; ++i) cin >> a[i];
    d[0] = 1;
    for (i = c-1; i >= 0; --i)
        for (j = n; j >= 1; --j)
            for (k = 1; j-a[i]*k>=0; ++k)
                d[j] += d[j-a[i]*k];
    cout << d[n] << endl;
    return 0;
}
