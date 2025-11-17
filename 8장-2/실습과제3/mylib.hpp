#ifndef _MYLIB_H // 전처리문, 중복 방지
#define _MYLIB_H
#include <iostream>    //입출력을 제공하는 헤더파일 포함 
using namespace std; // 네임스페이스에 정의된 std생략 
class Shape{        //클래스 생성
    int x;          //멤버 변수
    int y;          //멤버 변수
public:             //접근 지정자
    void setShape(int x=0,int y=0);  //멤버 변수 설정함수 
    void show();            //출력 함수 
    ~Shape();
};                          //클래스 끝     
class Circle :public Shape{ //클래스 생성
    int rad;                //멤버 변수
public:
    void setCircle(int x,int y, int rad);    //멤버 변수 설정함수
    ~Circle();
    void show();            //출력함수
};                          //클래스 끝
class Rect :public Shape{   //클래스 생성
    int width, height;      //멤버 변수 
public:                     //접근지정사
    void setRect(int x,int y,int width,int height);    //멤버 변수 설정함수
    void show();            //출력 함수 
    ~Rect();
};                          //함수 끝 
class Triangle :public Shape{   //클래스 생성
    int width,height;           //멤버 변수
public:                         //접근 지정자
    void setTriangle(int x,int y,int width, int height);   //멤버변수 설정함수
    void show();                //출력 함수
    ~Triangle();
};                              //클래스 끝 
#endif              //_MYLIB_H
