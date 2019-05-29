//
//  main.cpp
//  1372BovineLatin
//
//  Created by 许滨楠 on 2019/5/29.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, i;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s[0] == 'a' || s[0] == 'e' || s[0] == 'i'
            || s[0] == 'o' || s[0] == 'u') {
            cout << s << "cow" << endl;
        }
        else {
            for (i = 1; i < s.length(); ++i) {
                cout << s[i];
            }
            cout << s[0] << "ow\n";
        }
    }
    return 0;
}
