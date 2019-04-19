//
//  main.cpp
//  4188BaseTransformation
//
//  Created by 许滨楠 on 2019/4/19.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        string res = "";
        cin >> n;
        if (!n) {
            cout << 0 << endl;
            continue;
        }
        while (n) {
            res = (char)(n%2+'0') + res;
            n /= 2;
        }
        cout << res << endl;
    }
    return 0;
}
