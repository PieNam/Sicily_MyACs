//
//  main.cpp
//  1144TaoApple
//
//  Created by 许滨楠 on 2019/3/7.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int i, res = 0, height;
    int apples[10];
    for (i = 0; i < 10; ++i) {
        cin >> apples[i];
    }
    cin >> height;
    for (i = 0; i < 10; ++i) {
        if (apples[i] <= height + 30) ++res;
    }
    cout << res << endl;
    return 0;
}
