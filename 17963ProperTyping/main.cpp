//
//  main.cpp
//  17963ProperTyping
//
//  Created by 许滨楠 on 2019/7/1.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int finger(char c) {
    if (c=='1' || c=='Q' || c=='A' || c=='Z' || c=='`') return 0;
    if (c=='2' || c=='W' || c=='S' || c=='X') return 1;
    if (c=='3' || c=='E' || c=='D' || c=='C') return 2;
    if (c=='4' || c=='5' || c=='R' || c=='T' || c=='F' || c=='G' || c=='V' || c=='B') return 3;
    if (c=='6' || c=='7' || c=='Y' || c=='U' || c=='H' || c=='J' || c=='N' || c=='M') return 4;
    if (c=='8' || c=='I' || c=='K' || c==',') return 5;
    if (c=='9' || c=='O' || c=='L' || c=='.') return 6;
    return 7;
}

int main() {
    int i = 0, cnt[8] = {0};
    string s;
    cin >> s;
    for (; i < s.size(); ++i) {
        ++cnt[finger(s[i])];
    }
    for (i = 0; i < 8; ++i) {
        cout << cnt[i] << endl;
    }
    return 0;
}
