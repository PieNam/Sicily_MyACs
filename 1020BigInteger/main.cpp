//
//  main.cpp
//  1020BigInteger
//
//  Created by 许滨楠 on 2019/3/6.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string.h>

using namespace std;

int mod(char *itg, int basis) {
    int length = (int)strlen(itg);
    int res = 0;
    for (int i = 0; i < length; ++i) {
        res = (res * 10 + itg[i] - '0') % basis;
    }
    return res;
}

int main() {
    int numberOfCase, i;
    cin >> numberOfCase;
    while (numberOfCase--) {
        int numberOfBasis;
        int basis[100];
        char itg[400];
        cin >> numberOfBasis;
        for (i = 0; i < numberOfBasis; ++i) {
            cin >> basis[i];
        }
        cin >> itg;
        cout << "(";
        for (i = 0; i < numberOfBasis-1; ++i) {
            cout << mod(itg, basis[i]) << ",";
        }
        cout << mod(itg, basis[i]) << ")" << endl;
    }
    return 0;
}
