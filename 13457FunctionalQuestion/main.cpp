//
//  main.cpp
//  13457FunctionalQuestion
//
//  Created by 许滨楠 on 2019/7/3.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int digit(int n, int k) {
    int res = 0;
    while (k--) {
        res = n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    cout << digit(15327, 4) << endl;
    cout << digit(191398135, 6) << endl;
    cout << digit(123, 1) << endl;
    cout << digit(562135, 6) << endl;
    return 0;
}
