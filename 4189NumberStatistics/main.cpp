//
//  main.cpp
//  4189NumberStatistics
//
//  Created by 许滨楠 on 2019/4/27.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <stdio.h>
#include <set>

using namespace std;

int main() {
    int t;
    while (scanf("%d", &t) && t) {
        set<int> s;
        int num, i;
        for (i = 0; i < t; ++i) {
            scanf("%d", &num);
            auto it = s.find(num);
            if (it == s.end()) s.insert(num);
        }
        printf("%d\n", (int)s.size());
    }
    return 0;
}
