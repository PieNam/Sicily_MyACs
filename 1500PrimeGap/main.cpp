//
//  main.cpp
//  1500PrimeGap
//
//  Created by 许滨楠 on 2019/4/12.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

bool PriJud(int x) {
    for (int i = 2; i <= sqrt(x); ++i)
        if (0 == x % i) return false;
    return true;
}


int main() {
    int n;
    while (cin >> n && n) {
        if (PriJud(n)) {
            cout << 0 << endl;
            continue;
        }
        int ans = 1, i;
        for (i = n - 1; i > 1; --i)
            if (!PriJud(i)) ++ans;
            else break;
        for (i = n + 1; true; ++i)
            if (!PriJud(i)) ++ans;
            else break;
        cout << ans + 1 << endl;
    }
    return 0;
}
