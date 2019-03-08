//
//  main.cpp
//  1157TheHardestProblem
//
//  Created by 许滨楠 on 2019/3/8.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, i;
    long long max, t;
    while (cin >> n && n) {
        cin >> max;
        for (i = 1; i < n; ++i) {
            cin >> t;
            if (t > max) max = t;
        }
        cout << max << endl;
    }
    return 0;
}
