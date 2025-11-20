#include <iostream>    //입출력을 제공하는 헤더파일 포함 
#include <string>      //문자열 헤더 파일 포함 
using namespace std; // 네임스페이스에 정의된 std생략 

template <class T>  //매개변수 T선언 
T getmax(T a[], int b) {    //함수 정의 
    T max = a[0]; // 첫 번째 요소를 최댓값으로 가정
    for (int i = 1; i < b; i++) {   //반복문 
        if (a[i] > max) {   //최대값을 구하는 함수 
            max = a[i];     //가장 큰 값을 max에 저장
        }                   
    }
    return max;             //최대값 반환 
}
int main() { // 메인 함수
	int a[5] = { -5, 10, 30, 20, 6 }; //배열 선언 
	double b[4] = { 3.14, 1.5, -6.0, 0.5 }; //배열 선언     
	char c[3] = { 'a', 'x', 'p' };      //배열 선언 

	cout << "정수 배열의 최대값은 " << getmax<int>(a, 5) << endl; //메시지 출력 
	cout << "실수 배열의 최대값은 " << getmax<double>(b, 4) << endl; //메시지 출력 
	cout << "문자 배열의 최대값은 " << getmax<char>(c, 3) << endl; //메시지 출력 

	return 0; // 0을 반환 후 함수 종료 
}
