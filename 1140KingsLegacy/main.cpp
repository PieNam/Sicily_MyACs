//
//  main.cpp
//  1140KingsLegacy
//
//  Created by 许滨楠 on 2019/4/10.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

vector<short> edge[30001];
vector<int> res;
bool del[30001];
short sum[30001], minid[30001], parent[30001], n, k, l;

void dfsCount(int head, int father) {
    sum[head] = 1;
    minid[head] = head;
    parent[head] = father;
    for (int i = 0; i < edge[head].size(); ++i) {
        int t = edge[head][i];
        if (t == father || del[t]) continue;
        dfsCount(t, head);
        sum[head] += sum[t];
        minid[head] = min(minid[head], minid[t]);
    }
}

void dfsDel(int head, int todel) {
    del[head] = true;
    for (int i = 0; i < edge[head].size(); ++i) {
        int t = edge[head][i];
        if (del[t] || t == todel) continue;
        dfsDel(t, todel);
    }
    edge[head].clear();
}

int main() {
    int i, a, b;
    cin >> n >> k;
    l = n;
    memset(del, false, sizeof(del));
    memset(sum, 1, sizeof(sum));
    for (i = 1; i < n; ++i) {
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    while (res.size() < k - 1) {
        int mark = 0, taken = 0, minimum = 30001;
        int root = 1;
        while (del[root]) ++root;
        dfsCount(root, 0);
        for (int newRoot = 1; newRoot <= n; ++newRoot) {
            if (newRoot == root || del[newRoot]) continue;
            int p1 = sum[root] - sum[newRoot];
            int p2 = sum[newRoot];
            if (p1 == p2) {
                mark = newRoot;
                taken = p1;
                break;
            }
            if (p1 < p2) {
                if (p1 > taken || (p1 == taken && minid[root] < minimum)) {
                    mark = newRoot;
                    taken = p1;
                    minimum = minid[root];
                }
            }
            else if (p2 > taken || (p2 == taken && minid[newRoot] < minimum)) {
                mark = newRoot;
                taken = p2;
                minimum = minid[newRoot];
            }
        }
        if (sum[mark] >= sum[root] - sum[mark]) dfsDel(root, mark);
        else dfsDel(mark, parent[mark]);
        res.push_back(taken);
        l -= taken;
    }
    res.push_back(l);
    for (i = 0; i < k - 1; ++i) cout << res[i] << " ";
    cout << res[k - 1] << endl;
    return 0;
}
