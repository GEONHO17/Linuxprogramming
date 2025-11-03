#include "mylib.hpp"    //헤더 파일 선언 
using namespace std;  //네임스페이스 이름 생략 
int main(){            //메인함수 
    Complex x(2,3),y(5,-10),sum;    //클래스 객체 생성
    ComplexManager man; //객체 생성  
    sum = man.ComplexAdd(x,y);        //클래스 객체에 대입 
    cout <<"두 복소수의 합은";    //메시지 출력  
    sum.show();            //출력 
    return 0;              //0반환후 함수 종료 
}                          //함수 끝 
