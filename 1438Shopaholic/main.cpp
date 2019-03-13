//
//  main.cpp
//  1438Shopaholic
//
//  Created by 许滨楠 on 2019/3/13.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t, i, n;
    cin >> t;
    while (t--) {
        int res = 0;
        cin >> n;
        int * price = new int[n];
        for (i = 0; i < n; ++i) {
            cin >> price[i];
        }
        sort(price, price+n);
        for (i = n % 3; i < n; i+=3) {
            res += price[i];
        }
        cout << res << endl;
    }
    return 0;
}
