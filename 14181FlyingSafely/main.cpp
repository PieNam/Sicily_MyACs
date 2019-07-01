//
//  main.cpp
//  14181FlyingSafely
//
//  Created by 许滨楠 on 2019/7/1.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <queue>

using namespace std;

int main() {
    int t, i, j, city, pilot, a, b;
    cin >> t;
    while (t--) {
        cin >> city >> pilot;
        bool m[city][city], vst[city];
        int res = 0, vstcnt = 1;
        queue<int> bfs;
        for (i = 0; i < city; ++i) {
            vst[i] = false;
            for (j = 0; j < city; ++j) {
                m[i][j] = false;
            }
        }
        for (i = 0; i < pilot; ++i) {
            cin >> a >> b;
            m[a-1][b-1] = m[b-1][a-1] = true;
        }
        bfs.push(0);
        vst[0] = true;
        while (vstcnt < city) {
            int tmp = bfs.front();
            bfs.pop();
            for (i = 0; i < city; ++i) {
                if (m[tmp][i] && !vst[i]) {
                    ++res;
                    ++vstcnt;
                    vst[i] = true;
                    bfs.push(i);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
