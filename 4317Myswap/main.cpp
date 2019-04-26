//
//  main.cpp
//  4317Myswap
//
//  Created by 许滨楠 on 2019/4/26.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

void myswap(int * a, int * b) {
    int t = *a;
    *a = *b;
    *b = t;
}

using namespace std;

int main() {
    int a = 19981023, b = 20190426;
    myswap(&a, &b);
    cout << a << endl << b << endl;
    return 0;
}
