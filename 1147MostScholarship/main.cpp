//
//  main.cpp
//  1147MostScholarship
//
//  Created by 许滨楠 on 2019/3/7.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    string name, tname;
    int i, n, max = 0, t, exam, commit, paper, total = 0;
    char cadre, west;
    cin >> n;
    for (i = 0; i < n; ++i) {
        t = 0;
        cin >> tname >> exam >> commit >> cadre >> west >> paper;
        if (exam > 80 && paper > 0) t += 8000;
        if (exam > 85 && commit > 80) t += 4000;
        if (exam > 90) t += 2000;
        if (exam > 85 && west == 'Y') t += 1000;
        if (commit > 80 && cadre == 'Y') t += 850;
        total += t;
        if (t > max) {
            max = t;
            name = tname;
        }
    }
    cout << name << endl << max << endl << total << endl;
    return 0;
}
