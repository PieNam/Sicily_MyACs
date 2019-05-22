//
//  main.cpp
//  1122Prerequisites
//
//  Created by 许滨楠 on 2019/5/22.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <set>

using namespace std;

int main() {
    int k, m, i, t, cn, cr, j;
    while (cin >> k && k) {
        cin >> m;
        set<int> s;
        for (i = 0; i < k; ++i) {
            cin >> t;
            s.insert(t);
        }
        bool flag = true;
        for (i = 0; i < m; ++i) {
            int cnt = 0;
            cin >> cn >> cr;
            for (j = 0; j < cn; ++j) {
                cin >> t;
                if (s.find(t) != s.end()) ++cnt;
            }
            if (cnt < cr) flag = false;
        }
        if (flag) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}
