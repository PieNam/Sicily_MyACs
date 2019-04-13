//
//  main.cpp
//  1172QueensKnightsAndPawns
//
//  Created by 许滨楠 on 2019/4/13.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int row, col, count = 0, km[8][2] = {{1,2},{1,-2},{2,1},{2,-1},{-1,2},{-1,-2},{-2,1},{-2,-1}};
    while (cin >> row >> col && row && col) {
        int map[row+1][col+1], qn, kn, pn, i, j, k, res = 0;
        memset(map, 0, sizeof(map));
        for (i = 0; i < row; ++i) map[i][0] = 1;
        for (i = 0; i < col; ++i) map[0][i] = 1;
        // queen in
        cin >> qn;
        int qx[qn], qy[qn];
        for (i = 0; i < qn; ++i) {
            cin >> qx[i] >> qy[i];
            map[qx[i]][qy[i]] = 2;
        }
        // knight in
        cin >> kn;
        int kx[kn], ky[kn];
        for (i = 0; i < kn; ++i) {
            cin >> kx[i] >> ky[i];
            map[kx[i]][ky[i]] = 2;
        }
        // pawn in
        cin >> pn;
        int px[pn], py[pn];
        for (i = 0; i < pn; ++i) {
            cin >> px[i] >> py[i];
            map[px[i]][py[i]] = 2;
        }
        // queen capture
        for (i = 0; i < qn; ++i) {
            // horizontal
            for (j = qx[i]-1; j > 0; --j) {
                if (2 == map[j][qy[i]]) break;
                map[j][qy[i]] = 1;
            }
            for (j = qx[i]+1; j <= row; ++j) {
                if (2 == map[j][qy[i]]) break;
                map[j][qy[i]] = 1;
            }
            // vertical
            for (j = qy[i]-1; j > 0; --j) {
                if (2 == map[qx[i]][j]) break;
                map[qx[i]][j] = 1;
            }
            for (j = qy[i]+1; j <= col; ++j) {
                if (2 == map[qx[i]][j]) break;
                map[qx[i]][j] = 1;
            }
            // diagonal
            bool flag[4] = {true, true, true, true};
            for (j = 1; j < 999; ++j) {
                int tox[4] = {qx[i]+j, qx[i]+j, qx[i]-j, qx[i]-j},
                    toy[4] = {qy[i]+j, qy[i]-j, qy[i]+j, qy[i]-j};
                for (k = 0; k < 4; ++k) {
                    if (flag[k] && tox[k]>0 && tox[k]<=row && toy[k]>0 && toy[k]<=col) {
                        if (2 == map[tox[k]][toy[k]]) flag[k] = false;
                        else map[tox[k]][toy[k]] = 3;
                    }
                }
            }
        }
        // knight capture
        for (i = 0; i < kn; ++i) {
            for (j = 0; j < 8; ++j) {
                int tox = kx[i] + km[j][0], toy = ky[i] + km[j][1];
                if (tox>0 && tox<=row && toy>0 && toy<=col)
                    map[tox][toy] = 4;
            }
        }
        for (i = 1; i <= row; ++i)
            for (j = 1; j <= col; ++j)
                if (!map[i][j]) ++res;
        cout << "Board " << ++count << " has " << res << " safe squares.\n";
    }
    return 0;
}

//for DEBUG
//
//for (i = 1; i <= row; ++i) {
//    for (j = 1; j <= col; ++j)
//        cout << map[i][j] << " ";
//    cout << endl;
//}
