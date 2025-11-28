#include <algorithm>		//알고리즘을 사용하기위한 헤더파일 포함 
#include <vector>       //vector를 사용하기위한 헤더파일 포함 
#include <iostream>		//입출력을 제공하는 헤더파일 포함 
using namespace std;	//네임 스페이스 이름공간에 std 생략

int main() {			//메인함수 
	vector<string> v;		//객체 생성 
	for (int i = 0; i < 5; i++) {	//반복문 
		string ch;				//문자열을 저장할 변수 
		cout << "문자열을 입력하세요: ";		//메시지 출력 
		cin >> ch;		//입력받은 문자열 저장 
		v.push_back(ch);	//문자열을 벡터 배열에 저장 
	}
	vector<string>::iterator it;	//iteratro 객체 생성 
	sort(v.begin(), v.end());		//오름차순으로 정렬 
	cout << "사전에서 나오는 순서 "<<endl;		//메시지 출력 
	for (it = v.begin(); it != v.end(); it++)	//반복문 
		cout << *it << endl;		//오름차순으로 출력 
	return 0;						//0을 반환하고 함수 종료 
}
