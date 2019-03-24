//
//  main.cpp
//  3725TaoExam
//
//  Created by 许滨楠 on 2019/3/24.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t, i, max, temp;
    while (cin >> t && t) {
        cin >> max;
        for (i = 1; i < t; ++i) {
            cin >> temp;
            if (temp > max) max = temp;
        }
        cout << max << endl;
    }
    return 0;
}
