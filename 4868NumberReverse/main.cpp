//
//  main.cpp
//  4868NumberReverse
//
//  Created by 许滨楠 on 2019/5/22.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, t = 0;
    cin >> n;
    while (n) {
        t = t * 10 + n % 10;
        n /= 10;
    }
    cout << t << endl;
    return 0;
}
