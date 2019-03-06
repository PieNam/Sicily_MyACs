//
//  main.cpp
//  1035DNAMatching
//
//  Created by 许滨楠 on 2019/3/6.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

char complementary(char nucleotides) {
    switch (nucleotides) {
        case 'A':
            return 'T';
        case 'T':
            return 'A';
        case 'G':
            return 'C';
        case 'C':
            return 'G';
        default:
            return 'X';
    }
}

bool compare(string a, string b) {
    if (a.length() != b.length()) return false;
    for (int i = 0; i < a.length(); ++i) {
        if (b[i] != complementary(a[i])) return false;
    }
    return true;
}

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int n, res = 0;
        cin >> n;
        string * ss = new string [n];
        bool * mark = new bool [n];
        for (int i = 0; i < n; ++i) {
            cin >> ss[i];
            mark[i] = true;
        }
        for (int i = 0; i < n; ++i) {
            if (!mark[i]) continue;
            for (int j = i + 1; j < n; ++j) {
                if (!mark[j]) continue;
                if (compare(ss[i], ss[j])) {
                    ++res;
                    mark[i] = mark[j] = false;
                    break;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
