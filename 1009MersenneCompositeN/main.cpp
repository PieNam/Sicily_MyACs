//
//  main.cpp
//  1009MersenneCompositeN
//
//  Created by 许滨楠 on 2019/4/25.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int prime[17] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59};

int main() {
    int in, i;
    cin >> in;
    for (i = 0; i < 17; ++i)
        if (prime[i] <= in) {
            int cnt = 0, n = prime[i];
            long long int factor[64], num = (long long)pow(2,n)-1, m = num;
            for (long long int j = 2; j * j <= num; ++j)
                if (0 == num % j) {
                    factor[cnt++] = j;
                    num /= j;
                }
            if (cnt) {
                factor[cnt++] = num;
                cout << factor[0];
                for (int j = 1; j < cnt; ++j) cout << " * " << factor[j];
                cout << " = " << m << " = ( 2 ^ " << n << " ) - 1\n";
            }
        } else break;
    return 0;
}

//23 * 89 = 2047 = ( 2 ^ 11 ) - 1
//47 * 178481 = 8388607 = ( 2 ^ 23 ) - 1
//233 * 1103 * 2089 = 536870911 = ( 2 ^ 29 ) - 1
//223 * 616318177 = 137438953471 = ( 2 ^ 37 ) - 1
//13367 * 164511353 = 2199023255551 = ( 2 ^ 41 ) - 1
//431 * 9719 * 2099863 = 8796093022207 = ( 2 ^ 43 ) - 1
//2351 * 4513 * 13264529 = 140737488355327 = ( 2 ^ 47 ) - 1
//6361 * 69431 * 20394401 = 9007199254740991 = ( 2 ^ 53 ) - 1
//179951 * 3203431780337 = 576460752303423487 = ( 2 ^ 59 ) - 1
