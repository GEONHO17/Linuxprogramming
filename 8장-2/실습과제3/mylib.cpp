#include "mylib.hpp"            //헤더 파일 포함 

Shape::Shape(int x,int y){  //멤버 변수 설정함수    
    this -> x = x;              //입력받은 값 x로 설정
    this -> y = y;              //입력받은 값 y로 설정 
    cout <<"Shape생성, ";       //메시지 출력 
}   
void Shape::show(){     //출력 함수 
   cout <<"좌표 (" << x <<","<< y <<")에";  //메시지 출력 
}
Shape::~Shape(){                        //소멸자 정의
    cout <<"Shape 소멸"<<endl;          //메시지 출력 
}
Circle::Circle(int x,int y,int rad):Shape(x,y){ //멤버 변수 설정함수
    this -> rad = rad;                  //입력받은 값 rad로 설정
    cout <<"Circle 생성"<<endl;         //메시지 출력 
}
void Circle::show(){                        //출력 함수
    Shape::show();                          //상속 받은 클래스 함수 호출
    cout <<" 반지름"<<rad<<"인 원"<<endl;    //메시지 출력 
}
Circle::~Circle(){                  //소멸자 정의
    cout <<"Circle 소멸, ";         //메시지 출력 
}
Rect::Rect(int x,int y,int width,int height):Shape(x,y){  //멤버 변수 설정 함수 
    this -> width = width;      //입력받은 값 width로 설정
    this -> height = height;    //입력받은 값 height 로 설정
    cout <<"Rect 생성"<<endl;   //메시지 출력 
}
void Rect::show(){              //출력 함수
    Shape::show();              //상속 받은 클래스 함수 호출
    cout << " 폭" << width << ", 높이" << height << "인 직사각형" << endl;;  //메시지 출력 
}
Rect::~Rect(){                  //소멸자 정의
    cout << "Rect 소멸, ";      //메시지 출력 
}
Triangle:: Triangle(int x,int y,int width,int height):Shape(x,y){  //멤버 변수 설정함수
    this -> width = width;      //입력받은 값 width로 설정
    this -> height = height;    //입력받은 값 height로 설정
    cout <<"Triangle 생성"<<endl;   //메시지 출력 
}
void Triangle::show(){              //출력 함수
    Shape::show();                  //상속 받은 클래스 함수 호출
    cout <<" 밑변"<<width<<", 높이"<<height<<"인 삼각형"<<endl; //메시지 출력
}
Triangle::~Triangle(){          //소멸자 정의
    cout <<"Triangle 소멸, ";   //메시지 출력 
}
