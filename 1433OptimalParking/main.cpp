//
//  main.cpp
//  1433OptimalParking
//
//  Created by 许滨楠 on 2019/5/31.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t, n, i, tmp;
    cin >> t;
    while (t--) {
        cin >> n;
        int max = 0, min = 100;
        for (i = 0; i < n; ++i) {
            cin >> tmp;
            if (tmp > max) max = tmp;
            if (tmp < min) min = tmp;
        }
        cout << 2 * (max - min) << endl;
    }
    return 0;
}
