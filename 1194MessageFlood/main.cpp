//
//  main.cpp
//  1194MessageFlood
//
//  Created by 许滨楠 on 2019/3/8.
//  Copyright © 2019 许滨楠. All rights reserved.
//

// stupid method and time limit exceeded
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int n, m, i, j;
//    cin >> n;
//    while (n) {
//        cin >> m;
//        int res = 0;
//        string * list = new string [n];
//        bool * listMark = new bool [n];
//        for (i = 0; i < n; ++i) {
//            cin >> list[i];
//            for (j = 0; j < list[i].length(); ++j) {
//                if (list[i][j] >= 'A' && list[i][j] <= 'Z')
//                    list[i][j] = list[i][j] - ('A' - 'a');
//            }
//            listMark[i] = true;
//        }
//        string t;
//        for (i = 0; i < m; ++i) {
//            cin >> t;
//            for (j = 0; j < t.length(); ++j) {
//                if (t[j] >= 'A' && t[j] <= 'Z')
//                    t[j] = t[j] - ('A' - 'a');
//            }
//            for (j = 0; j < n; ++j) {
//                if (t == list[j]) {
//                    listMark[j] = false;
//                    break;
//                }
//            }
//        }
//        for (i = 0; i < n; ++i) {
//            if (listMark[i]) ++res;
//        }
//        cout << res;
//        cin >> n;
//    }
//    return 0;
//}

// using set
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int n, m, i, j;
    while (cin >> n && n) {
        cin >> m;
        string t;
        set<string> mark;
        for (i = 0; i < n; ++i) {
            cin >> t;
            for (j = 0; j < t.length(); ++j) {
                t[j] = tolower(t[j]);
            }
            mark.insert(t);
        }
        for (i = 0; i < m; ++i) {
            cin >> t;
            for (j = 0; j < t.length(); ++j) {
                t[j] = tolower(t[j]);
            }
            auto it = mark.find(t);
            if (it != mark.end()) mark.erase(t);
        }
        cout << mark.size() << endl;
    }
    return 0;
}
