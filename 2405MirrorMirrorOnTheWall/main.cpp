//
//  main.cpp
//  2405MirrorMirrorOnTheWall
//
//  Created by 许滨楠 on 2019/4/23.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    while (cin >> str && str != "#") {
        int l = (int)str.length(), i;
        for (i = 0; i < l; ++i) {
            if ('b' == str[i]) str[i] = 'd';
            else if ('d' == str[i]) str[i] = 'b';
            else if ('p' == str[i]) str[i] = 'q';
            else if ('q' == str[i]) str[i] = 'p';
            else if (str[i] != 'i' && str[i] != 'o' && str[i] != 'v' && str[i] != 'w' && str[i] != 'x') break;
        }
        if (i == l)
            for (i = l-1; i >= 0; --i)
                cout << str[i];
        else cout << "INVALID";
        cout << endl;
    }
    return 0;
}
