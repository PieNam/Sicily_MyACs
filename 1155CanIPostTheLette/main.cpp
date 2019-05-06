//
//  main.cpp
//  1155CanIPostTheLette
//
//  Created by 许滨楠 on 2019/5/6.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

bool p[201][201], vst[201];
int n, m;

void dfs(int c) {
    for (int i = 0; i < n; ++i) {
        if (!vst[i] && p[c][i]) {
            vst[i] = true;
            dfs(i);
        }
    }
}

int main() {
    int i, j;
    while (cin >> n && n && cin >> m) {
        for (i = 0; i < 201; ++i) {
            vst[i] = false;
            for (j = 0; j < 201; ++j) {
                p[i][j] = false;
            }
        }
        int a, b;
        for (i = 0; i < m; ++i) {
            cin >> a >> b;
            p[a][b] = true;
            p[b][a] = true;
        }
        vst[0] = true;
        dfs(0);
        if (vst[n - 1]) cout << "I can post the letter\n";
        else cout << "I can't post the letter\n";
    }
    return 0;
}
