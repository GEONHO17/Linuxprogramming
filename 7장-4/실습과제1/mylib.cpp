#include "mylib.hpp"    //헤더파일 선언 

Complex::Complex(int a,int b){    //생성자 정의 
    real = a; img = b;                 //입력받은 값으로 초기화 
    cout << "복소수 "<<real<<"+"<<img<<"j생성"<<endl;
}                                 //생성자 끝 
void Complex::show(){             //복소수 출력 함수 
    cout << real << "+" <<img <<"j"<<endl;    //메시지 출력 
}                                 //함수 끝 
Complex& Complex::operator++ (){    //전위 ++연산자 함수 정의 
    real ++;                        //1증가
    img ++;                         //1증가
    return *this;                   //변경된 객체 자신의 참조 리턴 
}                                   //함수 끝 
Complex Complex::operator--(int x){ //후위 --연산자 함수 정의 
    Complex tmp = *this;            //증가 이전 객체 상태 저장 
    real--;                         //-1감소     
    img--;                          //-1감소 
    return tmp;                     //증가 이전의 객체 리턴 
}                                   //함수 끝 
