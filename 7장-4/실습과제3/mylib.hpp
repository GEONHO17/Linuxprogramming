#ifndef _MYLIB_H // 전처리문, 중복 방지
#define _MYLIB_H
#include <iostream>    //입출력을 제공하는 헤더파일 포함 
using namespace std; // 네임스페이스에 정의된 std생략 

class Power { // 클래스 정의
    int kick;   // 정수를 저장할 변수 
    int punch;   // 정수를 저장할 변수
public: // 접근 지정자
    Power(int a = 0, int b = 0);    //생성자   
    void show();                    //출력 함수 
    friend Power operator *(int x,Power a);      //연산자 함수
};  //클래스 끝 
#endif //_MYLIB_H

