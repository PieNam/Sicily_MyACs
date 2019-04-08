//
//  main.cpp
//  1152EasyHorseTravel
//
//  Created by 许滨楠 on 2019/4/8.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int moveto[8][2] = {{1,-2},{2,-1},{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2}},
    path[31] = {0}, c = 0, x, y;
bool visited[5][6] = {0};

bool dfs(int tx, int ty) {
    x = tx; y = ty;
    for (int i = 0; i < 8; ++i) {
        int xt = x + moveto[i][0], yt = y + moveto[i][1];
        if (0 <= xt && xt < 5 && 0 <= yt && yt < 6)
            if (!visited[xt][yt]) {
                path[c++] = xt * 6 + yt + 1;
                visited[xt][yt] = true;
                if (31 == c) return true;
                if (dfs(xt, yt)) return true;
                path[--c] = 0;
                visited[x][y] = false;
                x -= moveto[i][0];
                y -= moveto[i][1];
            }
    }
    return false;
}

int main() {
    int n;
    path[c++] = 1;
    dfs(0, 0);
    while (cin >> n && n != -1) {
        int t = 0, i;
        for (i = 0; i < 30; ++i) if (path[i] == n) t = i;
        for (i = 0; i < 30; ++i) {
            cout << path[(t + i) % 30];
            if (29 == i) cout << endl;
            else cout << " ";
        }
    }
//    for (int i = 0; i < c; ++i) cout << path[i] << " ";
//    cout << endl;
    return 0;
}
