//
//  main.cpp
//  1388Quicksum
//
//  Created by 许滨楠 on 2019/4/28.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char str[256];
    while (cin.getline(str, 256)) {
        if ('#' == str[0]) break;
        int ans = 0, l = (int)strlen(str), i;
        for (i = 0; i < l; ++i)
            if (str[i] >= 'A' && str[i] <= 'Z')
                ans += (str[i]-'A'+1)*(i+1);
        cout << ans << endl;
    }
    return 0;
}
