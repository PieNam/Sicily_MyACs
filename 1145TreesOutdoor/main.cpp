//
//  main.cpp
//  1145TreesOutdoor
//
//  Created by 许滨楠 on 2019/3/7.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int i, l, t, a, b, res = 0;
    cin >> l >> t;
    bool * trees = new bool [l+1];
    for (i = 0; i <= l; ++i) trees[i] = true;
    while (t--) {
        cin >> a >> b;
        for (i = a; i <= b; ++i)
            trees[i] = false;
    }
    for (i = 0; i <= l; ++i)
        if (trees[i]) ++res;
    cout << res << endl;
    return 0;
}
