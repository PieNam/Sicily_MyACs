//
//  main.cpp
//  1153HorseTravel
//
//  Created by 许滨楠 on 2019/4/8.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

struct point {
    int x, y;
    int nn;
};

bool cmp(point p1, point p2) {
    return p1.nn < p2.nn;
}

int moveto[8][2] = {{1,-2},{2,-1},{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2}},
    path[64] = {0}, c = 0, x, y;
bool visited[8][8];

bool valid(int x, int y) {
    return (0 <= x && x < 8 && 0 <= y && y < 8 && !visited[x][y]);
}

void getNeighbor(point & p) {
    int res = 0, tx = x + p.x, ty = y + p.y, i;
    for (i = 0; i < 8; ++i) {
        int cx = tx + moveto[i][0], cy = ty + moveto[i][1];
        if (valid(cx, cy)) ++res;
    }
    p.nn = res;
}

bool dfs(int tx, int ty) {
    int i, j;
    x = tx; y = ty;
    point p[8];
    for (i = 0; i < 8; ++i) {
        p[i].x = moveto[i][0];
        p[i].y = moveto[i][1];
        if (valid(x + moveto[i][0], y + moveto[i][1])) getNeighbor(p[i]);
        else p[i].nn = 9;
    }
    sort(p, p + 8, cmp);
    for (i = 0; i < 8; ++i) {
        if (9 == p[i].nn) continue;
        int xt = x + p[i].x, yt = y + p[i].y;
        if (valid(xt, yt)) {
            path[c++] = xt * 8 + yt;
            visited[xt][yt] = true;
            if (64 == c) {
                for (j = 0; j < c; ++j)
                    cout << path[j] + 1 << " ";
                cout << endl;
                return true;
            }
            if (dfs(xt, yt)) return true;
            path[--c] = 0;
            visited[x][y] = false;
            x -= p[i].x;
            y -= p[i].y;
        }
    }
    return false;
}

int main() {
    int n;
    while (cin >> n && n != -1) {
        int i, j;
        c = 0;
        for (i = 0; i < 8; ++i)
            for (j = 0; j < 8; ++j)
                visited[i][j] = false;
        n -= 1;
        x = n / 8;
        y = n % 8;
        path[c++] = x * 8 + y;
        visited[x][y] = true;
        dfs(x, y);
    }
    return 0;
}
//1,18,3,9,26,41,58,52,62,56,39,24,7,13,23,8,14,4,10,25,42,57,51,61,55,40,46,63,48,31,16,6,12,2,19,29,35,50,33,27,17,34,49,59,44,54,64,47,37,20,5,22,32,15,30,45,60,43,53,36,21,38,28,11

//1 18 33 50 60 54 64 47 62 56 39 24 7 13 3 9 26 41 58 52 35 25 10 4 19 2 17 11 5 20 14 8 23 29 12 6 16 22 32 15 30 40 55 45 28 34 49 43 37 31 48 63 46 61 51 57 42 59 53 36 21 27 44 38
