#ifndef _MYLIB_H
#define _MYLIB_H

class Complex{
    int x, y;
public:
    Complex(int a=0,int b=0);
    void show();
    friend Complex ComplexAdd(Complex a1,Complex a2);
};

#endif

