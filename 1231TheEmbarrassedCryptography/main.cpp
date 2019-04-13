//
//  main.cpp
//  1231TheEmbarrassedCryptography
//
//  Created by 许滨楠 on 2019/4/13.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

bool judge(string num, int n) {
    int factor = 0;
    for (int i = 0; i < num.size(); ++i)
        factor = (factor * 10 + (num[i] - '0')) % n;
    return 0 == factor;
}

int main() {
    int prime[1000001];
    int cnt = 0, i, j, l;
    for (i = 2; i < 1000001; ++i) prime[i] = 1;
    for (i = 2; i < 1000001; ++i)
        if (1 == prime[i]) {
            prime[cnt++] = i;
            for (j = 2 * i; j < 1000001; j += i) prime[j] = 0;
        }
    string num;
    while (cin >> num >> l && (num != "0" || l)) {
        bool flag = true;
        int factor = 0;
        for (i = 0; i != cnt; ++i) {
            if (prime[i] < l) {
                if (judge(num, prime[i])) {
                    flag = false;
                    factor = prime[i];
                    break;
                }
            }
        }
        if (flag) cout << "GOOD\n";
        else cout << "BAD " << factor << endl;
    }
    return 0;
}
