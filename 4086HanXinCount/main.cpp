//
//  main.cpp
//  4086HanXinCount
//
//  Created by 许滨楠 on 2019/4/18.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int a, b, c, t;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        int res = a*70 + b*21 + c*15;
        res %= 105;
        if (res < 10 || res > 100) cout << "No answer";
        else cout << res;
        cout << endl;
    }
    return 0;
}
