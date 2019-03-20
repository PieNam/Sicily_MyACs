//
//  main.cpp
//  1825Nickname
//
//  Created by 许滨楠 on 2019/3/20.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <map>

using namespace std;

int main() {
    int t, n, i, j;
    string name;
    cin >> t;
    while (t--) {
        cin >> n;
        map<string, int> record;
        for (i = 0; i < n; ++i) {
            cin >> name;
            for (j = 0; j < name.size(); ++j) {
                name[j] = tolower(name[j]);
            }
            if (record.find(name) == record.end()) {
                record.insert(make_pair(name, 1));
            } else {
                (record.find(name)->second)++;
            }
        }
        for (auto it = record.begin(); it != record.end(); ++it) {
            cout << it->first << " " << it->second << endl;
        }
        cout << endl;
    }
    return 0;
}
