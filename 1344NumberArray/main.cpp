//
//  main.cpp
//  1344NumberArray
//
//  Created by 许滨楠 on 2019/5/3.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int k, n;
    while (cin >> k >> n) {
        int res = 0, cnt = 0;
        while (n) {
            if (n % 2) {
                res += pow(k, cnt);
            }
            ++cnt;
            n /= 2;
        }
        cout << res << endl;
    }
    return 0;
}

/* naughty shorten
#include <iostream>
#include <cmath>
using namespace std;int main(){int k,n;while(cin>>k>>n){int res=0,cnt=0;while(n){if(n%2){res+=pow(k,cnt);}++cnt;n/=2;}cout<<res<<endl;}return 0;}
 */
