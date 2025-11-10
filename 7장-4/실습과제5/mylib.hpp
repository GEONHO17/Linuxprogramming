#ifndef _MYLIB_H // 전처리문, 중복 방지
#define _MYLIB_H
#include <iostream>    //입출력을 제공하는 헤더파일 포함 
using namespace std; // 네임스페이스에 정의된 std생략 
class Book{         //클래스 정의
    string title;      //멤버변수 선언 
    int price, pages;   //멤버변수 선언 
public:                 //접근 지정자 
    Book(string title="",int price =0,int pages =0);    //생성자
    void show();        //정보를 출력하는 함수 
    string getTitle();  //책 제목을 반환하는 함수 
    // 멤버 함수 구현 
    bool operator==(int p);     //가격 비교 
    bool operator==(const string& title);   //제목 비교 
    bool operator==(Book& a);    //두 책이 같은지 비교 
    //friend 함수를 이용하여 외부함수로 구현
    // friend bool operator==(int p, Book& a);  //가격 비교 
    // friend bool operator==(string& title, Book& a);  //제목 비교 
    // friend bool operator==(Book& a, Book& b);        //두 책이 같은지 비교 
};                              //클래스 끝 
#endif //_MYLIB_H
