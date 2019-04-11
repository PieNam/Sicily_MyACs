//
//  main.cpp
//  1259SumOfConsecutivePrimes
//
//  Created by 许滨楠 on 2019/4/11.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <map>

using namespace std;

map<int, int> m;
bool prime[10007];
int p[10005];

int main() {
    int i, j, count = -1, n;
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (i = 2; i < 10000; ++i)
        if (prime[i]) {
            p[++count] = i;
            for (j = 2; j * i <= 10000; ++j)
                prime[i * j] = 0;
        }
    for (i = 0; p[i]; ++i) m[p[i]] = i;
    while (cin >> n && n) {
        int res = 0;
        if (prime[n]) ++res;
        for (i = 2; i <= n; ++i) {
            if (!prime[i]) continue;
            int sum = i;
            j = p[m[i] + 1];
            while (prime[j] && sum <= n) {
                sum += j;
                if (sum == n) {
                    ++res;
                    break;
                }
                j = p[m[j] + 1];
            }
        }
        cout << res << endl;
    }
    return 0;
}
