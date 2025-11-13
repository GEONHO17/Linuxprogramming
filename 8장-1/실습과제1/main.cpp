#include "mylib.hpp"        //헤더파일 포함

int main() {                //메인함수 
    Circle x; Rect y; Triangle z;   //클래스 객체 생성
    x.setCircle(0, 0, 2);           //좌표(0,0), 반지름 2인 원 설정
    y.setRect(1, 1, 5,10);          //좌표(1,1), 폭 5, 높이 10인 사각형 설정
    z.setTriangle(2, 2, 3, 4);      //좌표(2,2), 밑변 3, 높이 4인 삼각형 설정
    x.show(); y.show(); z.show();   //정보 출력 
}                                   //함수 끝
