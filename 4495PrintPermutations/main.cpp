//
//  main.cpp
//  4495PrintPermutations
//
//  Created by 许滨楠 on 2019/5/10.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string a;
    cin >> a;
    int l = (int)a.length(), b[l], i;
    for (i = 0; i < l; ++i) b[i] = a[i] - '0';
    do {
        for (i = 0; i < l; ++i) cout << char(b[i] + '0');
        cout << endl;
    } while (next_permutation(b, b + l));
    return 0;
}
