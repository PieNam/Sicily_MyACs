//
//  main.cpp
//  6774BuyingMortadella
//
//  Created by 许滨楠 on 2019/5/22.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, i;
    double min, x, y, xt, yt;
    cin >> x >> y >> n;
    min = 1000 / y * x;
    for (i = 0; i < n; ++i) {
        cin >> xt >> yt;
        if (1000/yt*xt < min) min = 1000 / yt * xt;
    }
    cout << fixed << setprecision(2) << min << endl;
    return 0;
}
