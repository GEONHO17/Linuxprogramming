#include "mylib.hpp"    //헤더 파일 선언 
 
int main(){            //메인함수 
    Power a(3,5),b;    //클래스 객체 생성
    a.show();          //객체 a의 값 출력 
    b.show();          //객체 b의 값 출력 
    b = a-2;           //연산자 함수 호출 
    a.show();          //객체 a의 값 출력 
    b.show();          //객체 b의 값 출력 
    return 0;          //0반환후 함수 종료 
}                      //함수 끝 
