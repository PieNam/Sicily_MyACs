//
//  main.cpp
//  4950PillarClass
//
//  Created by 许滨楠 on 2019/4/26.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

class Pillar {
private:
    int length, width, height;
public:
    Pillar() {
        int l, w, h;
        cin >> l >> w >> h;
        length = l;
        width = w;
        height = h;
    }
    int calv() {
        return length * width * height;
    }
    void printer() {
        cout << calv() << endl;
    }
};

int main() {
    int i;
    for (i = 0; i < 3; ++i) {
        Pillar p;
        p.printer();
    }
    return 0;
}
