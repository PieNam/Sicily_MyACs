//
//  main.cpp
//  3497DaffodilsNumber
//
//  Created by 许滨楠 on 2019/3/21.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int i, t, b;
    for (i = 100; i < 1000; ++i) {
        t = i;
        int sum = 0;
        while (t) {
            b = t % 10;
            t /= 10;
            sum += b*b*b;
        }
        if (sum == i) cout << i << endl;
    }
    return 0;
}
