#include "mylib.hpp"    //헤더 파일 선언 
 
int main(){            //메인함수 
    Complex x(2,3),y(-5,10),sum;    //클래스 객체 생성
    sum = x + y;                //연산자 함수 호출 
    cout <<"두 복소수의 합은";    //메시지 출력  
    sum.show();            //출력 
    return 0;              //0반환후 함수 종료 
}                          //함수 끝 
