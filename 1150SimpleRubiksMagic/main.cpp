//
//  main.cpp
//  1150SimpleRubiksMagic
//
//  Created by 许滨楠 on 2019/4/25.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int a(int n) {
    return ((n%10000)*10000+n/10000);
}
int b(int n) {
    int h = n / 10000, l = n % 10000;
    return ((h%10*1000+h/10)*10000+l%10*1000+l/10);
}
int c(int n) {
    int a = n / 1000000 % 10, b = n / 100000 % 10,
        c = n / 100 % 10, d = n / 10 % 10;
    return n - a*1000000 - b*100000 - c*100 - d*10
           + c*1000000 + a*100000 + d*100 + b*10;
}

struct node {
    int num;
    vector<char> path;
};

node bfs(int s, int n) {
    queue<node> q;
    node t;
    t.num = 12348765;
    q.push(t);
    while (!q.empty()) {
        t = q.front();
        q.pop();
        if (t.path.size() > s) return t;
        node t1 = t;
        t1.num = a(t.num);
        t1.path.push_back('A');
        if (t1.num == n) return t1;
        else q.push(t1);
        node t2 = t;
        t2.num = b(t.num);
        t2.path.push_back('B');
        if (t2.num == n) return t2;
        else q.push(t2);
        node t3 = t;
        t3.num = c(t.num);
        t3.path.push_back('C');
        if (t3.num == n) return t3;
        else q.push(t3);
    }
    node e;
    e.num = -1;
    return e;
}

int main() {
    int s;
    while (cin >> s && s != -1) {
        int n = 0, a, i;
        for (i = 0; i < 8; ++i) {
            cin >> a;
            n = 10 * n + a;
        }
        node res = bfs(s, n);
        if (res.path.size() > s || res.num == -1) cout << -1;
        else {
            cout << res.path.size() << ' ';
            for (i = 0; i < res.path.size(); ++i) cout << res.path[i];
        }
        cout << endl;
    }
    return 0;
}
