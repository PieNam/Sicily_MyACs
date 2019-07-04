//
//  main.cpp
//  6084Times17
//
//  Created by 许滨楠 on 2019/7/4.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string ori, res;
    cin >> ori;
    res = ori + "0000";
    bool carry = 0;
    int i;
    for (i = (int)res.size() - 1; i >= 4; --i) {
        int sum = (ori[i-4]-'0') + (res[i]-'0') + carry;
        res[i] = (sum & 1) + '0';
        carry = sum / 2;
    }
    while (carry) {
        if (i < 0) {
            res = "1" + res;
            break;
        }
        if (res[i] == '0') {
            res[i] = '1';
            carry = 0;
        } else {
            res[i] = '0';
            carry = 1;
        }
        --i;
    }
    cout << res << endl;
    return 0;
}
