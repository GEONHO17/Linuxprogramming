#include "mylib.hpp"    //헤더파일 선언 

Power::Power(int a,int b){    //생성자 정의 
    kick = a; punch = b;                 //입력받은 값으로 초기화 
}                                 //생성자 끝 
void Power::show(){             //출력 함수  
    cout << "Kick=" << kick <<",punch=" << punch <<endl;    //메시지 출력 
}                                 //함수 끝 
   Power Power::operator -(int op2){      //연산자 함수 정의 
    Power tmp;                               //객체 생성 
    tmp.kick = this -> kick - op2;          //정수 뺄셈 
    tmp.punch = this -> punch -op2;         //정수 뺄셈 
    return tmp;                              //실수부 허수부 반환
}                                           //함수 끝  
