#include "mylib.hpp"    //헤더파일 선언 

Complex::Complex(int a,int b){    //생성자 정의 
    real = a; img = b;                 //입력받은 값으로 초기화 
    cout << "복소수 "<<real<<"+"<<img<<"j생성"<<endl;   //메시지 출력 
}                                 //생성자 끝 
void Complex::show(){             //복소수 출력 함수 
    cout << real << "+" <<img <<"j"<<endl;    //메시지 출력  
}                                 //함수 끝 
Complex& operator++ (Complex& a){    //전위 ++연산자 함수 정의 
    a.real ++;                          //1증가
    a.img ++;                           //1증가
    return a;                           //증가된 값 반환 
}                                       //함수 끝 
Complex operator--(Complex& a,int x){ //후위 --연산자 함수 정의 
    Complex tmp = a;                    //변경 전 객체 저장 
    a.real--;                           //1감소 
    a.img--;                            //1감소 
    return tmp;                         //변경 전 값 반환 
}                                       //함수 끝 
