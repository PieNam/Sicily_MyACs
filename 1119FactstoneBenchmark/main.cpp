//
//  main.cpp
//  1119FactstoneBenchmark
//
//  Created by 许滨楠 on 2019/4/11.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    while (cin >> n && n) {
        if (1960 <= n && n <= 2160){
            int max = pow(2, (n - 1960) / 10 + 2), num = 2;
            double sum = 0;
            while (sum <= max) {
                sum += log(num) / log(2);
                ++num;
            }
            cout << num - 2 << endl;
        }
    }
    return 0;
}
