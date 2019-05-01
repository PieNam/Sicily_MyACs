//
//  main.cpp
//  2388WhatsNext
//
//  Created by 许滨楠 on 2019/5/1.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c && (a || b || c)) {
        if (c - b != b - a) cout << "GP " << c * b / a;
        else cout << "AP " << c + b - a;
        cout << endl;
    }
    return 0;
}
