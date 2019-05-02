//
//  main.cpp
//  1931CardGame
//
//  Created by 许滨楠 on 2019/5/2.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <deque>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        deque<int> d;
        int i, n, t;
        cin >> n;
        for (i = 1; i <= n; ++i) d.push_back(i);
        while (d.size() > 1) {
            cout << d.front() << " ";
            d.pop_front();
            t = d.front();
            d.pop_front();
            d.push_back(t);
        }
        cout << d.front() << " \n";
    }
    return 0;
}
