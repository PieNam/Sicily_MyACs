//
//  main.cpp
//  13059Pages
//
//  Created by 许滨楠 on 2019/5/23.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void printer(int from, int to) {
    if (from == to) {
        cout << from;
    }
    else {
        cout << from << "-" << to;
    }
}

int main() {
    int t, from, to;
    while (cin >> t && t != 0) {
        vector<int> v;
        v.push_back(t);
        while (cin >> t && t != 0) {
            v.push_back(t);
        }
        from = to = 0;
        bool first = true;
        for (auto i = v.begin(); i != v.end(); ++i) {
            if (first) {
                from = to = *i;
                first = false;
            }
            else if (*i == to + 1) {
                ++to;
            }
            else {
                printer(from, to);
                cout << ",";
                from = to = *i;
            }
            if (v.end() - 1 == i) {
                printer(from, to);
                cout << endl;
            }
        }
    }
    return 0;
}
