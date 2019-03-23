//
//  main.cpp
//  3499ScoreCalculating
//
//  Created by 许滨楠 on 2019/3/23.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int t, m, i;
    cin >> t;
    while (t--) {
        int sum = 0, max = -1, min = 101, temp, count = -2;
        cin >> m;
        for (i = 0; i < m; ++i) {
            cin >> temp;
            if (temp > max) max = temp;
            if (temp < min) min = temp;
            sum += temp;
            ++count;
        }
        sum -= max;
        sum -= min;
        cout << fixed << setprecision(2) << (double)sum / count << endl;
    }
    return 0;
}
