//
//  main.cpp
//  1510Mispelling
//
//  Created by 许滨楠 on 2019/4/29.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, i, p;
    string w;
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> p >> w;
        w.erase(p - 1, 1);
        cout << i << " " << w << endl;
    }
    return 0;
}
