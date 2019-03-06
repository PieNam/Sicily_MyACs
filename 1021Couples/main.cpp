//
//  main.cpp
//  1021Couples
//
//  Created by 许滨楠 on 2019/3/6.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        int pos[2 * n];
        int stack[2 * n];
        int index = -1;
        int i;
        int a, b;
        for (i = 0; i < n; ++i) {
            cin >> a >> b;
            pos[a] = b;
            pos[b] = a;
        }
        for (i = 1; i <= 2 * n; ++i) {
            if (index != -1 && stack[index] == pos[i]) {
                --index;
            }
            else {
                stack[++index] = i;
            }
        }
        if (index == -1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
