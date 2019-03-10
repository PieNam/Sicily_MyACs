//
//  main.cpp
//  1341MingsRandom
//
//  Created by 许滨楠 on 2019/3/10.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, i, t;
    while (cin >> n) {
        set<int, less<int>> s;
        for (i = 0; i < n; ++i) {
            cin >> t;
            s.insert(t);
        }
        cout << s.size() << endl;
        auto it = s.begin();
        cout << *it;
        ++it;
        for (; it != s.end(); ++it) {
            cout << " " << *it;
        }
        cout << endl;
    }
    return 0;
}
