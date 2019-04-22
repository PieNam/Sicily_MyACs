//
//  main.cpp
//  2503LongestString
//
//  Created by 许滨楠 on 2019/4/22.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int solve(int ca, int cb, int ma, int mb) {
    if (!ma) return min(cb, mb);
    if (!mb) return min(ca, ma);
    int a = cb / mb, b = ceil(cb / mb);
    if (ca > b) return min(ca+cb, cb+(b+1)*ma);
    else {
        if (ca < a) return (mb+1)*ca+mb;
        if (ca == a) return (mb+1)*ca;
        return ca+cb;
    }
}

int main() {
    int ca, cb, ma, mb;
    cin >> ca >> cb >> ma >> mb;
    cout << max(solve(ca, cb, ma, mb), solve(cb, ca, mb, ma)) << endl;
    return 0;
}
