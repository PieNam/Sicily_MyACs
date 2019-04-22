//
//  main.cpp
//  3712MatrixMultiplication
//
//  Created by 许滨楠 on 2019/4/22.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, i, j, k;
    while (cin >> n) {
        int a[n][n], b[n][n], c[n][n];
        for (i = 0; i < n; ++i)
            for (j = 0; j < n; ++j) {
                cin >> a[i][j];
                c[i][j] = 0;
            }
        for (i = 0; i < n; ++i)
            for (j = 0; j < n; ++j)
                cin >> b[i][j];
        for (i = 0; i < n; ++i)
            for (j = 0; j < n; ++j)
                for (k = 0; k < n; ++k)
                    c[i][j] += a[i][k] * b[k][j];
        for (i = 0; i < n; ++i) {
            for (j = 0; j < n-1; ++j)
                cout << c[i][j] << " ";
            cout << c[i][j] << endl;
        }
    }
    return 0;
}
