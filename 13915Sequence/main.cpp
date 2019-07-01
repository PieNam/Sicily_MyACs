//
//  main.cpp
//  13915Sequence
//
//  Created by 许滨楠 on 2019/7/1.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, i, t, sum, prev = 0;
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> t;
        sum = t * i;
        cout << sum - prev;
        if (i != n) cout << " ";
        prev = sum;
    }
    cout << endl;
}
