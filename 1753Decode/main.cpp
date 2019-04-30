//
//  main.cpp
//  1753Decode
//
//  Created by 许滨楠 on 2019/4/30.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

bool isChar(char c) {
    return c >= 'a' && c <= 'z';
}

int main() {
    string s;
    while (cin >> s && s != "XXX") {
        int l = (int)s.length(), i, j, cnt;
        char r;
        for (i = 0; i < l; ++i) {
            if (s[i] >= 'a' && s[i] <= 'z') cout << s[i];
            else {
                r = s[i-1];
                cnt = s[i] - '0';
                ++i;
                while (i < l && !isChar(s[i])) {
                    cnt = cnt * 10 + s[i] - '0';
                    ++i;
                }
                --i;
                for (j = 1; j < cnt; ++j) {
                    cout << r;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
