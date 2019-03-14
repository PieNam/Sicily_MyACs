//
//  main.cpp
//  1636ShowMeTheMoney
//
//  Created by 许滨楠 on 2019/3/14.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t, i, money, n, price, qty;
    cin >> t;
    while (t--) {
        cin >> money >> n;
        for (i = 0; i < n; ++i) {
            cin >> price >> qty;
            money -= (price * qty);
        }
        if (money < 0) {
            cout << "Not enough" << endl;
            continue;
        }
        cout << money << endl;
    }
    return 0;
}
