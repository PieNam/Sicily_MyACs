//
//  main.cpp
//  4187TriValidation
//
//  Created by 许滨楠 on 2019/3/23.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if (a + b <= c || a + c <= b || b + c <= a) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    return 0;
}
