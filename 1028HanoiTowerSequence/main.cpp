//
//  main.cpp
//  1028HanoiTowerSequence
//
//  Created by 许滨楠 on 2019/4/1.
//  Copyright © 2019 许滨楠. All rights reserved.
//

// 第p项的值为p能被2整除的次数+1
#include <iostream>
#include <cstring>

using namespace std;

int hanoi(char * s) {
    int l = (int)strlen(s);
    if ((s[l-1] - '0') % 2) return 1;
    int c = 0, i = 0, t;
    for (; i < l; ++i) {
        t = c * 10 + s[i] - '0';
        c = t % 2;
        s[i] = t / 2 + '0';
    }
    if ('0' == s[0]) ++s;
    return 1 + hanoi(s);
}

int main() {
    int t;
    char s[100];
    cin >> t;
    for (int c = 1; c <= t; ++c) {
        cin >> s;
        cout << "Case " << c << ": " << hanoi(s) << endl;
        if (c != t) cout << endl;
    }
    return 0;
}
