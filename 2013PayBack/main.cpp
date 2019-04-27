//
//  main.cpp
//  2013PayBack
//
//  Created by 许滨楠 on 2019/4/27.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, i, dis = 0, sum = 0, oweto = 0;
    cin >> n;
    int m[n];
    for (i = 0; i < n; ++i) {
        cin >> m[i];
        sum += m[i];
        if (sum < 0 && sum - m[i] >= 0) oweto = i;
        else if (sum >= 0 && sum - m[i] < 0) dis += 2*(i-oweto);
    }
    dis += n;
    cout << dis << endl;
    return 0;
}
