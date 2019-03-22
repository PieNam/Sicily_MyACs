//
//  main.cpp
//  2010HNumber
//
//  Created by 许滨楠 on 2019/3/22.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

bool judge(int n) {
    int pre, cur, next;
    cur = n % 10;
    n /= 10;
    pre = n % 10;
    n /= 10;
    while (n != 0) {
        next = cur;
        cur = pre;
        pre = n % 10;
        n /= 10;
        if (cur != next + pre && cur != next - pre && cur != pre - next)
            return false;
    }
    return true;
}

int main() {
    int max, i, count;
    cin >> max;
    if (max < 100) cout << max;
    else {
        count = 99;
        for (i = 100; i <= max; ++i) {
            count += judge(i);
        }
        cout << count;
    }
    cout << endl;
    return 0;
}
