#include "mylib.hpp"            //헤더 파일 포함 

void Circle::setCircle(int x,int y,int rad){ //멤버 변수 설정함수
    this -> rad = rad;                  //입력받은 값 rad로 설정
    this -> x = x;                      //protected 선언으로 상속받은 클래스가 접근 가능
    this -> y = y;                      //protected 선언으로 상속받은 클래스가 접근 가능  
}
void Circle::show(){                        //출력 함수
    cout <<"좌표 (" << x <<","<< y <<")에 반지름"<<rad<<"인 원"<<endl;    //메시지 출력 
}
void Rect::setRect(int x,int y,int width,int height){  //멤버 변수 설정 함수 
    this -> x = x;                      //protected 선언으로 상속받은 클래스가 접근 가능
    this -> y = y;                      //protected 선언으로 상속받은 클래스가 접근 가능 
    this -> width = width;      //입력받은 값 width로 설정
    this -> height = height;    //입력받은 값 height 로 설정
}
void Rect::show(){              //출력 함수
    cout <<"좌표 (" << x <<","<< y <<")에 폭" << width << ", 높이" << height << "인 직사각형" << endl;;  //메시지 출력 
}
void Triangle:: setTriangle(int x,int y,int width,int height){  //멤버 변수 설정함수
    this -> x = x;                      //protected 선언으로 상속받은 클래스가 접근 가능
    this -> y = y;                      //protected 선언으로 상속받은 클래스가 접근 가능 
    this -> width = width;      //입력받은 값 width로 설정
    this -> height = height;    //입력받은 값 height로 설정
}
void Triangle::show(){              //출력 함수
    cout <<"좌표 (" << x <<","<< y <<")에 밑변"<<width<<", 높이"<<height<<"인 삼각형"<<endl; //메시지 출력
}
