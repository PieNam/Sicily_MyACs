//
//  main.cpp
//  8536HappyCamper
//
//  Created by 许滨楠 on 2019/5/20.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int l, p, v, cnt = 0, res;
    while (cin >> l >> p >> v && !(0 == l && 0 == p && 0 == v)) {
        res = v / p * l;
        if (v % p) {
            res += ((v % p) > l) ? l : (v % p);
        }
        cout << "Case " << ++cnt << ": " << res << endl;
    }
    return 0;
}
