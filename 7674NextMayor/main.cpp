//
//  main.cpp
//  7674NextMayor
//
//  Created by 许滨楠 on 2019/5/21.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, p, i;
    while (cin >> n >> p && n && p) {
        int a[n], b = p;
        bool flag = true;
        for (i = 0; i < n; ++i) a[i] = 0;
        while (flag) {
            for (i = 0; i < n; ++i) {
                if (b) {
                    --b;
                    ++a[i];
                }
                else {
                    b = a[i];
                    a[i] = 0;
                }
                if (a[i] == p) {
                    flag = false;
                    break;
                }
            }
        }
        cout << i << endl;
    }
    return 0;
}
