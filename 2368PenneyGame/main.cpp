//
//  main.cpp
//  2368PenneyGame
//
//  Created by 许滨楠 on 2019/5/1.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t, n;
    string s, seq[8] = {"TTT","TTH","THT","THH","HTT","HTH","HHT","HHH"};
    cin >> t;
    while (t--) {
        cin >> n >> s;
        int l = (int)s.length(), i, j, cnt[8] = {0};
        for (i = 0; i < l - 2; ++i) {
            for (j = 0; j < 8; ++j)
                if (s.substr(i, 3) == seq[j]) {
                    ++cnt[j];
                    break;
                }
        }
        cout << n;
        for (j = 0; j < 8; ++j) cout << " " << cnt[j];
        cout << endl;
    }
    return 0;
}
