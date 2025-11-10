#include "mylib.hpp"    //헤더파일 선언 
int main() {            //메인함수 
    Power a(3, 5), b;    //클래스 객체 생성 
    a.show();           //객체 출력         
    b.show();           //객체 출력 
    b =2 * a; // 파워객체와정수곱하기     
    a.show();           //객체 출력 
    b.show();           //객체 출력 
 }                      //함수 끝 
