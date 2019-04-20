//
//  main.cpp
//  2002FeedingTime
//
//  Created by 许滨楠 on 2019/4/20.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <queue>

using namespace std;

struct p {
    int x, y;
    p(int ix, int iy) {x = ix; y = iy;}
};

queue <p> connect;
char m[752][752];

void judge(int x, int y, int &cnt) {
    if ('.' == m[x][y]) {
        m[x][y] = '*';
        connect.push(p(x,y));
        ++cnt;
    }
}

void expand(int & cnt) {
    int x, y;
    while (!connect.empty()) {
        x = connect.front().x;
        y = connect.front().y;
        judge(x-1, y-1, cnt);
        judge(x-1, y, cnt);
        judge(x-1, y+1, cnt);
        judge(x, y-1, cnt);
        judge(x, y+1, cnt);
        judge(x+1, y-1, cnt);
        judge(x+1, y, cnt);
        judge(x+1, y+1, cnt);
        connect.pop();
    }
}

int main() {
    int w, h, max = 0, cnt, i, j;
    
    for (i = 0; i < 752; ++i)
        for (j = 0; j < 752; ++j)
            m[i][j] = '*';
    
    cin >> w >> h;
    
    for (i = 1; i <= h; ++i)
        for (j = 1; j <= w; ++j)
            cin >> m[i][j];
    
    for (i = 1; i <= h; ++i)
        for (j = 1; j <= w; ++j)
            if ('.' == m[i][j]) {
                cnt = 1;
                m[i][j] = '*';
                connect.push(p(i,j));
                expand(cnt);
                if (cnt > max) max = cnt;
            }
    cout << max << endl;
    return 0;
}
