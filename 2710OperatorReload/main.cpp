//
//  main.cpp
//  2710OperatorReload
//
//  Created by 许滨楠 on 2019/4/20.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>

using namespace std;

class numCal {
public:
    numCal(int [], int); // 构造函数，形参分别是整形数组、数组长度
    numCal(const numCal&); // 拷贝构造函数
    ~numCal(); // 析构函数，要完成释放内存的操作
    int sum(); // 求动态数组arr中size个元素值和
    numCal& operator=(const numCal&); // =运算符重载
    numCal& operator++(); // 前序++运算符重载，使得++A后，A.arr的每个元素值加1
    numCal operator++(int); // 后序++运算符重载，使得A++后，A.arr的每个元素值加1。
    //……
private:
    int size; // 数组arr元素个数
    int *arr; // 动态数组
};

numCal::numCal(int a[], int size) {
    arr = new int [size];
    this->size = size;
    for (int i = 0; i < size; ++i) arr[i] = a[i];
}

numCal::numCal(const numCal& num) {
    this->size = num.size;
    arr = new int [size];
    for (int i = 0; i < size; ++i) arr[i] = num.arr[i];
}

numCal::~numCal() {
    if (arr != NULL) delete arr;
    arr = NULL;
    size = 0;
}

int numCal::sum() {
    int sum = 0, i;
    for (i = 0; i < size; ++i) sum += arr[i];
    return sum;
}

numCal & numCal::operator=(const numCal & num) {
    if (arr != NULL) {
        delete arr;
        arr = NULL;
        size = 0;
    }
    this->size = num.size;
    arr = new int [size];
    for (int i = 0; i < size; ++i) arr[i] = num.arr[i];
    return *this;
}

numCal & numCal::operator++() {
    for (int i = 0; i < size; ++i) arr[i]++;
    return *this;
}

numCal numCal::operator++(int element) {
    numCal t(arr, size);
    for (int i = 0; i < size; ++i) arr[i]++;
    return t;
}
