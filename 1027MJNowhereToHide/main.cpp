//
//  main.cpp
//  1027MJNowhereToHide
//
//  Created by 许滨楠 on 2019/3/6.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n) {
        map<string, string> mainIP;
        map<string, string> MJ;
        for (int i = 0; i < n; ++i) {
            string IP, name;
            cin >> name >> IP;
            auto it = mainIP.find(IP);
            if (it == mainIP.end()) {
                mainIP.insert(make_pair(IP, name));
            } else {
                MJ.insert(make_pair(it->second, name));
            }
        }
        for (auto it = MJ.begin(); it != MJ.end(); ++it) {
            cout << it->second << " is the MaJia of " << it -> first << endl;
        }
        cout << endl;
        cin >> n;
    }
    return 0;
}
