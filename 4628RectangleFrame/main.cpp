//
//  main.cpp
//  4628RectangleFrame
//
//  Created by 许滨楠 on 2019/5/1.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t, w, h, i, j;
    cin >> t;
    while (t--) {
        cin >> w >> h;
        if (1 == w) {
            for (i = 0; i < h; ++i) cout << "*\n";
            cout << "\n";
            continue;
        } else if (1 == h) {
            for (i = 0; i < w; ++i) cout << '*';
            cout << "\n\n";
            continue;
        }
        for (i = 0; i < w; ++i) cout << '*';
        cout << "\n";
        for (i = 2; i < h; ++i) {
            cout << '*';
            for (j = 2; j < w; ++j) cout << ' ';
            cout << "*\n";
        }
        for (i = 0; i < w; ++i) cout << '*';
        cout << "\n\n";
    }
    return 0;
}
