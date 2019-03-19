//
//  main.cpp
//  1818GradeTranslation
//
//  Created by 许滨楠 on 2019/3/19.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int t, a, b, g, s;
    string name;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        map<string, int> record;
        while (a--) {
            cin >> name >> g;
            record[name] = g;
        }
        while (b--) {
            cin >> name;
            s = record[name];
            if (s >= 0 && s < 60) cout << "E";
            else if (s >= 60 && s < 70) cout << "D";
            else if (s >= 70 && s < 80) cout << "C";
            else if (s >= 80 && s < 90) cout << "B";
            else if (s >= 90 && s <= 100) cout << "A";
            else cout << "Score is error!";
            cout << endl;
        }
    }
    return 0;
}
