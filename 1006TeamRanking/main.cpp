//
//  main.cpp
//  1006TeamRanking
//
//  Created by 许滨楠 on 2019/4/25.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, i, j, k;
    int pos[5];
    while (cin >> n && n) {
        int min = 1 << 30;
        string rank[n], res;
        for (i = 0; i < n; ++i) cin >> rank[i];
        char p[] = "ABCDE";
        do {
            int cnt = 0;
            for (i = 0; i < 5; ++i)
                pos[p[i]-'A'] = i;
            for (i = 0; i < n; ++i)
                for (j = 0; j < 5; ++j)
                    for (k = j+1; k < 5; ++k)
                        if (pos[rank[i][j]-'A'] > pos[rank[i][k]-'A'])
                            ++cnt;
            if (cnt < min)  {
                min = cnt;
                res = p;
            }
        } while (next_permutation(p, p+5));
        cout << res << " is the median ranking with value " << min << ".\n";
    }
    return 0;
}
