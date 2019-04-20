//
//  main.cpp
//  4699SimpleHash
//
//  Created by 许滨楠 on 2019/4/20.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, m, t, i, j;
    cin >> n >> m;
    int hash[m];
    for (i = 0; i < m; ++i) hash[i] = -1;
    for (i = 0; i < n; ++i) {
        cin >> t;
        if (-1 == hash[t%m]) hash[t%m] = t;
        else {
            for (j = (t + 1) % m; j < m; ++j) {
                if (-1 == hash[j]) {
                    hash[j] = t;
                    break;
                }
                j %= m;
            }
        }
    }
    for (i = 0; i < m; ++i) {
        cout << i << "#";
        if (-1 == hash[i]) cout << "NULL\n";
        else cout << hash[i] << endl;
    }
    return 0;
}
