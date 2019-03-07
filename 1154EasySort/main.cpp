//
//  main.cpp
//  1154EasySort
//
//  Created by 许滨楠 on 2019/3/7.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t, n, i, j;
    cin >> t;
    while (t--) {
        cin >> n;
        int * num = new int [n];
        for (i = 0; i < n; ++i) {
            cin >> num[i];
        }
        for (i = 0; i < n; ++i) {
            for (j = i+1; j < n; ++j) {
                if (num[j] < num[i]) {
                    int t = num[j];
                    num[j] = num[i];
                    num[i] = t;
                }
            }
        }
        for (i = 0; i < n; ++i) {
            cout << num[i] << endl;
        }
    }
    return 0;
}
