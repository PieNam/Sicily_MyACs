//
//  main.cpp
//  1491LookAndSay
//
//  Created by 许滨楠 on 2019/6/1.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int l = (int)s.length(), i, cnt = 1;
        char c = s[0];
        for (i = 1; i < l; ++i) {
            if (s[i] == c) {
                ++cnt;
            }
            else {
                cout << cnt << c;
                c = s[i];
                cnt = 1;
            }
        }
        cout << cnt << c << endl;
    }
    return 0;
}
