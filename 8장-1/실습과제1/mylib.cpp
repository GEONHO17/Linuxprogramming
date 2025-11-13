#include "mylib.hpp"            //헤더 파일 포함 

void Shape::setShape(int x,int y){  //멤버 변수 설정함수
    this -> x = x;              //입력받은 값 x로 설정
    this -> y = y;              //입력받은 값 y로 설정 
}   
void Shape::show(){     //출력 함수 
   cout <<"좌표 (" << x <<","<< y <<")에";  //메시지 출력 
}
void Circle::setCircle(int x,int y,int rad){ //멤버 변수 설정함수
    this -> rad = rad;                  //입력받은 값 rad로 설정
    setShape(x,y);                          //상속 받은 클래스 멤버 변수 호출
}
void Circle::show(){                        //출력 함수
    Shape::show();                          //상속 받은 클래스 함수 호출
    cout <<" 반지름"<<rad<<"인 원"<<endl;    //메시지 출력 
}
void Rect::setRect(int x,int y,int width,int height){  //멤버 변수 설정 함수 
    setShape(x,y);                  //상속 받은 클래스 멤버 변수 호출
    this -> width = width;      //입력받은 값 width로 설정
    this -> height = height;    //입력받은 값 height 로 설정
}
void Rect::show(){              //출력 함수
    Shape::show();              //상속 받은 클래스 함수 호출
    cout << " 폭" << width << ", 높이" << height << "인 직사각형" << endl;;  //메시지 출력 
}
void Triangle:: setTriangle(int x,int y,int width,int height){  //멤버 변수 설정함수
    setShape(x,y);                  //상속 받은 클래스 멤버 변수 호출
    this -> width = width;      //입력받은 값 width로 설정
    this -> height = height;    //입력받은 값 height로 설정
}
void Triangle::show(){              //출력 함수
    Shape::show();                  //상속 받은 클래스 함수 호출
    cout <<" 밑변"<<width<<", 높이"<<height<<"인 삼각형"<<endl; //메시지 출력
}
