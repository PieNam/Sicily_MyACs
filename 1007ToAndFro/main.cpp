//
//  main.cpp
//  1007ToAndFro
//
//  Created by 许滨楠 on 2019/3/6.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string str;
    while (cin >> n && n != 0) {
        cin >> str;
        int l = (int)str.size();
        string res = "";
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < l / n; ++i) {
                res += (i % 2 == 0 ? str[i * n + j] : str[(i + 1) * n - j - 1]);
            }
        }
        cout << res << endl;
    }
    return 0;
}
