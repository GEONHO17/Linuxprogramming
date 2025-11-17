#include "mylib.hpp"        //헤더파일 포함 
Circle::Circle(int rad){    //기본 생성자 
    this -> rad = rad;  //입력받은 값으로 초기화
}                           //생성자 끝 
int Circle::getRad(){       //반환 함수 
    return rad;             //반지름 반환 
}                           //함수 끝 
void Circle::setRad(int rad){  //반지름 설정 함수 
    this -> rad = rad;      //반지름 설정 
}                           //함수 끝 
double Circle::getArea(){   //원 면적 구하는 함수 
    return 3.14*rad*rad;
}                           //함수 끝 
NamedCircle:: NamedCircle(int rad,string name):Circle(rad){ //부모 클래스 호출 
    this -> name = name;      //이름 저장 
}                           //생성자 끝 
string  NamedCircle::getName(){//이름 반환 함수 
    return name;        //이름 반환 
}                       //함수 끝 
void NamedCircle::show(){   //출력 함수 
    cout <<"반지름이 "<< rad <<"인 "<<name<<endl; //메시지 출력 
}                       //함수 끝 
