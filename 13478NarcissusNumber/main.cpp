//
//  main.cpp
//  13478NarcissusNumber
//
//  Created by 许滨楠 on 2019/5/16.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int cub(int n) {
    return n * n * n;
}

int main() {
    int n, i, ti, sum;
    cin >> n;
    for (i = 153; i <= n; ++i) {
        ti = i;
        sum = 0;
        while (ti) {
            sum += cub(ti % 10);
            ti /= 10;
        }
        if (sum == i) cout << i << endl;
    }
    return 0;
}
