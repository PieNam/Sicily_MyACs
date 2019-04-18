//
//  main.cpp
//  3912WeekCalculating
//
//  Created by 许滨楠 on 2019/4/18.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t, i, m, d, y[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    string week[7] = {"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday", "Thursday"};
    cin >> t;
    while (t--) {
        int day = 0;
        cin >> m >> d;
        if (1 == m) cout << week[d % 7];
        else {
            for (i = 1; i < m; ++i) day += y[i];
            day += d;
            cout << week[day % 7];
        }
        cout << endl;
    }
    return 0;
}
