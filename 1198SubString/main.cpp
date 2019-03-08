//
//  main.cpp
//  1198SubString
//
//  Created by 许滨楠 on 2019/3/8.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

/*
"ba" 和 "b" 就不完全是先按字母表排序了
bool bigger(string a, string b) {
    int al = (int)a.length(), bl = (int)b.length();
    int l = al > bl ? bl : al;
    for (int i = 0; i < l; ++i) {
//        if (tolower(a[i]) > tolower(b[i])) return true;
//        if (tolower(a[i]) < tolower(b[i])) return false;
        if (a[i] > b[i]) return true;
        if (a[i] < b[i]) return false;
    }
    if (al > bl) return true;
    return false;
}
*/

bool bigger(string a, string b) {
    if (a + b > b + a) return true;
    return false;
}

int main() {
    int t, n, i, j;
    cin >> t;
    while (t--) {
        cin >> n;
        string * sub = new string [n];
        string t;
        for (i = 0; i < n; ++i) {
            cin >> sub[i];
        }
        for (i = 0; i < n; ++i) {
            for (j = i+1; j < n; ++j) {
                if (bigger(sub[i], sub[j])) {
                    t = sub[j];
                    sub[j] = sub[i];
                    sub[i] = t;
                }
            }
        }
        for (i = 0; i < n; ++i) {
            cout << sub[i];
        }
        cout << endl;
    }
    return 0;
}
