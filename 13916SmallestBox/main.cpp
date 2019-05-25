//
//  main.cpp
//  13916SmallestBox
//
//  Created by 许滨楠 on 2019/5/25.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, i, x, y, minx = 101, maxx = 0, miny = 101, maxy = 0;
    cin >> n;
    for (i = 0; i < n; ++i) {
        cin >> x >> y;
        if (x > maxx) maxx = x;
        if (x < minx) minx = x;
        if (y > maxy) maxy = y;
        if (y < miny) miny = y;
    }
    cout << (((maxx-minx) > (maxy-miny)) ? (maxx-minx)*(maxx-minx) : (maxy-miny)*(maxy-miny)) << endl;
    return 0;
}
