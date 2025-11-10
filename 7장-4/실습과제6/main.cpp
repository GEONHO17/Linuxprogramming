#include "mylib.hpp"        //헤더파일 선언 

int main(){                 //메인함수 
    Book book("벼룩 시장",0,50);      //클래스 객체 생
    if(!book)cout << "공짜다"<<endl;  //가격이 0이면 메시지 출력 
}                           //함수 끝 
