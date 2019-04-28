//
//  main.cpp
//  1795TableTennis
//
//  Created by 许滨楠 on 2019/4/28.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t, n, x, y, i;
    cin >> t;
    while (t--) {
        cin >> n;
        int r = 0;
        for (i = 0; i < n; ++i) {
            cin >> x >> y;
            if ((x-30)*(x-30)+(y-30)*(y-30)<400) r += 1;
            if ((x-100)*(x-100)+(y-30)*(y-30)<100) r += 2;
            if ((x-170)*(x-170)+(y-30)*(y-30)<25) r += 3;
        }
        cout << r << endl;
    }
    return 0;
}
