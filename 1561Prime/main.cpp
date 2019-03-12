//
//  main.cpp
//  1561Prime
//
//  Created by 许滨楠 on 2019/3/12.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, i, count = 1, t = 2;
    cin >> n;
    while (count != n) {
        ++t;
        bool flag = true;
//        it has to be i <= sqrt(t), e.g. when t=4
        for (i = 2; i <= sqrt(t); ++i)
            if (t % i == 0) flag = false;
        if (flag) ++count;
    }
    cout << t << endl;
    return 0;
}
