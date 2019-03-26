//
//  main.cpp
//  1527TilingAGridWithDominoes
//
//  Created by 许滨楠 on 2019/3/26.
//  Copyright © 2019 许滨楠. All rights reserved.
//

// short AC
//#include <iostream>
//using namespace std;int main(){int n,i,j,w,d[31]={0};cin>>n;d[0] = 1;d[1] = 1;d[2]=5;for(i=3;i<31;++i){d[i]+=(d[i-1]+d[i-2]*4);for(j=i-3;j>=0;j--) d[i]+=2*d[j];for(j=i-4;j>=0;j-=2)d[i]+=d[j];}for(i=1;i<=n;++i){cin>>w;cout <<i<<" "<<d[w]<<endl;}return 0;}


/*
 看到大家好像都是用二维数组做，贴个一维数组AC的吧。不知道会不会有潜在的测试样例之外的BUG。
 每个状态都在上1个到上n个已经完整的状态去加模型就好了，不去考虑之前状态是不完整的（不是一个矩形的），因为不完整的状态总可以回退到一个完整的状态，大不了回退到0。一共有四种情况：
 1. i-1, 只能填一种；
 2. i-2, 可以填题目中除了最后一个四条竖杠外的四种；
 3. i-3 ~ 0, 可以填上下不对称的两种：
 | ——       —— |        i-4     | —— |      ——  ——
 | ——       —— |        -->     | —— |      ——  ——
 —— |       | ——                ——  ——      | —— |
 —— |       | ——                ——  ——      | —— |
 以此类推，中间可以无限增加交错的两对。
 4. i-4, i-6, i-8, ..., 0, 可以填上下对称的一种：
 —— ——      i-6     —— —— ——
 | —— |     -->     | —— —— |
 | —— |             | —— —— |
 —— ——              —— —— ——
 以此类推，中间可以无限增加。
 */
#include <iostream>

using namespace std;

int main() {
    int n, i, j, w, d[31] = {0};
    cin >> n;
    d[0] = 1;
    d[1] = 1;
    d[2] = 5;
    for (i = 3; i < 31; ++i) {
        d[i] += (d[i-1] + d[i-2] * 4);
        for (j = i-3; j >= 0; j--) d[i] += 2 * d[j];
        for (j = i-4; j >= 0; j-=2) d[i] += d[j];
    }
    for (i = 1; i <= n; ++i) {
        cin >> w;
        cout << i << " " << d[w] << endl;
    }
    return 0;
}

//0 0
//1 1
//2 5
//3 11
//4 36
//5 95
//6 281
//7 781
//8 2245
//9 6336
//10 18061
//11 51205
//12 145601
//13 413351
//14 1174500
//15 3335651
//16 9475901
//17 26915305
//18 76455961
//19 217172736
//20 616891945
//21 1752296281
