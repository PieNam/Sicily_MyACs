//
//  main.cpp
//  13907DiceGame
//
//  Created by 许滨楠 on 2019/5/18.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int a1, b1, a2, b2, a3, b3, a4, b4, sa, sb;
    while (cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4) {
        sa = a1 + b1 + a2 + b2;
        sb = a3 + b3 + a4 + b4;
        if (sa == sb) cout << "Tie\n";
        else if (sa > sb) cout << "Gunnar\n";
        else cout << "Emma\n";
    }
    return 0;
}
