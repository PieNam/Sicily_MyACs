//
//  main.cpp
//  1034Forest
//
//  Created by 许滨楠 on 2019/4/9.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string.h>

using namespace std;

bool flag, buffer[101][101], visited[101], root[101];
int maxh, maxw, n, m, b[101];

void dfs(int p, int td) {
    if (visited[p]) {
        flag = false;
        return;
    }
    visited[p] = true;
    maxh = td > maxh ? td : maxh;
    if (++b[td] > maxw) maxw = b[td];
    for (int i = 1; i <= n; ++i) {
        if (buffer[p][i]) {
            if (!flag) return;
            dfs(i, td + 1);
        }
    }
}

int main() {
    int f, t, i;
    while (cin >> n >> m && n) {
        memset(b, 0, sizeof(b));
        memset(buffer, 0, sizeof(buffer));
        memset(visited, 0, sizeof(visited));
        memset(root, true, sizeof(root));
        maxh = maxw = 0;
        flag = true;
        if (m > n) flag = false;
        for (i = 0; i < m; ++i) {
            cin >> f >> t;
            buffer[f][t] = true;
            root[t] = false;
        }
        for (i = 1; i <= n; ++i) if (root[i]) dfs(i, 0);
        for (i = 1; i <= n; ++i)
            if (!visited[i]) {
                flag = false;
                break;
            }
        if (flag) cout << maxh << " " << maxw;
        else cout << "INVALID";
        cout << endl;
    }
    return 0;
}
