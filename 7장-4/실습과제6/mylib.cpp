#include "mylib.hpp"        //헤더파일 선언 

Book::Book(string title,int price,int pages){       //생성자 정의 
    this -> title = title; this -> price = price; this ->pages = pages; 
    //입력받은 값으로 초기화 
}                                           //생성자 끝 
void Book::show(){                          //출력 함수 
    cout <<title<<' '<<price<<"원 "<<pages<<" 페이지"<<endl;    //메시지 출력 
}                                           //함수 끝 
string Book::getTitle(){return title;}      //책 제목 반환하는 함수 
bool Book::operator!(){                     //논리 부정 연산자 
    return price ==0;                       //값이 0이면 true
}
