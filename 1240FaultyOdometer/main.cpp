//
//  main.cpp
//  1240FaultyOdometer
//
//  Created by 许滨楠 on 2019/3/12.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    while (cin >> n && n) {
        int num = n, t = 0, count = 0;
        while (num) {
            if (num % 10 > 4) {
                t += (num % 10 - 1) * pow(9, count);
            } else {
                t += (num % 10) * pow(9, count);
            }
            num /= 10;
            ++count;
        }
        cout << n << ": " << t << endl;
    }
    return 0;
}
