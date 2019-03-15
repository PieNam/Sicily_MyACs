//
//  main.cpp
//  1051BikersTripOdomete
//
//  Created by 许滨楠 on 2019/3/15.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float d, dis, t;
    int r, count = 0;
    while (cin >> d >> r >> t && r) {
        dis = d * 3.1415927 * r / 12 / 5280;
        cout << "Trip #" << ++count << ": ";
        cout << fixed << setprecision(2)
             << dis << " " << dis / t * 3600 << endl;
    }
    return 0;
}
