//
//  main.cpp
//  4630CalculateTriArea
//
//  Created by 许滨楠 on 2019/4/26.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <cmath>

double area(double T[3][2]) {
    double a = sqrt((T[0][0]-T[1][0])*(T[0][0]-T[1][0])+(T[0][1]-T[1][1])*(T[0][1]-T[1][1])),
    b = sqrt((T[0][0]-T[2][0])*(T[0][0]-T[2][0])+(T[0][1]-T[2][1])*(T[0][1]-T[2][1])),
    c = sqrt((T[1][0]-T[2][0])*(T[1][0]-T[2][0])+(T[1][1]-T[2][1])*(T[1][1]-T[2][1])),
    p = (a + b + c) / 2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main() {
    double T[3][2] = {{0,0},{2,0},{3,100}};
    std::cout << area(T) << std::endl;
}
