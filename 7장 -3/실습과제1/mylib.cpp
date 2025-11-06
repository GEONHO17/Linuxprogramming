#include "mylib.hpp"    //헤더파일 선언 

Complex::Complex(int a,int b){    //생성자 정의 
    x = a; y = b;                 //입력받은 값으로 초기화 
}                                 //생성자 끝 
void Complex::show(){             //복소수 출력 함수 
    cout << x << "+" <<y <<"j"<<endl;    //메시지 출력 
}                                 //함수 끝 
   Complex Complex::operator +(Complex a){      //연산자 함수 정의 
    Complex tmp;                               //객체 생성 
    tmp.x = this->x + a.x;                   //실수부 더하기 
    tmp.y = this->y + a.y;                   //허수부 더하기 
    return tmp;                              //실수부 허수부 반환 
}  
