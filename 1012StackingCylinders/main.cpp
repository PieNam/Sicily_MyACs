//
//  main.cpp
//  1012StackingCylinders
//
//  Created by 许滨楠 on 2019/4/3.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

void cal(double &x1, double &y1, double x2, double y2) {
    double l = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)),
    mid = sqrt(4-l*l/4),
    sin = (y2-y1)/l,
    cos = (x2-x1)/l,
    midx = (x1+x2)/2,
    midy = (y1+y2)/2;
    x1 = midx - mid * sin;
    y1 = midy + mid * cos;
}

int main() {
    int n, i, j;
    double x[10], y[10];
    while (cin >> n && n) {
        for (i = 0; i < n; ++i) {
            cin >> x[i];
            y[i] = 1;
        }
        sort(x, x+n);
        for (i = n-1; i > 0; --i)
            for (j = 0; j < i; ++j)
                cal(x[j], y[j], x[j+1], y[j+1]);
        cout << fixed << setprecision(4) << x[0] << " " << y[0] << endl;
    }
    return 0;
}
