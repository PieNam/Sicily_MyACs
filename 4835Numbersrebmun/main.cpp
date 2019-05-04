//
//  main.cpp
//  4835Numbersrebmun
//
//  Created by 许滨楠 on 2019/5/4.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t, v[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        int i, l = (int)s.length();
        for (i = 0; i < l/2; ++i) {
            if (v[tolower(s[i])-'a'] != v[tolower(s[l-i-1])-'a']) break;
        }
        if (i < l/2) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
