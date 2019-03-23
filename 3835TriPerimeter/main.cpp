//
//  main.cpp
//  3835TriPerimeter
//
//  Created by 许滨楠 on 2019/3/23.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double dis(double xa, double ya, double xb, double yb) {
    return sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        cout << fixed << setprecision(5)
             << dis(x1,y1,x2,y2) + dis(x2,y2,x3,y3) + dis(x3,y3,x1,y1)
             << endl;
    }
    return 0;
}
