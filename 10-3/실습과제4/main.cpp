#include <vector>       //vector를 사용하기위한 헤더파일 포함 
#include <iostream>		//입출력을 제공하는 헤더파일 포함 
using namespace std;	//네임 스페이스 이름공간에 std 생략

int main() {            //메인함수 
    vector<int> v;      //객체 생성 
    int num;            //변수 선언 
    cout << "숫자를 입력하세요: ";  //메시지 출력 
    for (int i = 0; i < 5; i++) {   
        cin >> num;                 //변수에 저장 
        v.push_back(num);           //벡터에 추가
    }
    cout << "초기 벡터 원소 : "; // 메시지 출력 
    for (size_t i = 0; i < v.size(); i++) { //초기 원소 출력 
        cout << v[i] << " "; //메시지 출력 
    } 
    cout << endl; //줄바꿈

    for (size_t i = 0; i < v.size(); i++) { //음수 삭제 
        if (v[i] < 0) v.erase(v.begin() + i); //음수 삭제 
    }

    cout << "음수를 삭제 후 벡터원소 : "; //메시지 출력 
    for (size_t i = 0; i < v.size(); i++) { //벡터원소 출력 
        cout << v[i] << ' '; //메시지 출력 
    }
    cout << endl; //줄바꿈
    int sum = 0; //변수선언 
    for (size_t i = 0; i < v.size(); i++) { 
        sum += v[i]; //벡터 원소 합  
    }
    cout << "평균값 :" << (double)sum / v.size() << endl; //메시지 출력 
    return 0; //0을 반환 하고 함수 종료
}   // 함수 끝 
