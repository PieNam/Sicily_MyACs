//
//  main.cpp
//  2000ToyShopping
//
//  Created by 许滨楠 on 2019/4/16.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

struct Toy {
    int joy;
    int price;
    double hfm;
} toy[25001];

int main() {
    int n, i, cnt = 0, a[4] = {0}, k = 0;
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> toy[i].joy >> toy[i].price;
        toy[i].hfm = (double)toy[i].joy / (double)toy[i].price;
    }
    while (k < 3) {
        double max = toy[0].hfm;
        for (i = 1; i <= n; ++i) {
            if (max < toy[i].hfm) {
                max = toy[i].hfm;
                a[k] = i;
            }
        }
        toy[a[k]].hfm = 0;
        ++k;
    }
    for (i = 0; i < 3; ++i) cnt += toy[a[i]].price;
    cout << cnt << endl;
    for (i = 0; i < 3; ++i) cout << a[i] << endl;
    return 0;
}
