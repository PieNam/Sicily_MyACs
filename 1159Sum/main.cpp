//
//  main.cpp
//  1159Sum
//
//  Created by 许滨楠 on 2019/3/21.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

string HugeSum(string a, string b) {
    string res = "", patch;
    int al = (int)a.size(), bl = (int)b.size();
    int diff = al > bl ? al - bl : bl - al;
    while (diff--) patch.push_back('0');
    if (al > bl) b = patch + b;
    else a = patch + a;
    int carry = 0, sum;
    for (int i = (int)a.size() - 1; i >= 0; --i) {
        sum = a[i] - '0' + b[i] - '0' + carry;
        carry = sum / 10;
        sum %= 10;
        res = (char)(sum + '0') + res;
    }
    if (carry) res = (char)(carry + '0') + res;
    return res;
}

int main() {
    int n;
    while (cin >> n) {
        string res = "0", a;
        while (n--) {
            cin >> a;
            res = HugeSum(res, a);
        }
        cout << res << endl;
    }
    return 0;
}
