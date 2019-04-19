//
//  main.cpp
//  7144DifferentTriangles
//
//  Created by 许滨楠 on 2019/4/19.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

bool validator(int a, int b, int c) {
    return (a+b>c && a+c>b && b+c>a);
}

int main() {
    int t, i, j, k, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n], cnt = 0;
        for (i = 0; i < n; ++i) cin >> a[i];
        for (i = 0; i < n; ++i)
            for (j = i+1; j < n; ++j)
                for (k = j+1; k < n; ++k)
                    if (validator(a[i], a[j], a[k])) ++cnt;
        cout << cnt << endl;
    }
    return 0;
}
