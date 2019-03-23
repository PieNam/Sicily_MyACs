//
//  main.cpp
//  4700MingAndCow
//
//  Created by 许滨楠 on 2019/3/23.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t, i, n;
    cin >> t;
    while (t--) {
        int max[4] = {0};
        cin >> n;
        for (i = 0; i < n; ++i) {
            int index, qty;
            cin >> index >> qty;
            if (max[index] < qty) {
                max[index] = qty;
            }
        }
        for (i = 1; i < 4; ++i) {
            if (max[i])
                cout << i << " " << max[i] << endl;
        }
    }
    return 0;
}
