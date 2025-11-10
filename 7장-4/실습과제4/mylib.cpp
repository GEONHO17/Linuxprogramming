#include "mylib.hpp"        //헤더파일 선언 

Book::Book(string title,int price,int pages){       //생성자 정의 
    this -> title = title; this -> price = price; this ->pages = pages; 
    //입력받은 값으로 초기화 
}                                           //생성자 끝 
void Book::show(){                          //출력 함수 
    cout <<title<<' '<<price<<"원 "<<pages<<" 페이지"<<endl;    //메시지 출력 
}                                           //함수 끝 
string Book::getTitle(){return title;}      //책 제목 반환하는 함수 
Book& Book::operator+=(int p){              //연산자 함수 
    this ->price += p;                      //가격 p만큼 더하기 
    return *this;                           //객체 반환 
}                                           //함수 끝 
Book& Book::operator-=(int p){              //연산자 함수 
    this ->price -= p;                      //가격 p만큼 뺴기 
    return *this;                           //객체 반환 
}                                           //함수 끝
//friend 함수를 이용하여 외부함수로 구현  
// Book& operator+=(Book& a, int p){        //연산자 함수 
//     a.price += p;                        //p만큼 더하기 
//     return a;                            //증가된 값 반환 
// }                                        //함수 끝 
// Book& operator-=(Book& a, int p){        //연산자 함수 
//     a.price -= p;                        //p만큼 감소 
//     return a;                            //감소된 값 반환 
// }                                        //함수 끝 
