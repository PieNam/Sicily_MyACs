//
//  main.cpp
//  2470MatrixCommutativeMultiplication
//
//  Created by 许滨楠 on 2019/5/1.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int a[n][n], d = -1;
        bool flag = true;
        if (!n) flag = false;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j) {
                scanf("%d", &a[n][n]);
                if (!i && !j) d = a[n][n];
                else if (i == j && a[n][n] != d) flag = false;
                else if (i != j && a[n][n]) flag = false;
            }
        if (flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
