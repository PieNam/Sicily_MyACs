//
//  main.cpp
//  6547PrimeNumber
//
//  Created by 许滨楠 on 2019/5/13.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, i;
    while (cin >> n && n != -1) {
        bool flag = true;
        if (n <= 1) cout << "No\n";
        else {
            for (i = 2; i <= sqrt(n); ++i) {
                if (0 == n % i) {
                    flag = false;
                    break;
                }
            }
            if (flag) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}
