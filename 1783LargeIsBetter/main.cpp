//
//  main.cpp
//  1783LargeIsBetter
//
//  Created by 许滨楠 on 2019/3/15.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

void sortNum(int head, int tail, string & num) {
    int j, k;
    for (j = head; j < tail; ++j) {
        for (k = j+1; k < tail; ++k) {
            if (num[k] > num[j]) {
                char tchar = num[k];
                num[k] = num[j];
                num[j] = tchar;
            }
        }
    }
}

int main() {
    int t, i, last;
    cin >> t;
    while (t--) {
        string num;
        cin >> num;
        last = 0;
        for (i = 0; i < num.length(); ++i) {
            if (num[i] == '0') {
                sortNum(last, i, num);
                while (num[i+1] == '0') ++i;
                last = i + 1;
            }
        }
        sortNum(last, i, num);
        cout << num << endl;
    }
    return 0;
}
