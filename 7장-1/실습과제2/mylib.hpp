#ifndef _MYLIB_H // 전처리문, 중복 방지
#define _MYLIB_H
#include <iostream>    //입출력을 제공하는 헤더파일 포함 
class Complex;   //클래스 선언
class ComplexManager {  //클래스 정의 
public:                 //접근 지정자 
    Complex ComplexAdd(Complex a1, Complex a2); //두개의 복소수를 더하는 함수
};              //클래스 끝 
class Complex { // 클래스 정의
    int x;  // 실수부
    int y;   // 허수부
public: // 접근 지정자
    Complex(int a = 0, int b = 0);     //생성자   
    void show();                        //복소수 출력 함수 
    //friend 선언으로 private 멤버접근 가능 
    friend Complex ComplexManager::ComplexAdd(Complex c1, Complex c2);
};  //클래스 끝 
#endif //_MYLIB_H
