//
//  main.cpp
//  1046PlaneSpotting
//
//  Created by 许滨楠 on 2019/3/21.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct interval {
    int l;
    int r;
    double ave;

    interval(int _l, int _r, double _ave): l(_l), r(_r), ave(_ave) {};
};

bool cmp(interval a, interval b) {
    if (a.ave > b.ave) return true;
    if (a.ave == b.ave) {
        if (a.r - a.l > b.r - b.l) return true;
        if (a.r - a.l == b.r - b.l && a.r < b.r) return true;
    }
    return false;
}

int main() {
    int t, count = 1, i, j, k, n, num, min;
    cin >> t;
    for (; count <= t; ++count) {
        cin >> n >> num >> min;
        int arr[n];
        for (i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        vector<interval> v;
        for (i = n; i >= min; --i) {
            for (j = 0; j < n; ++j) {
                if (i + j > n) break;
                int sum = 0;
                for (k = 0; k < i; ++k) {
                    sum += arr[j + k];
                }
                interval temp(j + 1, j + i, (double)sum/i);
                v.push_back(temp);
            }
        }
        sort(v.begin(), v.end(), cmp);
        cout << "Result for run " << count << ":" << endl;
        auto it = v.begin();
        for (i = 0; i < num; ++i) {
            if (it == v.end()) break;
            cout << it->l << "-" << it->r << endl;
            ++it;
        }
    }
    return 0;
}

// ref
//#include<iostream>
//#include<queue>//使用优先级队列
//#include<vector>
//using namespace std;
//
//struct Node//某段时间
//{
//    int start;
//    int end;
//    double avr;//该段时间内平均每个quarter的飞机
//};
//
//struct cmp
//{
//    bool operator()(const Node &n1, const Node &n2)
//    {
//        /* A period P1 is better than another period P2 if:
//         **the number of planes per quarter in P1 is higher than in P2;
//         **the numbers are equal but P1 is a longer period (more quarters);
//         ** the numbers are equal and they are equally long, but period P1 ends earlier.
//         */
//        if(n1.avr != n2.avr)
//            return n1.avr < n2.avr;//相当于less，大顶堆;   平均飞机数更多
//        else if((n1.end - n1.start) != (n2.end - n2.start))
//            return (n1.end - n1.start) < (n2.end - n2.start); //相当于greater,小顶堆;  平均飞机数一样，长度更长
//        else
//            return n1.end > n2.end;//平均飞机数一样，长度一样，更早的结束
//    }
//};
//int main()
//{
//    int runNum;
//    cin >> runNum;
//    for(int i = 1; i <= runNum; i++)
//    {
//        int quarters;
//        cin >> quarters;
//        int output;//输出的period数
//        cin >> output;
//        int min;//要求的最小quarter数
//        cin >> min;
//
//        int *arr = new int[quarters];
//        for(int j = 0; j < quarters; j++)
//        {
//            cin >> arr[j];//每个quarter内的飞机数
//        }
//        vector<Node> v;
//        //遍历计算
//        for(int m = quarters; m >= min; m--)//因为同等程度下，长的优先
//        {
//            for(int j = 0; j < quarters; j++)
//            {
//                /*
//                 **譬如：quarters = 3， 数组的下标是0，1，2； min = 3
//                 */
//                if(j + m > quarters)//越界
//                    break;
//                int sum = 0;
//                for(int k = 0; k < m; k++)
//                {
//                    sum = sum + arr[j + k];
//                }
//                Node temp;
//                temp.start = j + 1;
//                temp.end = j + m;
//                temp.avr = (double)sum / m;//平均每个period内的飞机数
//                v.push_back(temp);
//            }
//        }
//        priority_queue<Node, vector<Node>, cmp> Q(v.begin(), v.end());
//        cout << "Result for run " << i << ":" << endl;
//        for(int j = 0; j < output; j++)
//        {
//            if(Q.empty())
//                break;
//            else
//            {
//                Node temp = Q.top();
//                Q.pop();
//                cout << temp.start << "-" << temp.end << endl;
//            }
//        }
//    }
//    return 0;
//}
