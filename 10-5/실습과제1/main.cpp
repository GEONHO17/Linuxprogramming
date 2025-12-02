#include <iostream>  //표준 입출력을 제공하는 헤더파일 포함 
using namespace std;	//네임스페이스 이름공간에 std 생략 
int main() {			//메인함수 
    int a[2][2] = { {2, 4}, {5, -5} };  //배열 초기화 
    int b[2][2] = { {-2, 3}, {0, -5} }; //배열 초기화 
    int c[2][2];  //결과값을 저장할 배열 

    for (int i = 0; i < 2; i++) {       //2회반복문 
        for (int j = 0; j < 2; j++) {   //2회반복문 
            c[i][j] = a[i][j] + b[i][j];    //행렬 계산 
        }
    }
    cout << "연산결과:\n";      //메시지 출력 
    for (int i = 0; i < 2; i++) {       //2회반복문 
        for (int j = 0; j < 2; j++) {   //2회 반복문 
            cout << c[i][j] << " ";     //행렬값 출력 
        }
        cout << endl;           //줄바꿈 
    }
    return 0;                   //0을 반환하고 함수종료 
}
