//
//  main.cpp
//  4910PrimePalindromes
//
//  Created by 许滨楠 on 2019/4/27.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

bool prime[10000001];

void make_prime() {
    memset(prime, 1, sizeof(prime));
    int i, j;
    prime[0] = prime[1] = false;
    for (i = 2; i < sqrt(10000001); ++i)
        if (prime[i])
            for (j = i * i; j < 10000001; j += i)
                prime[j] = false;
    return;
}

bool palindrome(int n) {
    int back = 0, num = n;
    while (num) {
        back = back * 10 + num % 10;
        num /= 10;
    }
    return back == n;
}

int main() {
    int a, b, i;
    make_prime();
    while (cin >> a >> b && a && b) {
        if (a <= 2)  {
            cout << 2 << endl;
            a = 3;
        } else if (0 == a%2) ++a;
        if (b > 10000000) b = 10000000;
        for (i = a; i <= b; i+=2)
            if (prime[i] && palindrome(i)) cout << i << endl;
    }
    return 0;
}

// 偶数位的回文数是11的倍数！！！
// 范围不需要到100000000！！！
// 后面一大段八位的不需要算！！！
// 0 sec 的是什么神仙！！！
// 是我太菜了。
