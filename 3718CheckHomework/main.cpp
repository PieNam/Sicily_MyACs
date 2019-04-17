//
//  main.cpp
//  3718CheckHomework
//
//  Created by 许滨楠 on 2019/4/17.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, m, i, j, f = 0;
    cin >> n >> m;
    float a[n][m], t;
    for (i = 0; i < n; ++i)
        for (j = 0; j < m; ++j)
            cin >> a[i][j];
    for (i = 0; i < n; ++i) {
        t = 0;
        for (j = 0; j < m; ++j) t += a[i][j];
        t /= m;
        if (t < 60) ++f;
        cout << fixed << setprecision(2) << t << endl;
    }
    cout << f << endl;
    return 0;
}
