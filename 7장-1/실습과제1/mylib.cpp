#include "Mylib.h"
#include <iostream>
using namespace std;

Complex::Complex(int a,int b){
    x = a; y = b;
    cout <<"복소수 "<<x<<"+"<<y<<"j 생성"<<endl;
}
void Complex::show(){
    cout << x << "+" <<y <<"j"<<endl;
}
Complex ComplexAdd(Complex a1,Complex a2){
    int real = a1.x + a2.x; 
    int img =  a1.y + a2.y;
    return Complex(real,img);
}
