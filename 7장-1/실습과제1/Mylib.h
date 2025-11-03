#ifndef _MYLIB_H     //중복 방지 
#define _MYLIB_H

class Complex{        //클래스 정의
    int x, y;         //실수부 허수부를 저장할 변수선언 
public:               //접근 지정자 
    Complex(int a=0,int b=0);    //생성자
    void show();       //복소수 출력 함수 
    friend Complex ComplexAdd(Complex a1,Complex a2);    //복소수를 더하는 함수
};                     //클래스 끝 

#endif                //_MYLIB_H 

