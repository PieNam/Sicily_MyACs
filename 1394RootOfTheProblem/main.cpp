//
//  main.cpp
//  1394RootOfTheProblem
//
//  Created by 许滨楠 on 2019/5/28.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, n;
    while (cin >> b >> n && (b || n)) {
        a = floor(pow(b, (double)1.0/n));
        cout << (((b - pow(a, n)) < (pow(a+1, n) - b)) ? a : a+1) << endl;
    }
    return 0;
}
