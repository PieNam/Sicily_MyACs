//
//  main.cpp
//  1324Score
//
//  Created by 许滨楠 on 2019/3/11.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t, i;
    cin >> t;
    while (t--) {
        int res = 0, con = 0;
        string str;
        cin >> str;
        for (i = 0; i < str.length(); ++i) {
            if (str[i] == 'X') {
                con = 0;
            }
            else if (str[i] == 'O') {
                res += (++con);
            }
        }
        cout << res << endl;
    }
    return 0;
}
