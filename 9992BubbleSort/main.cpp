//
//  main.cpp
//  9992BubbleSort
//
//  Created by 许滨楠 on 2019/7/4.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

void bubbleSort(double list[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            if (list[j+1] < list[j]) {
                double t = list[j];
                list[j] = list[j+1];
                list[j+1] = t;
            }
        }
    }
}

int main() {
    double list[8] = {1.0315, 31.423, 413.1341, 451.41, 13.315132, 1.0001, 9.146, 10413.135};
    bubbleSort(list, 8);
    for (int i = 0; i < 8; ++i) {
        cout << list[i] << endl;
    }
    return 0;
}
