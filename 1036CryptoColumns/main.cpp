//
//  main.cpp
//  1036CryptoColumns
//
//  Created by 许滨楠 on 2019/3/6.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string key, code;
    int i, j, columns, length, row;
    cin >> key;
    while (key != "THEEND") {
        cin >> code;
        columns = (int)key.length();
        length = (int)code.length();
        int * mark = new int [columns];
        int * order = new int [columns];
        for (i = 0; i < columns; ++i) *(mark + i) = 1;
        for (i = 0; i < columns; ++i) {
            char min = 'a';
            int minIndex = -1;
            for (j = 0; j < columns; ++j) {
                if (key[j] < min && *(mark+j)) {
                    minIndex = j;
                    min = key[j];
                }
            }
            *(mark + minIndex) = 0;
            *(order + minIndex) = i;
        }
        row = (length + columns - 1) / columns;
        for (i = 0; i < row; ++i) {
            for (j = 0; j < columns; ++j) {
                cout << code[row * (*(order+j)) + i];
            }
        }
        cout << endl;
        delete [] mark;
        cin >> key;
    }
    return 0;
}
