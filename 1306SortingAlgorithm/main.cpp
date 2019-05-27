//
//  main.cpp
//  1306SortingAlgorithm
//
//  Created by 许滨楠 on 2019/5/27.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, g, i;
    while (cin >> n >> g && n && g) {
        int a[n];
        for (i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a + n);
        cout << a[0];
        for (i = g; i < n; i += g) {
            cout << " " << a[i];
        }
        cout << endl;
    }
    return 0;
}
