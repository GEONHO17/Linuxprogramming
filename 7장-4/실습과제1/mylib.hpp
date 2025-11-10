#ifndef _MYLIB_H // 전처리문, 중복 방지
#define _MYLIB_H
#include <iostream>    //입출력을 제공하는 헤더파일 포함 
using namespace std; // 네임스페이스에 정의된 std생략 

class Complex { // 클래스 정의
    int real;  // 실수부
    int img;   // 허수부
public: // 접근 지정자
    Complex(int a = 0, int b = 0);     //생성자   
    void show();                        //복소수 출력 함수 
    Complex& operator++ ();        //전위 ++연산자 함수 선언 
    Complex operator--(int x);     //후위 --연산자 함수 선언 
};  //클래스 끝 
#endif //_MYLIB_H
