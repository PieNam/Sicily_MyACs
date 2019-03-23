//
//  main.cpp
//  3980BinToDec
//
//  Created by 许滨楠 on 2019/3/23.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int pow(int base, int power) {
    if (0 == power) return 1;
    if (1 == power) return base;
    return base * pow(base, power - 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string b;
        cin >> b;
        int res = 0, count = 0;
        for (int i = (int)b.size() - 1; i >= 0; --i) {
            if ('1' == b[i]) res += pow(2, count);
            ++count;
        }
        cout << res << endl;
    }
    return 0;
}
