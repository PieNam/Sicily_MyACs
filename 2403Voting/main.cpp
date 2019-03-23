//
//  main.cpp
//  2403Voting
//
//  Created by 许滨楠 on 2019/3/23.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string v;
    while (cin >> v && v != "#") {
        int yes = 0, no = 0, absence = 0;
        for (int i = 0; i < v.size(); ++i) {
            switch(v[i]) {
                case 'Y': ++yes; break;
                case 'N': ++no; break;
                case 'A': ++absence; break;
                default: break;
            }
        }
        if (absence * 2 >= v.size()) cout << "need quorum";
        else if (yes == no) cout << "tie";
        else if (yes > no) cout << "yes";
        else cout << "no";
        cout << endl;
    }
    return 0;
}
