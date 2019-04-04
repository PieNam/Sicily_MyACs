//
//  main.cpp
//  1134BlocksDistribution
//
//  Created by 许滨楠 on 2019/4/4.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

struct kid {
    int has;
    int wants;
};

bool cmp(kid a, kid b) {
    return a.wants < b.wants;
}

int main() {
    int n, s, i;
    while (cin >> n >> s && n) {
        kid k[n];
        for (i = 0; i < n; ++i)
            cin >> k[i].has >> k[i].wants;
        sort(k, k+n, cmp);
        i = 0;
        while (s >= k[i].wants && i < n) {
            s += k[i].has;
            ++i;
        }
        if (i == n) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
