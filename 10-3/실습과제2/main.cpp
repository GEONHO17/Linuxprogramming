#include <vector>       //vector를 사용하기위한 헤더파일 포함 
#include <iostream>		//입출력을 제공하는 헤더파일 포함 
using namespace std;	//네임 스페이스 이름공간에 std 생략 

int main() {            //메인함수 
    vector<int> num(4);  //크기 4의 백터 생성 
    cout << "정수 4개를 입력하시오: ";   //메시지 출력 
    for (int i = 0; i < 4; i++) {
        cin >> num[i];  // 입력받은 숫자 배열에 저장 
    }
    int max = num[0];  //배열의 첫번째 값으로 초기화
    int min = num[0];  //배열의 첫번째 값으로 초기화

   
    for (int i = 1; i < 4; i++) {
        if (num[i] > max) {  //max보다 크다면 
            max = num[i];    // 최대값 저장 
        }
        if (num[i] < min) {  //min보다 작으면 
            min = num[i];    // 최소값 저장 
        }
    }
    cout << "최대값은 " << max << ", 최소값은 " << min << "입니다" << endl; //메시지 출력  
    return 0;  //0을 반환하고 함수 종료 
}
