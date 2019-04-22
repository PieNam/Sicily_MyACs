//
//  main.cpp
//  4427GCDInRange
//
//  Created by 许滨楠 on 2019/4/22.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int i, t, n, m, a, b;
    cin >> t;
    while (t--) {
        int res = -1;
        cin >> n >> m >> a >> b;
        for (i = b; i >= a; --i) {
            if (0 == n % i && 0 == m % i) {
                res = i;
                break;
            }
        }
        if (-1 == res) cout << "No answer";
        else cout << res;
        cout << endl;
    }
    return 0;
}
