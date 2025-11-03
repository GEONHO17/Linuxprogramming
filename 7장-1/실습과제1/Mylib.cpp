#include "Mylib.h"    //헤더파일 선언 
#include <iostream>    //입출력을 제공하는 헤더파일 포함 
using namespace std;   //네임스페이스 이름공간 생략 

Complex::Complex(int a,int b){    //생성자 정의 
    x = a; y = b;                 //입력받은 값으로 초기화 
    cout <<"복소수 "<<x<<"+"<<y<<"j 생성"<<endl;  //메시지 출력 
}                                 //생성자 끝 
void Complex::show(){             //복소수 출력 함수 
    cout << x << "+" <<y <<"j"<<endl;    //메시지 출력 
}                                 //함수 끝 
Complex ComplexAdd(Complex a1,Complex a2){    //두개의 복소수를 더하는 함수 
    int real = a1.x + a2.x;                   //실수부 더하기 
    int img =  a1.y + a2.y;                   //허수부 더하기 
    return Complex(real,img);                 //실수부 허수부 반환 
}                                            //함수 끝 
