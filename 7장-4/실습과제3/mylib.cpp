#include "mylib.hpp"    //헤더파일 선언 

Power::Power(int a,int b){    //생성자 정의 
    kick = a; punch = b;                 //입력받은 값으로 초기화 
}                                 //생성자 끝 
void Power::show(){             //출력 함수  
    cout << "Kick=" << kick <<",punch=" << punch <<endl;    //메시지 출력 
}                                 //함수 끝 
Power operator *(int x,Power a){      //연산자 함수 정의 
    Power tmp;                               //객체 생성 
    tmp.kick = a.kick * x;                  //kick 곱하기 
    tmp.punch =a.punch * x;                 //punch 곱하기 
    return tmp;                              //결과 반환 
}                                           //함수 끝  
