//
//  main.cpp
//  4186MatrixAddition
//
//  Created by 许滨楠 on 2019/4/26.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, i, j;
    while (cin >> n && n) {
        int a[n][n], b[n][n];
        for (i = 0; i < n; ++i)
            for (j = 0; j < n; ++j)
                cin >> a[i][j];
        for (i = 0; i < n; ++i)
            for (j = 0; j < n; ++j)
                cin >> b[i][j];
        for (i = 0; i < n; ++i) {
            for (j = 0; j < n-1; ++j)
                cout << a[i][j] + b[i][j] << " ";
            cout << a[i][j] + b[i][j] << endl;
        }
    }
    return 0;
}
