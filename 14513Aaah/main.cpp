//
//  main.cpp
//  14513Aaah
//
//  Created by 许滨楠 on 2019/5/17.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    string a, b;
    while (cin >> a >> b) {
        if (a.length() >= b.length()) cout << "go\n";
        else cout << "no\n";
    }
    return 0;
}
