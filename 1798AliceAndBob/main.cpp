//
//  main.cpp
//  1798AliceAndBob
//
//  Created by 许滨楠 on 2019/3/19.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n;
    while (cin >> n && n)
        cout << (n % 2 ? "Bob" : "Alice") << endl;
    return 0;
}
