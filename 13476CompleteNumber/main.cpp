//
//  main.cpp
//  13476CompleteNumber
//
//  Created by 许滨楠 on 2019/7/2.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, i, j, sum;
    cin >> n;
    for (i = 2; i <= n; ++i) {
        sum = 1;
        for (j = 2; j < i; ++j) {
            if (i % j == 0) sum += j;
        }
        if (sum == i) cout << i << endl;
    }
    return 0;
}
