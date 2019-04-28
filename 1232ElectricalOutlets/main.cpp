//
//  main.cpp
//  1232ElectricalOutlets
//
//  Created by 许滨楠 on 2019/4/28.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t, n, i, s;
    cin >> t;
    while (t--) {
        cin >> n;
        int ans = 0;
        for (i = 0; i < n; ++i) {
            cin >> s;
            if (i == 0) ans += s;
            else ans = ans + s - 1;
        }
        cout << ans << endl;
    }
    return 0;
}
