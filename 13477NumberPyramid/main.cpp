//
//  main.cpp
//  13477NumberPyramid
//
//  Created by 许滨楠 on 2019/7/3.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    for (j = 1; j <= n; ++j) {
        for (i = 1; i <= j; ++i) {
            cout << i;
            if (j != 1) cout << " ";
        }
        --i;
        while (--i) {
            cout << i;
            if (i != 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
