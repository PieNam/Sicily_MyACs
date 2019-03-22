//
//  main.cpp
//  3498PrimeFactorization
//
//  Created by 许滨楠 on 2019/3/22.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t, num, i;
    cin >> t;
    while (t--) {
        cin >> num;
        for (i = 2; i <= num;) {
            if (0 == num % i) {
                cout << i << " ";
                num /= i;
            } else {
                if (2 == i) ++i;
                else i += 2;
            }
        }
        cout << endl;
    }
    return 0;
}
