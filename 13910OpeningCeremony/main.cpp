//
//  main.cpp
//  13910OpeningCeremony
//
//  Created by 许滨楠 on 2019/7/3.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);
    int res = n;
    for (i = 0; i < n; ++i) {
        res = min(res, n-i-1+a[i]);
    }
    cout << res << endl;
    return 0;
}
