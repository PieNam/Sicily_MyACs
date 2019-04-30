//
//  main.cpp
//  1817SingerOfSchool
//
//  Created by 许滨楠 on 2019/4/30.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <stdio.h>

using namespace std;

int main() {
    int t, i, j, n, m;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &m);
        int s[n][m];
        for (i = 0; i < n; ++i) {
            for (j = 0; j < m; ++j) {
                scanf("%d", &s[i][j]);
            }
        }
        for (j = 0; j < m; ++j) {
            int max = 0, min = 100, tot = 0;
            for (i = 0; i < n; ++i) {
                tot += s[i][j];
                if (s[i][j] > max) max = s[i][j];
                if (s[i][j] < min) min = s[i][j];
            }
            double res = (double)(tot - max - min)/(double)(n - 2);
            printf("%.2f\n", res);
        }
    }
    return 0;
}
