//
//  main.cpp
//  1815Distance
//
//  Created by 许滨楠 on 2019/3/20.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int t;
    double ax, ay, bx, by;
    cin >> t;
    while (t--) {
        cin >> ax >> ay >> bx >> by;
        cout << fixed << setprecision(2)
             << sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by))
             << endl;
    }
    return 0;
}
