#include "mylib.hpp"    //헤더파일 포함 
int main(){             //메인함수 
    NamedCircle pizza[5]; //객체 배열 생성 
    cout <<"5개의 정수 반지름과 원의 이름을 입력하세요"<<endl; //메시지 호출 
    for(int i=0;i<5;i++){       //5번 반복 
        int r;                  //반지름을 저장할 변수
        string name;            //이름을 저장할 변수 
        cout <<i+1 <<">> ";     //메시지 출력 
        cin >> r >> name;       //값 저장 
        pizza[i] = NamedCircle(r,name);     //생성자 호출 
    }                           //for 문 끝 
    int max = 0;                //최대값을 저장할 변수 
    for (int i =1;i<5;i++){       //반복문 
        if(pizza[i].getArea()>pizza[max].getArea()){    //최대값 구하기 
            max = i;           //큰값 저장 
        }                       //if문 끝 
    }                           //반복문 끝 
    cout <<"가장 면적이 큰 피자는 " //메시지 출력 
         <<pizza[max].getName()
         <<"입니다"<<endl;
    return 0;       //0을 반환하고 함수 종료
}                   //함수 끝 
