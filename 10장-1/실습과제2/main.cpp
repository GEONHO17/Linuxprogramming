#include <iostream>    //입출력을 제공하는 헤더파일 포함 
#include <string>      //문자열 헤더 파일 포함 
using namespace std; // 네임스페이스에 정의된 std생략 

class Circle{   //클래스 생성 
    int rad;    //반지름 저장 변수
public:
    Circle(int rad =1){this->rad = rad;} //생성자 함수 
    int getRadius(){return rad;} //반지름 반환함수
    bool operator > (Circle a){//연산자 비교 함수
        return this -> rad > a.rad;  //연산자 비교하여 반환 
    }
    
};
template<class T>   //탬플릿 선언 
T bigger(T a,T b){  //함수 정의 
    if(a>b)return a;    //a가 크다면 a반환 
    else return b;      //아니면 b 반환 
}
int main(){     //메인함수 
    int a=20,b=50,c; //변수 선언 
    c = bigger(a,b);    //a,b값 비교
    cout <<"20과 50중 큰 값은"<<c<<endl;    //메시지 출력 
    Circle donut(10),pizza(20),y;   //객체 생성
    y = bigger(donut,pizza); //값 비교
    cout <<"donut과 pizza중 큰 반지름은"<<y.getRadius()<<endl;//메시지 출력 
    return 0;   //0을 반환하고 함수 종료    
}               //함수 끝 
