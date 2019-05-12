//
//  main.cpp
//  2711TemplateAndSTL
//
//  Created by 许滨楠 on 2019/5/12.
//  Copyright © 2019 许滨楠. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Complex {
private:
    int a, b;
    
public:
    Complex(int ia = 0, int ib = 0) {
        a = ia;
        b = ib;
    }
    void seta(int sa) { a = sa; }
    void setb(int sb) { b = sb; }
    int geta() const { return a; }
    int getb() const { return b; }
    friend ostream & operator<<(ostream & out, Complex & o) {
        out << '(' << o.a << ',' << o.b << ')' << endl;
        return out;
    }
};

class ComplexAdd {
private:
    int a, b;
    
public:
    ComplexAdd() {}
    ComplexAdd(int ia, int ib) {
        a = ia;
        b = ib;
    }
    void operator()(Complex & o) {
        o.seta(o.geta() + a);
        o.setb(o.getb() + b);
    }
};

int main() {
    Complex A[] = { Complex(1, 2), Complex(3, 4), Complex(5, 6), Complex(7, 8), Complex(9, 10) };
    vector<Complex> aa(A, A + 5);
    
    for_each(aa.begin(), aa.end(), ComplexAdd(2,3));
    for_each(A, A+5, ComplexAdd(5,6));
    
    
    vector<Complex>::iterator p;
    for ( p = aa.begin(); p != aa.end(); p++)
        cout << *p;
    cout << endl;
    
    int i;
    for (i = 0; i < 5; i++)
        cout << A[i];
    
    return 0;
}
