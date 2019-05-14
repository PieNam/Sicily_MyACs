//
//  main.cpp
//  6767MakingDecision
//
//  Created by 许滨楠 on 2019/5/14.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int l = (int)s.length();
        cout << (((s[l/2]-'0') ^ (s[l/2-1]-'0')) ? "Do-it-Not\n" : "Do-it\n");
    }
    return 0;
}
