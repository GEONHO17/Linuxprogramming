#ifndef _MYLIB_H // 전처리문, 중복 방지
#define _MYLIB_H
#include <iostream>    //입출력을 제공하는 헤더파일 포함 
#include <string>      //문자열 헤더 파일 포함 
using namespace std; // 네임스페이스에 정의된 std생략 
class TV{           //클래스 생성 
protected:          //접근 지정자   
    int size;       //크기를 저장하는 변수 
public:             //접근 지정자 
    TV();           //기본 생성자 
    void setSize(int s);    //값을 설정하는 멤버 함수 
    int getSize();          //값을 반환하는 멤버 함수 
};                  //클래스 끝 
class WideTV: public TV{    //TV 클래스를 상속받는 클래스 생성 
protected:                  //접근 지정자 
    bool videoln;           //지원 여부 
public:                     //접근지정자 
    WideTV();               //기본 생성자 
    bool getVideoln();     //값을 반환하는 함수 
    void setVideoln(bool b);    //값을 설정하는 함수 
};                              //클래스 끝 
class SmartTV: public WideTV{   //WideTV를 상속받는 클래스 생성 
    string ipAddr;             // 인터넷주소
public:                         //접근지정자 
    SmartTV();                  //기본생성자
    string getIpAddr();         //반환 함수 
    void setipAddr(string i);   //설정 함수 
    void setSmartTV(int size,bool videoln, string ipAddr);  //전체 설정 
 };                             //클래스 끝 
#endif // MYLIB_H
