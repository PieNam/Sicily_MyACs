//
//  main.cpp
//  2499SquareNumber
//
//  Created by 许滨楠 on 2019/4/17.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <map>

using namespace std;

const int N = 60001;

int main() {
    int s[60001] = {0}, t, n, i, j;
    for (i = 1; i * i < N; ++i) s[i*i] = 1;
    for (i = 1; i < N; ++i) {
        if (!s[i])
            for (j = 1; j*j<i; ++j) {
                if (1 == s[i-j*j]) {
                    s[i] = 2;
                    break;
                }
                if (2 == s[i-j*j]) s[i] = 3;
            }
    }
    cin >> t;
    while (t--) {
        cin >> n;
        cout << (s[n] ? s[n] : 4) << endl;
    }
    return 0;
}
