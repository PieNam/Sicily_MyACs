//
//  main.cpp
//  1765SillyMonkey
//
//  Created by 许滨楠 on 2019/4/30.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (1 == n || !n) return false;
    for (int i = 2; i <= sqrt(n); ++i)
        if (0 == n % i) return false;
    return true;
}

int main() {
    string s;
    while (cin >> s) {
        int l = (int)s.length(), i, max = 0, min = 100, cnt[26] = {0};
        for (i = 0; i < l; ++i)
            ++cnt[s[i] - 'a'];
        for (i = 0; i < 26; ++i) {
            if (cnt[i] > max) max = cnt[i];
            else if (cnt[i] < min && cnt[i]) min = cnt[i];
        }
        if (100 == min) min = 0;
        if (isPrime(max - min)) cout << "Lucky Word\n" << max - min;
        else cout << "No Answer\n" << 0;
        cout << endl;
    }
    return 0;
}
