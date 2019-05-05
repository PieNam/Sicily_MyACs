//
//  main.cpp
//  2012King
//
//  Created by 许滨楠 on 2019/5/5.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, i, j;
    string s;
    while (cin >> n) {
        int max = 0, res = 0;
        for (i = 0; i < n; ++i) {
            cin >> s;
            int cnt = 0, l = (int)s.length();
            for (j = 0; j < l; ++j) {
                if ('1' == s[j]) ++cnt;
            }
            if (cnt > max) {
                max = cnt;
                res = i;
            }
        }
        cout << res + 1 << endl;
    }
    return 0;
}
