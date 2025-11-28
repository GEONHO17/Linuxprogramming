#include <algorithm>		//알고리즘을 사용하기위한 헤더파일 포함 
#include <vector>       //vector를 사용하기위한 헤더파일 포함 
#include <iostream>		//입출력을 제공하는 헤더파일 포함 
using namespace std;	//네임 스페이스 이름공간에 std 생략

int main() {			//메인함수 
	vector<int> v;		//객체 생성 
	vector <int>::iterator it;		//벡터 요소를 가리키는 변수 선언 
	cout << "정수 4개를 입력하시오: ";	//메시지 출력 
	for (int i = 0; i < 4; i++) {		//정수 4개를 구하는 반복문 
		int n;						//변수 선언 
		cin >> n;					//입력한 정수 저장 
		v.push_back(n);				//입력한 정수 배열에 삽입 
	}								//반복문 끝 
	it = max_element(v.begin(), v.end());		//최대값을 가리키는 iterator 반환 
	cout << "최대값은 " << distance(v.begin(), it + 1) << "번째 값 " << *it << endl;	//메시지 출력 

	it = min_element(v.begin(), v.end());		//최소값을 가리키는 iterator 반환 
	cout << "최소값은 " << distance(v.begin(), it + 1) << "번째 값 " << *it << endl;	//메시지 출력 
	
	sort(v.begin(), v.end());					//오름차순 정렬 
	cout << "오름차순 결과는 ";					//메시지 출력 
	for (it = v.begin(); it != v.end(); it++)   //반복문 
		cout << *it << " ";						//오름차순으로 출력 
	cout << endl;								//줄바꿈 
	sort(v.begin(), v.end(), greater<int>());   // 내림차순 정렬 

	cout << "내림차순 결과는 ";					//메시지 출력 
	for (it = v.begin(); it != v.end(); it++)   // 반복문 
		cout << *it << " ";						//내림차순으로 출력  
	cout << endl;								//줄바꿈 

	return 0;									//0을 반환하고 함수 종료 
}												//함수 끝 
