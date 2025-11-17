#ifndef _MYLIB_H // 전처리문, 중복 방지
#define _MYLIB_H
#include <iostream>    //입출력을 제공하는 헤더파일 포함 
#include <string>      //문자열 헤더 파일 포함 
using namespace std; // 네임스페이스에 정의된 std생략 
class Circle { // Circle 클래스 정의    
protected:       //접근 지정자
    int rad;    // 반지름을 저장할 변수 
public:         //접근 지정자 
    Circle(int rad = 0);     //기본 생성자 
    int getRad();        //반지름 값을 반환하는 함수 
    void setRad(int rad); //반지름 값을 설정하는 함수 
    double getArea();       //원의 면적을 구하는 함수 
};                          //클래스 끝 
class NamedCircle : public Circle{ //circle 클래스를 상속받는 클래스 생성 
    string name;          //이름을 입력받을 변수
public:
    NamedCircle(int rad=0,string name =""); //기본 생성자
    string getName();    //반환 함수 
    void show();         //출력 함수 
};                      //클래스 끝 
#endif // MYLIB_H
